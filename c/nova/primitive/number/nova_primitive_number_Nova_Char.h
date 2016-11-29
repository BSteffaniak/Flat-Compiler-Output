#pragma once
#ifndef FILE_nova_primitive_number_Nova_Char_NOVA
#define FILE_nova_primitive_number_Nova_Char_NOVA

typedef struct nova_primitive_number_Nova_Char nova_primitive_number_Nova_Char;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_primitive_number_Char_Extension_VTable nova_primitive_number_Char_Extension_VTable;
struct nova_primitive_number_Char_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	char (*nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, nova_primitive_number_Nova_Number*);
};

extern nova_primitive_number_Char_Extension_VTable nova_primitive_number_Char_Extension_VTable_val;


CCLASS_CLASS
(
	nova_primitive_number_Nova_Char, 
	
	nova_primitive_number_Char_Extension_VTable* vtable;
	char nova_primitive_number_Nova_Char_Nova_value;
)

void nova_primitive_number_Nova_Char_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_primitive_number_Nova_Char* nova_primitive_number_Nova_Char_Nova_construct(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char value);
void nova_primitive_number_Nova_Char_Nova_destroy(nova_primitive_number_Nova_Char** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_primitive_number_Nova_Char_Nova_this(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char value);
char nova_primitive_number_Nova_Char_static_Nova_toLowerCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_primitive_number_Nova_Char_static_Nova_toUpperCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_primitive_number_Nova_Char_Nova_toLowerCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_primitive_number_Nova_Char_Nova_toUpperCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_primitive_number_Nova_Char_0_Nova_compareTo(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char other);
char nova_primitive_number_Nova_Char_Nova_multiply(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char value);
nova_Nova_String* nova_primitive_number_Nova_Char_Nova_toString(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_primitive_number_Nova_Char_static_Nova_toString(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
void nova_primitive_number_Nova_Char_Nova_super(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif