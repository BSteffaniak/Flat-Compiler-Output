#pragma once
#ifndef FILE_stabilitytest_Nova_StabilityExceptionHandler_NOVA
#define FILE_stabilitytest_Nova_StabilityExceptionHandler_NOVA

typedef struct stabilitytest_Nova_StabilityExceptionHandler stabilitytest_Nova_StabilityExceptionHandler;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct stabilitytest_StabilityExceptionHandler_Extension_VTable stabilitytest_StabilityExceptionHandler_Extension_VTable;
struct stabilitytest_StabilityExceptionHandler_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	void (*nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException)(stabilitytest_Nova_StabilityExceptionHandler*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread*, nova_exception_Nova_Exception*);
};

extern stabilitytest_StabilityExceptionHandler_Extension_VTable stabilitytest_StabilityExceptionHandler_Extension_VTable_val;


CCLASS_CLASS
(
	stabilitytest_Nova_StabilityExceptionHandler, 
	
	stabilitytest_StabilityExceptionHandler_Extension_VTable* vtable;
	struct Private* prv;
)

void stabilitytest_Nova_StabilityExceptionHandler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_StabilityExceptionHandler* stabilitytest_Nova_StabilityExceptionHandler_Nova_construct(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program);
void stabilitytest_Nova_StabilityExceptionHandler_Nova_destroy(stabilitytest_Nova_StabilityExceptionHandler** this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_StabilityExceptionHandler_Nova_this(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program);
void stabilitytest_Nova_StabilityExceptionHandler_Nova_uncaughtException(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* thread, nova_exception_Nova_Exception* exception);
void stabilitytest_Nova_StabilityExceptionHandler_Nova_super(stabilitytest_Nova_StabilityExceptionHandler* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
