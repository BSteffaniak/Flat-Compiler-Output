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
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void stabilitytest_Nova_StabilityTestCase_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityTestCase* stabilitytest_Nova_StabilityTestCase_Nova_construct(stabilitytest_Nova_StabilityTestCase* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTestCase, this,);
	this->vtable = &stabilitytest_StabilityTestCase_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityTestCase_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityTestCase_Nova_destroy(stabilitytest_Nova_StabilityTestCase** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	stabilitytest_Nova_StabilityTest_Nova_destroy(&(*this)->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTestCase_Nova_this(stabilitytest_Nova_StabilityTestCase* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	this->stabilitytest_Nova_StabilityTestCase_Nova_program = program;
}


void stabilitytest_Nova_StabilityTestCase_Nova_super(stabilitytest_Nova_StabilityTestCase* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->stabilitytest_Nova_StabilityTestCase_Nova_program = (stabilitytest_Nova_StabilityTest*)nova_null;
}

void stabilitytest_Nova_StabilityTestCase_virtual_Nova_test(stabilitytest_Nova_StabilityTestCase* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->vtable->stabilitytest_Nova_StabilityTestCase_virtual_Nova_test((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData);
}

