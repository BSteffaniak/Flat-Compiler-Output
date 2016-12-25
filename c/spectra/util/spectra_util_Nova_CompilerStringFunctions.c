#include <precompiled.h>
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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operator.h>
#include <spectra/tree/spectra_tree_Nova_StatementIterator.h>
#include <spectra/util/spectra_util_Nova_Bounds.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>

typedef struct
{
	/* let Int index = 0 */ int* spectra_util_Nova_CompilerStringFunctions_Nova_index;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* let Bool includeEdges = true */ int* spectra_util_Nova_CompilerStringFunctions_Nova_includeEdges;
	/* let
	IntArray matches */ nova_datastruct_list_Nova_IntArray** spectra_util_Nova_CompilerStringFunctions_Nova_matches;
} Context3;
typedef struct
{
	/* var
	Bool inParen */ char* spectra_util_Nova_CompilerStringFunctions_Nova_inParen;
	/* var
	Int lambda */ int* spectra_util_Nova_CompilerStringFunctions_Nova_lambda;
	/* var
	String tabs */ nova_Nova_String** spectra_util_Nova_CompilerStringFunctions_Nova_tabs;
	/* var
	Bool sameLine */ char* spectra_util_Nova_CompilerStringFunctions_Nova_sameLine;
	/* var
	String output */ nova_Nova_String** spectra_util_Nova_CompilerStringFunctions_Nova_output;
	/* var
	Int lastIndex */ int* spectra_util_Nova_CompilerStringFunctions_Nova_lastIndex;
} Context4;


spectra_util_CompilerStringFunctions_Extension_VTable spectra_util_CompilerStringFunctions_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
};



char spectra_util_Nova_CompilerStringFunctions_static_Nova_validBounds(spectra_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds, int stopIndex, int direction);
char spectra_util_Nova_CompilerStringFunctions_Nova_lambda69(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context);
int spectra_util_Nova_CompilerStringFunctions_Nova_lambda70(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context);
nova_datastruct_list_Nova_Array* generated6(spectra_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0);
void spectra_util_Nova_CompilerStringFunctions_Nova_lambda134(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void spectra_util_Nova_CompilerStringFunctions_Nova_lambda135(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* match, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);



nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE;
nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_EITHER_STATEMENT_END_CHARS;
nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS;
nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_STMT_PRE_CONT_CHARS;
nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_STMT_POST_CONT_CHARS;
nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_INVALID_DECLARATION_CHARS;
nova_datastruct_list_Nova_CharArray* spectra_util_Nova_CompilerStringFunctions_Nova_WORD_BOUNDARIES;
void spectra_util_Nova_CompilerStringFunctions_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" \t\n\r"))->nova_Nova_String_Nova_chars);
		spectra_util_Nova_CompilerStringFunctions_Nova_EITHER_STATEMENT_END_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n;{}"))->nova_Nova_String_Nova_chars);
		spectra_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^&|*/\\><,\"'[]{};:?()"))->nova_Nova_String_Nova_chars);
		spectra_util_Nova_CompilerStringFunctions_Nova_STMT_PRE_CONT_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^&|*/\\><,.["))->nova_Nova_String_Nova_chars);
		spectra_util_Nova_CompilerStringFunctions_Nova_STMT_POST_CONT_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^&|*/\\><,.]"))->nova_Nova_String_Nova_chars);
		spectra_util_Nova_CompilerStringFunctions_Nova_INVALID_DECLARATION_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^|/\"\\'{};()"))->nova_Nova_String_Nova_chars);
	spectra_util_Nova_CompilerStringFunctions_Nova_WORD_BOUNDARIES = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" \t\n\r-+~!=%^&|*/\\><,\"'[]{};:?()"))->nova_Nova_String_Nova_chars);
}}

spectra_tree_Nova_StatementIterator* spectra_util_Nova_CompilerStringFunctions_Nova_getStatements(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Stack* parents)
{
	return spectra_tree_Nova_StatementIterator_Nova_construct(0, exceptionData, this, parents);
}

char spectra_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int direction)
{
	int l3_Nova_i = 0;
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	l3_Nova_i = index;
	for (; l3_Nova_i < this->nova_Nova_String_Nova_count && l3_Nova_i >= 0; l3_Nova_i += direction)
	{
		if (!nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i))))
		{
			return 0;
		}
	}
	return 1;
}

