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
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_Spider.h>
#include <nova/NativeObject.h>




nova_Nova_String* example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* animals, int numLegs);
void example_Nova_PolymorphismDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_PolymorphismDemo* example_Nova_PolymorphismDemo_Nova_construct(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_PolymorphismDemo, this,);
	this->vtable = &example_PolymorphismDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_PolymorphismDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_PolymorphismDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_PolymorphismDemo_Nova_destroy(example_Nova_PolymorphismDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_PolymorphismDemo_static_Nova_main(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_list_Nova_Array* l1_Nova_animals = (nova_datastruct_list_Nova_Array*)nova_null;
	example_Nova_Dog* l1_Nova_dog = (example_Nova_Dog*)nova_null;
	example_Nova_Spider* l1_Nova_spider = (example_Nova_Spider*)nova_null;
	nova_Nova_String* l1_Nova_description = (nova_Nova_String*)nova_null;
	
	l1_Nova_animals = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 2, (intptr_t)nova_null);
	l1_Nova_dog = example_Nova_Dog_Nova_construct(0, exceptionData);
	l1_Nova_spider = example_Nova_Spider_Nova_construct(0, exceptionData);
	nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_animals), exceptionData, 0, (nova_Nova_Object*)(l1_Nova_dog));
	nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_animals), exceptionData, 1, (nova_Nova_Object*)(l1_Nova_spider));
	l1_Nova_description = example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(0, exceptionData, l1_Nova_animals, 8);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Searched for animal with 8 legs and found: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l1_Nova_description), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

nova_Nova_String* example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* animals, int numLegs)
{
	int l3_Nova_i = 0;
	
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)2; l3_Nova_i++)
	{
		if (example_Nova_Animal_virtual_Nova_getNumLegs((example_Nova_Animal*)(animals->nova_datastruct_list_Nova_Array_Nova_data[l3_Nova_i]), exceptionData) == numLegs)
		{
			return example_Nova_Animal_virtual_Nova_getDescription((example_Nova_Animal*)(animals->nova_datastruct_list_Nova_Array_Nova_data[l3_Nova_i]), exceptionData);
		}
	}
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find animal with ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (numLegs)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" legs")))));
}

void example_Nova_PolymorphismDemo_Nova_this(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_PolymorphismDemo_Nova_super(example_Nova_PolymorphismDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


nova_Nova_String* example_Nova_PolymorphismDemoFunctionMap_functionMap_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* animals, int numLegs);
void example_Nova_PolymorphismDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_PolymorphismDemoFunctionMap* example_Nova_PolymorphismDemoFunctionMap_Nova_construct(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_PolymorphismDemoFunctionMap, this,);
	this->vtable = &example_PolymorphismDemo_PolymorphismDemoFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_PolymorphismDemoFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_PolymorphismDemoFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_PolymorphismDemoFunctionMap_Nova_destroy(example_Nova_PolymorphismDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_PolymorphismDemoFunctionMap_Nova_this(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_PolymorphismDemo* example_Nova_PolymorphismDemoFunctionMap_functionMapPolymorphismDemoFunctionMap_Nova_construct(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_PolymorphismDemo_Nova_construct(0, exceptionData);
}

void example_Nova_PolymorphismDemoFunctionMap_functionMap_static_Nova_main(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_PolymorphismDemo_static_Nova_main(0, exceptionData, args);
}

nova_Nova_String* example_Nova_PolymorphismDemoFunctionMap_functionMap_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* animals, int numLegs)
{
	return example_Nova_PolymorphismDemo_static_Nova_getDescriptionOfAnimalWithNumberOfLegs(0, exceptionData, animals, numLegs);
}

void example_Nova_PolymorphismDemoFunctionMap_Nova_super(example_Nova_PolymorphismDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

