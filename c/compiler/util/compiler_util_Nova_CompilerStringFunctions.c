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

typedef struct
{
	/* Int index = 0 */ int* compiler_util_Nova_CompilerStringFunctions_Nova_index;
} Context1;
typedef struct
{
} Context2;





nova_datastruct_list_Nova_CharArray* generated11(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_CompilerStringFunctions_Nova_testLambda23(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context);
int compiler_util_Nova_CompilerStringFunctions_Nova_testLambda24(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context);

nova_datastruct_list_Nova_CharArray* compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE;
void compiler_util_Nova_CompilerStringFunctions_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE = generated11(0, exceptionData);
	}
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
	l1_Nova_index = nova_Nova_String_1_Nova_indexOf(this, exceptionData, search, start, (intptr_t)nova_null, (intptr_t)nova_null);
	while (l1_Nova_index >= 0)
	{
		if ((l1_Nova_index == 0 || nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index - 1)))) && (l1_Nova_index + search->nova_Nova_String_Nova_count >= this->nova_Nova_String_Nova_count || nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index + search->nova_Nova_String_Nova_count)))))
		{
			return l1_Nova_index;
		}
		l1_Nova_index = nova_Nova_String_1_Nova_indexOf(this, exceptionData, search, l1_Nova_index + search->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	return defaultReturnValue;
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, start, 1, defaultReturnValue);
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(this, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_WHITESPACE, start, 0, defaultReturnValue);
}

int compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* searchChars, int start, int opposite, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	opposite = (int)(opposite == (intptr_t)nova_null ? 0 : opposite);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	while (start < this->nova_Nova_String_Nova_count && nova_datastruct_list_Nova_CharArray_Nova_contains(searchChars, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start))) == opposite)
	{
		start++;
	}
	if (start <= this->nova_Nova_String_Nova_count)
	{
		return start;
	}
	return defaultReturnValue;
}

char compiler_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_String_Nova_count >= 2 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_first((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData) == '"' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData) == '"';
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
	Context1 contextArg23 = 
	{
		&index,
	};
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(needles), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_util_Nova_CompilerStringFunctions_Nova_testLambda23, this, &contextArg23);
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
	Context2 contextArg24 = 
	{
	};
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(this, exceptionData, '"', start, direction, (compiler_util_Nova_CompilerStringFunctions_closure1_Nova_advance)&compiler_util_Nova_CompilerStringFunctions_Nova_testLambda24, this, &contextArg24, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char start, char end, int escapeChar, int direction)
{
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return compiler_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(this, exceptionData, index, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (start))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (end))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), escapeChar, direction, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_String* start, nova_Nova_String* end, int escapeChar, int direction, int defaultReturnValue)
{
	int l1_Nova_scope = 0;
	
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
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

nova_datastruct_list_Nova_Array* compiler_util_Nova_CompilerStringFunctions_Nova_splitCommas(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int searchGenerics, int allowTrailing)
{
	nova_datastruct_list_Nova_Array* l1_Nova_strs = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_oldIndex = 0;
	int l1_Nova_index = 0;
	nova_Nova_String* l1_Nova_last = (nova_Nova_String*)nova_null;
	
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	allowTrailing = (int)(allowTrailing == (intptr_t)nova_null ? 0 : allowTrailing);
	l1_Nova_strs = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_oldIndex = (int)(0);
	l1_Nova_index = (int)(-1);
	while ((l1_Nova_index = compiler_util_Nova_CompilerStringFunctions_Nova_findCharInBaseScope(this, exceptionData, ',', l1_Nova_index + 1, searchGenerics)) >= 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_oldIndex, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)));
		l1_Nova_oldIndex = l1_Nova_index + 1;
	}
	l1_Nova_last = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_oldIndex, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	if (!allowTrailing || l1_Nova_last->nova_Nova_String_Nova_count > 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(l1_Nova_last));
	}
	return l1_Nova_strs;
}

int compiler_util_Nova_CompilerStringFunctions_Nova_findCharInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c, int start, int searchGenerics)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 1);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (c))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	return compiler_util_Nova_CompilerStringFunctions_Nova_findStringInBaseScope(this, exceptionData, l1_Nova_array, start, searchGenerics, (intptr_t)nova_null);
}

int compiler_util_Nova_CompilerStringFunctions_Nova_findStringInBaseScope(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* needles, int start, int searchGenerics, int defaultReturnValue)
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
	
	nova_datastruct_list_Nova_CharArray* generated11(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		char* l1_Nova_temp = (char*)nova_null;
		
		l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
		l1_Nova_temp[0] = ' ';
		l1_Nova_temp[1] = '\t';
		l1_Nova_temp[2] = '\n';
		l1_Nova_temp[3] = '\r';
		return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
	}
	
	char compiler_util_Nova_CompilerStringFunctions_Nova_testLambda23(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context)
	{
		return compiler_util_Nova_CompilerStringFunctions_1_Nova_containsString(this, exceptionData, _1, (*context->compiler_util_Nova_CompilerStringFunctions_Nova_index));
	}
	
	int compiler_util_Nova_CompilerStringFunctions_Nova_testLambda24(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context)
	{
		i += dir;
		if (dir > 0 && i < str->nova_Nova_String_Nova_count - 3 && nova_Nova_String_Nova_get(str, exceptionData, i) == '#' && nova_Nova_String_Nova_get(str, exceptionData, i + 1) == '{')
			{
				return (int)((i = compiler_util_Nova_CompilerStringFunctions_Nova_findEndingChar(str, exceptionData, '}', i + dir, dir, 0, 0, 0, (intptr_t)nova_null)) >= 0 ? i + dir : i);
		}
		return compiler_util_Nova_CompilerStringFunctions_static_Nova_defaultCharacterCheck(0, exceptionData, str, c, i - dir, dir);
	}
	
	char compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return nova_Nova_String_Nova_matches(this, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[A-Za-z_][A-Za-z0-9_]*"))));
	}
	
	
	void compiler_util_Nova_CompilerStringFunctions_Nova_super(compiler_util_Nova_CompilerStringFunctions* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
	}
	
		