nova_datastruct_Nova_Tuple2* spectra_util_Nova_CompilerStringFunctions_Nova_getArrayAccesses(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_bracketIndex = 0;
	nova_datastruct_list_Nova_IntArray* l1_Nova_i = (nova_datastruct_list_Nova_IntArray*)nova_null;
	
	l1_Nova_array = (nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null);
	l1_Nova_bracketIndex = this->nova_Nova_String_Nova_count - 1;
	while ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_bracketIndex) == ']')
	{
		int l2_Nova_start = 0;
		int l2_Nova_old = 0;
		
		l2_Nova_start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, l1_Nova_bracketIndex, '[', ']', -1, (intptr_t)nova_null);
		l2_Nova_old = l1_Nova_bracketIndex;
		l1_Nova_bracketIndex = l2_Nova_start - 1;
		if (l2_Nova_start > 0)
		{
			if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_bracketIndex) == ')' || (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_bracketIndex) == ']' || spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, (intptr_t)nova_null, l2_Nova_start), exceptionData))
		{
			nova_datastruct_list_Nova_Array* nova_local_0 = (nova_datastruct_list_Nova_Array*)nova_null;
			
			l1_Nova_array = (nova_datastruct_list_Nova_Array*)((nova_local_0 = l1_Nova_array) != (nova_datastruct_list_Nova_Array*)nova_null ? nova_local_0 : nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
			nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, 0, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l2_Nova_start + 1, l2_Nova_old), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
		}
		else if ((l1_Nova_array) != (nova_datastruct_list_Nova_Array*)nova_null)
		{
			l1_Nova_array = (nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null);
		}
	}
	if (l1_Nova_bracketIndex <= 1 || (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_bracketIndex) != ']')
	{
		break;
	}
}
l1_Nova_i = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_i), exceptionData, (nova_Nova_Object*)(intptr_t)(l1_Nova_bracketIndex + 1));
return (nova_datastruct_Nova_Tuple2*)nova_datastruct_Nova_Tuple2_Nova_construct(0, exceptionData, (nova_Nova_Object*)(l1_Nova_array), (nova_Nova_Object*)(l1_Nova_i));}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, bounds->spectra_util_Nova_Bounds_Nova_start, bounds->spectra_util_Nova_Bounds_Nova_end);
}

spectra_util_Nova_Bounds* spectra_util_Nova_CompilerStringFunctions_0_Nova_nextWordBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(this, exceptionData, start, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index > 0)
	{
		return spectra_util_Nova_Bounds_Nova_construct(0, exceptionData, start, l1_Nova_index);
	}
	return spectra_util_Nova_Bounds_Nova_EMPTY;
}

char spectra_util_Nova_CompilerStringFunctions_Nova_containsWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	return spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(this, exceptionData, search, start, (intptr_t)nova_null) >= 0;
}

int spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int defaultReturnValue)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_index = nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, start, (intptr_t)nova_null, (intptr_t)nova_null);
	while (l1_Nova_index >= 0)
	{
		if ((l1_Nova_index == 0 || nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index - 1)))) && (l1_Nova_index + search->nova_Nova_String_Nova_count >= this->nova_Nova_String_Nova_count || nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index + search->nova_Nova_String_Nova_count)))))
		{
			return l1_Nova_index;
		}
		l1_Nova_index = nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, l1_Nova_index + search->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	return defaultReturnValue;
}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, nova_Nova_String* defaultReturnValue)
{
	int l1_Nova_wordStartIndex = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (nova_Nova_String*)(defaultReturnValue == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)defaultReturnValue);
	l1_Nova_wordStartIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, start, direction, (intptr_t)nova_null);
	if (l1_Nova_wordStartIndex >= 0)
	{
		int l2_Nova_wordEndIndex = 0;
		
		l2_Nova_wordEndIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(this, exceptionData, l1_Nova_wordStartIndex, direction, (intptr_t)nova_null);
		if (direction < 0)
		{
			int l3_Nova_temp = 0;
			
			l3_Nova_temp = l1_Nova_wordStartIndex + 1;
			l1_Nova_wordStartIndex = l2_Nova_wordEndIndex + 1;
			l2_Nova_wordEndIndex = l3_Nova_temp;
		}
		return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_wordStartIndex, l2_Nova_wordEndIndex);
	}
	return defaultReturnValue;
}

char spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? 0 : defaultReturnValue);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, start, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index >= 0)
	{
		return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index);
	}
	return defaultReturnValue;
}

int spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, start, 1, direction, defaultReturnValue);
}

int spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, start, 0, direction, defaultReturnValue);
}

int spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, searchChars, start, 1, direction, defaultReturnValue);
}

int spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int opposite, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	opposite = (int)(opposite == (intptr_t)nova_null ? 0 : opposite);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	while (start < this->nova_Nova_String_Nova_count && start >= 0 && nova_datastruct_list_Nova_CharArray_Nova_contains(searchChars, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start))) == opposite)
	{
		start += direction;
	}
	if (start <= this->nova_Nova_String_Nova_count && start >= 0)
	{
		return start;
	}
	return defaultReturnValue;
}

int spectra_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int opposite, int bound)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	opposite = (int)(opposite == (intptr_t)nova_null ? 0 : opposite);
	bound = (int)(bound == (intptr_t)nova_null ? 0 : bound);
	while (start >= 0 && start < this->nova_Nova_String_Nova_count)
	{
		char l2_Nova_c = 0;
		
		l2_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start));
		if ((nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, l2_Nova_c) || nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS, exceptionData, l2_Nova_c)) == opposite)
		{
			return start;
		}
		start += direction;
	}
	if (bound)
	{
		if (direction > 0)
		{
			return this->nova_Nova_String_Nova_count;
		}
		return (int)0;
	}
	return (int)-1;
}

char spectra_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_String_Nova_count >= 2 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_first((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData) == '"' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData) == '"';
}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_input = (nova_Nova_String*)nova_null;
	
	l1_Nova_input = this;
	while (spectra_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(l1_Nova_input, exceptionData))
	{
		l1_Nova_input = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_input), exceptionData, 1, l1_Nova_input->nova_Nova_String_Nova_count - 1));
	}
	return l1_Nova_input;
}

