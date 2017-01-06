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
#include <nova/star/NativeWindow.h>
#include <nova/star/nova_star_Nova_WindowThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_star_Nova_Window_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_star_Nova_Window* nova_star_Nova_Window_Nova_construct(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* title, int x, int y, int width, int height)
{
	CCLASS_NEW(nova_star_Nova_Window, this,);
	this->vtable = &nova_star_Window_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_star_Nova_Window_Nova_super(this, exceptionData);
	
	{
		nova_star_Nova_Window_Nova_this(this, exceptionData, title, x, y, width, height);
	}
	
	return this;
}

void nova_star_Nova_Window_Nova_destroy(nova_star_Nova_Window** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_star_Nova_Window_Nova_title, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_star_Nova_Window_Nova_this(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* title, int x, int y, int width, int height)
{
	title = (nova_Nova_String*)(title == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)title);
	x = (int)(x == (intptr_t)nova_null ? 0 : x);
	y = (int)(y == (intptr_t)nova_null ? 0 : y);
	width = (int)(width == (intptr_t)nova_null ? 0 : width);
	height = (int)(height == (intptr_t)nova_null ? 0 : height);
	this->nova_star_Nova_Window_Nova_title = title;
	this->nova_star_Nova_Window_Nova_x = x;
	this->nova_star_Nova_Window_Nova_y = y;
	this->nova_star_Nova_Window_Nova_width = width;
	this->nova_star_Nova_Window_Nova_height = height;
}

void nova_star_Nova_Window_Nova_create(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_star_Nova_WindowThread* l1_Nova_t = (nova_star_Nova_WindowThread*)nova_null;
	
	l1_Nova_t = nova_star_Nova_WindowThread_Nova_construct(0, exceptionData, this);
	nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l1_Nova_t), exceptionData);
}

void nova_star_Nova_Window_Nova_super(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_star_Nova_Window_Nova_x = 0;
	this->nova_star_Nova_Window_Nova_y = 0;
	this->nova_star_Nova_Window_Nova_width = 0;
	this->nova_star_Nova_Window_Nova_height = 0;
	this->nova_star_Nova_Window_Nova_title = (nova_Nova_String*)nova_null;
}

void nova_star_Nova_WindowFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_star_Nova_WindowFunctionMap* nova_star_Nova_WindowFunctionMap_Nova_construct(nova_star_Nova_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_star_Nova_WindowFunctionMap, this,);
	this->vtable = &nova_star_Window_WindowFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_star_Nova_WindowFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_star_Nova_WindowFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_star_Nova_WindowFunctionMap_Nova_destroy(nova_star_Nova_WindowFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_star_Nova_WindowFunctionMap_Nova_this(nova_star_Nova_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_star_Nova_Window* nova_star_Nova_WindowFunctionMap_functionMapWindowFunctionMap_Nova_construct(nova_star_Nova_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* title, int x, int y, int width, int height)
{
	title = (nova_Nova_String*)(title == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)title);
	x = (int)(x == (intptr_t)nova_null ? 0 : x);
	y = (int)(y == (intptr_t)nova_null ? 0 : y);
	width = (int)(width == (intptr_t)nova_null ? 0 : width);
	height = (int)(height == (intptr_t)nova_null ? 0 : height);
	return nova_star_Nova_Window_Nova_construct(0, exceptionData, title, x, y, width, height);
}

void nova_star_Nova_WindowFunctionMap_functionMap_Nova_create(nova_star_Nova_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_star_Nova_Window* reference)
{
	nova_star_Nova_Window_Nova_create(reference, exceptionData);
}

void nova_star_Nova_WindowFunctionMap_Nova_super(nova_star_Nova_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

