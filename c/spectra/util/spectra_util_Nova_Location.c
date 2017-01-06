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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



spectra_util_Nova_Location* spectra_util_Nova_Location_Nova_INVALID;
void spectra_util_Nova_Location_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_util_Nova_Location_Nova_INVALID = spectra_util_Nova_Location_2_Nova_construct(0, exceptionData, 0, 0, 0, 0);
	}
}

spectra_util_Nova_Location* spectra_util_Nova_Location_0_Nova_construct(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_util_Nova_Location, this,);
	this->vtable = &spectra_util_Location_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_util_Nova_Location_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_Location_Nova_this(this, exceptionData);
	}
	
	return this;
}

spectra_util_Nova_Location* spectra_util_Nova_Location_1_Nova_construct(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* loc)
{
	CCLASS_NEW(spectra_util_Nova_Location, this,);
	this->vtable = &spectra_util_Location_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_util_Nova_Location_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_Location_0_Nova_this(this, exceptionData, loc);
	}
	
	return this;
}

spectra_util_Nova_Location* spectra_util_Nova_Location_2_Nova_construct(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end)
{
	CCLASS_NEW(spectra_util_Nova_Location, this,);
	this->vtable = &spectra_util_Location_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_util_Nova_Location_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_Location_1_Nova_this(this, exceptionData, lineNumber, offset, start, end);
	}
	
	return this;
}

void spectra_util_Nova_Location_Nova_destroy(spectra_util_Nova_Location** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	nova_datastruct_Nova_Bounds_Nova_destroy(&(*this)->spectra_util_Nova_Location_Nova_bounds, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_util_Nova_Location_Nova_this(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_util_Nova_Location_Nova_bounds = nova_datastruct_Nova_Bounds_Nova_construct(0, exceptionData, 0, 0);
}

void spectra_util_Nova_Location_0_Nova_this(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* loc)
{
	spectra_util_Nova_Location_1_Nova_this(this, exceptionData, 0, loc->spectra_util_Nova_Location_Nova_offset, loc->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start, loc->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end);
}

void spectra_util_Nova_Location_1_Nova_this(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end)
{
	spectra_util_Nova_Location_Nova_this(this, exceptionData);
	this->spectra_util_Nova_Location_Nova_offset = offset;
	this->spectra_util_Nova_Location_Nova_lineNumber = lineNumber;
	spectra_util_Nova_Location_1_Nova_setBounds(this, exceptionData, start, end);
}

void spectra_util_Nova_Location_Nova_setLineNumber(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber)
{
	this->spectra_util_Nova_Location_Nova_lineNumber = lineNumber;
}

int spectra_util_Nova_Location_Nova_getStart(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start;
}

int spectra_util_Nova_Location_Nova_getEnd(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end;
}

void spectra_util_Nova_Location_Nova_setOffset(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int offset)
{
	this->spectra_util_Nova_Location_Nova_offset = offset;
}

void spectra_util_Nova_Location_Nova_addOffset(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->spectra_util_Nova_Location_Nova_offset += amount;
}

void spectra_util_Nova_Location_Nova_subtractOffset(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->spectra_util_Nova_Location_Nova_offset -= amount;
}

void spectra_util_Nova_Location_0_Nova_setBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds)
{
	this->spectra_util_Nova_Location_Nova_bounds = bounds;
}

void spectra_util_Nova_Location_1_Nova_setBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start = start;
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end = end;
}

void spectra_util_Nova_Location_0_Nova_addBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start += amount;
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end += amount;
}

void spectra_util_Nova_Location_Nova_moveBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount)
{
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start += startAmount;
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end += endAmount;
}

void spectra_util_Nova_Location_0_Nova_subtractBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount)
{
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start -= startAmount;
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end -= endAmount;
}

void spectra_util_Nova_Location_1_Nova_subtractBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start -= amount;
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end -= amount;
}

void spectra_util_Nova_Location_1_Nova_addBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount)
{
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start += startAmount;
	this->spectra_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end += endAmount;
}

char spectra_util_Nova_Location_Nova_isValid(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_util_Nova_Location_Nova_lineNumber > 0;
}

spectra_util_Nova_Location* spectra_util_Nova_Location_Nova_asNew(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_util_Nova_Location_1_Nova_construct(0, exceptionData, this);
}