char spectra_util_Nova_CompilerStringFunctions_0_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int index)
{
	Context1* contextArg69 = NOVA_MALLOC(sizeof(Context1));
	contextArg69->spectra_util_Nova_CompilerStringFunctions_Nova_index = &index;
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(needles), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&spectra_util_Nova_CompilerStringFunctions_Nova_lambda69, this, contextArg69);
}

char spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int index)
{
	int l3_Nova_i = 0;
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)needle->nova_Nova_String_Nova_count; l3_Nova_i++)
	{
		if (l3_Nova_i + index >= this->nova_Nova_String_Nova_count || (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i + index) != nova_Nova_String_Nova_get(needle, exceptionData, l3_Nova_i))
		{
			return 0;
		}
	}
	return 1;
}

int spectra_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(spectra_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	start += direction;
	if (start > 0 && nova_Nova_String_Nova_get(value, exceptionData, start - 1) == '\\' && nova_Nova_String_Nova_get(value, exceptionData, start - 2) != '\\')
	{
		return start + direction;
	}
	return start;
}

int spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c, int start, int direction, spectra_util_Nova_CompilerStringFunctions_closure2_Nova_advance spectra_util_Nova_CompilerStringFunctions_Nova_advance, void* spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance, void* advance_context, int defaultReturnValue)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	spectra_util_Nova_CompilerStringFunctions_Nova_advance = (spectra_util_Nova_CompilerStringFunctions_closure2_Nova_advance)(spectra_util_Nova_CompilerStringFunctions_Nova_advance == 0 ? (spectra_util_Nova_CompilerStringFunctions_closure2_Nova_advance)&spectra_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck : spectra_util_Nova_CompilerStringFunctions_Nova_advance);
	spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance = (void*)(spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance == 0 ? (void*)this : spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance);
	advance_context = (void*)(advance_context == 0 ? (void*)nova_null : advance_context);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	if (start < 0 || start >= this->nova_Nova_String_Nova_count)
	{
		return (int)-1;
	}
	start = spectra_util_Nova_CompilerStringFunctions_Nova_advance(spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance, exceptionData, this, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start)), start, direction, advance_context);
	while (start >= 0 && start < this->nova_Nova_String_Nova_count)
	{
		if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start) == c)
		{
			return start;
		}
		start = spectra_util_Nova_CompilerStringFunctions_Nova_advance(spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance, exceptionData, this, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start)), start, direction, advance_context);
	}
	return defaultReturnValue;
}

int spectra_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction)
{
	Context2* contextArg70 = NOVA_MALLOC(sizeof(Context2));
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, '"', start, direction, (spectra_util_Nova_CompilerStringFunctions_closure2_Nova_advance)&spectra_util_Nova_CompilerStringFunctions_Nova_lambda70, this, contextArg70, (intptr_t)nova_null);
}

int spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char start, char end, int direction, int escapeChar)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(this, exceptionData, index, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (start)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), direction, escapeChar, (intptr_t)nova_null);
}

int spectra_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_String* start, nova_Nova_String* end, int direction, int escapeChar, int defaultReturnValue)
{
	int l1_Nova_scope = 0;
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	if (direction < 0)
	{
		nova_Nova_String* l2_Nova_temp = (nova_Nova_String*)nova_null;
		
		l2_Nova_temp = start;
		start = end;
		end = l2_Nova_temp;
	}
	l1_Nova_scope = (int)(0);
	while (index >= 0 && index < this->nova_Nova_String_Nova_count)
	{
		char l3_Nova_c = 0;
		
		l3_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index));
		if (l3_Nova_c == escapeChar && direction > 0)
		{
			if (index < this->nova_Nova_String_Nova_count - 1)
			{
				if (spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, start, index + 1))
				{
					index++;
				}
			}
		}
		else if (spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, start, index) && (direction > 0 || index > 0 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index - 1) != escapeChar) && (!nova_Nova_String_Nova_equals(start, exceptionData, end) || l1_Nova_scope == 0))
		{
			l1_Nova_scope++;
		}
		else if (spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, end, index) && (direction > 0 || index > 0 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index - 1) != escapeChar))
		{
			l1_Nova_scope--;
			if (l1_Nova_scope == 0)
			{
				return index;
			}
		}
		else if (l3_Nova_c == '"')
		{
			index = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(this, exceptionData, index, direction);
			if (index < 0)
			{
				break;
			}
		}
		else if (l3_Nova_c == '\'')
		{
			index = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, l3_Nova_c, index, direction, 0, 0, 0, (intptr_t)nova_null);
			if (index < 0)
			{
				break;
			}
		}
		index += direction;
	}
	return defaultReturnValue;
}

nova_datastruct_list_Nova_Array* spectra_util_Nova_CompilerStringFunctions_Nova_splitAtDotOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* defaultReturnValue)
{
	char l1_Nova_prev = 0;
	int l1_Nova_dot = 0;
	nova_datastruct_list_Nova_Array* l1_Nova_fragments = (nova_datastruct_list_Nova_Array*)nova_null;
	
	defaultReturnValue = (nova_datastruct_list_Nova_Array*)(defaultReturnValue == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)defaultReturnValue);
	l1_Nova_prev = 0;
	l1_Nova_dot = spectra_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(this, exceptionData, (intptr_t)nova_null);
	l1_Nova_fragments = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	while (l1_Nova_dot > 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_fragments), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_prev, l1_Nova_dot)));
		l1_Nova_prev = (char)(l1_Nova_dot + 1);
		l1_Nova_dot = spectra_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(this, exceptionData, l1_Nova_prev);
	}
	if (l1_Nova_prev > 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_fragments), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_prev, (intptr_t)nova_null)));
		return (nova_datastruct_list_Nova_Array*)l1_Nova_fragments;
	}
	else
	{
		return defaultReturnValue;
	}
}

