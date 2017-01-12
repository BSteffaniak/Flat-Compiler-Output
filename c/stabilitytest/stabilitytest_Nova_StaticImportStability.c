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
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>



void stabilitytest_Nova_StaticImportStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StaticImportStability* stabilitytest_Nova_StaticImportStability_Nova_construct(stabilitytest_Nova_StaticImportStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_StaticImportStability, this,);
	this->vtable = &stabilitytest_StaticImportStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_StaticImportStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StaticImportStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_StaticImportStability_Nova_destroy(stabilitytest_Nova_StaticImportStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StaticImportStability_Nova_this(stabilitytest_Nova_StaticImportStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_StaticImportStability_Nova_test(stabilitytest_Nova_StaticImportStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking math static imports... ")));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call abs correctly")), nova_math_Nova_Math_0_static_Nova_abs((nova_math_Nova_Math*)(this), exceptionData, -5) != 5);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call max correctly")), nova_math_Nova_Math_static_Nova_max((nova_math_Nova_Math*)(this), exceptionData, -5, -6) != -5);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call min correctly")), nova_math_Nova_Math_static_Nova_min((nova_math_Nova_Math*)(this), exceptionData, -5, -6) != -6);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call sign correctly")), nova_math_Nova_Math_static_Nova_sign((nova_math_Nova_Math*)(this), exceptionData, -5) != -1);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call round correctly")), nova_math_Nova_Math_static_Nova_round((nova_math_Nova_Math*)(this), exceptionData, 5.6) != 6);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_StaticImportStability_Nova_super(stabilitytest_Nova_StaticImportStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StaticImportStabilityFunctionMap* stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_construct(stabilitytest_Nova_StaticImportStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StaticImportStabilityFunctionMap, this,);
	this->vtable = &stabilitytest_StaticImportStability_StaticImportStabilityFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCaseFunctionMap_Nova_super((stabilitytest_Nova_StabilityTestCaseFunctionMap*)this, exceptionData);
	stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_destroy(stabilitytest_Nova_StaticImportStabilityFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_this(stabilitytest_Nova_StaticImportStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

stabilitytest_Nova_StaticImportStability* stabilitytest_Nova_StaticImportStabilityFunctionMap_functionMapStaticImportStabilityFunctionMap_Nova_construct(stabilitytest_Nova_StaticImportStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	return stabilitytest_Nova_StaticImportStability_Nova_construct(0, exceptionData, program);
}

void stabilitytest_Nova_StaticImportStabilityFunctionMap_functionMap_Nova_test(stabilitytest_Nova_StaticImportStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StaticImportStability* reference)
{
	stabilitytest_Nova_StaticImportStability_Nova_test(reference, exceptionData);
}

void stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_super(stabilitytest_Nova_StaticImportStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_StaticImportStabilityPropertyMap* stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_construct(stabilitytest_Nova_StaticImportStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_StaticImportStabilityPropertyMap, this,);
	this->vtable = &stabilitytest_StaticImportStability_StaticImportStabilityPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCasePropertyMap_Nova_super((stabilitytest_Nova_StabilityTestCasePropertyMap*)this, exceptionData);
	stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_destroy(stabilitytest_Nova_StaticImportStabilityPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_this(stabilitytest_Nova_StaticImportStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_super(stabilitytest_Nova_StaticImportStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

