#ifndef FILE_nova_serialization_Nova_JsonSerializer_NOVA
#define FILE_nova_serialization_Nova_JsonSerializer_NOVA

typedef struct nova_serialization_Nova_JsonSerializer nova_serialization_Nova_JsonSerializer;
typedef struct nova_serialization_Nova_JsonSerializerFunctionMap nova_serialization_Nova_JsonSerializerFunctionMap;


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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_serialization_Nova_JsonSerializer, 
	
	nova_serialization_JsonSerializer_Extension_VTable* vtable;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NONE;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_OPEN;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_CLOSE;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_OPEN;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_CLOSE;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COLON;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COMMA;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_STRING;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NUMBER;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_TRUE;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_FALSE;
	int nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NULL;
	struct Private_nova_serialization_Nova_JsonSerializer* prv;
)

void nova_serialization_Nova_JsonSerializer_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_serialization_Nova_JsonSerializer* nova_serialization_Nova_JsonSerializer_Nova_construct(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_serialization_Nova_JsonSerializer_Nova_destroy(nova_serialization_Nova_JsonSerializer** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_serialization_Nova_JsonSerializer_Nova_serialize(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* object);
void nova_serialization_Nova_JsonSerializer_Nova_parse(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* json);
void nova_serialization_Nova_JsonSerializer_Nova_this(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_serialization_Nova_JsonSerializer_Nova_super(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_serialization_Nova_JsonSerializerFunctionMap, 
	
	nova_serialization_JsonSerializer_JsonSerializerFunctionMap_Extension_VTable* vtable;
)

void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_serialization_Nova_JsonSerializerFunctionMap* nova_serialization_Nova_JsonSerializerFunctionMap_Nova_construct(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_destroy(nova_serialization_Nova_JsonSerializerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_this(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_super(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