nova_datastruct_list_Nova_Array* spectra_util_Nova_CompilerStringFunctions_Nova_splitValues(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_split(this, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))));
}

nova_datastruct_list_Nova_Array* spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int searchGenerics, int allowTrailing)
{
	nova_datastruct_list_Nova_Array* l1_Nova_strs = (nova_datastruct_list_Nova_Array*)nova_null;
	char l1_Nova_oldIndex = 0;
	char l1_Nova_index = 0;
	nova_Nova_String* l1_Nova_last = (nova_Nova_String*)nova_null;
	
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	allowTrailing = (int)(allowTrailing == (intptr_t)nova_null ? 0 : allowTrailing);
	l1_Nova_strs = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	if (nova_Nova_String_Nova_trim(this, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)->nova_Nova_String_Nova_count == 0)
	{
		return l1_Nova_strs;
	}
	l1_Nova_oldIndex = 0;
	l1_Nova_index = -1;
	while ((l1_Nova_index = (char)(spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(this, exceptionData, ',', l1_Nova_index + 1, searchGenerics))) >= 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_oldIndex, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
		l1_Nova_oldIndex = (char)(l1_Nova_index + 1);
	}
	l1_Nova_last = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_oldIndex, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	if (!allowTrailing || l1_Nova_last->nova_Nova_String_Nova_count > 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(l1_Nova_last));
	}
	return l1_Nova_strs;
}

nova_datastruct_list_Nova_IntArray* spectra_util_Nova_CompilerStringFunctions_Nova_findOperatorIndices(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operators, int includeEdges)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_matches = (nova_datastruct_list_Nova_IntArray*)nova_null;
	Context3* contextArg134 = NOVA_MALLOC(sizeof(Context3));
	contextArg134->spectra_util_Nova_CompilerStringFunctions_Nova_includeEdges = &includeEdges;
	contextArg134->spectra_util_Nova_CompilerStringFunctions_Nova_matches = &l1_Nova_matches;
	int l3_Nova_i = 0;
	
	operators = (nova_datastruct_list_Nova_Array*)(operators == 0 ? (nova_Nova_Object*)spectra_tree_nodes_operations_Nova_Operator_Nova_BINARY_OPERATORS : (nova_Nova_Object*)operators);
	includeEdges = (int)(includeEdges == (intptr_t)nova_null ? 1 : includeEdges);
	l1_Nova_matches = nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, 0);
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_Nova_System_Nova_overheadTimer), exceptionData);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(operators), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)&spectra_util_Nova_CompilerStringFunctions_Nova_lambda134, this, contextArg134);
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData); l3_Nova_i++)
	{
		int l5_Nova_j = 0;
		
		l5_Nova_j = (int)1;
		for (; l5_Nova_j < (int)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData) - l3_Nova_i); l5_Nova_j++)
		{
			if ((int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l5_Nova_j - 1) > (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l5_Nova_j))
			{
				int l6_Nova_temp = 0;
				
				l6_Nova_temp = (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l5_Nova_j - 1));
				nova_datastruct_list_Nova_IntArray_Nova_set(l1_Nova_matches, exceptionData, l5_Nova_j - 1, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l5_Nova_j)));
				nova_datastruct_list_Nova_IntArray_Nova_set(l1_Nova_matches, exceptionData, l5_Nova_j, l6_Nova_temp);
			}
		}
	}
	nova_time_Nova_CumulativeTimer_Nova_stop(nova_Nova_System_Nova_overheadTimer, exceptionData);
	return l1_Nova_matches;
}

char spectra_util_Nova_CompilerStringFunctions_0_Nova_isStrictlyOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char operator, int index)
{
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(this, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (operator)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), index);
}

char spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int index)
{
	return index == this->nova_Nova_String_Nova_count - operator->nova_Nova_String_Nova_count || index >= 0 && index < this->nova_Nova_String_Nova_count - operator->nova_Nova_String_Nova_count && !nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index - 1))) && !nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index + operator->nova_Nova_String_Nova_count)));
}

int spectra_util_Nova_CompilerStringFunctions_0_Nova_findOperatorOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char operator, int start, int searchGenerics)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(this, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (operator)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), start, searchGenerics);
}

int spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int start, int searchGenerics)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	while (1)
	{
		int l2_Nova_index = 0;
		
		l2_Nova_index = spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(this, exceptionData, operator, start, searchGenerics, (intptr_t)nova_null);
		if (l2_Nova_index > 0 && !spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(this, exceptionData, operator, l2_Nova_index))
		{
			start = l2_Nova_index + 1;
		}
		else
		{
			return l2_Nova_index;
		}
	}
}

int spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, int start, int searchGenerics)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 1, (intptr_t)nova_null);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (needle)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel(this, exceptionData, l1_Nova_array, start, searchGenerics, (intptr_t)nova_null);
}

