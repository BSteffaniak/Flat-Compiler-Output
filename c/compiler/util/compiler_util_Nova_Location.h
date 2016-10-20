#pragma once
#ifndef FILE_compiler_util_Nova_Location_NOVA
#define FILE_compiler_util_Nova_Location_NOVA

typedef struct compiler_util_Nova_Location compiler_util_Nova_Location;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_util_Location_Extension_VTable compiler_util_Location_Extension_VTable;
struct compiler_util_Location_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(compiler_util_Nova_Location*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern compiler_util_Location_Extension_VTable compiler_util_Location_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_util_Nova_Location, 
	
	compiler_util_Location_Extension_VTable* vtable;
	int compiler_util_Nova_Location_Nova_lineNumber;
	int compiler_util_Nova_Location_Nova_offset;
	nova_datastruct_Nova_Bounds* compiler_util_Nova_Location_Nova_bounds;
)
extern compiler_util_Nova_Location* compiler_util_Nova_Location_Nova_INVALID;

void compiler_util_Nova_Location_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_util_Nova_Location* compiler_util_Nova_Location_0_Nova_construct(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_util_Nova_Location* compiler_util_Nova_Location_1_Nova_construct(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Location* loc);
compiler_util_Nova_Location* compiler_util_Nova_Location_2_Nova_construct(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end);
void compiler_util_Nova_Location_Nova_destroy(compiler_util_Nova_Location** this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_Location_Nova_this(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_Location_0_Nova_this(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Location* loc);
void compiler_util_Nova_Location_1_Nova_this(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end);
void compiler_util_Nova_Location_Nova_setLineNumber(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber);
int compiler_util_Nova_Location_Nova_getStart(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
int compiler_util_Nova_Location_Nova_getEnd(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_Location_Nova_setOffset(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int offset);
void compiler_util_Nova_Location_Nova_addOffset(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void compiler_util_Nova_Location_Nova_subtractOffset(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void compiler_util_Nova_Location_0_Nova_setBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds);
void compiler_util_Nova_Location_1_Nova_setBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
void compiler_util_Nova_Location_0_Nova_addBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void compiler_util_Nova_Location_Nova_moveBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount);
void compiler_util_Nova_Location_0_Nova_subtractBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount);
void compiler_util_Nova_Location_1_Nova_subtractBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void compiler_util_Nova_Location_1_Nova_addBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount);
char compiler_util_Nova_Location_Nova_isValid(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_util_Nova_Location* compiler_util_Nova_Location_Nova_asNew(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_util_Nova_Location_Nova_toString(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_Location_Nova_super(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
