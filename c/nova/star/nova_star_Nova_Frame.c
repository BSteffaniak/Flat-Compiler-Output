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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_star_Nova_Frame_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_star_Nova_Frame* nova_star_Nova_Frame_Nova_construct(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int x, int y, int width, int height)
{
	CCLASS_NEW(nova_star_Nova_Frame, this,);
	this->vtable = &nova_star_Frame_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_star_Nova_Frame_Nova_super(this, exceptionData);
	
	{
		nova_star_Nova_Frame_Nova_this(this, exceptionData, x, y, width, height);
	}
	
	return this;
}

void nova_star_Nova_Frame_Nova_destroy(nova_star_Nova_Frame** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_star_Nova_Frame_Nova_this(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int x, int y, int width, int height)
{
	x = (int)(x == (intptr_t)nova_null ? 0 : x);
	y = (int)(y == (intptr_t)nova_null ? 0 : y);
	width = (int)(width == (intptr_t)nova_null ? 800 : width);
	height = (int)(height == (intptr_t)nova_null ? 600 : height);
	nova_star_Nova_Frame_Mutatorfunc_Nova_x(this, exceptionData, x);
	nova_star_Nova_Frame_Mutatorfunc_Nova_y(this, exceptionData, y);
	nova_star_Nova_Frame_Mutatorfunc_Nova_width(this, exceptionData, width);
	nova_star_Nova_Frame_Mutatorfunc_Nova_height(this, exceptionData, height);
}

int nova_star_Nova_Frame_Mutatorfunc_Nova_x(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_star_Nova_Frame_Nova_x = value;
	return value;
}

int nova_star_Nova_Frame_Mutatorfunc_Nova_y(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_star_Nova_Frame_Nova_y = value;
	return value;
}

int nova_star_Nova_Frame_Mutatorfunc_Nova_width(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_star_Nova_Frame_Nova_width = value;
	return value;
}

int nova_star_Nova_Frame_Mutatorfunc_Nova_height(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_star_Nova_Frame_Nova_height = value;
	return value;
}

void nova_star_Nova_Frame_Nova_super(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_star_Nova_Frame_Nova_x = 0;
	this->nova_star_Nova_Frame_Nova_y = 0;
	this->nova_star_Nova_Frame_Nova_width = 0;
	this->nova_star_Nova_Frame_Nova_height = 0;
}

void nova_star_Nova_FrameFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_star_Nova_FrameFunctionMap* nova_star_Nova_FrameFunctionMap_Nova_construct(nova_star_Nova_FrameFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_star_Nova_FrameFunctionMap, this,);
	this->vtable = &nova_star_Frame_FrameFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_star_Nova_FrameFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_star_Nova_FrameFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_star_Nova_FrameFunctionMap_Nova_destroy(nova_star_Nova_FrameFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_star_Nova_FrameFunctionMap_Nova_this(nova_star_Nova_FrameFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_star_Nova_FrameFunctionMap_Nova_super(nova_star_Nova_FrameFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