int spectra_util_Nova_CompilerStringFunctions_1_Nova_findCharOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* needles, int start, int searchGenerics)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_needle = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(needles), exceptionData), (intptr_t)nova_null);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((needles), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_needle = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (l2_Nova_needle)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	}
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel(this, exceptionData, l1_Nova_array, start, searchGenerics, (intptr_t)nova_null);
}

int spectra_util_Nova_CompilerStringFunctions_Nova_findWordOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* word, int start, int searchGenerics, int defaultReturnValue)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(this, exceptionData, word, start, searchGenerics, defaultReturnValue);
	while (l1_Nova_index >= 0 && ((l1_Nova_index > 0 && !nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_WORD_BOUNDARIES, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index - 1)))) || (l1_Nova_index + word->nova_Nova_String_Nova_count < this->nova_Nova_String_Nova_count - 1 && !nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_WORD_BOUNDARIES, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index + word->nova_Nova_String_Nova_count))))))
	{
		l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(this, exceptionData, word, l1_Nova_index + word->nova_Nova_String_Nova_count + 1, searchGenerics, defaultReturnValue);
	}
	return l1_Nova_index;
}

int spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int start, int searchGenerics, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel(this, exceptionData, generated6((spectra_util_Nova_CompilerStringFunctions*)(this), exceptionData, needle), start, searchGenerics, defaultReturnValue);
}

int spectra_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int start, int searchGenerics, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	while (start < this->nova_Nova_String_Nova_count)
	{
		char l2_Nova_c = 0;
		
		l2_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start));
		if (spectra_util_Nova_CompilerStringFunctions_0_Nova_containsString(this, exceptionData, needles, start))
		{
			return start;
		}
		else
		{
			switch ((l2_Nova_c))
			{
				case '"':
				start = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(this, exceptionData, start, (intptr_t)nova_null) + 1;
				break;
				case '\'':
				start = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, l2_Nova_c, start, 1, 0, 0, 0, (intptr_t)nova_null) + 1;
				break;
				case '(':
				start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
			break;
			case '{':
			start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '{', '}', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
		break;
		case '[':
		start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
		break;
		case '<':
		if (searchGenerics)
		{
			start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null);
		}
		default:
		start++;
	}
	if (start <= 0)
	{
		return (int)-1;
	}
}}
return defaultReturnValue;}

int spectra_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int currentEnd, int statementEndIndex)
{
	int l1_Nova_prevCharIndex = 0;
	int l1_Nova_nextCharIndex = 0;
	
	statementEndIndex = (int)(statementEndIndex == (intptr_t)nova_null ? currentEnd : statementEndIndex);
	currentEnd = spectra_util_Nova_CompilerStringFunctions_1_Nova_findCharOnTopLevel(this, exceptionData, spectra_util_Nova_CompilerStringFunctions_Nova_EITHER_STATEMENT_END_CHARS, currentEnd, (intptr_t)nova_null);
	if (currentEnd < 0)
	{
		if (spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, statementEndIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null) < 0)
		{
			return (int)-1;
		}
		return this->nova_Nova_String_Nova_count;
	}
	else if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, currentEnd) == ';')
	{
		return currentEnd;
	}
	l1_Nova_prevCharIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, currentEnd - 1, -1, (intptr_t)nova_null);
	l1_Nova_nextCharIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, currentEnd + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	return spectra_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue(this, exceptionData, statementEndIndex, currentEnd, l1_Nova_nextCharIndex, l1_Nova_prevCharIndex);
}

int spectra_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int statementEndIndex, int currentEnd, int nextCharIndex, int prevCharIndex)
{
	if (nextCharIndex < 0)
	{
		return (int)-1;
	}
	if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, currentEnd) == '{')
	{
		return currentEnd;
	}
	else if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, nextCharIndex) == '{')
	{
		return nextCharIndex;
	}
	else if (spectra_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation(this, exceptionData, prevCharIndex, nextCharIndex))
	{
		return spectra_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(this, exceptionData, currentEnd + 1, statementEndIndex);
	}
	return currentEnd;
}

spectra_util_Nova_Bounds* spectra_util_Nova_CompilerStringFunctions_1_Nova_nextWordBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction)
{
	int l1_Nova_index = 0;
	
	if (start < 0 || start >= this->nova_Nova_String_Nova_count)
	{
		return spectra_util_Nova_Bounds_Nova_EMPTY;
	}
	start = spectra_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(this, exceptionData, start, direction, 0, 1);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(this, exceptionData, start + direction, direction, 1, 1);
	if (direction < 0)
	{
		if (l1_Nova_index == 0)
		{
			l1_Nova_index--;
		}
		return spectra_util_Nova_Bounds_Nova_construct(0, exceptionData, l1_Nova_index + 1, start + 1);
	}
	return spectra_util_Nova_Bounds_Nova_construct(0, exceptionData, start, l1_Nova_index);
}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedChars(this, exceptionData, spectra_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS, start, direction);
}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedChars(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars, int start, int direction)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	l1_Nova_index = start;
	while (l1_Nova_index < this->nova_Nova_String_Nova_count && l1_Nova_index >= 0 && nova_datastruct_list_Nova_CharArray_Nova_contains(chars, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index))))
	{
		l1_Nova_index += direction;
	}
	if (direction < 0)
	{
		return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_index + 1, start + 1);
	}
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, start, l1_Nova_index);
}

