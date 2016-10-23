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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String haystack */ nova_Nova_String** compiler_util_Nova_StringUtils_Nova_haystack;
	/* Int index = 0 */ int* compiler_util_Nova_StringUtils_Nova_index;
} Context1;
typedef struct
{
} Context2;


compiler_util_StringUtils_Extension_VTable compiler_util_StringUtils_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



nova_datastruct_list_Nova_CharArray* generated10(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_util_Nova_StringUtils_static_Nova_testLambda23(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context);
int compiler_util_Nova_StringUtils_static_Nova_testLambda24(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context);
nova_datastruct_list_Nova_CharArray* compiler_util_Nova_StringUtils_Nova_WHITESPACE;
void compiler_util_Nova_StringUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_util_Nova_StringUtils_Nova_WHITESPACE = generated10(0, exceptionData);
	}
}

compiler_util_Nova_StringUtils* compiler_util_Nova_StringUtils_Nova_construct(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_util_Nova_StringUtils, this,);
	this->vtable = &compiler_util_StringUtils_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_StringUtils_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_StringUtils_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_util_Nova_StringUtils_Nova_destroy(compiler_util_Nova_StringUtils** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

char compiler_util_Nova_StringUtils_static_Nova_isSurroundedByQuotes(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return input->nova_Nova_String_Nova_count >= 2 && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_first((nova_datastruct_list_Nova_CharArray*)(input->nova_Nova_String_Nova_chars), exceptionData) == '"' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(input->nova_Nova_String_Nova_chars), exceptionData) == '"';
}

nova_Nova_String* compiler_util_Nova_StringUtils_static_Nova_removeSurroundingQuotes(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	while (compiler_util_Nova_StringUtils_static_Nova_isSurroundedByQuotes(0, exceptionData, input))
	{
		input = nova_Nova_String_Nova_substring(input, exceptionData, 1, input->nova_Nova_String_Nova_count - 1);
	}
	return input;
}

char compiler_util_Nova_StringUtils_0_static_Nova_containsString(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* haystack, nova_datastruct_list_Nova_Array* needles, int index)
{
	Context1 contextArg23 = 
	{
		&haystack,
		&index,
	};
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(needles), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_util_Nova_StringUtils_static_Nova_testLambda23, nova_null, &contextArg23);
}

char compiler_util_Nova_StringUtils_1_static_Nova_containsString(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* haystack, nova_Nova_String* needle, int index)
{
	int l2_Nova_i = 0;
	
	index = (int)(index == (intptr_t)nova_null ? 0 : index);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)needle->nova_Nova_String_Nova_count; l2_Nova_i++)
	{
		if (l2_Nova_i + index >= haystack->nova_Nova_String_Nova_count || nova_Nova_String_Nova_get(haystack, exceptionData, l2_Nova_i + index) != nova_Nova_String_Nova_get(needle, exceptionData, l2_Nova_i))
		{
			return 0;
		}
	}
	return 1;
}

int compiler_util_Nova_StringUtils_static_Nova_defaultCharacterCheck(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	start += direction;
	if (start > 0 && nova_Nova_String_Nova_get(value, exceptionData, start - 1) == '\\' && nova_Nova_String_Nova_get(value, exceptionData, start - 2) != '\\')
	{
		return start + direction;
	}
	return start;
}

int compiler_util_Nova_StringUtils_static_Nova_findEndingChar(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, char c, int start, int direction, compiler_util_Nova_StringUtils_closure3_Nova_advance compiler_util_Nova_StringUtils_Nova_advance, void* compiler_util_Nova_StringUtils_ref_Nova_advance, void* advance_context, int defaultReturnValue)
{
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	compiler_util_Nova_StringUtils_Nova_advance = (compiler_util_Nova_StringUtils_closure3_Nova_advance)(compiler_util_Nova_StringUtils_Nova_advance == 0 ? (compiler_util_Nova_StringUtils_closure3_Nova_advance)&compiler_util_Nova_StringUtils_static_Nova_defaultCharacterCheck : compiler_util_Nova_StringUtils_Nova_advance);
	compiler_util_Nova_StringUtils_ref_Nova_advance = (void*)(compiler_util_Nova_StringUtils_ref_Nova_advance == 0 ? (void*)nova_null : compiler_util_Nova_StringUtils_ref_Nova_advance);
	advance_context = (void*)(advance_context == 0 ? (void*)nova_null : advance_context);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	if (start < 0 || start >= value->nova_Nova_String_Nova_count)
	{
		return (int)-1;
	}
	start = compiler_util_Nova_StringUtils_Nova_advance(compiler_util_Nova_StringUtils_ref_Nova_advance, exceptionData, value, nova_Nova_String_Nova_get(value, exceptionData, start), start, direction, advance_context);
	while (start >= 0 && start < value->nova_Nova_String_Nova_count)
	{
		if (nova_Nova_String_Nova_get(value, exceptionData, start) == c)
		{
			return start;
		}
		start = compiler_util_Nova_StringUtils_Nova_advance(compiler_util_Nova_StringUtils_ref_Nova_advance, exceptionData, value, nova_Nova_String_Nova_get(value, exceptionData, start), start, direction, advance_context);
	}
	return defaultReturnValue;
}

