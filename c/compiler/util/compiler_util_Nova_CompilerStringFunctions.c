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
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_UnaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operator.h>
#include <compiler/tree/compiler_tree_Nova_StatementIterator.h>
#include <compiler/util/compiler_util_Nova_Bounds.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>

typedef struct
{
	/* Int index = 0 */ int* compiler_util_Nova_CompilerStringFunctions_Nova_index;
} Context1;
typedef struct
{
} Context2;


compiler_util_CompilerStringFunctions_Extension_VTable compiler_util_CompilerStringFunctions_Extension_VTable_val =
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
	},
};



char compiler_util_Nova_CompilerStringFunctions_static_Nova_validBounds(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Bounds* bounds, int stopIndex, int direction);
char compiler_util_Nova_CompilerStringFunctions_Nova_testLambda40(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context);
int compiler_util_Nova_CompilerStringFunctions_Nova_testLambda41(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context);
nova_datastruct_list_Nova_Array* generated24(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0);



nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE;
nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_EITHER_STATEMENT_END_CHARS;
nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS;
nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_STMT_PRE_CONT_CHARS;
nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_STMT_POST_CONT_CHARS;
nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_INVALID_DECLARATION_CHARS;
void compiler_util_Nova_CompilerStringFunctions_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" \t\n\r"))->nova_Nova_String_Nova_chars);
		compiler_util_Nova_CompilerStringFunctions_Nova_EITHER_STATEMENT_END_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n;{}"))->nova_Nova_String_Nova_chars);
		compiler_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^&|*/\\><,\"'[]{};:?()"))->nova_Nova_String_Nova_chars);
		compiler_util_Nova_CompilerStringFunctions_Nova_STMT_PRE_CONT_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^&|*/\\><,.["))->nova_Nova_String_Nova_chars);
		compiler_util_Nova_CompilerStringFunctions_Nova_STMT_POST_CONT_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^&|*/\\><,.]"))->nova_Nova_String_Nova_chars);
		compiler_util_Nova_CompilerStringFunctions_Nova_INVALID_DECLARATION_CHARS = (nova_datastruct_list_Nova_CharArray*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-+~!=%^|/\"\\'{};()"))->nova_Nova_String_Nova_chars);
	}
}

char compiler_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int direction)
{
	int l2_Nova_i = 0;
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	l2_Nova_i = index;
	for (; l2_Nova_i < this->nova_Nova_String_Nova_count && l2_Nova_i >= 0; l2_Nova_i += direction)
	{
		if (!nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i))))
		{
			return 0;
		}
	}
	return 1;
}

char compiler_util_Nova_CompilerStringFunctions_Nova_containsWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	return compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(this, exceptionData, search, start, (intptr_t)nova_null) >= 0;
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int defaultReturnValue)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_index = nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, start, (intptr_t)nova_null, (intptr_t)nova_null);
	while (l1_Nova_index >= 0)
	{
		if ((l1_Nova_index == 0 || nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index - 1)))) && (l1_Nova_index + search->nova_Nova_String_Nova_count >= this->nova_Nova_String_Nova_count || nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index + search->nova_Nova_String_Nova_count)))))
		{
			return l1_Nova_index;
		}
		l1_Nova_index = nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, l1_Nova_index + search->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	return defaultReturnValue;
}

nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_nextWord(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, nova_Nova_String* defaultReturnValue)
{
	int l1_Nova_wordStartIndex = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (nova_Nova_String*)(defaultReturnValue == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)defaultReturnValue);
	l1_Nova_wordStartIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, start, direction, (intptr_t)nova_null);
	if (l1_Nova_wordStartIndex >= 0)
	{
		int l1_Nova_wordEndIndex = 0;
		
		l1_Nova_wordEndIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(this, exceptionData, l1_Nova_wordStartIndex, direction, (intptr_t)nova_null);
		if (direction < 0)
		{
			int l2_Nova_temp = 0;
			
			l2_Nova_temp = l1_Nova_wordStartIndex + 1;
			l1_Nova_wordStartIndex = l1_Nova_wordEndIndex + 1;
			l1_Nova_wordEndIndex = l2_Nova_temp;
		}
		return nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_wordStartIndex, l1_Nova_wordEndIndex);
	}
	return defaultReturnValue;
}

char compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue)
{
	int l1_Nova_index = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? 0 : defaultReturnValue);
	l1_Nova_index = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, start, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index >= 0)
	{
		return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index);
	}
	return defaultReturnValue;
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, start, 1, direction, defaultReturnValue);
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, start, 0, direction, defaultReturnValue);
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, searchChars, start, 1, direction, defaultReturnValue);
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int opposite, int direction, int defaultReturnValue)
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

int compiler_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction, int opposite, int bound)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	opposite = (int)(opposite == (intptr_t)nova_null ? 0 : opposite);
	bound = (int)(bound == (intptr_t)nova_null ? 0 : bound);
	while (start >= 0 && start < this->nova_Nova_String_Nova_count)
	{
		char l1_Nova_c = 0;
		
		l1_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start));
		if ((nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, l1_Nova_c) || nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS, exceptionData, l1_Nova_c)) == opposite)
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

char compiler_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_String_Nova_count >= 2 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_first((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData) == '"' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_last((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData) == '"';
}

nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_input = (nova_Nova_String*)nova_null;
	
	l1_Nova_input = this;
	while (compiler_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(l1_Nova_input, exceptionData))
	{
		l1_Nova_input = nova_Nova_String_Nova_substring(l1_Nova_input, exceptionData, 1, l1_Nova_input->nova_Nova_String_Nova_count - 1);
	}
	return l1_Nova_input;
}

char compiler_util_Nova_CompilerStringFunctions_0_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int index)
{
	Context1 contextArg40 = 
	{
		&index,
	};
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(needles), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_util_Nova_CompilerStringFunctions_Nova_testLambda40, this, &contextArg40);
}

char compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int index)
{
	int l2_Nova_i = 0;
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)needle->nova_Nova_String_Nova_count; l2_Nova_i++)
	{
		if (l2_Nova_i + index >= this->nova_Nova_String_Nova_count || (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i + index) != nova_Nova_String_Nova_get(needle, exceptionData, l2_Nova_i))
		{
			return 0;
		}
	}
	return 1;
}

int compiler_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	start += direction;
	if (start > 0 && nova_Nova_String_Nova_get(value, exceptionData, start - 1) == '\\' && nova_Nova_String_Nova_get(value, exceptionData, start - 2) != '\\')
	{
		return start + direction;
	}
	return start;
}

int compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c, int start, int direction, compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance compiler_util_Nova_CompilerStringFunctions_Nova_advance, void* compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance, void* advance_context, int defaultReturnValue)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	compiler_util_Nova_CompilerStringFunctions_Nova_advance = (compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance)(compiler_util_Nova_CompilerStringFunctions_Nova_advance == 0 ? (compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance)&compiler_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck : compiler_util_Nova_CompilerStringFunctions_Nova_advance);
	compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance = (void*)(compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance == 0 ? (void*)this : compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance);
	advance_context = (void*)(advance_context == 0 ? (void*)nova_null : advance_context);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	if (start < 0 || start >= this->nova_Nova_String_Nova_count)
	{
		return (int)-1;
	}
	start = compiler_util_Nova_CompilerStringFunctions_Nova_advance(compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance, exceptionData, this, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start)), start, direction, advance_context);
	while (start >= 0 && start < this->nova_Nova_String_Nova_count)
	{
		if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start) == c)
		{
			return start;
		}
		start = compiler_util_Nova_CompilerStringFunctions_Nova_advance(compiler_util_Nova_CompilerStringFunctions_ref_Nova_advance, exceptionData, this, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start)), start, direction, advance_context);
	}
	return defaultReturnValue;
}

