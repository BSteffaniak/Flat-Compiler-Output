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
#include <compiler/util/compiler_util_Nova_StringUtils.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_util_SyntaxUtils_Extension_VTable compiler_util_SyntaxUtils_Extension_VTable_val =
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


void compiler_util_Nova_SyntaxUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_util_Nova_SyntaxUtils* compiler_util_Nova_SyntaxUtils_Nova_construct(compiler_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_util_Nova_SyntaxUtils, this,);
	this->vtable = &compiler_util_SyntaxUtils_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_SyntaxUtils_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_SyntaxUtils_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_util_Nova_SyntaxUtils_Nova_destroy(compiler_util_Nova_SyntaxUtils** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

int compiler_util_Nova_SyntaxUtils_static_Nova_findStringInBaseScope(compiler_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* haystack, nova_datastruct_list_Nova_Array* needles, int start, int searchGenerics, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	searchGenerics = (int)(searchGenerics == (intptr_t)nova_null ? 0 : searchGenerics);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	while (start < haystack->nova_Nova_String_Nova_count)
	{
		char l1_Nova_c = 0;
		
		l1_Nova_c = nova_Nova_String_Nova_get(haystack, exceptionData, start);
		if (compiler_util_Nova_StringUtils_0_static_Nova_containsString(0, exceptionData, haystack, needles, start))
		{
			return start;
		}
		else if (l1_Nova_c == '"')
		{
			start = compiler_util_Nova_StringUtils_static_Nova_findEndingQuote(0, exceptionData, haystack, start, (intptr_t)nova_null) + 1;
		}
		else if (l1_Nova_c == '\'')
		{
			start = compiler_util_Nova_StringUtils_static_Nova_findEndingChar(0, exceptionData, haystack, l1_Nova_c, start, 1, 0, 0, 0, (intptr_t)nova_null) + 1;
		}
		else if (l1_Nova_c == '(')
			{
				start = compiler_util_Nova_StringUtils_0_static_Nova_findEndingMatch(0, exceptionData, haystack, start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
				if (start <= 0)
				{
					return (int)-1;
				}
			}
			else if (l1_Nova_c == '[')
			{
				start = compiler_util_Nova_StringUtils_0_static_Nova_findEndingMatch(0, exceptionData, haystack, start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
				if (start <= 0)
				{
					return (int)-1;
				}
			}
			else if (searchGenerics && l1_Nova_c == '<')
			{
				start = compiler_util_Nova_StringUtils_0_static_Nova_findEndingMatch(0, exceptionData, haystack, start, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null) + 1;
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
	
	char compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(compiler_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, nova_Nova_Class* clazz)
	{
		return 0;
	}
	
	void compiler_util_Nova_SyntaxUtils_Nova_this(compiler_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
	}
	
	void compiler_util_Nova_SyntaxUtils_Nova_super(compiler_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
	}
	
		