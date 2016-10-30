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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef int (*stabilitytest_Nova_ClosureStability_closure1_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);
typedef int (*stabilitytest_Nova_ClosureStability_closure2_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);
typedef int (*stabilitytest_Nova_ClosureStability_closure3_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);
typedef double (*stabilitytest_Nova_ClosureStability_closure4_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef double (*stabilitytest_Nova_ClosureStability_closure5_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef double (*stabilitytest_Nova_ClosureStability_closure6_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef void (*stabilitytest_Nova_ClosureStability_closure7_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*stabilitytest_Nova_ClosureStability_closure8_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*stabilitytest_Nova_ClosureStability_closure9_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);

stabilitytest_ClosureStability_Extension_VTable stabilitytest_ClosureStability_Extension_VTable_val =
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
	stabilitytest_Nova_ClosureStability_Nova_test,
};


CCLASS_PRIVATE
(
	int stabilitytest_Nova_ClosureStability_Nova_number;
	
)

void stabilitytest_Nova_ClosureStability_Nova_incrementNumber(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ClosureStability_Nova_testClosures(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ClosureStability_Nova_testMathClosures(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData);
int stabilitytest_Nova_ClosureStability_static_Nova_callClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ClosureStability_closure3_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* closure_context, int a, int b);
double stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ClosureStability_closure6_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* closure_context, double value);
void stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ClosureStability_closure9_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* closure_context);
int stabilitytest_Nova_ClosureStability_static_Nova_multiply(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, int value1, int value2);
int stabilitytest_Nova_ClosureStability_static_Nova_pow(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, int base, int pow);
double stabilitytest_Nova_ClosureStability_Nova_TOLERANCE;
void stabilitytest_Nova_ClosureStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ClosureStability* stabilitytest_Nova_ClosureStability_Nova_construct(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_ClosureStability, this);
	this->vtable = &stabilitytest_ClosureStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_ClosureStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ClosureStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_ClosureStability_Nova_destroy(stabilitytest_Nova_ClosureStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ClosureStability_Nova_this(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_ClosureStability_Nova_incrementNumber(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->stabilitytest_Nova_ClosureStability_Nova_number++;
}

void stabilitytest_Nova_ClosureStability_Nova_test(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_ClosureStability_Nova_TOLERANCE = (double)(0.0000000001);
	stabilitytest_Nova_ClosureStability_Nova_testClosures(this, exceptionData);
}

void stabilitytest_Nova_ClosureStability_Nova_testClosures(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking closures...")));
	stabilitytest_Nova_ClosureStability_Nova_testMathClosures(this, exceptionData);
	stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure(this, exceptionData);
}

void stabilitytest_Nova_ClosureStability_Nova_testMathClosures(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_a = 0;
	int l1_Nova_b = 0;
	double l1_Nova_value = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking static math closures... ")));
	l1_Nova_a = (int)(5);
	l1_Nova_b = (int)(3);
	l1_Nova_value = (double)(0.5);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to call multiply(Int, Int) closure")), stabilitytest_Nova_ClosureStability_static_Nova_callClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure3_Nova_closure)&stabilitytest_Nova_ClosureStability_static_Nova_multiply, this, nova_null, l1_Nova_a, l1_Nova_b) != stabilitytest_Nova_ClosureStability_static_Nova_multiply(0, exceptionData, l1_Nova_a, l1_Nova_b));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to call pow(Int, Int) closure")), stabilitytest_Nova_ClosureStability_static_Nova_callClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure3_Nova_closure)&stabilitytest_Nova_ClosureStability_static_Nova_pow, this, nova_null, l1_Nova_a, l1_Nova_b) != stabilitytest_Nova_ClosureStability_static_Nova_pow(0, exceptionData, l1_Nova_a, l1_Nova_b));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to call Math.sin(Double) closure")), stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure6_Nova_closure)&nova_math_Nova_Math_static_Nova_sin, 0, nova_null, l1_Nova_value) - nova_math_Nova_Math_static_Nova_sin(0, exceptionData, l1_Nova_value) >= stabilitytest_Nova_ClosureStability_Nova_TOLERANCE);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to call Math.tan(Double) closure")), stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure6_Nova_closure)&nova_math_Nova_Math_static_Nova_tan, 0, nova_null, l1_Nova_value) - nova_math_Nova_Math_static_Nova_tan(0, exceptionData, l1_Nova_value) >= stabilitytest_Nova_ClosureStability_Nova_TOLERANCE);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_ClosureStability_Nova_testInstanceClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_ClosureStability* l1_Nova_c = (stabilitytest_Nova_ClosureStability*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking instance closures... ")));
	l1_Nova_c = stabilitytest_Nova_ClosureStability_Nova_construct(0, exceptionData, this->stabilitytest_Nova_StabilityTestCase_Nova_program);
	stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure9_Nova_closure)&stabilitytest_Nova_ClosureStability_Nova_incrementNumber, l1_Nova_c, nova_null);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to call incrementNumber() instance closure")), l1_Nova_c->prv->stabilitytest_Nova_ClosureStability_Nova_number == 0);
	stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure9_Nova_closure)&stabilitytest_Nova_ClosureStability_Nova_incrementNumber, stabilitytest_Nova_ClosureStability_Nova_construct(0, exceptionData, this->stabilitytest_Nova_StabilityTestCase_Nova_program), nova_null);
	stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(0, exceptionData, (stabilitytest_Nova_ClosureStability_closure9_Nova_closure)&stabilitytest_Nova_ClosureStability_Nova_incrementNumber, l1_Nova_c, nova_null);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

int stabilitytest_Nova_ClosureStability_static_Nova_callClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ClosureStability_closure3_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* closure_context, int a, int b)
{
	return stabilitytest_Nova_ClosureStability_Nova_closure(stabilitytest_Nova_ClosureStability_ref_Nova_closure, exceptionData, a, b, closure_context);
}

double stabilitytest_Nova_ClosureStability_static_Nova_mathClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ClosureStability_closure6_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* closure_context, double value)
{
	return stabilitytest_Nova_ClosureStability_Nova_closure(stabilitytest_Nova_ClosureStability_ref_Nova_closure, exceptionData, value, closure_context);
}

void stabilitytest_Nova_ClosureStability_static_Nova_instanceClosure(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ClosureStability_closure9_Nova_closure stabilitytest_Nova_ClosureStability_Nova_closure, void* stabilitytest_Nova_ClosureStability_ref_Nova_closure, void* closure_context)
{
	stabilitytest_Nova_ClosureStability_Nova_closure(stabilitytest_Nova_ClosureStability_ref_Nova_closure, exceptionData, closure_context);
}

int stabilitytest_Nova_ClosureStability_static_Nova_multiply(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, int value1, int value2)
{
	return value1 * value2;
}

int stabilitytest_Nova_ClosureStability_static_Nova_pow(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData, int base, int pow)
{
	int l1_Nova_value = 0;
	int l2_Nova_i = 0;
	
	l1_Nova_value = base;
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)(pow - 1); l2_Nova_i++)
	{
		l1_Nova_value *= base;
	}
	return l1_Nova_value;
}

void stabilitytest_Nova_ClosureStability_Nova_super(stabilitytest_Nova_ClosureStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->stabilitytest_Nova_ClosureStability_Nova_number = 0;
}

