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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>


typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef int (*example_Nova_ClosureDemo_closure1_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);
typedef int (*example_Nova_ClosureDemo_closure2_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);
typedef int (*example_Nova_ClosureDemo_closure3_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);
typedef int (*example_Nova_ClosureDemo_closure4_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, int, int, void*);


void example_Nova_ClosureDemo_Nova_callClosure(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_ClosureDemo_closure4_Nova_closure example_Nova_ClosureDemo_Nova_closure, void* example_Nova_ClosureDemo_ref_Nova_closure, void* closure_context);
int example_Nova_ClosureDemo_static_Nova_multiply(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, int value1, int value2);
int example_Nova_ClosureDemo_static_Nova_pow(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, int base, int pow);
void example_Nova_ClosureDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ClosureDemo* example_Nova_ClosureDemo_Nova_construct(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ClosureDemo, this,);
	this->vtable = &example_ClosureDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_ClosureDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_ClosureDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ClosureDemo_Nova_destroy(example_Nova_ClosureDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ClosureDemo_static_Nova_main(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_ClosureDemo* l1_Nova_demo = (example_Nova_ClosureDemo*)nova_null;
	
	l1_Nova_demo = example_Nova_ClosureDemo_Nova_construct(0, exceptionData);
	example_Nova_ClosureDemo_Nova_callClosure(l1_Nova_demo, exceptionData, (example_Nova_ClosureDemo_closure4_Nova_closure)&example_Nova_ClosureDemo_static_Nova_multiply, nova_null, nova_null);
	example_Nova_ClosureDemo_Nova_callClosure(l1_Nova_demo, exceptionData, (example_Nova_ClosureDemo_closure4_Nova_closure)&example_Nova_ClosureDemo_static_Nova_pow, nova_null, nova_null);
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_ClosureDemo_Nova_callClosure(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_ClosureDemo_closure4_Nova_closure example_Nova_ClosureDemo_Nova_closure, void* example_Nova_ClosureDemo_ref_Nova_closure, void* closure_context)
{
	int l1_Nova_value = 0;
	
	l1_Nova_value = example_Nova_ClosureDemo_Nova_closure(example_Nova_ClosureDemo_ref_Nova_closure, exceptionData, 5, 3, closure_context);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Closure returned ")), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l1_Nova_value))));
}

int example_Nova_ClosureDemo_static_Nova_multiply(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, int value1, int value2)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("multiply was called with ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, value1), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" and ")), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, value2))))))));
	return value1 * value2;
}

int example_Nova_ClosureDemo_static_Nova_pow(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData, int base, int pow)
{
	int l1_Nova_value = 0;
	int l3_Nova_i = 0;
	
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("pow was called with ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, base), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" and ")), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, pow))))))));
	l1_Nova_value = base;
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)(pow - 1); l3_Nova_i++)
	{
		l1_Nova_value = l1_Nova_value * base;
	}
	return l1_Nova_value;
}

void example_Nova_ClosureDemo_Nova_this(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ClosureDemo_Nova_super(example_Nova_ClosureDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

