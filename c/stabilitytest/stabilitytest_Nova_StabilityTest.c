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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void stabilitytest_Nova_StabilityTest_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTest_Nova_construct(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTest, this,);
	this->vtable = &stabilitytest_StabilityTest_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_StabilityTest_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityTest_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityTest_Nova_destroy(stabilitytest_Nova_StabilityTest** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTest_static_Nova_main(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	stabilitytest_Nova_StabilityTest* l1_Nova_n = (stabilitytest_Nova_StabilityTest*)nova_null;
	stabilitytest_Nova_StabilityTest* l1_Nova_test = (stabilitytest_Nova_StabilityTest*)nova_null;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	
	l1_Nova_n = (stabilitytest_Nova_StabilityTest*)((nova_Nova_Object*)nova_null);
	l1_Nova_test = stabilitytest_Nova_StabilityTest_Nova_construct(0, exceptionData, l1_Nova_n);
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
	stabilitytest_Nova_StabilityTest_Nova_test(l1_Nova_test, exceptionData);
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Took ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void stabilitytest_Nova_StabilityTest_Nova_this(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_StabilityTest_Nova_test(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, stabilitytest_UnstableException_Extension_VTable_val.classInstance, 0);
		
		{
			stabilitytest_Nova_ExceptionStability_Nova_test(stabilitytest_Nova_ExceptionStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_SyntaxStability_Nova_test(stabilitytest_Nova_SyntaxStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_ClosureStability_Nova_test(stabilitytest_Nova_ClosureStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_PolymorphismStability_Nova_test(stabilitytest_Nova_PolymorphismStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_LambdaStability_Nova_test(stabilitytest_Nova_LambdaStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_ToStringStability_Nova_test(stabilitytest_Nova_ToStringStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_AssignmentStability_Nova_test(stabilitytest_Nova_AssignmentStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_RegexStability_Nova_test(stabilitytest_Nova_RegexStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_StaticImportStability_Nova_test(stabilitytest_Nova_StaticImportStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_InnerClassStability_Nova_test(stabilitytest_Nova_InnerClassStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_ExternalInnerClassStability_Nova_test(stabilitytest_Nova_ExternalInnerClassStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_TimeStability_Nova_test(stabilitytest_Nova_TimeStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_ThreadStability_Nova_test(stabilitytest_Nova_ThreadStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_FileStability_Nova_test(stabilitytest_Nova_FileStability_Nova_construct(0, exceptionData, this), exceptionData);
			stabilitytest_Nova_NetworkStability_Nova_test(stabilitytest_Nova_NetworkStability_Nova_construct(0, exceptionData, this), exceptionData);
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("All OK")));
		}
	}
	CATCH (stabilitytest_UnstableException_Extension_VTable_val.classInstance)
	{
		stabilitytest_Nova_UnstableException* l3_Nova_e = (stabilitytest_Nova_UnstableException*)nova_null;
		
		l3_Nova_e = (stabilitytest_Nova_UnstableException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unstable exception thrown: ")), exceptionData, l3_Nova_e->nova_exception_Nova_Exception_Nova_message)));
	}
	FINALLY
	{
	}
	END_TRY;
}

void stabilitytest_Nova_StabilityTest_Nova_fail(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, int condition)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed")) : (nova_Nova_Object*)message);
	condition = (int)(condition == (intptr_t)nova_null ? 1 : condition);
	if (condition)
	{
		THROW(stabilitytest_Nova_UnstableException_Nova_construct(0, exceptionData, message), 0);
	}
}

void stabilitytest_Nova_StabilityTest_Nova_super(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityTestFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StabilityTestFunctionMap* stabilitytest_Nova_StabilityTestFunctionMap_Nova_construct(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StabilityTestFunctionMap, this,);
	this->vtable = &stabilitytest_StabilityTest_StabilityTestFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StabilityTestFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StabilityTestFunctionMap_Nova_destroy(stabilitytest_Nova_StabilityTestFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTestFunctionMap_Nova_this(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StabilityTestFunctionMap_Nova_super(stabilitytest_Nova_StabilityTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