int compiler_util_Nova_StringUtils_static_Nova_findEndingQuote(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, int start, int direction)
{
	Context2 contextArg24 = 
	{
	};
	
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return compiler_util_Nova_StringUtils_static_Nova_findEndingChar(0, exceptionData, value, '"', start, direction, (compiler_util_Nova_StringUtils_closure3_Nova_advance)&compiler_util_Nova_StringUtils_static_Nova_testLambda24, nova_null, &contextArg24, (intptr_t)nova_null);
}

int compiler_util_Nova_StringUtils_0_static_Nova_findEndingMatch(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int index, char start, char end, int escapeChar, int direction)
{
	escapeChar = (int)(escapeChar == (intptr_t)nova_null ? '\0' : escapeChar);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	return compiler_util_Nova_StringUtils_1_static_Nova_findEndingMatch(0, exceptionData, str, index, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (start))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (end))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), escapeChar, direction, (intptr_t)nova_null);
}

int compiler_util_Nova_StringUtils_1_static_Nova_findEndingMatch(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int index, nova_Nova_String* start, nova_Nova_String* end, int escapeChar, int direction, int defaultReturnValue)
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
	while (index >= 0 && index < str->nova_Nova_String_Nova_count)
	{
		char l2_Nova_c = 0;
		
		l2_Nova_c = nova_Nova_String_Nova_get(str, exceptionData, index);
		if (l2_Nova_c == escapeChar && direction > 0)
		{
			if (index < str->nova_Nova_String_Nova_count - 1)
			{
				if (compiler_util_Nova_StringUtils_1_static_Nova_containsString(0, exceptionData, str, start, index + 1))
				{
					index++;
				}
			}
		}
		else if (compiler_util_Nova_StringUtils_1_static_Nova_containsString(0, exceptionData, str, start, index) && (direction > 0 || index > 0 && nova_Nova_String_Nova_get(str, exceptionData, index - 1) != escapeChar) && (!nova_Nova_String_Nova_equals(start, exceptionData, end) || l1_Nova_scope == 0))
		{
			l1_Nova_scope++;
		}
		else if (compiler_util_Nova_StringUtils_1_static_Nova_containsString(0, exceptionData, str, end, index) && (direction > 0 || index > 0 && nova_Nova_String_Nova_get(str, exceptionData, index - 1) != escapeChar))
		{
			l1_Nova_scope--;
			if (l1_Nova_scope == 0)
			{
				return index;
			}
		}
		else if (l2_Nova_c == '"')
		{
			index = compiler_util_Nova_StringUtils_static_Nova_findEndingQuote(0, exceptionData, str, index, direction);
			if (index < 0)
			{
				break;
			}
		}
		else if (l2_Nova_c == '\'')
		{
			index = compiler_util_Nova_StringUtils_static_Nova_findEndingChar(0, exceptionData, str, l2_Nova_c, index, direction, 0, 0, 0, (intptr_t)nova_null);
			if (index < 0)
			{
				break;
			}
		}
		index += direction;
	}
	return defaultReturnValue;
}

void compiler_util_Nova_StringUtils_Nova_this(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_CharArray* generated10(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\t';
	l1_Nova_temp[2] = '\n';
	l1_Nova_temp[3] = '\r';
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
}

char compiler_util_Nova_StringUtils_static_Nova_testLambda23(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context)
{
	return compiler_util_Nova_StringUtils_1_static_Nova_containsString(0, exceptionData, (*context->compiler_util_Nova_StringUtils_Nova_haystack), _1, (*context->compiler_util_Nova_StringUtils_Nova_index));
}

int compiler_util_Nova_StringUtils_static_Nova_testLambda24(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, char c, int i, int dir, Context2* context)
{
	i += dir;
	if (dir > 0 && i < str->nova_Nova_String_Nova_count - 3 && nova_Nova_String_Nova_get(str, exceptionData, i) == '#' && nova_Nova_String_Nova_get(str, exceptionData, i + 1) == '{')
		{
			return (int)((i = compiler_util_Nova_StringUtils_static_Nova_findEndingChar(0, exceptionData, str, '}', i + dir, dir, 0, 0, 0, (intptr_t)nova_null)) >= 0 ? i + dir : i);
	}
	return compiler_util_Nova_StringUtils_static_Nova_defaultCharacterCheck(0, exceptionData, str, c, i - dir, dir);
}

void compiler_util_Nova_StringUtils_Nova_super(compiler_util_Nova_StringUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

