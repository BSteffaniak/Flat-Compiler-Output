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
#include <example/example_Nova_Animal.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



example_Spider_Extension_VTable example_Spider_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	example_Nova_Animal_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	example_Nova_Spider_Nova_getNumLegs,
	example_Nova_Spider_Nova_getNumEyes,
	example_Nova_Spider_Nova_getDescription,
};


void example_Nova_Spider_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_Spider* example_Nova_Spider_Nova_construct(example_Nova_Spider* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_Spider, this,);
	this->vtable = &example_Spider_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_Animal_Nova_super((example_Nova_Animal*)this, exceptionData);
	example_Nova_Spider_Nova_super(this, exceptionData);
	
	{
		example_Nova_Spider_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_Spider_Nova_destroy(example_Nova_Spider** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

int example_Nova_Spider_Nova_getNumLegs(example_Nova_Spider* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)8;
}

int example_Nova_Spider_Nova_getNumEyes(example_Nova_Spider* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)9000;
}

nova_Nova_String* example_Nova_Spider_Nova_getDescription(example_Nova_Spider* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("A disgusting thing (Spider)"));
}

void example_Nova_Spider_Nova_this(example_Nova_Spider* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_Spider_Nova_super(example_Nova_Spider* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