char spectra_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int prevCharIndex, int nextCharIndex)
{
	spectra_util_Nova_Bounds* l1_Nova_prevWordBounds = (spectra_util_Nova_Bounds*)nova_null;
	int l1_Nova_nextNextCharIndex = 0;
	char l1_Nova_pendingCompletion = 0;
	char l1_Nova_requiresCompletion = 0;
	nova_Nova_String* l1_Nova_prevWord = (nova_Nova_String*)nova_null;
	
	l1_Nova_prevWordBounds = spectra_util_Nova_CompilerStringFunctions_1_Nova_nextWordBounds(this, exceptionData, prevCharIndex, -1);
	l1_Nova_nextNextCharIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(this, exceptionData, nextCharIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null), (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_pendingCompletion = nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_STMT_PRE_CONT_CHARS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, prevCharIndex))) && !spectra_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(this, exceptionData, prevCharIndex, l1_Nova_prevWordBounds->spectra_util_Nova_Bounds_Nova_end, -1);
	if (l1_Nova_pendingCompletion && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, prevCharIndex) == '>')
	{
		if (nova_Nova_String_Nova_equals(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, prevCharIndex - 1, prevCharIndex + 1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=>"))))
		{
		}
		else if ((spectra_util_Nova_CompilerStringFunctions_Nova_searchGenericType(this, exceptionData, prevCharIndex, 1)) != (nova_Nova_String*)nova_null)
		{
			l1_Nova_pendingCompletion = 0;
		}
	}
	l1_Nova_requiresCompletion = nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_util_Nova_CompilerStringFunctions_Nova_STMT_POST_CONT_CHARS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, nextCharIndex))) && (!spectra_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(this, exceptionData, nextCharIndex, l1_Nova_nextNextCharIndex, (intptr_t)nova_null) || nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols(this, exceptionData, nextCharIndex, (intptr_t)nova_null), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-"))));
	l1_Nova_prevWord = spectra_util_Nova_Bounds_Nova_extractString(l1_Nova_prevWordBounds, exceptionData, this);
	return l1_Nova_pendingCompletion ^ l1_Nova_requiresCompletion || (nova_Nova_String_Nova_equals(l1_Nova_prevWord, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("return"))) && l1_Nova_pendingCompletion);
}

char spectra_util_Nova_CompilerStringFunctions_static_Nova_validBounds(spectra_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds, int stopIndex, int direction)
{
	return spectra_util_Nova_Bounds_Accessor_Nova_isValid(bounds, exceptionData) && (direction > 0 && bounds->spectra_util_Nova_Bounds_Nova_end < stopIndex || direction < 0 && bounds->spectra_util_Nova_Bounds_Nova_start >= stopIndex);
}

char spectra_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int stopIndex, int direction)
{
	spectra_util_Nova_Bounds* l1_Nova_bounds = (spectra_util_Nova_Bounds*)nova_null;
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	l1_Nova_bounds = spectra_util_Nova_CompilerStringFunctions_Nova_findStrings(this, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS_NO_MINUS, index, direction, 0);
	if (!spectra_util_Nova_CompilerStringFunctions_static_Nova_validBounds(0, exceptionData, l1_Nova_bounds, stopIndex, direction))
	{
		l1_Nova_bounds = spectra_util_Nova_CompilerStringFunctions_Nova_findStrings(this, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_MINUS, index, direction, 0);
	}
	if (spectra_util_Nova_CompilerStringFunctions_static_Nova_validBounds(0, exceptionData, l1_Nova_bounds, stopIndex, direction))
	{
		nova_Nova_String* l3_Nova_unary = (nova_Nova_String*)nova_null;
		int l3_Nova_foundSide = 0;
		char l3_Nova_correctSide = 0;
		
		l3_Nova_unary = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_bounds->spectra_util_Nova_Bounds_Nova_start, l1_Nova_bounds->spectra_util_Nova_Bounds_Nova_end));
		l3_Nova_foundSide = -direction;
		l3_Nova_correctSide = spectra_tree_nodes_operations_Nova_UnaryOperation_Nova_RIGHT;
		return l3_Nova_correctSide == l3_Nova_foundSide || l3_Nova_correctSide == spectra_tree_nodes_operations_Nova_UnaryOperation_Nova_EITHER;
	}
	return 0;
}

