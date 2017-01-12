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
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context168;
typedef struct
{
} Context169;



void stabilitytest_Nova_RegexStability_Nova_match(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_RegexStability_Nova_lambda169(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context168* context);
void stabilitytest_Nova_RegexStability_Nova_lambda170(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context169* context);
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
	Context168* contextArg169 = NOVA_MALLOC(sizeof(Context168));
	nova_datastruct_list_Nova_Array* l1_Nova_matches2 = (nova_datastruct_list_Nova_Array*)nova_null;
	Context169* contextArg170 = NOVA_MALLOC(sizeof(Context169));
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking Regex match... ")));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to find valid match")), !nova_regex_Nova_Regex_0_static_Nova_containsMatch(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a[bd]c"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello adc goodbye"))));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to not find match")), nova_regex_Nova_Regex_0_static_Nova_containsMatch(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a[bd]c"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("no match here..."))));
	l1_Nova_matches = nova_regex_Nova_Regex_0_static_Nova_getMatches(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a[bd]c"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is abc test adc adc hello")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" match")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData) != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("es")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": ")))))))));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&stabilitytest_Nova_RegexStability_Nova_lambda169, this, contextArg169);
	l1_Nova_matches2 = nova_regex_Nova_Regex_0_static_Nova_getMatches(0, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\d+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("whats my number? 818 414-5326")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_matches2), exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" match")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_matches2), exceptionData) != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("es")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": ")))))))));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_matches2), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&stabilitytest_Nova_RegexStability_Nova_lambda170, this, contextArg170);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_RegexStability_Nova_lambda169(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context168* context)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
}

void stabilitytest_Nova_RegexStability_Nova_lambda170(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context169* context)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
}

void stabilitytest_Nova_RegexStability_Nova_super(stabilitytest_Nova_RegexStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


void stabilitytest_Nova_RegexStabilityFunctionMap_functionMap_Nova_match(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_RegexStability* reference);
void stabilitytest_Nova_RegexStabilityFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_RegexStabilityFunctionMap* stabilitytest_Nova_RegexStabilityFunctionMap_Nova_construct(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_RegexStabilityFunctionMap, this,);
	this->vtable = &stabilitytest_RegexStability_RegexStabilityFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCaseFunctionMap_Nova_super((stabilitytest_Nova_StabilityTestCaseFunctionMap*)this, exceptionData);
	stabilitytest_Nova_RegexStabilityFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_RegexStabilityFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_RegexStabilityFunctionMap_Nova_destroy(stabilitytest_Nova_RegexStabilityFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_RegexStabilityFunctionMap_Nova_this(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

stabilitytest_Nova_RegexStability* stabilitytest_Nova_RegexStabilityFunctionMap_functionMapRegexStabilityFunctionMap_Nova_construct(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	return stabilitytest_Nova_RegexStability_Nova_construct(0, exceptionData, program);
}

void stabilitytest_Nova_RegexStabilityFunctionMap_functionMap_Nova_test(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_RegexStability* reference)
{
	stabilitytest_Nova_RegexStability_Nova_test(reference, exceptionData);
}

void stabilitytest_Nova_RegexStabilityFunctionMap_functionMap_Nova_match(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_RegexStability* reference)
{
	stabilitytest_Nova_RegexStability_Nova_match(reference, exceptionData);
}

void stabilitytest_Nova_RegexStabilityFunctionMap_Nova_super(stabilitytest_Nova_RegexStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_RegexStabilityPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_RegexStabilityPropertyMap* stabilitytest_Nova_RegexStabilityPropertyMap_Nova_construct(stabilitytest_Nova_RegexStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_RegexStabilityPropertyMap, this,);
	this->vtable = &stabilitytest_RegexStability_RegexStabilityPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCasePropertyMap_Nova_super((stabilitytest_Nova_StabilityTestCasePropertyMap*)this, exceptionData);
	stabilitytest_Nova_RegexStabilityPropertyMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_RegexStabilityPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_RegexStabilityPropertyMap_Nova_destroy(stabilitytest_Nova_RegexStabilityPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_RegexStabilityPropertyMap_Nova_this(stabilitytest_Nova_RegexStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_RegexStabilityPropertyMap_Nova_super(stabilitytest_Nova_RegexStabilityPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

