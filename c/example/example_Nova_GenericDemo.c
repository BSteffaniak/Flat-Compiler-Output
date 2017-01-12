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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <nova/NativeObject.h>



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
	
	l1_Nova_strs = nova_datastruct_list_Nova_Stack_0_Nova_construct(0, exceptionData);
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
		nova_Nova_String* l2_Nova_popped = (nova_Nova_String*)nova_null;
		
		l2_Nova_popped = (nova_Nova_String*)(nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(l1_Nova_strs), exceptionData));
		if ((l2_Nova_popped) != (nova_Nova_String*)nova_null)
		{
			l2_Nova_popped = (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(l2_Nova_popped, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\""))))));
		}
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Popping: ")), exceptionData, l2_Nova_popped)));
	}
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_GenericDemo_Nova_this(example_Nova_GenericDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_GenericDemo_Nova_super(example_Nova_GenericDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_GenericDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_GenericDemoFunctionMap* example_Nova_GenericDemoFunctionMap_Nova_construct(example_Nova_GenericDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_GenericDemoFunctionMap, this,);
	this->vtable = &example_GenericDemo_GenericDemoFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_GenericDemoFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_GenericDemoFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_GenericDemoFunctionMap_Nova_destroy(example_Nova_GenericDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_GenericDemoFunctionMap_Nova_this(example_Nova_GenericDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_GenericDemo* example_Nova_GenericDemoFunctionMap_functionMapGenericDemoFunctionMap_Nova_construct(example_Nova_GenericDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_GenericDemo_Nova_construct(0, exceptionData);
}

void example_Nova_GenericDemoFunctionMap_functionMap_static_Nova_main(example_Nova_GenericDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_GenericDemo_static_Nova_main(0, exceptionData, args);
}

void example_Nova_GenericDemoFunctionMap_Nova_super(example_Nova_GenericDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_GenericDemoPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_GenericDemoPropertyMap* example_Nova_GenericDemoPropertyMap_Nova_construct(example_Nova_GenericDemoPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_GenericDemoPropertyMap, this,);
	this->vtable = &example_GenericDemo_GenericDemoPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	example_Nova_GenericDemoPropertyMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_GenericDemoPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_GenericDemoPropertyMap_Nova_destroy(example_Nova_GenericDemoPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_GenericDemoPropertyMap_Nova_this(example_Nova_GenericDemoPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_GenericDemoPropertyMap_Nova_super(example_Nova_GenericDemoPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

