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
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/web/svg/nova_web_svg_Nova_Svg.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgCircle.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentList.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_ArrayDemo.h>
#include <example/example_Nova_BodyBuilder.h>
#include <example/example_Nova_ClosureDemo.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_ExceptionHandlingDemo.h>
#include <example/example_Nova_FileTest.h>
#include <example/example_Nova_GenericDemo.h>
#include <example/example_Nova_HashMapDemo.h>
#include <example/example_Nova_HashSetDemo.h>
#include <example/example_Nova_IntegerTest.h>
#include <example/example_Nova_Lab.h>
#include <example/example_Nova_MathDemo.h>
#include <example/example_Nova_NestTest.h>
#include <example/example_Nova_NonWholeDivisionException.h>
#include <example/example_Nova_Person.h>
#include <example/example_Nova_Polygon.h>
#include <example/example_Nova_PolymorphismDemo.h>
#include <example/example_Nova_QueueDemo.h>
#include <example/example_Nova_Spider.h>
#include <example/example_Nova_Square.h>
#include <example/example_Nova_SvgChart.h>
#include <example/example_Nova_T1.h>
#include <example/example_Nova_T2.h>
#include <example/example_Nova_Test.h>
#include <example/example_Nova_ThreadDemo.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



char example_Nova_SvgFractal_Nova_init_static_inited = 0;
void example_Nova_SvgFractal_Nova_init_static()
{
	if (!example_Nova_SvgFractal_Nova_init_static_inited) {
		example_Nova_SvgFractal_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_SvgFractal* example_Nova_SvgFractal_Nova_construct(example_Nova_SvgFractal* this)
{
	CCLASS_NEW(example_Nova_SvgFractal, this,);
	this->vtable = &example_Nova_SvgFractal_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_SvgFractal_Nova_super(this);
	
	return example_Nova_SvgFractal_Nova_this((example_Nova_SvgFractal*)(this));
}

void example_Nova_SvgFractal_Nova_destroy(example_Nova_SvgFractal** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_SvgFractal_static_Nova_main(example_Nova_SvgFractal* this, nova_datastruct_list_Nova_Array* args)
{
	nova_web_svg_Nova_Svg* l1_Nova_s = (nova_web_svg_Nova_Svg*)nova_null;
	double l1_Nova_pi2 = 0;
	int l1_Nova_numVerts = 0;
	double l1_Nova_coefficient = 0;
	int l1_Nova_numPoints = 0;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	nova_datastruct_list_Double_Nova_Array1Double* l1_Nova_points = (nova_datastruct_list_Double_Nova_Array1Double*)nova_null;
	double l1_Nova_radius = 0;
	double l1_Nova_offset = 0;
	double l1_Nova_cx = 0;
	double l1_Nova_cy = 0;
	nova_io_Nova_File* l1_Nova_f = (nova_io_Nova_File*)nova_null;
	nova_io_Nova_FileWriter* l1_Nova_writer = (nova_io_Nova_FileWriter*)nova_null;
	
	l1_Nova_s = nova_web_svg_Nova_Svg_Nova_construct(0);
	l1_Nova_pi2 = nova_math_Nova_Math_Nova_PI * 2;
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Enter the number of vertices: ")));
	l1_Nova_numVerts = nova_io_Nova_Console_static_Nova_readInt((nova_io_Nova_Console*)(0));
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Enter the coefficient: ")));
	l1_Nova_coefficient = nova_io_Nova_Console_static_Nova_readDouble((nova_io_Nova_Console*)(0));
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Enter the number of points: ")));
	l1_Nova_numPoints = nova_io_Nova_Console_static_Nova_readInt((nova_io_Nova_Console*)(0));
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	l1_Nova_points = nova_datastruct_list_Double_Nova_Array1Double_int_int_Array1Double1_Nova_construct(0,
		l1_Nova_numVerts * 2,
		(int)(intptr_t)nova_null);
	l1_Nova_radius = (double)(450);
	l1_Nova_offset = l1_Nova_pi2 / 12;
	int l31_Nova_i;
	l31_Nova_i = (int)0;
	for (; l31_Nova_i < (int)l1_Nova_numVerts; l31_Nova_i++)
	{
		double l31_Nova_rad = 0;
		
		l31_Nova_rad = l1_Nova_pi2 * (l31_Nova_i / (l1_Nova_numVerts * 1.0)) + l1_Nova_offset;
		nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(l1_Nova_points),
			l31_Nova_i * 2 + 0,
			l1_Nova_radius * nova_math_Nova_Math_static_Nova_cos((nova_math_Nova_Math*)(0),
		l31_Nova_rad) + l1_Nova_radius + 10);
		nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(l1_Nova_points),
			l31_Nova_i * 2 + 1,
			l1_Nova_radius * nova_math_Nova_Math_static_Nova_sin((nova_math_Nova_Math*)(0),
		l31_Nova_rad) + l1_Nova_radius + 10);
	}
	int l69_Nova_n;
	l69_Nova_n = (int)0;
	for (; l69_Nova_n < (int)l1_Nova_numVerts; l69_Nova_n++)
	{
		double l69_Nova_x = 0;
		double l69_Nova_y = 0;
		nova_web_svg_Nova_SvgCircle* l69_Nova_circle2 = (nova_web_svg_Nova_SvgCircle*)nova_null;
		
		l69_Nova_x = nova_datastruct_list_Double_Nova_Array1Double_int_double_Nova_get((nova_datastruct_list_Double_Nova_Array1Double*)(l1_Nova_points),
		l69_Nova_n * 2 + 0);
		l69_Nova_y = nova_datastruct_list_Double_Nova_Array1Double_int_double_Nova_get((nova_datastruct_list_Double_Nova_Array1Double*)(l1_Nova_points),
		l69_Nova_n * 2 + 1);
		l69_Nova_circle2 = nova_web_svg_Nova_SvgCircle_Nova_construct(0,
			l69_Nova_x,
			l69_Nova_y,
		3);
		nova_web_svg_Nova_SvgComponentList_Nova_addChild((nova_web_svg_Nova_SvgComponentList*)(l1_Nova_s->nova_web_svg_Nova_Svg_Nova_root->nova_web_svg_Nova_SvgComponent_Nova_children),
			(nova_web_svg_Nova_SvgComponent*)(l69_Nova_circle2));
	}
	l1_Nova_cx = l1_Nova_radius + 10;
	l1_Nova_cy = l1_Nova_radius + 10;
	int l100_Nova_p;
	l100_Nova_p = (int)0;
	for (; l100_Nova_p < (int)l1_Nova_numPoints; l100_Nova_p++)
	{
		int l100_Nova_rand = 0;
		double l100_Nova_x = 0;
		double l100_Nova_y = 0;
		
		l100_Nova_rand = (int)(nova_math_Nova_Math_1_static_Nova_random((nova_math_Nova_Math*)(0),
		l1_Nova_numVerts));
		l100_Nova_x = nova_datastruct_list_Double_Nova_Array1Double_int_double_Nova_get((nova_datastruct_list_Double_Nova_Array1Double*)(l1_Nova_points),
		l100_Nova_rand * 2 + 0);
		l100_Nova_y = nova_datastruct_list_Double_Nova_Array1Double_int_double_Nova_get((nova_datastruct_list_Double_Nova_Array1Double*)(l1_Nova_points),
		l100_Nova_rand * 2 + 1);
		l1_Nova_cx = l1_Nova_cx - (l1_Nova_cx - l100_Nova_x) * l1_Nova_coefficient;
		l1_Nova_cy = l1_Nova_cy - (l1_Nova_cy - l100_Nova_y) * l1_Nova_coefficient;
		if (l100_Nova_p > 15)
		{
			nova_web_svg_Nova_SvgCircle* l128_Nova_circle = (nova_web_svg_Nova_SvgCircle*)nova_null;
			
			if ((l100_Nova_p + 1) % 1000 == 0)
			{
				nova_io_Nova_Console_6_static_Nova_writeLine((nova_io_Nova_Console*)(0),
				l100_Nova_p + 1);
			}
			l128_Nova_circle = nova_web_svg_Nova_SvgCircle_Nova_construct(0,
				l1_Nova_cx,
				l1_Nova_cy,
			1);
			nova_web_svg_Nova_SvgComponentList_Nova_addChild((nova_web_svg_Nova_SvgComponentList*)(l1_Nova_s->nova_web_svg_Nova_Svg_Nova_root->nova_web_svg_Nova_SvgComponent_Nova_children),
				(nova_web_svg_Nova_SvgComponent*)(l128_Nova_circle));
		}
	}
	l1_Nova_f = nova_io_Nova_File_1_Nova_construct(0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("C:/Users/Braden/svgoutput.html")));
	l1_Nova_writer = nova_io_Nova_FileWriter_0_Nova_construct(0,
	l1_Nova_f);
	nova_io_Nova_FileWriter_Nova_create((nova_io_Nova_FileWriter*)(l1_Nova_writer));
	nova_io_Nova_FileWriter_Nova_clearContents((nova_io_Nova_FileWriter*)(l1_Nova_writer));
	nova_web_svg_Nova_Svg_Nova_generateHTMLOutput((nova_web_svg_Nova_Svg*)(l1_Nova_s),
	l1_Nova_writer);
	nova_io_Nova_FileWriter_Nova_close((nova_io_Nova_FileWriter*)(l1_Nova_writer));
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer));
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Done generating "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

example_Nova_SvgFractal* example_Nova_SvgFractal_Nova_this(example_Nova_SvgFractal* this) {
	return this;
}
void example_Nova_SvgFractal_Nova_super(example_Nova_SvgFractal* this)
{
}

