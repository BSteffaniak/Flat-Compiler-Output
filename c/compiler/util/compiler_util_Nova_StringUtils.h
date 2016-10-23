#pragma once
#ifndef FILE_compiler_util_Nova_StringUtils_NOVA
#define FILE_compiler_util_Nova_StringUtils_NOVA

typedef struct compiler_util_Nova_StringUtils compiler_util_Nova_StringUtils;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_String nova_Nova_String;

typedef int (*compiler_util_Nova_StringUtils_closure1_Nova_advance)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char, int, int, void*);
typedef int (*compiler_util_Nova_StringUtils_closure2_Nova_advance)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char, int, int, void*);
typedef int (*compiler_util_Nova_StringUtils_closure3_Nova_advance)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char, int, int, void*);

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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_util_StringUtils_Extension_VTable compiler_util_StringUtils_Extension_VTable;
struct compiler_util_StringUtils_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern compiler_util_StringUtils_Extension_VTable compiler_util_StringUtils_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_util_Nova_StringUtils, 
	
	compiler_util_StringUtils_Extension_VTable* vtable;
	nova_Nova_Class* nova_Nova_Object_Nova_class;
)

void compiler_util_Nova_StringUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_util_Nova_StringUtils* compiler_util_Nova_StringUtils_Nova_construct(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_StringUtils_Nova_destroy(compiler_util_Nova_StringUtils** this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_StringUtils_static_Nova_isSurroundedByQuotes(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* compiler_util_Nova_StringUtils_static_Nova_removeSurroundingQuotes(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char compiler_util_Nova_StringUtils_0_static_Nova_containsString(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* haystack, nova_datastruct_list_Nova_Array* needles, int index);
char compiler_util_Nova_StringUtils_1_static_Nova_containsString(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* haystack, nova_Nova_String* needle, int index);
int compiler_util_Nova_StringUtils_static_Nova_defaultCharacterCheck(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction);
int compiler_util_Nova_StringUtils_static_Nova_findEndingChar(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction, compiler_util_Nova_StringUtils_closure3_Nova_advance compiler_util_Nova_StringUtils_Nova_advance, void* compiler_util_Nova_StringUtils_ref_Nova_advance, void* advance_context, int defaultReturnValue);
int compiler_util_Nova_StringUtils_static_Nova_findEndingQuote(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, int start, int direction);
int compiler_util_Nova_StringUtils_0_static_Nova_findEndingMatch(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int index, char start, char end, int escapeChar, int direction);
int compiler_util_Nova_StringUtils_1_static_Nova_findEndingMatch(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int index, nova_Nova_String* start, nova_Nova_String* end, int escapeChar, int direction, int defaultReturnValue);
void compiler_util_Nova_StringUtils_Nova_this(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_StringUtils_Nova_super(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
