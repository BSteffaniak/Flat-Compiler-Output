#ifndef FILE_nova_meta_Nova_Class_NOVA
#define FILE_nova_meta_Nova_Class_NOVA

typedef struct nova_meta_Nova_Class nova_meta_Nova_Class;
typedef struct nova_meta_Nova_ClassFunctionMap nova_meta_Nova_ClassFunctionMap;
typedef struct nova_meta_Nova_ClassPropertyMap nova_meta_Nova_ClassPropertyMap;


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
#include <nova/meta/nova_meta_Nova_Field.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_meta_Nova_Class, 
	
	nova_meta_Class_Extension_VTable* vtable;
	nova_meta_Nova_Class* nova_meta_Nova_Class_Nova_extension;
	nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_Class_Nova_interfaces;
	nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_Class_Nova_fields;
	nova_meta_Nova_FunctionMap* nova_meta_Nova_Class_Nova_functionMap;
	nova_meta_Nova_PropertyMap* nova_meta_Nova_Class_Nova_propertyMap;
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
nova_meta_Nova_Class* nova_meta_Nova_ClassFunctionMap_functionMapClassFunctionMap_Nova_construct(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface);
char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfType(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other);
nova_Nova_String* nova_meta_Nova_ClassFunctionMap_functionMap_Nova_toString(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
void nova_meta_Nova_ClassFunctionMap_Nova_super(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_meta_Nova_ClassPropertyMap, 
	
	nova_meta_Class_ClassPropertyMap_Extension_VTable* vtable;
)

void nova_meta_Nova_ClassPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_meta_Nova_ClassPropertyMap* nova_meta_Nova_ClassPropertyMap_Nova_construct(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_ClassPropertyMap_Nova_destroy(nova_meta_Nova_ClassPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_ClassPropertyMap_Nova_this(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_meta_Nova_Class* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_extension(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_interfaces(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_fields(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_meta_Nova_FunctionMap* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_functionMap(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_meta_Nova_PropertyMap* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_propertyMap(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
char nova_meta_Nova_ClassPropertyMap_functionMap_Nova_isInterface(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_Nova_String* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_location(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_Nova_String* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_package(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_Nova_String* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_name(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference);
nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_ClassPropertyMap_functionMap_static_Nova_ALL(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_meta_Nova_ClassPropertyMap_Nova_super(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
