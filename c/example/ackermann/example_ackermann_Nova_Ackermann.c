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
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



char example_ackermann_Nova_Ackermann_Nova_init_static_inited = 0;
void example_ackermann_Nova_Ackermann_Nova_init_static()
{
	if (!example_ackermann_Nova_Ackermann_Nova_init_static_inited) {
		example_ackermann_Nova_Ackermann_Nova_init_static_inited = 1;
		{
		}
	}
}

example_ackermann_Nova_Ackermann* example_ackermann_Nova_Ackermann_Nova_construct(example_ackermann_Nova_Ackermann* this)
{
	CCLASS_NEW(example_ackermann_Nova_Ackermann, this,);
	this->vtable = &example_ackermann_Nova_Ackermann_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_ackermann_Nova_Ackermann_Nova_super(this);
	
	return example_ackermann_Nova_Ackermann_Nova_this((example_ackermann_Nova_Ackermann*)(this));
}

void example_ackermann_Nova_Ackermann_Nova_destroy(example_ackermann_Nova_Ackermann** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_ackermann_Nova_Ackermann_static_Nova_main(example_ackermann_Nova_Ackermann* this, nova_datastruct_list_Nova_Array* args)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Ackermann: "))),
				(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
						example_ackermann_Nova_Ackermann_static_Nova_run(0,
							4,
	1))))));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

int example_ackermann_Nova_Ackermann_static_Nova_run(example_ackermann_Nova_Ackermann* this, int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (m > 0)
	{
		if (n == 0)
		{
			return example_ackermann_Nova_Ackermann_static_Nova_run(0,
				m - 1,
			1);
		}
		else if (n > 0)
		{
			return example_ackermann_Nova_Ackermann_static_Nova_run(0,
				m - 1,
				example_ackermann_Nova_Ackermann_static_Nova_run(0,
					m,
			n - 1));
		}
	}
	return (int)0;
}

int example_ackermann_Nova_Ackermann_static_Nova_run2(example_ackermann_Nova_Ackermann* this, int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (m > 0)
	{
		if (n == 0)
		{
			return example_ackermann_Nova_Ackermann_static_Nova_run(0,
				m - 1,
			1);
		}
		else if (n > 0)
		{
			return example_ackermann_Nova_Ackermann_static_Nova_run(0,
				m - 1,
				example_ackermann_Nova_Ackermann_static_Nova_run(0,
					m,
			n - 1));
		}
	}
	return (int)0;
}

example_ackermann_Nova_Ackermann* example_ackermann_Nova_Ackermann_Nova_this(example_ackermann_Nova_Ackermann* this) {
	return this;
}
void example_ackermann_Nova_Ackermann_Nova_super(example_ackermann_Nova_Ackermann* this)
{
}

