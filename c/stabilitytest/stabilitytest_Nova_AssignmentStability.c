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
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_AssignmentStability_Extension_VTable stabilitytest_AssignmentStability_Extension_VTable_val =
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
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_AssignmentStability_Nova_test,
};


void stabilitytest_Nova_AssignmentStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_AssignmentStability* stabilitytest_Nova_AssignmentStability_Nova_construct(stabilitytest_Nova_AssignmentStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_AssignmentStability, this,);
	this->vtable = &stabilitytest_AssignmentStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_AssignmentStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_AssignmentStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_AssignmentStability_Nova_destroy(stabilitytest_Nova_AssignmentStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_AssignmentStability_Nova_this(stabilitytest_Nova_AssignmentStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_AssignmentStability_Nova_test(stabilitytest_Nova_AssignmentStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_ClassWithProperties* l1_Nova_props = (stabilitytest_Nova_ClassWithProperties*)nova_null;
	char l1_Nova_num = 0;
	char l1_Nova_a = 0;
	char l1_Nova_b = 0;
	char l1_Nova_c = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking embedded property assignments... ")));
	l1_Nova_props = stabilitytest_Nova_ClassWithProperties_Nova_construct(0, exceptionData);
	l1_Nova_num = (char)(stabilitytest_Nova_ClassWithProperties_Mutator_Nova_prop1(l1_Nova_props, exceptionData, stabilitytest_Nova_ClassWithProperties_Mutator_Nova_prop2(l1_Nova_props, exceptionData, 1)));
	if (l1_Nova_num != 1 || stabilitytest_Nova_ClassWithProperties_Accessor_Nova_prop1(l1_Nova_props, exceptionData) != 1 || stabilitytest_Nova_ClassWithProperties_Accessor_Nova_prop2(l1_Nova_props, exceptionData) != 1)
	{
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not return mutated property value correctly. Expected 1, 1, 1 but received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, l1_Nova_num)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, stabilitytest_Nova_ClassWithProperties_Accessor_Nova_prop1(l1_Nova_props, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, stabilitytest_Nova_ClassWithProperties_Accessor_Nova_prop2(l1_Nova_props, exceptionData))))))), (intptr_t)nova_null);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking embedded primitive assignments... ")));
	l1_Nova_a = l1_Nova_b = l1_Nova_c = 1;
	if (l1_Nova_a != 1 || l1_Nova_b != 1 || l1_Nova_c != 1)
	{
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not set assigned primitive values correctly. Expected 1, 1, 1 but received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, l1_Nova_a)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, l1_Nova_b)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, l1_Nova_c)))))), (intptr_t)nova_null);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_AssignmentStability_Nova_super(stabilitytest_Nova_AssignmentStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