spectra_util_Nova_Bounds* spectra_util_Nova_CompilerStringFunctions_Nova_findStrings(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* strings, int start, int direction, nova_datastruct_list_Nova_CharArray* scopeChecks)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	scopeChecks = (nova_datastruct_list_Nova_CharArray*)(scopeChecks == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)scopeChecks);
	while (start >= 0 && start < this->nova_Nova_String_Nova_count)
	{
		char l2_Nova_c = 0;
		nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_String* l17_Nova_str = (nova_Nova_String*)nova_null;
		
		l2_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start));
		if ((scopeChecks) != (nova_datastruct_list_Nova_CharArray*)nova_null)
		{
			if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '"') && l2_Nova_c == '"')
			{
				start = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(this, exceptionData, start, direction);
				if (start < 0)
				{
					return spectra_util_Nova_Bounds_Nova_EMPTY;
				}
				start += direction;
				continue;
			}
			else if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '\'') && l2_Nova_c == '\'')
			{
				start = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, l2_Nova_c, start, direction, 0, 0, 0, (intptr_t)nova_null);
				if (start < 0)
				{
					return spectra_util_Nova_Bounds_Nova_EMPTY;
				}
				start += direction;
				continue;
			}
			else if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '(') && (l2_Nova_c == '(' && direction > 0 || l2_Nova_c == ')' && direction < 0))
		{
			start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '(', ')', direction, (intptr_t)nova_null);
		if (start < 0)
		{
			return spectra_util_Nova_Bounds_Nova_EMPTY;
		}
		start += direction;
		if (start <= 0 || start >= this->nova_Nova_String_Nova_count)
		{
			return spectra_util_Nova_Bounds_Nova_EMPTY;
		}
		continue;
	}
	else if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '[') && (l2_Nova_c == '[' && direction > 0 || l2_Nova_c == ']' && direction < 0))
	{
		start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '[', ']', direction, (intptr_t)nova_null);
		if (start < 0)
		{
			return spectra_util_Nova_Bounds_Nova_EMPTY;
		}
		start += direction;
		if (start == 0)
		{
			return spectra_util_Nova_Bounds_Nova_EMPTY;
		}
		continue;
	}
}
nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((strings)), exceptionData));
while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
{
	int l19_Nova_i = 0;
	
	l17_Nova_str = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
	l19_Nova_i = (int)(0);
	for (; l19_Nova_i < l17_Nova_str->nova_Nova_String_Nova_count && start + l19_Nova_i < this->nova_Nova_String_Nova_count; l19_Nova_i++)
	{
		if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start + l19_Nova_i) != nova_Nova_String_Nova_get(l17_Nova_str, exceptionData, l19_Nova_i))
		{
			break;
		}
		else if (l19_Nova_i == l17_Nova_str->nova_Nova_String_Nova_count - 1)
		{
			return spectra_util_Nova_Bounds_Nova_construct(0, exceptionData, start, start + l17_Nova_str->nova_Nova_String_Nova_count);
		}
	}
}
start += direction;}
return spectra_util_Nova_Bounds_Nova_EMPTY;}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_searchGenericType(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int backwards)
{
	backwards = (int)(backwards == (intptr_t)nova_null ? 1 : backwards);
	if (backwards)
	{
		char l2_Nova_stack = 0;
		char l2_Nova_index = 0;
		int l4_Nova_i = 0;
		
		l2_Nova_stack = 0;
		l2_Nova_index = 0;
		l4_Nova_i = start;
		for (; l4_Nova_i >= 0; l4_Nova_i--)
		{
			nova_Nova_String* l4_Nova_c = (nova_Nova_String*)nova_null;
			
			l4_Nova_c = (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l4_Nova_i))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
			if (nova_Nova_String_Nova_equals(l4_Nova_c, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"))))
			{
				l2_Nova_index = (char)((int)(l2_Nova_stack == 0 ? l4_Nova_i : (int)l2_Nova_index));
				l2_Nova_stack++;
			}
			else if (nova_Nova_String_Nova_equals(l4_Nova_c, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))))
			{
				l2_Nova_stack--;
			}
			if (l2_Nova_stack == 0)
			{
				if (l2_Nova_index > 0)
				{
					return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l4_Nova_i + 1, l2_Nova_index);
				}
				return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
			}
		}
	}
	else
	{
		THROW(spectra_error_Nova_UnimplementedOperationException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("forwards checking not implemented yet... Looks like its time to do that."))), 0);
	}
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

int spectra_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	return spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(this, exceptionData, '.', start, (intptr_t)nova_null);
}

nova_Nova_String* spectra_util_Nova_CompilerStringFunctions_Nova_formatIndentation(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_tabs = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_matches = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_lastIndex = 0;
	int l1_Nova_lambda = 0;
	char l1_Nova_sameLine = 0;
	char l1_Nova_inParen = 0;
	Context4* contextArg135 = NOVA_MALLOC(sizeof(Context4));
	contextArg135->spectra_util_Nova_CompilerStringFunctions_Nova_inParen = &l1_Nova_inParen;
	contextArg135->spectra_util_Nova_CompilerStringFunctions_Nova_lambda = &l1_Nova_lambda;
	contextArg135->spectra_util_Nova_CompilerStringFunctions_Nova_tabs = &l1_Nova_tabs;
	contextArg135->spectra_util_Nova_CompilerStringFunctions_Nova_sameLine = &l1_Nova_sameLine;
	contextArg135->spectra_util_Nova_CompilerStringFunctions_Nova_output = &l1_Nova_output;
	contextArg135->spectra_util_Nova_CompilerStringFunctions_Nova_lastIndex = &l1_Nova_lastIndex;
	
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_tabs = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_matches = nova_regex_Nova_Regex_static_Nova_getMatches(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[\\}\\{\\)\\(\n]")), this);
	l1_Nova_lastIndex = (int)(0);
	l1_Nova_lambda = (int)(0);
	l1_Nova_sameLine = 0;
	l1_Nova_inParen = 0;
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)&spectra_util_Nova_CompilerStringFunctions_Nova_lambda135, this, contextArg135);
	l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_tabs, exceptionData, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_lastIndex, (intptr_t)nova_null)))));
	return l1_Nova_output;
}

