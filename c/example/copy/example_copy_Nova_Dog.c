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
#include <nova/NativeObject.h>



void example_copy_Nova_Dog_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_copy_Nova_Dog* example_copy_Nova_Dog_Nova_construct(example_copy_Nova_Dog* this, nova_exception_Nova_ExceptionData* exceptionData, int a, int b)
{
	CCLASS_NEW(example_copy_Nova_Dog, this,);
	this->vtable = &example_copy_Dog_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_copy_Nova_Dog_Nova_super(this, exceptionData);
	
	{
		example_copy_Nova_Dog_Nova_this(this, exceptionData, a, b);
	}
	
	return this;
}

void example_copy_Nova_Dog_Nova_destroy(example_copy_Nova_Dog** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_copy_Nova_Dog_Nova_this(example_copy_Nova_Dog* this, nova_exception_Nova_ExceptionData* exceptionData, int a, int b)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, a), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, b))))));
}

void example_copy_Nova_Dog_Nova_super(example_copy_Nova_Dog* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_copy_Nova_DogFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_copy_Nova_DogFunctionMap* example_copy_Nova_DogFunctionMap_Nova_construct(example_copy_Nova_DogFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_copy_Nova_DogFunctionMap, this,);
	this->vtable = &example_copy_Dog_DogFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_copy_Nova_DogFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_copy_Nova_DogFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_copy_Nova_DogFunctionMap_Nova_destroy(example_copy_Nova_DogFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_copy_Nova_DogFunctionMap_Nova_this(example_copy_Nova_DogFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_copy_Nova_Dog* example_copy_Nova_DogFunctionMap_functionMapDogFunctionMap_Nova_construct(example_copy_Nova_DogFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int a, int b)
{
	return example_copy_Nova_Dog_Nova_construct(0, exceptionData, a, b);
}

void example_copy_Nova_DogFunctionMap_Nova_super(example_copy_Nova_DogFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_copy_Nova_DogPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_copy_Nova_DogPropertyMap* example_copy_Nova_DogPropertyMap_Nova_construct(example_copy_Nova_DogPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_copy_Nova_DogPropertyMap, this,);
	this->vtable = &example_copy_Dog_DogPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	example_copy_Nova_DogPropertyMap_Nova_super(this, exceptionData);
	
	{
		example_copy_Nova_DogPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_copy_Nova_DogPropertyMap_Nova_destroy(example_copy_Nova_DogPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_copy_Nova_DogPropertyMap_Nova_this(example_copy_Nova_DogPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_copy_Nova_DogPropertyMap_Nova_super(example_copy_Nova_DogPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

