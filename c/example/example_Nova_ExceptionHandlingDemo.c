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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <example/example_Nova_NonWholeDivisionException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




int example_Nova_ExceptionHandlingDemo_static_Nova_divide(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData, int num, int den);
void example_Nova_ExceptionHandlingDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ExceptionHandlingDemo* example_Nova_ExceptionHandlingDemo_Nova_construct(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ExceptionHandlingDemo, this,);
	this->vtable = &example_ExceptionHandlingDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_ExceptionHandlingDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_ExceptionHandlingDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ExceptionHandlingDemo_Nova_destroy(example_Nova_ExceptionHandlingDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ExceptionHandlingDemo_static_Nova_main(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, example_NonWholeDivisionException_Extension_VTable_val.classInstance, 0);
		
		{
			int l2_Nova_result = 0;
			
			l2_Nova_result = example_Nova_ExceptionHandlingDemo_static_Nova_divide(0, exceptionData, 100, 5);
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("After working example: ")), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l2_Nova_result))));
			l2_Nova_result = example_Nova_ExceptionHandlingDemo_static_Nova_divide(0, exceptionData, 100, 3);
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this output will not show.")));
		}
	}
	CATCH (example_NonWholeDivisionException_Extension_VTable_val.classInstance)
	{
		example_Nova_NonWholeDivisionException* l3_Nova_e = (example_Nova_NonWholeDivisionException*)nova_null;
		
		l3_Nova_e = (example_Nova_NonWholeDivisionException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("You used the divide() method incorrectly.")));
	}
	FINALLY
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Exiting the try block.")));
	}
	END_TRY;
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("After the try block.")));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

int example_Nova_ExceptionHandlingDemo_static_Nova_divide(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData, int num, int den)
{
	int nova_zero_check5 = 0;
	
	if (num % den != 0)
	{
		THROW(example_Nova_NonWholeDivisionException_Nova_construct(0, exceptionData), 0);
	}
	nova_zero_check5 = den;
	if (nova_zero_check5 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	return num / nova_zero_check5;
}

void example_Nova_ExceptionHandlingDemo_Nova_this(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ExceptionHandlingDemo_Nova_super(example_Nova_ExceptionHandlingDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

