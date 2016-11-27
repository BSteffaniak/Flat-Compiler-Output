#include <precompiled.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



example_Person_Extension_VTable example_Person_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	example_Nova_Person_Nova_sayHello,
};


void example_Nova_Person_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_Person* example_Nova_Person_Nova_construct(example_Nova_Person* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int age)
{
	CCLASS_NEW(example_Nova_Person, this,);
	this->vtable = &example_Person_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_Person_Nova_super(this, exceptionData);
	
	{
		example_Nova_Person_Nova_this(this, exceptionData, name, age);
	}
	
	return this;
}

void example_Nova_Person_Nova_destroy(example_Nova_Person** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_Nova_String_Nova_destroy(&(*this)->example_Nova_Person_Nova_name, exceptionData);
	
	NOVA_FREE(*this);
}

void example_Nova_Person_Nova_this(example_Nova_Person* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int age)
{
	this->example_Nova_Person_Nova_name = name;
	this->example_Nova_Person_Nova_age = age;
}

void example_Nova_Person_Nova_sayHello(example_Nova_Person* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Hello from "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this->example_Nova_Person_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" the Person")))));
}

void example_Nova_Person_Nova_super(example_Nova_Person* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->example_Nova_Person_Nova_age = 0;
	this->example_Nova_Person_Nova_name = (nova_Nova_String*)nova_null;
}

void example_Nova_Person_virtual_Nova_sayHello(example_Nova_Person* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->vtable->example_Nova_Person_virtual_Nova_sayHello((example_Nova_Person*)(this), exceptionData);
}

