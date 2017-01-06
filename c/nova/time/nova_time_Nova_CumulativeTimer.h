#ifndef FILE_nova_time_Nova_CumulativeTimer_NOVA
#define FILE_nova_time_Nova_CumulativeTimer_NOVA

typedef struct nova_time_Nova_CumulativeTimer nova_time_Nova_CumulativeTimer;
typedef struct nova_time_Nova_CumulativeTimerFunctionMap nova_time_Nova_CumulativeTimerFunctionMap;


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
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_time_Nova_CumulativeTimer, 
	
	nova_time_CumulativeTimer_Extension_VTable* vtable;
	long_long nova_time_Nova_Timer_Nova_startTime;
	long_long nova_time_Nova_Timer_Nova_endTime;
	long_long nova_time_Nova_CumulativeTimer_Nova_duration;
	int nova_time_Nova_CumulativeTimer_Nova_iterations;
)

void nova_time_Nova_CumulativeTimer_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_CumulativeTimer* nova_time_Nova_CumulativeTimer_Nova_construct(nova_time_Nova_CumulativeTimer* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_CumulativeTimer_Nova_destroy(nova_time_Nova_CumulativeTimer** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_CumulativeTimer_Nova_this(nova_time_Nova_CumulativeTimer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_CumulativeTimer* nova_time_Nova_CumulativeTimer_Nova_stop(nova_time_Nova_CumulativeTimer* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_time_Nova_CumulativeTimer_Accessorfunc_Nova_duration(nova_time_Nova_CumulativeTimer* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_time_Nova_CumulativeTimer_Mutatorfunc_Nova_duration(nova_time_Nova_CumulativeTimer* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value);
void nova_time_Nova_CumulativeTimer_Nova_super(nova_time_Nova_CumulativeTimer* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_time_Nova_CumulativeTimerFunctionMap, 
	
	nova_time_CumulativeTimer_CumulativeTimerFunctionMap_Extension_VTable* vtable;
)

void nova_time_Nova_CumulativeTimerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_CumulativeTimerFunctionMap* nova_time_Nova_CumulativeTimerFunctionMap_Nova_construct(nova_time_Nova_CumulativeTimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_CumulativeTimerFunctionMap_Nova_destroy(nova_time_Nova_CumulativeTimerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_CumulativeTimerFunctionMap_Nova_this(nova_time_Nova_CumulativeTimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_CumulativeTimer* nova_time_Nova_CumulativeTimerFunctionMap_functionMapCumulativeTimerFunctionMap_Nova_construct(nova_time_Nova_CumulativeTimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_CumulativeTimer* nova_time_Nova_CumulativeTimerFunctionMap_functionMap_Nova_stop(nova_time_Nova_CumulativeTimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_CumulativeTimer* reference);
void nova_time_Nova_CumulativeTimerFunctionMap_Nova_super(nova_time_Nova_CumulativeTimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
