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
#include <nova/datastruct/nova_datastruct_Nova_HashSet.h>
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
#include <example/example_Nova_ThreadDemo.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/NativeObject.h>
#include <nova/nova_Nova_Substring.h>



char example_Nova_HashSetDemo_Nova_init_static_inited = 0;
void example_Nova_HashSetDemo_Nova_init_static()
{
	if (!example_Nova_HashSetDemo_Nova_init_static_inited) {
		example_Nova_HashSetDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_HashSetDemo* example_Nova_HashSetDemo_Nova_construct(example_Nova_HashSetDemo* this)
{
	CCLASS_NEW(example_Nova_HashSetDemo, this,);
	this->vtable = &example_Nova_HashSetDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_HashSetDemo_Nova_super(this);
	
	return example_Nova_HashSetDemo_Nova_this((example_Nova_HashSetDemo*)(this));
}

void example_Nova_HashSetDemo_Nova_destroy(example_Nova_HashSetDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_HashSetDemo_static_Nova_main(example_Nova_HashSetDemo* this, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_Nova_HashSet* l1_Nova_set = (nova_datastruct_Nova_HashSet*)nova_null;
	int l1_Nova_count = 0;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	long_long l1_Nova_stringTime = 0;
	long_long l1_Nova_addTime = 0;
	long_long l1_Nova_getTime = 0;
	long_long l1_Nova_newStringTime = 0;
	
	l1_Nova_set = nova_datastruct_Nova_HashSet_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	nova_datastruct_Nova_HashSet_Nova_add((nova_datastruct_Nova_HashSet*)(l1_Nova_set),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("TEseting"))));
	nova_io_Nova_Console_2_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(l1_Nova_set));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Contains TEset? "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(nova_datastruct_list_Nova_List_virtual1_Nova_contains((nova_datastruct_list_Nova_List*)(l1_Nova_set),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)("TEset"))))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Contains TEseting? "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
								(nova_datastruct_list_Nova_List_virtual1_Nova_contains((nova_datastruct_list_Nova_List*)(l1_Nova_set),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)("TEseting"))))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_2_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(l1_Nova_set));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Benchmarking")));
	l1_Nova_count = 50000;
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	int l50_Nova_i;
	l50_Nova_i = (int)0;
	for (; l50_Nova_i < (int)l1_Nova_count; l50_Nova_i++)
	{
		nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("my string"))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
							(l50_Nova_i))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)(""))))));
	}
	l1_Nova_stringTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer)))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(l1_Nova_stringTime))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("ms to create "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_count))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" strings"))))))))))));
	int l81_Nova_i;
	l81_Nova_i = (int)0;
	for (; l81_Nova_i < (int)50000; l81_Nova_i++)
	{
		nova_datastruct_Nova_HashSet_Nova_add((nova_datastruct_Nova_HashSet*)(l1_Nova_set),
			(nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("my string"))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l81_Nova_i))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(""))))))));
	}
	l1_Nova_addTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer)))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(l1_Nova_addTime))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("ms to call add "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_count))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(" times "))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
																((l1_Nova_addTime - l1_Nova_stringTime) * 100 / l1_Nova_stringTime))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)("% overhead"))))))))))))))));
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(l1_Nova_timer));
	int l126_Nova_i;
	l126_Nova_i = (int)0;
	for (; l126_Nova_i < (int)l1_Nova_count; l126_Nova_i++)
	{
		nova_datastruct_Nova_HashSet_Nova_get((nova_datastruct_Nova_HashSet*)(l1_Nova_set),
			(nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("my string"))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l126_Nova_i))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(""))))))));
	}
	l1_Nova_getTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer)))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(l1_Nova_getTime))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("ms to call get "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_count))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(" times "))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
																((l1_Nova_getTime - l1_Nova_stringTime) * 100 / l1_Nova_stringTime))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)("% overhead"))))))))))))))));
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(l1_Nova_timer));
	int l172_Nova_i;
	l172_Nova_i = (int)0;
	for (; l172_Nova_i < (int)l1_Nova_count; l172_Nova_i++)
	{
		nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("my string"))),
			(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
							(l172_Nova_i))),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)(""))))));
	}
	l1_Nova_newStringTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer)))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(l1_Nova_newStringTime))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("ms to create "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_count))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(" strings "))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
																((l1_Nova_newStringTime - l1_Nova_stringTime) * 100 / l1_Nova_stringTime))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)("% overhead"))))))))))))))));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

example_Nova_HashSetDemo* example_Nova_HashSetDemo_Nova_this(example_Nova_HashSetDemo* this) {
	return this;
}
void example_Nova_HashSetDemo_Nova_super(example_Nova_HashSetDemo* this)
{
}

