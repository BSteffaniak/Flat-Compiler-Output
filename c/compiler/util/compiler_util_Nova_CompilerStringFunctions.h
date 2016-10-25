#pragma once
#ifndef FILE_compiler_util_Nova_CompilerStringFunctions_NOVA
#define FILE_compiler_util_Nova_CompilerStringFunctions_NOVA

typedef struct compiler_util_Nova_CompilerStringFunctions compiler_util_Nova_CompilerStringFunctions;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_String nova_Nova_String;

typedef int (*compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char, int, int, void*);

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
#include <nova/regex/nova_regex_Nova_Pattern.h>


typedef struct compiler_util_CompilerStringFunctions_Extension_VTable compiler_util_CompilerStringFunctions_Extension_VTable;
extern compiler_util_CompilerStringFunctions_Extension_VTable compiler_util_CompilerStringFunctions_Extension_VTable_val;



void compiler_util_Nova_CompilerStringFunctions_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_Nova_containsWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int opposite, int defaultReturnValue);
char compiler_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_0_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int index);
char compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int index);
int compiler_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction);
int compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c, int start, int direction, compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance compiler_util_Nova_CompilerStringFunctions_Nova_advance, void* compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance, void* advance_context, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction);
int compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char start, char end, int escapeChar, int direction);
int compiler_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_String* start, nova_Nova_String* end, int escapeChar, int direction, int defaultReturnValue);
nova_datastruct_list_Nova_Array* compiler_util_Nova_CompilerStringFunctions_Nova_splitCommas(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int searchGenerics, int allowTrailing);
int compiler_util_Nova_CompilerStringFunctions_Nova_findCharInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c, int start, int searchGenerics);
int compiler_util_Nova_CompilerStringFunctions_Nova_findStringInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int start, int searchGenerics, int defaultReturnValue);
char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_CompilerStringFunctions_Nova_super(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
