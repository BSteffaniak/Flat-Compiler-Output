#ifndef FILE_nova_operators_Nova_PlusOperator_NOVA
#define FILE_nova_operators_Nova_PlusOperator_NOVA

typedef struct nova_operators_Nova_PlusOperator nova_operators_Nova_PlusOperator;
typedef struct nova_operators_Nova_PlusOperatorFunctionMap nova_operators_Nova_PlusOperatorFunctionMap;


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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_operators_Nova_PlusOperator, 
	
	nova_operators_PlusOperator_Extension_VTable* vtable;
)

void nova_operators_Nova_PlusOperator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_operators_Nova_PlusOperator_0_Nova_plus(nova_operators_Nova_PlusOperator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* another);nova_Nova_Object* nova_operators_Nova_PlusOperator_virtual0_Nova_plus(nova_operators_Nova_PlusOperator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* another);

CCLASS_CLASS
(
	nova_operators_Nova_PlusOperatorFunctionMap, 
	
	nova_operators_PlusOperator_PlusOperatorFunctionMap_Extension_VTable* vtable;
)

void nova_operators_Nova_PlusOperatorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_operators_Nova_PlusOperatorFunctionMap* nova_operators_Nova_PlusOperatorFunctionMap_Nova_construct(nova_operators_Nova_PlusOperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_operators_Nova_PlusOperatorFunctionMap_Nova_destroy(nova_operators_Nova_PlusOperatorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_operators_Nova_PlusOperatorFunctionMap_Nova_this(nova_operators_Nova_PlusOperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_operators_Nova_PlusOperatorFunctionMap_functionMap0_Nova_plus(nova_operators_Nova_PlusOperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_PlusOperator* reference, nova_Nova_Object* another);
void nova_operators_Nova_PlusOperatorFunctionMap_Nova_super(nova_operators_Nova_PlusOperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_operators_Nova_PlusOperatorFunctionMap_virtualfunctionMap0_Nova_plus(nova_operators_Nova_PlusOperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_PlusOperator* reference, nova_Nova_Object* another);

#endif