int compiler_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction)
{
	Context2 contextArg41 = 
	{
	};
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, '"', start, direction, (compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance)&compiler_util_Nova_CompilerStringFunctions_Nova_testLambda41, this, &contextArg41, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char start, char end, int direction, int escapeChar)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	return compiler_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(this, exceptionData, index, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (start))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (end))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), direction, escapeChar, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_String* start, nova_Nova_String* end, int direction, int escapeChar, int defaultReturnValue)
{
	int l1_Nova_scope = 0;
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	if (direction < 0)
	{
		nova_Nova_String* l1_Nova_temp = (nova_Nova_String*)nova_null;
		
		l1_Nova_temp = start;
		start = end;
		end = l1_Nova_temp;
	}
	l1_Nova_scope = (int)(0);
	while (index >= 0 && index < this->nova_Nova_String_Nova_count)
	{
		char l2_Nova_c = 0;
		
		l2_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index));
		if (l2_Nova_c == escapeChar && direction > 0)
		{
			if (index < this->nova_Nova_String_Nova_count - 1)
			{
				if (compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, start, index + 1))
				{
					index++;
				}
			}
		}
		else if (compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, start, index) && (direction > 0 || index > 0 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index - 1) != escapeChar) && (!nova_Nova_String_Nova_equals(start, exceptionData, end) || l1_Nova_scope == 0))
		{
			l1_Nova_scope++;
		}
		else if (compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, end, index) && (direction > 0 || index > 0 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index - 1) != escapeChar))
		{
			l1_Nova_scope--;
			if (l1_Nova_scope == 0)
			{
				return index;
			}
		}
		else if (l2_Nova_c == '"')
		{
			index = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(this, exceptionData, index, direction);
			if (index < 0)
			{
				break;
			}
		}
		else if (l2_Nova_c == '\'')
		{
			index = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, l2_Nova_c, index, direction, 0, 0, 0, (intptr_t)nova_null);
			if (index < 0)
			{
				break;
			}
		}
		index += direction;
	}
	return defaultReturnValue;
}

nova_datastruct_list_Nova_Array* compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int searchGenerics, int allowTrailing)
{
	nova_datastruct_list_Nova_Array* l1_Nova_strs = (nova_datastruct_list_Nova_Array*)nova_null;
	char l1_Nova_oldIndex = 0;
	char l1_Nova_index = 0;
	nova_Nova_String* l1_Nova_last = (nova_Nova_String*)nova_null;
	
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	allowTrailing = (int)(allowTrailing == (intptr_t)nova_null ? 0 : allowTrailing);
	l1_Nova_strs = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	if (nova_Nova_String_Nova_trim(this, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)->nova_Nova_String_Nova_count == 0)
	{
		return l1_Nova_strs;
	}
	l1_Nova_oldIndex = 0;
	l1_Nova_index = -1;
	while ((l1_Nova_index = (char)(compiler_util_Nova_CompilerStringFunctions_0_Nova_findCharInBaseScope(this, exceptionData, ',', l1_Nova_index + 1, searchGenerics))) >= 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_oldIndex, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)));
		l1_Nova_oldIndex = (char)(l1_Nova_index + 1);
	}
	l1_Nova_last = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_oldIndex, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	if (!allowTrailing || l1_Nova_last->nova_Nova_String_Nova_count > 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(l1_Nova_last));
	}
	return l1_Nova_strs;
}

char compiler_util_Nova_CompilerStringFunctions_0_Nova_isStrictlyOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char operator, int index)
{
	return compiler_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(this, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (operator))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), index);
}

char compiler_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int index)
{
	return index >= 0 && index < this->nova_Nova_String_Nova_count - operator->nova_Nova_String_Nova_count && !nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index - 1))) && !nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index + operator->nova_Nova_String_Nova_count)));
}

