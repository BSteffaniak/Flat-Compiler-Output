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
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;


stabilitytest_RegexStability_Extension_VTable stabilitytest_RegexStability_Extension_VTable_val =
{
	0,
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
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_RegexStability_Nova_test,
};



void stabilitytest_Nova_RegexStability_Nova_match(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_RegexStability_Nova_testLambda100(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void stabilitytest_Nova_RegexStability_Nova_testLambda101(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void stabilitytest_Nova_RegexStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_RegexStability* stabilitytest_Nova_RegexStability_Nova_construct(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_RegexStability, this,);
	this->vtable = &stabilitytest_RegexStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_RegexStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_RegexStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_RegexStability_Nova_destroy(stabilitytest_Nova_RegexStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_RegexStability_Nova_this(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_RegexStability_Nova_test(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_RegexStability_Nova_match(this, exceptionData);
}

void stabilitytest_Nova_RegexStability_Nova_match(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_matches = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1 contextArg100 = 
	{
	};
	nova_datastruct_list_Nova_Array* l1_Nova_matches2 = (nova_datastruct_list_Nova_Array*)nova_null;
	Context2 contextArg101 = 
	{
	};
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking Regex match... ")));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to find valid match")), !nova_regex_Nova_Regex_0_static_Nova_containsMatch(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a[bd]c"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello adc goodbye"))));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to not find match")), nova_regex_Nova_Regex_0_static_Nova_containsMatch(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a[bd]c"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("no match here..."))));
	l1_Nova_matches = nova_regex_Nova_Regex_0_static_Nova_getMatches(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a[bd]c"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is abc test adc adc hello")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_matches->nova_datastruct_list_Nova_Array_Nova_count))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" match"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l1_Nova_matches->nova_datastruct_list_Nova_Array_Nova_count != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("es")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))))));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&stabilitytest_Nova_RegexStability_Nova_testLambda100, this, &contextArg100);
	l1_Nova_matches2 = nova_regex_Nova_Regex_0_static_Nova_getMatches(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\d+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("whats my number? 818 414-5326")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_matches2->nova_datastruct_list_Nova_Array_Nova_count))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" match"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l1_Nova_matches2->nova_datastruct_list_Nova_Array_Nova_count != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("es")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))))));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_matches2), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&stabilitytest_Nova_RegexStability_Nova_testLambda101, this, &contextArg101);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_RegexStability_Nova_testLambda100(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))));
}

void stabilitytest_Nova_RegexStability_Nova_testLambda101(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))));
}

void stabilitytest_Nova_RegexStability_Nova_super(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

