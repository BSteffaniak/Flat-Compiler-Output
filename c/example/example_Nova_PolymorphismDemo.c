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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



nova_Nova_String* example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemo* this, nova_datastruct_list_Nova_Array* animals, int numLegs);

nova_Nova_String* example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemo* this, nova_datastruct_list_Nova_Array* animals, int numLegs);
char example_Nova_PolymorphismDemo_Nova_init_static_inited = 0;
void example_Nova_PolymorphismDemo_Nova_init_static()
{
	if (!example_Nova_PolymorphismDemo_Nova_init_static_inited) {
		example_Nova_PolymorphismDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_PolymorphismDemo* example_Nova_PolymorphismDemo_Nova_construct(example_Nova_PolymorphismDemo* this)
{
	CCLASS_NEW(example_Nova_PolymorphismDemo, this,);
	this->vtable = &example_Nova_PolymorphismDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_PolymorphismDemo_Nova_super(this);
	
	return example_Nova_PolymorphismDemo_Nova_this((example_Nova_PolymorphismDemo*)(this));
}

void example_Nova_PolymorphismDemo_Nova_destroy(example_Nova_PolymorphismDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_PolymorphismDemo_static_Nova_main(example_Nova_PolymorphismDemo* this, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_list_Nova_Array* l1_Nova_animals = (nova_datastruct_list_Nova_Array*)nova_null;
	example_Nova_Dog* l1_Nova_dog = (example_Nova_Dog*)nova_null;
	example_Nova_Spider* l1_Nova_spider = (example_Nova_Spider*)nova_null;
	nova_Nova_String* l1_Nova_description = (nova_Nova_String*)nova_null;
	
	l1_Nova_animals = nova_datastruct_list_Nova_Array_1_Nova_construct(0,
		2,
		(int)(intptr_t)nova_null);
	l1_Nova_dog = example_Nova_Dog_Nova_construct(0);
	l1_Nova_spider = example_Nova_Spider_Nova_construct(0);
	nova_datastruct_list_Nova_Array_0_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_animals),
		0,
		(nova_Nova_Object*)(l1_Nova_dog));
	nova_datastruct_list_Nova_Array_0_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_animals),
		1,
		(nova_Nova_Object*)(l1_Nova_spider));
	l1_Nova_description = example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(0,
		l1_Nova_animals,
	8);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Searched for animal with 8 legs and found: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_description)),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

nova_Nova_String* example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemo* this, nova_datastruct_list_Nova_Array* animals, int numLegs)
{
	int l7_Nova_i;
	l7_Nova_i = (int)0;
	for (; l7_Nova_i < (int)2; l7_Nova_i++)
	{
		if (example_Nova_Animal_virtual_Nova_getNumLegs((example_Nova_Animal*)(animals->nova_datastruct_list_Nova_Array_Nova_data[l7_Nova_i])) == numLegs)
		{
			return example_Nova_Animal_virtual_Nova_getDescription((example_Nova_Animal*)(animals->nova_datastruct_list_Nova_Array_Nova_data[l7_Nova_i]));
		}
	}
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("Could not find animal with "))),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
						(numLegs))),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(" legs"))))));
}

example_Nova_PolymorphismDemo* example_Nova_PolymorphismDemo_Nova_this(example_Nova_PolymorphismDemo* this) {
	return this;
}
void example_Nova_PolymorphismDemo_Nova_super(example_Nova_PolymorphismDemo* this)
{
}

