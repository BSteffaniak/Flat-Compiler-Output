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
#include <nova/time/NativeDate.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_time_Nova_Date_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_time_Nova_Date* nova_time_Nova_Date_Nova_construct(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_time_Nova_Date, this,);
	this->vtable = &nova_time_Date_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_time_Nova_Date_Nova_super(this, exceptionData);
	
	{
		nova_time_Nova_Date_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_time_Nova_Date_Nova_destroy(nova_time_Nova_Date** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_time_Nova_Date_Nova_this(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_time_Nova_Date_Nova_updateTime(this, exceptionData);
}

void nova_time_Nova_Date_Nova_decodeDate(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* prototype, nova_Nova_String* date)
{
}

void nova_time_Nova_Date_Nova_updateTime(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_updateTime();
	this->nova_time_Nova_Date_Nova_year = (int)(nova_getYear());
	this->nova_time_Nova_Date_Nova_month = (int)(nova_getMonth());
	this->nova_time_Nova_Date_Nova_day = (int)(nova_getDay());
	this->nova_time_Nova_Date_Nova_hour = (int)(nova_getHour());
	this->nova_time_Nova_Date_Nova_minute = (int)(nova_getMinute());
	this->nova_time_Nova_Date_Nova_second = (int)(nova_getSecond());
}

nova_Nova_String* nova_time_Nova_Date_Nova_formatDate(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int first, int second, int third, int fourth, int fifth, int sixth)
{
	char* l1_Nova_data = (char*)nova_null;
	
	first = (int)(first == (intptr_t)nova_null ? this->nova_time_Nova_Date_Nova_month : first);
	second = (int)(second == (intptr_t)nova_null ? this->nova_time_Nova_Date_Nova_day : second);
	third = (int)(third == (intptr_t)nova_null ? this->nova_time_Nova_Date_Nova_year : third);
	fourth = (int)(fourth == (intptr_t)nova_null ? this->nova_time_Nova_Date_Nova_hour : fourth);
	fifth = (int)(fifth == (intptr_t)nova_null ? this->nova_time_Nova_Date_Nova_minute : fifth);
	sixth = (int)(sixth == (intptr_t)nova_null ? second : sixth);
	l1_Nova_data = (char*)(nova_formatDate((char*)(str->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), first, second, third, fourth, fifth, sixth));
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_data);
}

void nova_time_Nova_Date_Nova_super(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_time_Nova_Date_Nova_year = 0;
	this->nova_time_Nova_Date_Nova_month = 0;
	this->nova_time_Nova_Date_Nova_day = 0;
	this->nova_time_Nova_Date_Nova_hour = 0;
	this->nova_time_Nova_Date_Nova_minute = 0;
	this->nova_time_Nova_Date_Nova_second = 0;
}

void nova_time_Nova_DateFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_time_Nova_DateFunctionMap* nova_time_Nova_DateFunctionMap_Nova_construct(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_time_Nova_DateFunctionMap, this,);
	this->vtable = &nova_time_Date_DateFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_time_Nova_DateFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_time_Nova_DateFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_time_Nova_DateFunctionMap_Nova_destroy(nova_time_Nova_DateFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_time_Nova_DateFunctionMap_Nova_this(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_time_Nova_Date* nova_time_Nova_DateFunctionMap_functionMapDateFunctionMap_Nova_construct(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_time_Nova_Date_Nova_construct(0, exceptionData);
}

void nova_time_Nova_DateFunctionMap_functionMap_Nova_decodeDate(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference, nova_Nova_String* prototype, nova_Nova_String* date)
{
	nova_time_Nova_Date_Nova_decodeDate(reference, exceptionData, prototype, date);
}

void nova_time_Nova_DateFunctionMap_functionMap_Nova_updateTime(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference)
{
	nova_time_Nova_Date_Nova_updateTime(reference, exceptionData);
}

nova_Nova_String* nova_time_Nova_DateFunctionMap_functionMap_Nova_formatDate(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference, nova_Nova_String* str, int first, int second, int third, int fourth, int fifth, int sixth)
{
	return nova_time_Nova_Date_Nova_formatDate(reference, exceptionData, str, first, second, third, fourth, fifth, sixth);
}

void nova_time_Nova_DateFunctionMap_Nova_super(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

