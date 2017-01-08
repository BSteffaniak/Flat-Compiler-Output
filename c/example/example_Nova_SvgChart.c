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
#include <nova/web/svg/no3/nova_web_svg_no3_Nova_No3.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>



void example_Nova_SvgChart_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_SvgChart* example_Nova_SvgChart_Nova_construct(example_Nova_SvgChart* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_SvgChart, this,);
	this->vtable = &example_SvgChart_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_SvgChart_Nova_super(this, exceptionData);
	
	{
		example_Nova_SvgChart_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_SvgChart_Nova_destroy(example_Nova_SvgChart** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_SvgChart_static_Nova_main(example_Nova_SvgChart* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	nova_web_svg_no3_Nova_No3Select* l1_Nova_selection = (nova_web_svg_no3_Nova_No3Select*)nova_null;
	
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
	l1_Nova_selection = nova_web_svg_no3_Nova_No3_static_Nova_select(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("body")));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_web_svg_no3_Nova_No3Select_Nova_toJs(l1_Nova_selection, exceptionData));
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Done generating ")), exceptionData, nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_SvgChart_Nova_this(example_Nova_SvgChart* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_SvgChart_Nova_super(example_Nova_SvgChart* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_SvgChartFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_SvgChartFunctionMap* example_Nova_SvgChartFunctionMap_Nova_construct(example_Nova_SvgChartFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_SvgChartFunctionMap, this,);
	this->vtable = &example_SvgChart_SvgChartFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_SvgChartFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_SvgChartFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_SvgChartFunctionMap_Nova_destroy(example_Nova_SvgChartFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_SvgChartFunctionMap_Nova_this(example_Nova_SvgChartFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_SvgChart* example_Nova_SvgChartFunctionMap_functionMapSvgChartFunctionMap_Nova_construct(example_Nova_SvgChartFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_SvgChart_Nova_construct(0, exceptionData);
}

void example_Nova_SvgChartFunctionMap_functionMap_static_Nova_main(example_Nova_SvgChartFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_SvgChart_static_Nova_main(0, exceptionData, args);
}

void example_Nova_SvgChartFunctionMap_Nova_super(example_Nova_SvgChartFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

