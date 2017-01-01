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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/web/svg/nova_web_svg_Nova_Svg.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgCircle.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_SvgFractal_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_SvgFractal* example_Nova_SvgFractal_Nova_construct(example_Nova_SvgFractal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_SvgFractal, this,);
	this->vtable = &example_SvgFractal_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_SvgFractal_Nova_super(this, exceptionData);
	
	{
		example_Nova_SvgFractal_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_SvgFractal_Nova_destroy(example_Nova_SvgFractal** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_SvgFractal_static_Nova_main(example_Nova_SvgFractal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_web_svg_Nova_Svg* l1_Nova_s = (nova_web_svg_Nova_Svg*)nova_null;
	double l1_Nova_pi2 = 0;
	int l1_Nova_numVerts = 0;
	double l1_Nova_coefficient = 0;
	int l1_Nova_numPoints = 0;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	nova_datastruct_list_Nova_DoubleArray* l1_Nova_points = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
	double l1_Nova_radius = 0;
	double l1_Nova_offset = 0;
	double l1_Nova_cx = 0;
	double l1_Nova_cy = 0;
	nova_io_Nova_File* l1_Nova_f = (nova_io_Nova_File*)nova_null;
	nova_io_Nova_FileWriter* l1_Nova_writer = (nova_io_Nova_FileWriter*)nova_null;
	int l3_Nova_i = 0;
	int l7_Nova_n = 0;
	int l9_Nova_p = 0;
	
	l1_Nova_s = nova_web_svg_Nova_Svg_Nova_construct(0, exceptionData);
	l1_Nova_pi2 = nova_math_Nova_Math_Nova_PI * 2;
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Enter the number of vertices: ")));
	l1_Nova_numVerts = nova_io_Nova_Console_static_Nova_readInt(0, exceptionData);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Enter the coefficient: ")));
	l1_Nova_coefficient = nova_io_Nova_Console_static_Nova_readDouble(0, exceptionData);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Enter the number of points: ")));
	l1_Nova_numPoints = nova_io_Nova_Console_static_Nova_readInt(0, exceptionData);
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
	l1_Nova_points = nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, l1_Nova_numVerts * 2);
	l1_Nova_radius = (double)(450);
	l1_Nova_offset = l1_Nova_pi2 / 12;
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)l1_Nova_numVerts; l3_Nova_i++)
	{
		double l3_Nova_rad = 0;
		float nova_zero_check12 = 0;
		
		nova_zero_check12 = (l1_Nova_numVerts * 1.0);
		if (nova_zero_check12 == 0)
		{
			THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
		}
		l3_Nova_rad = l1_Nova_pi2 * (l3_Nova_i / nova_zero_check12) + l1_Nova_offset;
		nova_datastruct_list_Nova_DoubleArray_Nova_set(l1_Nova_points, exceptionData, l3_Nova_i * 2 + 0, l1_Nova_radius * nova_math_Nova_Math_static_Nova_cos(0, exceptionData, l3_Nova_rad) + l1_Nova_radius + 10);
		nova_datastruct_list_Nova_DoubleArray_Nova_set(l1_Nova_points, exceptionData, l3_Nova_i * 2 + 1, l1_Nova_radius * nova_math_Nova_Math_static_Nova_sin(0, exceptionData, l3_Nova_rad) + l1_Nova_radius + 10);
	}
	l7_Nova_n = (int)0;
	for (; l7_Nova_n < (int)l1_Nova_numVerts; l7_Nova_n++)
	{
		double l7_Nova_x = 0;
		double l7_Nova_y = 0;
		nova_web_svg_Nova_SvgCircle* l7_Nova_circle2 = (nova_web_svg_Nova_SvgCircle*)nova_null;
		
		l7_Nova_x = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(l1_Nova_points, exceptionData, l7_Nova_n * 2 + 0));
		l7_Nova_y = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(l1_Nova_points, exceptionData, l7_Nova_n * 2 + 1));
		l7_Nova_circle2 = nova_web_svg_Nova_SvgCircle_Nova_construct(0, exceptionData, l7_Nova_x, l7_Nova_y, 3);
		nova_web_svg_Nova_SvgComponentList_Nova_addChild(l1_Nova_s->nova_web_svg_Nova_Svg_Nova_root->nova_web_svg_Nova_SvgComponent_Nova_children, exceptionData, (nova_web_svg_Nova_SvgComponent*)(l7_Nova_circle2));
	}
	l1_Nova_cx = l1_Nova_radius + 10;
	l1_Nova_cy = l1_Nova_radius + 10;
	l9_Nova_p = (int)0;
	for (; l9_Nova_p < (int)l1_Nova_numPoints; l9_Nova_p++)
	{
		int l9_Nova_rand = 0;
		double l9_Nova_x = 0;
		double l9_Nova_y = 0;
		
		l9_Nova_rand = (int)(nova_math_Nova_Math_static_Nova_random(0, exceptionData, l1_Nova_numVerts));
		l9_Nova_x = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(l1_Nova_points, exceptionData, l9_Nova_rand * 2 + 0));
		l9_Nova_y = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(l1_Nova_points, exceptionData, l9_Nova_rand * 2 + 1));
		l1_Nova_cx = l1_Nova_cx - (l1_Nova_cx - l9_Nova_x) * l1_Nova_coefficient;
		l1_Nova_cy = l1_Nova_cy - (l1_Nova_cy - l9_Nova_y) * l1_Nova_coefficient;
		if (l9_Nova_p > 15)
		{
			nova_web_svg_Nova_SvgCircle* l10_Nova_circle = (nova_web_svg_Nova_SvgCircle*)nova_null;
			
			if ((l9_Nova_p + 1) % 1000 == 0)
			{
				nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(nova_primitive_number_Nova_Int_Nova_construct(0, exceptionData, l9_Nova_p + 1)));
			}
			l10_Nova_circle = nova_web_svg_Nova_SvgCircle_Nova_construct(0, exceptionData, l1_Nova_cx, l1_Nova_cy, 1);
			nova_web_svg_Nova_SvgComponentList_Nova_addChild(l1_Nova_s->nova_web_svg_Nova_Svg_Nova_root->nova_web_svg_Nova_SvgComponent_Nova_children, exceptionData, (nova_web_svg_Nova_SvgComponent*)(l10_Nova_circle));
		}
	}
	l1_Nova_f = nova_io_Nova_File_1_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("C:/Users/Braden/svgoutput.html")));
	l1_Nova_writer = nova_io_Nova_FileWriter_0_Nova_construct(0, exceptionData, l1_Nova_f);
	nova_io_Nova_FileWriter_Nova_create(l1_Nova_writer, exceptionData);
	nova_io_Nova_FileWriter_Nova_clearContents(l1_Nova_writer, exceptionData);
	nova_web_svg_Nova_Svg_Nova_generateHTMLOutput(l1_Nova_s, exceptionData, l1_Nova_writer);
	nova_io_Nova_FileWriter_Nova_close(l1_Nova_writer, exceptionData);
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Done generating ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_SvgFractal_Nova_this(example_Nova_SvgFractal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_SvgFractal_Nova_super(example_Nova_SvgFractal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

