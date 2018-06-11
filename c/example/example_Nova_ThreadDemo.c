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
#include <example/example_Nova_SvgFractal.h>
#include <example/example_Nova_T1.h>
#include <example/example_Nova_T2.h>
#include <example/example_Nova_Test.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



char example_Nova_ThreadDemo_Nova_init_static_inited = 0;
void example_Nova_ThreadDemo_Nova_init_static()
{
	if (!example_Nova_ThreadDemo_Nova_init_static_inited) {
		example_Nova_ThreadDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_ThreadDemo* example_Nova_ThreadDemo_Nova_construct(example_Nova_ThreadDemo* this)
{
	CCLASS_NEW(example_Nova_ThreadDemo, this,);
	this->vtable = &example_Nova_ThreadDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_ThreadDemo_Nova_super(this);
	
	return example_Nova_ThreadDemo_Nova_this((example_Nova_ThreadDemo*)(this));
}

void example_Nova_ThreadDemo_Nova_destroy(example_Nova_ThreadDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ThreadDemo_static_Nova_main(example_Nova_ThreadDemo* this, nova_datastruct_list_Nova_Array* args)
{
	char l1_Nova_c = 0;
	
	l1_Nova_c = 'y';
	while (l1_Nova_c == 'y' || l1_Nova_c == 'Y')
	{
		nova_thread_Nova_Thread* l2_Nova_thread = (nova_thread_Nova_Thread*)nova_null;
		nova_thread_Nova_Thread* l2_Nova_thread2 = (nova_thread_Nova_Thread*)nova_null;
		nova_time_Nova_Timer* l2_Nova_timer = (nova_time_Nova_Timer*)nova_null;
		
		l2_Nova_thread = (nova_thread_Nova_Thread*)(example_Nova_ThreadDemoImplementation_Nova_construct(0,
				100,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Thread1"))));
		l2_Nova_thread2 = (nova_thread_Nova_Thread*)(example_Nova_ThreadDemoImplementation_Nova_construct(0,
				100,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Thread2"))));
		l2_Nova_timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
		nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l2_Nova_thread));
		nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l2_Nova_thread2));
		nova_thread_Nova_Thread_Nova_join((nova_thread_Nova_Thread*)(l2_Nova_thread));
		nova_thread_Nova_Thread_Nova_join((nova_thread_Nova_Thread*)(l2_Nova_thread2));
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l2_Nova_timer));
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("Time taken: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
									nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l2_Nova_timer)))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("ms"))))))));
		nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Run again? (Y/N) ")));
		l1_Nova_c = nova_io_Nova_Console_static_Nova_readChar((nova_io_Nova_Console*)(0));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\nFinished")));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

example_Nova_ThreadDemo* example_Nova_ThreadDemo_Nova_this(example_Nova_ThreadDemo* this) {
	return this;
}
void example_Nova_ThreadDemo_Nova_super(example_Nova_ThreadDemo* this)
{
}

