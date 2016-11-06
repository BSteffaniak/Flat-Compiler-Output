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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



example_GenericDemo_Extension_VTable example_GenericDemo_Extension_VTable_val =
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
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void example_Nova_GenericDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_GenericDemo* example_Nova_GenericDemo_Nova_construct(example_Nova_GenericDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_GenericDemo, this,);
	this->vtable = &example_GenericDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_GenericDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_GenericDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_GenericDemo_Nova_destroy(example_Nova_GenericDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_GenericDemo_static_Nova_main(example_Nova_GenericDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_list_Nova_Stack* l1_Nova_strs = (nova_datastruct_list_Nova_Stack*)nova_null;
	
	l1_Nova_strs = nova_datastruct_list_Nova_Stack_Nova_construct(0, exceptionData);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Pushing \"test\"")));
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Pushing \"ASDFASDF\"")));
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ASDFASDF"))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Pushing \"3!\"")));
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("3!"))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Pushing \"34!!4334\"")));
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("34!!4334"))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Pushing null")));
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)((nova_Nova_Object*)nova_null));
	while (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData))
	{
		nova_Nova_String* l1_Nova_popped = (nova_Nova_String*)nova_null;
		
		l1_Nova_popped = (nova_Nova_String*)(nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData));
		if (l1_Nova_popped != (nova_Nova_String*)nova_null)
		{
			l1_Nova_popped = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_popped), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))));
		}
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Popping: "))), exceptionData, l1_Nova_popped));
	}
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_GenericDemo_Nova_this(example_Nova_GenericDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_GenericDemo_Nova_super(example_Nova_GenericDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

