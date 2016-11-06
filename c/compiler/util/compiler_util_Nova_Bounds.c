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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_util_Bounds_Extension_VTable compiler_util_Bounds_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))compiler_util_Nova_Bounds_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	compiler_util_Nova_Bounds_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};







compiler_util_Nova_Bounds* compiler_util_Nova_Bounds_Nova_EMPTY;
void compiler_util_Nova_Bounds_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_util_Nova_Bounds_Nova_EMPTY = compiler_util_Nova_Bounds_Nova_construct(0, exceptionData, -1, -1);
	}
}

compiler_util_Nova_Bounds* compiler_util_Nova_Bounds_Nova_construct(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	CCLASS_NEW(compiler_util_Nova_Bounds, this,);
	this->vtable = &compiler_util_Bounds_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_Bounds_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_Bounds_Nova_this(this, exceptionData, start, end);
	}
	
	return this;
}

void compiler_util_Nova_Bounds_Nova_destroy(compiler_util_Nova_Bounds** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void compiler_util_Nova_Bounds_Nova_this(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? 0 : end);
	this->compiler_util_Nova_Bounds_Nova_start = start;
	this->compiler_util_Nova_Bounds_Nova_end = end;
}

nova_Nova_String* compiler_util_Nova_Bounds_Nova_extractString(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(compiler_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_Nova_substring(source, exceptionData, this->compiler_util_Nova_Bounds_Nova_start, this->compiler_util_Nova_Bounds_Nova_end) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* compiler_util_Nova_Bounds_Nova_extractPreString(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(compiler_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_Nova_substring(source, exceptionData, 0, this->compiler_util_Nova_Bounds_Nova_start) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* compiler_util_Nova_Bounds_Nova_extractPostString(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(compiler_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? nova_Nova_String_Nova_substring(source, exceptionData, this->compiler_util_Nova_Bounds_Nova_end, (intptr_t)nova_null) : source);
}

nova_Nova_String* compiler_util_Nova_Bounds_Nova_trimString(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(compiler_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_util_Nova_Bounds_Nova_extractPreString(this, exceptionData, source)), exceptionData, compiler_util_Nova_Bounds_Nova_extractPostString(this, exceptionData, source)) : source);
}

compiler_util_Nova_Bounds* compiler_util_Nova_Bounds_Nova_invalidate(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_util_Nova_Bounds_Nova_start = (int)(this->compiler_util_Nova_Bounds_Nova_end = (int)(-1));
	return this;
}

char compiler_util_Nova_Bounds_Nova_equals(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Bounds* bounds)
{
	return (nova_Nova_Object*)bounds != (nova_Nova_Object*)(compiler_util_Nova_Bounds*)nova_null && bounds->compiler_util_Nova_Bounds_Nova_start == this->compiler_util_Nova_Bounds_Nova_start && bounds->compiler_util_Nova_Bounds_Nova_end == this->compiler_util_Nova_Bounds_Nova_end;
}

nova_Nova_String* compiler_util_Nova_Bounds_Nova_toString(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("["))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->compiler_util_Nova_Bounds_Nova_start)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->compiler_util_Nova_Bounds_Nova_end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]"))))));
}

void compiler_util_Nova_Bounds_Nova_cloneTo(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Bounds* bounds)
{
	bounds->compiler_util_Nova_Bounds_Nova_start = this->compiler_util_Nova_Bounds_Nova_start;
	bounds->compiler_util_Nova_Bounds_Nova_end = this->compiler_util_Nova_Bounds_Nova_end;
}

compiler_util_Nova_Bounds* compiler_util_Nova_Bounds_Nova_clone(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_util_Nova_Bounds_Nova_construct(0, exceptionData, this->compiler_util_Nova_Bounds_Nova_start, this->compiler_util_Nova_Bounds_Nova_end);
}

int compiler_util_Nova_Bounds_Accessor_Nova_count(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Bounds_Nova_end - this->compiler_util_Nova_Bounds_Nova_start;
}


char compiler_util_Nova_Bounds_Accessor_Nova_isValid(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Bounds_Nova_start >= 0 && this->compiler_util_Nova_Bounds_Nova_end > 0;
}


char compiler_util_Nova_Bounds_Accessor_Nova_isEndless(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Bounds_Nova_end < 0;
}


char compiler_util_Nova_Bounds_Accessor_Nova_isOptional(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Bounds_Nova_start == 0;
}


void compiler_util_Nova_Bounds_Nova_super(compiler_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_util_Nova_Bounds_Nova_start = 0;
	this->compiler_util_Nova_Bounds_Nova_end = 0;
}

