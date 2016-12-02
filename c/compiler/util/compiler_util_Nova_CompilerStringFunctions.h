#pragma once
#ifndef FILE_compiler_util_Nova_CompilerStringFunctions_NOVA
#define FILE_compiler_util_Nova_CompilerStringFunctions_NOVA

typedef struct compiler_util_Nova_CompilerStringFunctions compiler_util_Nova_CompilerStringFunctions;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_String nova_Nova_String;

typedef int (*compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char, int, int, void*);

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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
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
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_UnaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operator.h>
#include <compiler/tree/compiler_tree_Nova_StatementIterator.h>
#include <compiler/util/compiler_util_Nova_Bounds.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>


typedef struct compiler_util_CompilerStringFunctions_Extension_VTable compiler_util_CompilerStringFunctions_Extension_VTable;
struct compiler_util_CompilerStringFunctions_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern compiler_util_CompilerStringFunctions_Extension_VTable compiler_util_CompilerStringFunctions_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_util_Nova_CompilerStringFunctions, 
	
	compiler_util_CompilerStringFunctions_Extension_VTable* vtable;
)

void compiler_util_Nova_CompilerStringFunctions_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_Nova_StatementIterator* compiler_util_Nova_CompilerStringFunctions_Nova_getStatements(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Stack* parents);
char compiler_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int direction);
nova_datastruct_Nova_Tuple2* compiler_util_Nova_CompilerStringFunctions_Nova_getArrayAccesses(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Bounds* bounds);
compiler_util_Nova_Bounds* compiler_util_Nova_CompilerStringFunctions_0_Nova_nextWordBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start);
char compiler_util_Nova_CompilerStringFunctions_Nova_containsWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int defaultReturnValue);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_nextWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, nova_Nova_String* defaultReturnValue);
char compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int direction, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int opposite, int direction, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int opposite, int bound);
char compiler_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_0_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int index);
char compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int index);
int compiler_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction);
int compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c, int start, int direction, compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance compiler_util_Nova_CompilerStringFunctions_Nova_advance, void* compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance, void* advance_context, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction);
int compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char start, char end, int direction, int escapeChar);
int compiler_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_String* start, nova_Nova_String* end, int direction, int escapeChar, int defaultReturnValue);
nova_datastruct_list_Nova_Array* compiler_util_Nova_CompilerStringFunctions_Nova_splitAtDotOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* defaultReturnValue);
nova_datastruct_list_Nova_Array* compiler_util_Nova_CompilerStringFunctions_Nova_splitValues(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int searchGenerics, int allowTrailing);
nova_datastruct_list_Nova_IntArray* compiler_util_Nova_CompilerStringFunctions_Nova_findOperatorIndices(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operators, int includeEdges);
char compiler_util_Nova_CompilerStringFunctions_0_Nova_isStrictlyOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char operator, int index);
char compiler_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int index);
int compiler_util_Nova_CompilerStringFunctions_0_Nova_findOperatorOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char operator, int start, int searchGenerics);
int compiler_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int start, int searchGenerics);
int compiler_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, int start, int searchGenerics);
int compiler_util_Nova_CompilerStringFunctions_1_Nova_findCharOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* needles, int start, int searchGenerics);
int compiler_util_Nova_CompilerStringFunctions_Nova_findWordOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* word, int start, int searchGenerics, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int start, int searchGenerics, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int start, int searchGenerics, int defaultReturnValue);
int compiler_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int currentEnd, int statementEndIndex);
int compiler_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int statementEndIndex, int currentEnd, int nextCharIndex, int prevCharIndex);
compiler_util_Nova_Bounds* compiler_util_Nova_CompilerStringFunctions_1_Nova_nextWordBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_findGroupedChars(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars, int start, int direction);
char compiler_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int prevCharIndex, int nextCharIndex);
char compiler_util_Nova_CompilerStringFunctions_static_Nova_validBounds(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Bounds* bounds, int stopIndex, int direction);
char compiler_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int stopIndex, int direction);
compiler_util_Nova_Bounds* compiler_util_Nova_CompilerStringFunctions_Nova_findStrings(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* strings, int start, int direction, nova_datastruct_list_Nova_CharArray* scopeChecks);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_searchGenericType(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int backwards);
int compiler_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start);
nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_formatIndentation(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isNumber(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isBool(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_CompilerStringFunctions_Nova_super(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