int compiler_util_Nova_CompilerStringFunctions_0_Nova_findCharInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, int start, int searchGenerics)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 1, (intptr_t)nova_null);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (needle))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	return compiler_util_Nova_CompilerStringFunctions_1_Nova_findStringInBaseScope(this, exceptionData, l1_Nova_array, start, searchGenerics, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_1_Nova_findCharInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* needles, int start, int searchGenerics)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_needle = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, needles->nova_datastruct_list_Nova_Array_Nova_count, (intptr_t)nova_null);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((needles), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_needle = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (l1_Nova_needle))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	}
	return compiler_util_Nova_CompilerStringFunctions_1_Nova_findStringInBaseScope(this, exceptionData, l1_Nova_array, start, searchGenerics, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_0_Nova_findStringInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* needle, int start, int searchGenerics, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return compiler_util_Nova_CompilerStringFunctions_1_Nova_findStringInBaseScope(this, exceptionData, generated24((compiler_util_Nova_CompilerStringFunctions*)(this), exceptionData, needle), start, searchGenerics, defaultReturnValue);
}

int compiler_util_Nova_CompilerStringFunctions_1_Nova_findStringInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int start, int searchGenerics, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	while (start < this->nova_Nova_String_Nova_count)
	{
		char l1_Nova_c = 0;
		
		l1_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start));
		if (compiler_util_Nova_CompilerStringFunctions_0_Nova_containsString(this, exceptionData, needles, start))
		{
			return start;
		}
		else if (l1_Nova_c == '"')
		{
			start = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(this, exceptionData, start, (intptr_t)nova_null) + 1;
		}
		else if (l1_Nova_c == '\'')
		{
			start = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, l1_Nova_c, start, 1, 0, 0, 0, (intptr_t)nova_null) + 1;
		}
		else if (l1_Nova_c == '(')
			{
				start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
				if (start <= 0)
				{
					return (int)-1;
				}
			}
			else if (l1_Nova_c == '[')
			{
				start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
				if (start <= 0)
				{
					return (int)-1;
				}
			}
			else if (searchGenerics && l1_Nova_c == '<')
			{
				start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
				if (start <= 0)
				{
					return (int)-1;
				}
			}
			else
			{
				start++;
			}
		}
		return defaultReturnValue;
	}
	
	int compiler_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int currentEnd, int statementEndIndex)
	{
		int l1_Nova_prevCharIndex = 0;
		int l1_Nova_nextCharIndex = 0;
		
		statementEndIndex = (int)(statementEndIndex == (intptr_t)nova_null ? currentEnd : statementEndIndex);
		currentEnd = compiler_util_Nova_CompilerStringFunctions_1_Nova_findCharInBaseScope(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_EITHER_STATEMENT_END_CHARS, currentEnd, (intptr_t)nova_null);
		if (currentEnd < 0)
		{
			if (compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, statementEndIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null) < 0)
			{
				return (int)-1;
			}
			return this->nova_Nova_String_Nova_count;
		}
		else if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, currentEnd) == ';')
		{
			return currentEnd;
		}
		l1_Nova_prevCharIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, currentEnd - 1, -1, (intptr_t)nova_null);
		l1_Nova_nextCharIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, currentEnd + 1, (intptr_t)nova_null, (intptr_t)nova_null);
		return compiler_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue(this, exceptionData, statementEndIndex, currentEnd, l1_Nova_nextCharIndex, l1_Nova_prevCharIndex);
	}
	
	int compiler_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int statementEndIndex, int currentEnd, int nextCharIndex, int prevCharIndex)
	{
		if (nextCharIndex < 0)
		{
			return (int)-1;
		}
		if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, nextCharIndex) == '{')
			{
				return nextCharIndex;
			}
			else if (compiler_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation(this, exceptionData, prevCharIndex, nextCharIndex))
			{
				return compiler_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(this, exceptionData, currentEnd + 1, statementEndIndex);
			}
			return currentEnd;
		}
		
		compiler_util_Nova_Bounds* compiler_util_Nova_CompilerStringFunctions_Nova_nextWordBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction)
		{
			int l1_Nova_index = 0;
			
			if (start < 0 || start >= this->nova_Nova_String_Nova_count)
			{
				return compiler_util_Nova_Bounds_Nova_EMPTY;
			}
			start = compiler_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(this, exceptionData, start, direction, 0, 1);
			l1_Nova_index = compiler_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex(this, exceptionData, start + direction, direction, 1, 1);
			if (direction < 0)
			{
				if (l1_Nova_index == 0)
				{
					l1_Nova_index--;
				}
				return compiler_util_Nova_Bounds_Nova_construct(0, exceptionData, l1_Nova_index + 1, start + 1);
			}
			return compiler_util_Nova_Bounds_Nova_construct(0, exceptionData, start, l1_Nova_index);
		}
		
		nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int direction)
		{
			start = (int)(start == (intptr_t)nova_null ? 0 : start);
			direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
			return compiler_util_Nova_CompilerStringFunctions_Nova_findGroupedChars(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_SYMBOLS_CHARS, start, direction);
		}
		
		nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_findGroupedChars(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars, int start, int direction)
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
				return nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_index + 1, start + 1);
			}
			return nova_Nova_String_Nova_substring(this, exceptionData, start, l1_Nova_index);
		}
		
		char compiler_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int prevCharIndex, int nextCharIndex)
		{
			compiler_util_Nova_Bounds* l1_Nova_prevWordBounds = (compiler_util_Nova_Bounds*)nova_null;
			int l1_Nova_nextNextCharIndex = 0;
			char l1_Nova_pendingCompletion = 0;
			char l1_Nova_requiresCompletion = 0;
			nova_Nova_String* l1_Nova_prevWord = (nova_Nova_String*)nova_null;
			
			l1_Nova_prevWordBounds = compiler_util_Nova_CompilerStringFunctions_Nova_nextWordBounds(this, exceptionData, prevCharIndex, -1);
			l1_Nova_nextNextCharIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(this, exceptionData, nextCharIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null), (intptr_t)nova_null, (intptr_t)nova_null);
			l1_Nova_pendingCompletion = nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_STMT_PRE_CONT_CHARS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, prevCharIndex))) && !compiler_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(this, exceptionData, prevCharIndex, l1_Nova_prevWordBounds->compiler_util_Nova_Bounds_Nova_end, -1);
			if (l1_Nova_pendingCompletion && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, prevCharIndex) == '>')
			{
				if (nova_Nova_String_Nova_equals(nova_Nova_String_Nova_substring(this, exceptionData, prevCharIndex - 1, prevCharIndex + 1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=>"))))
				{
				}
				else if (compiler_util_Nova_CompilerStringFunctions_Nova_searchGenericType(this, exceptionData, prevCharIndex, 1) != (nova_Nova_String*)nova_null)
				{
					l1_Nova_pendingCompletion = 0;
				}
			}
			l1_Nova_requiresCompletion = nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_STMT_POST_CONT_CHARS, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, nextCharIndex))) && (!compiler_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(this, exceptionData, nextCharIndex, l1_Nova_nextNextCharIndex, (intptr_t)nova_null) || nova_Nova_String_Nova_equals(compiler_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols(this, exceptionData, nextCharIndex, (intptr_t)nova_null), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-"))));
			l1_Nova_prevWord = compiler_util_Nova_Bounds_Nova_extractString(l1_Nova_prevWordBounds, exceptionData, this);
			return l1_Nova_pendingCompletion ^ l1_Nova_requiresCompletion || (nova_Nova_String_Nova_equals(l1_Nova_prevWord, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("return"))) && l1_Nova_pendingCompletion);
		}
		
		char compiler_util_Nova_CompilerStringFunctions_static_Nova_validBounds(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Bounds* bounds, int stopIndex, int direction)
		{
			return compiler_util_Nova_Bounds_Accessor_Nova_isValid(bounds, exceptionData) && (direction > 0 && bounds->compiler_util_Nova_Bounds_Nova_end < stopIndex || direction < 0 && bounds->compiler_util_Nova_Bounds_Nova_start >= stopIndex);
		}
		
		char compiler_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int stopIndex, int direction)
		{
			compiler_util_Nova_Bounds* l1_Nova_bounds = (compiler_util_Nova_Bounds*)nova_null;
			
			direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
			l1_Nova_bounds = compiler_util_Nova_CompilerStringFunctions_Nova_findStrings(this, exceptionData, compiler_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS_NO_MINUS, index, direction, 0);
			if (!compiler_util_Nova_CompilerStringFunctions_static_Nova_validBounds(0, exceptionData, l1_Nova_bounds, stopIndex, direction))
			{
				l1_Nova_bounds = compiler_util_Nova_CompilerStringFunctions_Nova_findStrings(this, exceptionData, compiler_tree_nodes_operations_Nova_Operator_Nova_MINUS, index, direction, 0);
			}
			if (compiler_util_Nova_CompilerStringFunctions_static_Nova_validBounds(0, exceptionData, l1_Nova_bounds, stopIndex, direction))
			{
				nova_Nova_String* l2_Nova_unary = (nova_Nova_String*)nova_null;
				int l2_Nova_foundSide = 0;
				char l2_Nova_correctSide = 0;
				
				l2_Nova_unary = nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_bounds->compiler_util_Nova_Bounds_Nova_start, l1_Nova_bounds->compiler_util_Nova_Bounds_Nova_end);
				l2_Nova_foundSide = -direction;
				l2_Nova_correctSide = -1;
				return l2_Nova_correctSide == l2_Nova_foundSide || l2_Nova_correctSide == compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_EITHER;
			}
			return 0;
		}
		
		compiler_util_Nova_Bounds* compiler_util_Nova_CompilerStringFunctions_Nova_findStrings(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* strings, int start, int direction, nova_datastruct_list_Nova_CharArray* scopeChecks)
		{
			start = (int)(start == (intptr_t)nova_null ? 0 : start);
			direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
			scopeChecks = (nova_datastruct_list_Nova_CharArray*)(scopeChecks == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)scopeChecks);
			while (start >= 0 && start < this->nova_Nova_String_Nova_count)
			{
				char l1_Nova_c = 0;
				nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
				nova_Nova_String* l16_Nova_str = (nova_Nova_String*)nova_null;
				
				l1_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start));
				if (scopeChecks != (nova_datastruct_list_Nova_CharArray*)nova_null)
				{
					if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '"') && l1_Nova_c == '"')
					{
						start = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingQuote(this, exceptionData, start, direction);
						if (start < 0)
						{
							return compiler_util_Nova_Bounds_Nova_EMPTY;
						}
						start += direction;
						continue;
					}
					else if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '\'') && l1_Nova_c == '\'')
					{
						start = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, l1_Nova_c, start, direction, 0, 0, 0, (intptr_t)nova_null);
						if (start < 0)
						{
							return compiler_util_Nova_Bounds_Nova_EMPTY;
						}
						start += direction;
						continue;
					}
					else if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '(') && (l1_Nova_c == '(' && direction > 0 || l1_Nova_c == ')' && direction < 0))
						{
							start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '(', ')', direction, (intptr_t)nova_null);
							if (start < 0)
							{
								return compiler_util_Nova_Bounds_Nova_EMPTY;
							}
							start += direction;
							if (start <= 0 || start >= this->nova_Nova_String_Nova_count)
							{
								return compiler_util_Nova_Bounds_Nova_EMPTY;
							}
							continue;
						}
						else if (nova_datastruct_list_Nova_CharArray_Nova_contains(scopeChecks, exceptionData, '[') && (l1_Nova_c == '[' && direction > 0 || l1_Nova_c == ']' && direction < 0))
						{
							start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this, exceptionData, start, '[', ']', direction, (intptr_t)nova_null);
							if (start < 0)
							{
								return compiler_util_Nova_Bounds_Nova_EMPTY;
							}
							start += direction;
							if (start == 0)
							{
								return compiler_util_Nova_Bounds_Nova_EMPTY;
							}
							continue;
						}
					}
					nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((strings)), exceptionData));
					while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
					{
						int l18_Nova_i = 0;
						
						l16_Nova_str = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
						l18_Nova_i = (int)(0);
						for (; l18_Nova_i < l16_Nova_str->nova_Nova_String_Nova_count && start + l18_Nova_i < this->nova_Nova_String_Nova_count; l18_Nova_i++)
						{
							if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start + l18_Nova_i) != nova_Nova_String_Nova_get(l16_Nova_str, exceptionData, l18_Nova_i))
							{
								break;
							}
							if (l18_Nova_i == l16_Nova_str->nova_Nova_String_Nova_count - 1)
							{
								return compiler_util_Nova_Bounds_Nova_construct(0, exceptionData, start, start + l16_Nova_str->nova_Nova_String_Nova_count);
							}
						}
					}
					start += direction;
				}
				return compiler_util_Nova_Bounds_Nova_EMPTY;
			}
			
			nova_Nova_String* compiler_util_Nova_CompilerStringFunctions_Nova_searchGenericType(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int backwards)
			{
				backwards = (int)(backwards == (intptr_t)nova_null ? 1 : backwards);
				if (backwards)
				{
					char l1_Nova_stack = 0;
					char l1_Nova_index = 0;
					int l3_Nova_i = 0;
					
					l1_Nova_stack = 0;
					l1_Nova_index = 0;
					l3_Nova_i = start;
					for (; l3_Nova_i >= 0; l3_Nova_i--)
					{
						nova_Nova_String* l3_Nova_c = (nova_Nova_String*)nova_null;
						
						l3_Nova_c = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
						if (nova_Nova_String_Nova_equals(l3_Nova_c, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"))))
						{
							l1_Nova_index = (char)((int)(l1_Nova_stack == 0 ? l3_Nova_i : (int)l1_Nova_index));
							l1_Nova_stack++;
						}
						else if (nova_Nova_String_Nova_equals(l3_Nova_c, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))))
						{
							l1_Nova_stack--;
						}
						if (l1_Nova_stack == 0)
						{
							if (l1_Nova_index > 0)
							{
								return nova_Nova_String_Nova_substring(this, exceptionData, l3_Nova_i + 1, l1_Nova_index);
							}
							return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
						}
					}
				}
				else
				{
					THROW(11, compiler_error_Nova_UnimplementedOperationException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("forwards checking not implemented yet... Looks like its time to do that."))));
				}
				return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
			}
			
			int compiler_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start)
			{
				start = (int)(start == (intptr_t)nova_null ? 0 : start);
				return compiler_util_Nova_CompilerStringFunctions_0_Nova_findCharInBaseScope(this, exceptionData, '.', start, (intptr_t)nova_null);
			}
			
			char compiler_util_Nova_CompilerStringFunctions_Nova_testLambda40(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context)
			{
				return compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, _1, (*context->compiler_util_Nova_CompilerStringFunctions_Nova_index));
			}
			
			int compiler_util_Nova_CompilerStringFunctions_Nova_testLambda41(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context)
			{
				i += dir;
				if (dir > 0 && i < str->nova_Nova_String_Nova_count - 3 && nova_Nova_String_Nova_get(str, exceptionData, i) == '#' && nova_Nova_String_Nova_get(str, exceptionData, i + 1) == '{')
					{
						return (int)((i = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(str, exceptionData, '}', i + dir, dir, 0, 0, 0, (intptr_t)nova_null)) >= 0 ? i + dir : i);
				}
				return compiler_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(0, exceptionData, str, c, i - dir, dir);
			}
			
			nova_datastruct_list_Nova_Array* generated24(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0)
			{
				nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
				
				l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 1);
				l1_Nova_temp[0] = value0;
				return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
			}
			
			char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_Nova_matches(this, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[A-Za-z_][A-Za-z0-9_]*"))));
			}
			
			
			char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isNumber(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_Nova_matches(this, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[0-9]+"))));
			}
			
			
			compiler_tree_Nova_StatementIterator* compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_statements(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return compiler_tree_Nova_StatementIterator_Nova_construct(0, exceptionData, this);
			}
			
			
			void compiler_util_Nova_CompilerStringFunctions_Nova_super(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
			}
			
						