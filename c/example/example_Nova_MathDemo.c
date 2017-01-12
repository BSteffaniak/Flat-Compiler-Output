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
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>



void example_Nova_MathDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_MathDemo* example_Nova_MathDemo_Nova_construct(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_MathDemo, this,);
	this->vtable = &example_MathDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_MathDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_MathDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_MathDemo_Nova_destroy(example_Nova_MathDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_MathDemo_static_Nova_main(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	int l1_Nova_iterations = 0;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	int l3_Nova_i = 0;
	
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Beginning benchmark...")));
	l1_Nova_iterations = 999999;
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)l1_Nova_iterations; l3_Nova_i++)
	{
		TRY
		{
			novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, nova_exception_Exception_Extension_VTable_val.classInstance, 0);
			
			{
				nova_math_Nova_Math_static_Nova_sin(0, exceptionData, l3_Nova_i);
			}
		}
		CATCH (nova_exception_Exception_Extension_VTable_val.classInstance)
		{
			nova_exception_Nova_Exception* l5_Nova_e = (nova_exception_Nova_Exception*)nova_null;
			
			l5_Nova_e = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		}
		FINALLY
		{
		}
		END_TRY;
	}
	nova_time_Nova_Timer_Nova_stop(0, exceptionData);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l1_Nova_iterations), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" iterations of Math.sin() in ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_MathDemo_Nova_this(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_MathDemo_Nova_super(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_MathDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_MathDemoFunctionMap* example_Nova_MathDemoFunctionMap_Nova_construct(example_Nova_MathDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_MathDemoFunctionMap, this,);
	this->vtable = &example_MathDemo_MathDemoFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_MathDemoFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_MathDemoFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_MathDemoFunctionMap_Nova_destroy(example_Nova_MathDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_MathDemoFunctionMap_Nova_this(example_Nova_MathDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_MathDemo* example_Nova_MathDemoFunctionMap_functionMapMathDemoFunctionMap_Nova_construct(example_Nova_MathDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_MathDemo_Nova_construct(0, exceptionData);
}

void example_Nova_MathDemoFunctionMap_functionMap_static_Nova_main(example_Nova_MathDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_MathDemo_static_Nova_main(0, exceptionData, args);
}

void example_Nova_MathDemoFunctionMap_Nova_super(example_Nova_MathDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_MathDemoPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_MathDemoPropertyMap* example_Nova_MathDemoPropertyMap_Nova_construct(example_Nova_MathDemoPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_MathDemoPropertyMap, this,);
	this->vtable = &example_MathDemo_MathDemoPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	example_Nova_MathDemoPropertyMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_MathDemoPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_MathDemoPropertyMap_Nova_destroy(example_Nova_MathDemoPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_MathDemoPropertyMap_Nova_this(example_Nova_MathDemoPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_MathDemoPropertyMap_Nova_super(example_Nova_MathDemoPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

