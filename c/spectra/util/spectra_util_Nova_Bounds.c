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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



spectra_util_Bounds_Extension_VTable spectra_util_Bounds_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))spectra_util_Nova_Bounds_Nova_equals,
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
	spectra_util_Nova_Bounds_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};







spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_EMPTY;
void spectra_util_Nova_Bounds_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_util_Nova_Bounds_Nova_EMPTY = spectra_util_Nova_Bounds_Nova_construct(0, exceptionData, -1, -1);
	}
}

spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_construct(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	CCLASS_NEW(spectra_util_Nova_Bounds, this,);
	this->vtable = &spectra_util_Bounds_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_util_Nova_Bounds_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_Bounds_Nova_this(this, exceptionData, start, end);
	}
	
	return this;
}

void spectra_util_Nova_Bounds_Nova_destroy(spectra_util_Nova_Bounds** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void spectra_util_Nova_Bounds_Nova_this(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? 0 : end);
	this->spectra_util_Nova_Bounds_Nova_start = start;
	this->spectra_util_Nova_Bounds_Nova_end = end;
}

nova_Nova_String* spectra_util_Nova_Bounds_Nova_extractString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(spectra_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, this->spectra_util_Nova_Bounds_Nova_start, this->spectra_util_Nova_Bounds_Nova_end) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* spectra_util_Nova_Bounds_Nova_extractPreString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(spectra_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, 0, this->spectra_util_Nova_Bounds_Nova_start) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* spectra_util_Nova_Bounds_Nova_extractPostString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(spectra_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, this->spectra_util_Nova_Bounds_Nova_end, (intptr_t)nova_null) : source);
}

nova_Nova_String* spectra_util_Nova_Bounds_Nova_trimString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(spectra_util_Nova_Bounds_Accessor_Nova_isValid(this, exceptionData) ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_util_Nova_Bounds_Nova_extractPreString(this, exceptionData, source)), exceptionData, spectra_util_Nova_Bounds_Nova_extractPostString(this, exceptionData, source)) : source);
}

spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_invalidate(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_util_Nova_Bounds_Nova_start = (int)(this->spectra_util_Nova_Bounds_Nova_end = (int)(-1));
	return this;
}

char spectra_util_Nova_Bounds_Nova_equals(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds)
{
	return bounds != (spectra_util_Nova_Bounds*)nova_null && bounds->spectra_util_Nova_Bounds_Nova_start == this->spectra_util_Nova_Bounds_Nova_start && bounds->spectra_util_Nova_Bounds_Nova_end == this->spectra_util_Nova_Bounds_Nova_end;
}

nova_Nova_String* spectra_util_Nova_Bounds_Nova_toString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("["))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->spectra_util_Nova_Bounds_Nova_start)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->spectra_util_Nova_Bounds_Nova_end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]"))))));
}

void spectra_util_Nova_Bounds_Nova_cloneTo(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds)
{
	bounds->spectra_util_Nova_Bounds_Nova_start = this->spectra_util_Nova_Bounds_Nova_start;
	bounds->spectra_util_Nova_Bounds_Nova_end = this->spectra_util_Nova_Bounds_Nova_end;
}

spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_clone(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_util_Nova_Bounds_Nova_construct(0, exceptionData, this->spectra_util_Nova_Bounds_Nova_start, this->spectra_util_Nova_Bounds_Nova_end);
}

int spectra_util_Nova_Bounds_Accessor_Nova_count(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Bounds_Nova_end - this->spectra_util_Nova_Bounds_Nova_start;
}


char spectra_util_Nova_Bounds_Accessor_Nova_isValid(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Bounds_Nova_start >= 0 && this->spectra_util_Nova_Bounds_Nova_end > 0;
}


char spectra_util_Nova_Bounds_Accessor_Nova_isEndless(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Bounds_Nova_end < 0;
}


char spectra_util_Nova_Bounds_Accessor_Nova_isOptional(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Bounds_Nova_start == 0;
}


void spectra_util_Nova_Bounds_Nova_super(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_util_Nova_Bounds_Nova_start = 0;
	this->spectra_util_Nova_Bounds_Nova_end = 0;
}

