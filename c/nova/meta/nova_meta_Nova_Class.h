#ifndef FILE_nova_meta_Nova_Class_NOVA
#define FILE_nova_meta_Nova_Class_NOVA

typedef struct nova_meta_Nova_Class nova_meta_Nova_Class;
typedef struct nova_meta_Nova_ClassFunctionMap nova_meta_Nova_ClassFunctionMap;


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
#include <nova/meta/nova_meta_Nova_Field.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_meta_Nova_Class, 
	
	nova_meta_Class_Extension_VTable* vtable;
	nova_meta_Nova_Class* nova_meta_Nova_Class_Nova_extension;
	nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_Class_Nova_interfaces;
	nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_Class_Nova_fields;
	nova_meta_Nova_FunctionMap* nova_meta_Nova_Class_Nova_functionMap;
	char nova_meta_Nova_Class_Nova_isInterface;
	nova_Nova_String* nova_meta_Nova_Class_Nova_location;
)
extern nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_Class_Nova_ALL;

void nova_meta_Nova_Class_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_meta_Nova_Class* nova_meta_Nova_Class_Nova_construct(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface);
void nova_meta_Nova_Class_Nova_destroy(nova_meta_Nova_Class** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_Class_Nova_this(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface);
char nova_meta_Nova_Class_Nova_isOfType(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* other);
nova_Nova_String* nova_meta_Nova_Class_Nova_toString(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_meta_Nova_Class_Accessor_Nova_package(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_meta_Nova_Class_Accessor_Nova_name(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_Class_Nova_super(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_meta_Nova_ClassFunctionMap, 
	
	nova_meta_Class_ClassFunctionMap_Extension_VTable* vtable;
)

void nova_meta_Nova_ClassFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_meta_Nova_ClassFunctionMap* nova_meta_Nova_ClassFunctionMap_Nova_construct(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_ClassFunctionMap_Nova_destroy(nova_meta_Nova_ClassFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_ClassFunctionMap_Nova_this(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_meta_Nova_Class* nova_meta_Nova_ClassFunctionMap_functionMapClassFunctionMap_static_Nova_construct(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface);
char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfType(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other);
char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfTypeClass(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other);
char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfTypeInterface(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other);
nova_Nova_String* nova_meta_Nova_ClassFunctionMap_functionMap_Nova_toString(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
void nova_meta_Nova_ClassFunctionMap_Nova_super(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
