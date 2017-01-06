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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_Animal_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_Animal* example_Nova_Animal_Nova_construct(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_Animal, this,);
	this->vtable = &example_Animal_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_Animal_Nova_super(this, exceptionData);
	
	{
		example_Nova_Animal_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_Animal_Nova_destroy(example_Nova_Animal** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

int example_Nova_Animal_Nova_getNumLegs(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)0;
}

int example_Nova_Animal_Nova_getNumEyes(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)0;
}

nova_Nova_String* example_Nova_Animal_Nova_getDescription(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Its just a stupid animal..."));
}

nova_Nova_String* example_Nova_Animal_Nova_toString(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_Animal_virtual_Nova_getDescription((example_Nova_Animal*)(this), exceptionData);
}

void example_Nova_Animal_Nova_this(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_Animal_Nova_super(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int example_Nova_Animal_virtual_Nova_getNumLegs(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->example_Nova_Animal_virtual_Nova_getNumLegs((example_Nova_Animal*)(this), exceptionData);
}

int example_Nova_Animal_virtual_Nova_getNumEyes(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->example_Nova_Animal_virtual_Nova_getNumEyes((example_Nova_Animal*)(this), exceptionData);
}

nova_Nova_String* example_Nova_Animal_virtual_Nova_getDescription(example_Nova_Animal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->example_Nova_Animal_virtual_Nova_getDescription((example_Nova_Animal*)(this), exceptionData);
}

void example_Nova_AnimalFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_AnimalFunctionMap* example_Nova_AnimalFunctionMap_Nova_construct(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_AnimalFunctionMap, this,);
	this->vtable = &example_Animal_AnimalFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_AnimalFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_AnimalFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_AnimalFunctionMap_Nova_destroy(example_Nova_AnimalFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_AnimalFunctionMap_Nova_this(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_Animal* example_Nova_AnimalFunctionMap_functionMapAnimalFunctionMap_Nova_construct(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_Animal_Nova_construct(0, exceptionData);
}

int example_Nova_AnimalFunctionMap_functionMap_Nova_getNumLegs(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return example_Nova_Animal_Nova_getNumLegs(reference, exceptionData);
}

int example_Nova_AnimalFunctionMap_functionMap_Nova_getNumEyes(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return example_Nova_Animal_Nova_getNumEyes(reference, exceptionData);
}

nova_Nova_String* example_Nova_AnimalFunctionMap_functionMap_Nova_getDescription(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return example_Nova_Animal_Nova_getDescription(reference, exceptionData);
}

nova_Nova_String* example_Nova_AnimalFunctionMap_functionMap_Nova_toString(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return example_Nova_Animal_Nova_toString(reference, exceptionData);
}

void example_Nova_AnimalFunctionMap_Nova_super(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_Animal* example_Nova_AnimalFunctionMap_virtualfunctionMapAnimal_Nova_construct(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->example_Nova_AnimalFunctionMap_virtualfunctionMapAnimal_Nova_construct(this, exceptionData);
}

int example_Nova_AnimalFunctionMap_virtualfunctionMap_Nova_getNumLegs(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return this->vtable->example_Nova_AnimalFunctionMap_virtualfunctionMap_Nova_getNumLegs(this, exceptionData, reference);
}

int example_Nova_AnimalFunctionMap_virtualfunctionMap_Nova_getNumEyes(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return this->vtable->example_Nova_AnimalFunctionMap_virtualfunctionMap_Nova_getNumEyes(this, exceptionData, reference);
}

nova_Nova_String* example_Nova_AnimalFunctionMap_virtualfunctionMap_Nova_getDescription(example_Nova_AnimalFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Animal* reference)
{
	return this->vtable->example_Nova_AnimalFunctionMap_virtualfunctionMap_Nova_getDescription(this, exceptionData, reference);
}