nova_Nova_String* spectra_util_Nova_Location_Nova_toString(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Line ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->spectra_util_Nova_Location_Nova_lineNumber)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->spectra_util_Nova_Location_Nova_bounds)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
}

void spectra_util_Nova_Location_Nova_super(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_util_Nova_Location_Nova_lineNumber = 0;
	this->spectra_util_Nova_Location_Nova_offset = 0;
	this->spectra_util_Nova_Location_Nova_bounds = (nova_datastruct_Nova_Bounds*)nova_null;
}

void spectra_util_Nova_LocationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_util_Nova_LocationFunctionMap* spectra_util_Nova_LocationFunctionMap_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_util_Nova_LocationFunctionMap, this,);
	this->vtable = &spectra_util_Location_LocationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_util_Nova_LocationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_LocationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_util_Nova_LocationFunctionMap_Nova_destroy(spectra_util_Nova_LocationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_util_Nova_LocationFunctionMap_Nova_this(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMapLocationFunctionMap0_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_util_Nova_Location_0_Nova_construct(0, exceptionData);
}

spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMapLocationFunctionMap1_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* loc)
{
	return spectra_util_Nova_Location_1_Nova_construct(0, exceptionData, loc);
}

spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMapLocationFunctionMap2_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end)
{
	return spectra_util_Nova_Location_2_Nova_construct(0, exceptionData, lineNumber, offset, start, end);
}

void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_setLineNumber(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int lineNumber)
{
	spectra_util_Nova_Location_Nova_setLineNumber(reference, exceptionData, lineNumber);
}

int spectra_util_Nova_LocationFunctionMap_functionMap_Nova_getStart(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference)
{
	return spectra_util_Nova_Location_Nova_getStart(reference, exceptionData);
}

int spectra_util_Nova_LocationFunctionMap_functionMap_Nova_getEnd(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference)
{
	return spectra_util_Nova_Location_Nova_getEnd(reference, exceptionData);
}

void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_setOffset(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int offset)
{
	spectra_util_Nova_Location_Nova_setOffset(reference, exceptionData, offset);
}

void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_addOffset(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount)
{
	spectra_util_Nova_Location_Nova_addOffset(reference, exceptionData, amount);
}

void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_subtractOffset(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount)
{
	spectra_util_Nova_Location_Nova_subtractOffset(reference, exceptionData, amount);
}

void spectra_util_Nova_LocationFunctionMap_functionMap0_Nova_setBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, nova_datastruct_Nova_Bounds* bounds)
{
	spectra_util_Nova_Location_0_Nova_setBounds(reference, exceptionData, bounds);
}

void spectra_util_Nova_LocationFunctionMap_functionMap1_Nova_setBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int start, int end)
{
	spectra_util_Nova_Location_1_Nova_setBounds(reference, exceptionData, start, end);
}

void spectra_util_Nova_LocationFunctionMap_functionMap0_Nova_addBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount)
{
	spectra_util_Nova_Location_0_Nova_addBounds(reference, exceptionData, amount);
}

void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_moveBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int startAmount, int endAmount)
{
	spectra_util_Nova_Location_Nova_moveBounds(reference, exceptionData, startAmount, endAmount);
}

void spectra_util_Nova_LocationFunctionMap_functionMap0_Nova_subtractBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int startAmount, int endAmount)
{
	spectra_util_Nova_Location_0_Nova_subtractBounds(reference, exceptionData, startAmount, endAmount);
}

void spectra_util_Nova_LocationFunctionMap_functionMap1_Nova_subtractBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount)
{
	spectra_util_Nova_Location_1_Nova_subtractBounds(reference, exceptionData, amount);
}

void spectra_util_Nova_LocationFunctionMap_functionMap1_Nova_addBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int startAmount, int endAmount)
{
	spectra_util_Nova_Location_1_Nova_addBounds(reference, exceptionData, startAmount, endAmount);
}

char spectra_util_Nova_LocationFunctionMap_functionMap_Nova_isValid(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference)
{
	return spectra_util_Nova_Location_Nova_isValid(reference, exceptionData);
}

spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMap_Nova_asNew(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference)
{
	return spectra_util_Nova_Location_Nova_asNew(reference, exceptionData);
}

nova_Nova_String* spectra_util_Nova_LocationFunctionMap_functionMap_Nova_toString(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference)
{
	return spectra_util_Nova_Location_Nova_toString(reference, exceptionData);
}

void spectra_util_Nova_LocationFunctionMap_Nova_super(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

