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




void stabilitytest_Nova_ToStringStability_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected);
void stabilitytest_Nova_ToStringStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ToStringStability* stabilitytest_Nova_ToStringStability_Nova_construct(stabilitytest_Nova_ToStringStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_ToStringStability, this,);
	this->vtable = &stabilitytest_ToStringStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_ToStringStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ToStringStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_ToStringStability_Nova_destroy(stabilitytest_Nova_ToStringStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ToStringStability_Nova_this(stabilitytest_Nova_ToStringStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_ToStringStability_Nova_test(stabilitytest_Nova_ToStringStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	double l1_Nova_d = 0;
	char l1_Nova_b = 0;
	int l1_Nova_i = 0;
	long_long l1_Nova_l = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking toString implementations... ")));
	l1_Nova_d = (double)(5.232);
	stabilitytest_Nova_ToStringStability_Nova_checkToString(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Double")), (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Double_Nova_construct(0, exceptionData, l1_Nova_d)), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("5.232")));
	l1_Nova_b = 127;
	stabilitytest_Nova_ToStringStability_Nova_checkToString(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Byte")), (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Byte_Nova_construct(0, exceptionData, l1_Nova_b)), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("127")));
	l1_Nova_i = 2147483647;
	stabilitytest_Nova_ToStringStability_Nova_checkToString(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Int")), (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Int_Nova_construct(0, exceptionData, l1_Nova_i)), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("2147483647")));
	l1_Nova_l = (-9223372036854775807LL - 1);
	stabilitytest_Nova_ToStringStability_Nova_checkToString(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Long")), (nova_primitive_number_Nova_Number*)(nova_primitive_number_Nova_Long_Nova_construct(0, exceptionData, l1_Nova_l)), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-9223372036854775808")));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_ToStringStability_Nova_checkToString(stabilitytest_Nova_ToStringStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected)
{
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((type), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".toString failed. expected ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((expected), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" but received ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((number)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))), !nova_Nova_String_Nova_equals(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(number), exceptionData), exceptionData, expected));
}

void stabilitytest_Nova_ToStringStability_Nova_super(stabilitytest_Nova_ToStringStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


void stabilitytest_Nova_ToStringStabilityFunctionMap_functionMap_Nova_checkToString(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ToStringStability* reference, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected);
void stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ToStringStabilityFunctionMap* stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_construct(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_ToStringStabilityFunctionMap, this,);
	this->vtable = &stabilitytest_ToStringStability_ToStringStabilityFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCaseFunctionMap_Nova_super((stabilitytest_Nova_StabilityTestCaseFunctionMap*)this, exceptionData);
	stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_destroy(stabilitytest_Nova_ToStringStabilityFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_this(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

stabilitytest_Nova_ToStringStability* stabilitytest_Nova_ToStringStabilityFunctionMap_functionMapToStringStabilityFunctionMap_Nova_construct(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	return stabilitytest_Nova_ToStringStability_Nova_construct(0, exceptionData, program);
}

void stabilitytest_Nova_ToStringStabilityFunctionMap_functionMap_Nova_test(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ToStringStability* reference)
{
	stabilitytest_Nova_ToStringStability_Nova_test(reference, exceptionData);
}

void stabilitytest_Nova_ToStringStabilityFunctionMap_functionMap_Nova_checkToString(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ToStringStability* reference, nova_Nova_String* type, nova_primitive_number_Nova_Number* number, nova_Nova_String* expected)
{
	stabilitytest_Nova_ToStringStability_Nova_checkToString(reference, exceptionData, type, number, expected);
}

void stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_super(stabilitytest_Nova_ToStringStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ToStringStabilityPropertyMap* stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_construct(stabilitytest_Nova_ToStringStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_ToStringStabilityPropertyMap, this,);
	this->vtable = &stabilitytest_ToStringStability_ToStringStabilityPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCasePropertyMap_Nova_super((stabilitytest_Nova_StabilityTestCasePropertyMap*)this, exceptionData);
	stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_destroy(stabilitytest_Nova_ToStringStabilityPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_this(stabilitytest_Nova_ToStringStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_super(stabilitytest_Nova_ToStringStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

