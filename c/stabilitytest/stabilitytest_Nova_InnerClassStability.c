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
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



CCLASS_PRIVATE
(
	stabilitytest_Nova_MyInner,
	int stabilitytest_Nova_MyInner_Nova_y;
	
)
void stabilitytest_Nova_InnerClassStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_InnerClassStability* stabilitytest_Nova_InnerClassStability_Nova_construct(stabilitytest_Nova_InnerClassStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_InnerClassStability, this,);
	this->vtable = &stabilitytest_InnerClassStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_InnerClassStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_InnerClassStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_InnerClassStability_Nova_destroy(stabilitytest_Nova_InnerClassStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_InnerClassStability_Nova_this(stabilitytest_Nova_InnerClassStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_InnerClassStability_Nova_test(stabilitytest_Nova_InnerClassStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_MyInner* l1_Nova_instance = (stabilitytest_Nova_MyInner*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking inner classes... ")));
	l1_Nova_instance = stabilitytest_Nova_MyInner_Nova_construct(0, exceptionData, 3, 5);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("did not set values correctly")), l1_Nova_instance->stabilitytest_Nova_MyInner_Nova_x != 3 || l1_Nova_instance->prv->stabilitytest_Nova_MyInner_Nova_y != 5);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_InnerClassStability_Nova_super(stabilitytest_Nova_InnerClassStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_MyOuter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_MyOuter* stabilitytest_Nova_MyOuter_Nova_construct(stabilitytest_Nova_MyOuter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_MyOuter, this,);
	this->vtable = &stabilitytest_InnerClassStability_MyOuter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_MyOuter_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_MyOuter_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_MyOuter_Nova_destroy(stabilitytest_Nova_MyOuter** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_MyOuter_Nova_test(stabilitytest_Nova_MyOuter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_MyInner* l1_Nova_instance = (stabilitytest_Nova_MyInner*)nova_null;
	
	l1_Nova_instance = stabilitytest_Nova_MyInner_Nova_construct(0, exceptionData, 4, 6);
}

void stabilitytest_Nova_MyOuter_Nova_this(stabilitytest_Nova_MyOuter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_MyOuter_Nova_super(stabilitytest_Nova_MyOuter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_InnerClassStabilityFunctionMap* stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_construct(stabilitytest_Nova_InnerClassStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_InnerClassStabilityFunctionMap, this,);
	this->vtable = &stabilitytest_InnerClassStability_InnerClassStabilityFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_destroy(stabilitytest_Nova_InnerClassStabilityFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_this(stabilitytest_Nova_InnerClassStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_super(stabilitytest_Nova_InnerClassStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_MyOuterFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_MyOuterFunctionMap* stabilitytest_Nova_MyOuterFunctionMap_Nova_construct(stabilitytest_Nova_MyOuterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_MyOuterFunctionMap, this,);
	this->vtable = &stabilitytest_InnerClassStability_MyOuterFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_MyOuterFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_MyOuterFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_MyOuterFunctionMap_Nova_destroy(stabilitytest_Nova_MyOuterFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_MyOuterFunctionMap_Nova_this(stabilitytest_Nova_MyOuterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_MyOuterFunctionMap_Nova_super(stabilitytest_Nova_MyOuterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_MyInner_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_MyInner* stabilitytest_Nova_MyInner_Nova_construct(stabilitytest_Nova_MyInner* this, nova_exception_Nova_ExceptionData* exceptionData, int x, int y)
{
	CCLASS_NEW(stabilitytest_Nova_MyInner, this);
	this->vtable = &stabilitytest_InnerClassStability_MyInner_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_MyInner_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_MyInner_Nova_this(this, exceptionData, x, y);
	}
	
	return this;
}

void stabilitytest_Nova_MyInner_Nova_destroy(stabilitytest_Nova_MyInner** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_MyInner_Nova_this(stabilitytest_Nova_MyInner* this, nova_exception_Nova_ExceptionData* exceptionData, int x, int y)
{
	this->stabilitytest_Nova_MyInner_Nova_x = x;
	this->prv->stabilitytest_Nova_MyInner_Nova_y = y;
}

void stabilitytest_Nova_MyInner_Nova_super(stabilitytest_Nova_MyInner* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->stabilitytest_Nova_MyInner_Nova_x = 0;
	this->prv->stabilitytest_Nova_MyInner_Nova_y = 0;
}

void stabilitytest_Nova_MyInnerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_MyInnerFunctionMap* stabilitytest_Nova_MyInnerFunctionMap_Nova_construct(stabilitytest_Nova_MyInnerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_MyInnerFunctionMap, this,);
	this->vtable = &stabilitytest_InnerClassStability_MyInnerFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_MyInnerFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_MyInnerFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_MyInnerFunctionMap_Nova_destroy(stabilitytest_Nova_MyInnerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_MyInnerFunctionMap_Nova_this(stabilitytest_Nova_MyInnerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_MyInnerFunctionMap_Nova_super(stabilitytest_Nova_MyInnerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

