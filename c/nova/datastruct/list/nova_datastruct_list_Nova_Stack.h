#ifndef FILE_nova_datastruct_list_Nova_Stack_NOVA
#define FILE_nova_datastruct_list_Nova_Stack_NOVA

typedef struct nova_datastruct_list_Nova_Stack nova_datastruct_list_Nova_Stack;
typedef struct nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap;


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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_EmptyStackException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_datastruct_list_Nova_Stack, 
	
	nova_datastruct_list_Stack_Extension_VTable* vtable;
	int nova_datastruct_list_Nova_Stack_Nova_count;
	struct Private_nova_datastruct_list_Nova_Stack* prv;
)

void nova_datastruct_list_Nova_Stack_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Stack* nova_datastruct_list_Nova_Stack_0_Nova_construct(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Stack* nova_datastruct_list_Nova_Stack_1_Nova_construct(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
void nova_datastruct_list_Nova_Stack_Nova_destroy(nova_datastruct_list_Nova_Stack** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_Stack_Nova_this(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_Stack_0_Nova_this(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
void nova_datastruct_list_Nova_Stack_Nova_push(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data);
nova_Nova_Object* nova_datastruct_list_Nova_Stack_Nova_pop(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_Stack_Nova_peek(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_Stack_Nova_super(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap, 
	
	nova_datastruct_list_Stack_nova_datastruct_list_StackFunctionMap_Extension_VTable* vtable;
)

void nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap* nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_Nova_construct(nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_Nova_destroy(nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_Nova_this(nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_Nova_super(nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
