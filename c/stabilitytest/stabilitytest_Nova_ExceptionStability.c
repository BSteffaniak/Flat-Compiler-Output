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
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_ExceptionStability_Extension_VTable stabilitytest_ExceptionStability_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_ExceptionStability_Nova_test,
};



void stabilitytest_Nova_ExceptionStability_Nova_testException(stabilitytest_Nova_ExceptionStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ExceptionStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ExceptionStability* stabilitytest_Nova_ExceptionStability_Nova_construct(stabilitytest_Nova_ExceptionStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_ExceptionStability, this,);
	this->vtable = &stabilitytest_ExceptionStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_ExceptionStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ExceptionStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_ExceptionStability_Nova_destroy(stabilitytest_Nova_ExceptionStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ExceptionStability_Nova_this(stabilitytest_Nova_ExceptionStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_ExceptionStability_Nova_test(stabilitytest_Nova_ExceptionStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char l1_Nova_worked = 0;
	
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking Exception handling...")));
	l1_Nova_worked = 0;
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 1);
		
		{
			stabilitytest_Nova_ExceptionStability_Nova_testException(this, exceptionData);
		}
	}
	CATCH (1)
	{
		nova_exception_Nova_Exception* l2_Nova_e = (nova_exception_Nova_Exception*)nova_null;
		
		l2_Nova_e = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		l1_Nova_worked = 1;
	}
	FINALLY
	{
	}
	END_TRY;
	if (!l1_Nova_worked)
	{
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed; uncaught Exception")), (intptr_t)nova_null);
	}
}

void stabilitytest_Nova_ExceptionStability_Nova_testException(stabilitytest_Nova_ExceptionStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	volatile char l1_Nova_worked = 0;
	
	l1_Nova_worked = 0;
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 13);
		
		{
			nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking DivideByZeroException... ")));
			TRY
			{
				novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 2);
				
				{
					int l2_Nova_den = 0;
					int l2_Nova_i = 0;
					int nova_zero_check11 = 0;
					
					l2_Nova_den = (int)(0);
					nova_zero_check11 = l2_Nova_den;
					if (nova_zero_check11 == 0)
					{
						THROW(2, nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData));
					}
					l2_Nova_i = 43 / nova_zero_check11;
				}
			}
			CATCH (2)
			{
				nova_exception_Nova_DivideByZeroException* l5_Nova_e = (nova_exception_Nova_DivideByZeroException*)nova_null;
				
				l5_Nova_e = (nova_exception_Nova_DivideByZeroException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				l1_Nova_worked = 1;
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
				nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking StabilityTestException... ")));
				THROW(13, stabilitytest_Nova_StabilityTestException_Nova_construct(0, exceptionData));
			}
			FINALLY
			{
			}
			END_TRY;
			stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to catch DivideByZeroException")), (intptr_t)nova_null);
		}
	}
	CATCH (13)
	{
		stabilitytest_Nova_StabilityTestException* l7_Nova_e = (stabilitytest_Nova_StabilityTestException*)nova_null;
		
		l7_Nova_e = (stabilitytest_Nova_StabilityTestException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		if (!l1_Nova_worked)
		{
			stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed; uncaught DivideByZeroException")), (intptr_t)nova_null);
		}
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
		THROW(1, nova_exception_Nova_Exception_Nova_construct(0, exceptionData, 0));
	}
	FINALLY
	{
	}
	END_TRY;
	if (!l1_Nova_worked)
	{
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed; uncaught StabilityTestException")), (intptr_t)nova_null);
	}
}

void stabilitytest_Nova_ExceptionStability_Nova_super(stabilitytest_Nova_ExceptionStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

