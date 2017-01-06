#ifndef FILE_nova_primitive_number_Nova_Int_NOVA
#define FILE_nova_primitive_number_Nova_Int_NOVA

typedef struct nova_primitive_number_Nova_Int nova_primitive_number_Nova_Int;
typedef struct nova_primitive_number_Nova_IntFunctionMap nova_primitive_number_Nova_IntFunctionMap;


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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_primitive_number_Nova_Int, 
	
	nova_primitive_number_Int_Extension_VTable* vtable;
	int nova_primitive_number_Nova_Int_Nova_value;
)
extern int nova_primitive_number_Nova_Int_Nova_MAX_VALUE;
extern int nova_primitive_number_Nova_Int_Nova_MIN_VALUE;

void nova_primitive_number_Nova_Int_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_primitive_number_Nova_Int* nova_primitive_number_Nova_Int_Nova_construct(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
void nova_primitive_number_Nova_Int_Nova_destroy(nova_primitive_number_Nova_Int** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_primitive_number_Nova_Int_Nova_this(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
int nova_primitive_number_Nova_Int_0_Nova_compareTo(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int other);
int nova_primitive_number_Nova_Int_Nova_multiply(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
nova_Nova_String* nova_primitive_number_Nova_Int_Nova_toString(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_primitive_number_Nova_Int_static_Nova_numDigits(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int number);
nova_Nova_String* nova_primitive_number_Nova_Int_static_Nova_toString(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
int nova_primitive_number_Nova_Int_static_Nova_parseInt(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* num);
long_long nova_primitive_number_Nova_Int_Accessor_Nova_hashCodeLong(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_primitive_number_Nova_Int_Nova_super(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_primitive_number_Nova_IntFunctionMap, 
	
	nova_primitive_number_Int_IntFunctionMap_Extension_VTable* vtable;
)

void nova_primitive_number_Nova_IntFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_primitive_number_Nova_IntFunctionMap* nova_primitive_number_Nova_IntFunctionMap_Nova_construct(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_primitive_number_Nova_IntFunctionMap_Nova_destroy(nova_primitive_number_Nova_IntFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_primitive_number_Nova_IntFunctionMap_Nova_this(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_primitive_number_Nova_Int* nova_primitive_number_Nova_IntFunctionMap_functionMapIntFunctionMap_static_Nova_construct(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
int nova_primitive_number_Nova_IntFunctionMap_functionMap0_Nova_compareTo(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Int* reference, int other);
int nova_primitive_number_Nova_IntFunctionMap_functionMap_Nova_multiply(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Int* reference, int value);
nova_Nova_String* nova_primitive_number_Nova_IntFunctionMap_functionMap_Nova_toString(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Int* reference);
int nova_primitive_number_Nova_IntFunctionMap_functionMap_static_Nova_numDigits(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int number);
nova_Nova_String* nova_primitive_number_Nova_IntFunctionMap_functionMap_static_Nova_toString(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
int nova_primitive_number_Nova_IntFunctionMap_functionMap_static_Nova_parseInt(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* num);
void nova_primitive_number_Nova_IntFunctionMap_Nova_super(nova_primitive_number_Nova_IntFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