char spectra_util_Nova_CompilerStringFunctions_Nova_lambda69(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context)
{
	return spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, _1, (*context->spectra_util_Nova_CompilerStringFunctions_Nova_index));
}

int spectra_util_Nova_CompilerStringFunctions_Nova_lambda70(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context)
{
	i += dir;
	if (dir > 0 && i < str->nova_Nova_String_Nova_count - 3 && nova_Nova_String_Nova_get(str, exceptionData, i) == '#' && nova_Nova_String_Nova_get(str, exceptionData, i + 1) == '{')
	{
		return (int)((i = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(str, exceptionData, '}', i + dir, dir, 0, 0, 0, (intptr_t)nova_null)) >= 0 ? i + dir : i);
}
return spectra_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(0, exceptionData, str, c, i - dir, dir);}

nova_datastruct_list_Nova_Array* generated6(spectra_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

void spectra_util_Nova_CompilerStringFunctions_Nova_lambda134(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = (int)(0);
	while ((l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(this, exceptionData, operator, l1_Nova_index, (intptr_t)nova_null, (intptr_t)nova_null)) >= 0)
	{
		if (((*context->spectra_util_Nova_CompilerStringFunctions_Nova_includeEdges) || l1_Nova_index > 0 && l1_Nova_index < this->nova_Nova_String_Nova_count - operator->nova_Nova_String_Nova_count) && spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(this, exceptionData, operator, l1_Nova_index))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->spectra_util_Nova_CompilerStringFunctions_Nova_matches)), exceptionData, (nova_Nova_Object*)(l1_Nova_index));
		}
		l1_Nova_index += operator->nova_Nova_String_Nova_count + 1;
	}
}

void spectra_util_Nova_CompilerStringFunctions_Nova_lambda135(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* match, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	char l1_Nova_c = 0;
	
	l1_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, match->nova_regex_Nova_Match_Nova_start));
	if (l1_Nova_c == '{' || l1_Nova_c == '(')
	{
		if ((*context->spectra_util_Nova_CompilerStringFunctions_Nova_inParen) && l1_Nova_c == '{')
		{
			(*context->spectra_util_Nova_CompilerStringFunctions_Nova_lambda)++;
			return;
		}
		(*context->spectra_util_Nova_CompilerStringFunctions_Nova_tabs) = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((*context->spectra_util_Nova_CompilerStringFunctions_Nova_tabs)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\t"))));
		(*context->spectra_util_Nova_CompilerStringFunctions_Nova_inParen) = l1_Nova_c == '(';
		(*context->spectra_util_Nova_CompilerStringFunctions_Nova_sameLine) = 1;
	}
	else if (l1_Nova_c == '}' || l1_Nova_c == ')')
{
	if ((*context->spectra_util_Nova_CompilerStringFunctions_Nova_lambda) > 0 && l1_Nova_c == ')')
{
	(*context->spectra_util_Nova_CompilerStringFunctions_Nova_lambda)--;
}
else if ((*context->spectra_util_Nova_CompilerStringFunctions_Nova_tabs)->nova_Nova_String_Nova_count > 0)
{
	(*context->spectra_util_Nova_CompilerStringFunctions_Nova_tabs) = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->spectra_util_Nova_CompilerStringFunctions_Nova_tabs)), exceptionData, 1, (intptr_t)nova_null));
}
(*context->spectra_util_Nova_CompilerStringFunctions_Nova_inParen) = (*context->spectra_util_Nova_CompilerStringFunctions_Nova_inParen) && l1_Nova_c != ')';
if ((*context->spectra_util_Nova_CompilerStringFunctions_Nova_output)->nova_Nova_String_Nova_count > 0 && !(*context->spectra_util_Nova_CompilerStringFunctions_Nova_sameLine))
{
	(*context->spectra_util_Nova_CompilerStringFunctions_Nova_output) = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->spectra_util_Nova_CompilerStringFunctions_Nova_output)), exceptionData, (intptr_t)nova_null, (*context->spectra_util_Nova_CompilerStringFunctions_Nova_output)->nova_Nova_String_Nova_count - 1));
}}
else if (l1_Nova_c == '\n')
{
	(*context->spectra_util_Nova_CompilerStringFunctions_Nova_output) = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((*context->spectra_util_Nova_CompilerStringFunctions_Nova_output)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, (*context->spectra_util_Nova_CompilerStringFunctions_Nova_lastIndex), match->nova_regex_Nova_Match_Nova_start), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")), exceptionData, (*context->spectra_util_Nova_CompilerStringFunctions_Nova_tabs)))))));
	(*context->spectra_util_Nova_CompilerStringFunctions_Nova_lastIndex) = match->nova_regex_Nova_Match_Nova_start + 1;
	(*context->spectra_util_Nova_CompilerStringFunctions_Nova_sameLine) = 0;
}}

char spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_Nova_matches(this, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[A-Za-z_][A-Za-z0-9_]*"))));
}


char spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isNumber(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_Nova_matches(this, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-?[0-9]+"))));
}


char spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isBool(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_equals(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("true"))) || nova_Nova_String_Nova_equals(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("false")));
}


void spectra_util_Nova_CompilerStringFunctions_Nova_super(spectra_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

