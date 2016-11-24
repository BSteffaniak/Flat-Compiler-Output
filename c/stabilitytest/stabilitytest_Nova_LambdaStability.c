#include <precompiled.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;


stabilitytest_LambdaStability_Extension_VTable stabilitytest_LambdaStability_Extension_VTable_val =
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
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_LambdaStability_Nova_test,
};



nova_datastruct_list_Nova_Array* generated12(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* generated13(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData);
char stabilitytest_Nova_LambdaStability_Nova_testLambda48(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_testLambda49(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int i, nova_datastruct_list_Nova_Array* _3, Context2* context);
nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_testLambda50(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void stabilitytest_Nova_LambdaStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_LambdaStability* stabilitytest_Nova_LambdaStability_Nova_construct(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_LambdaStability, this,);
	this->vtable = &stabilitytest_LambdaStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_LambdaStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_LambdaStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_LambdaStability_Nova_destroy(stabilitytest_Nova_LambdaStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_LambdaStability_Nova_this(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_LambdaStability_Nova_test(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_IntArray* l1_Nova_list2 = (nova_datastruct_list_Nova_IntArray*)nova_null;
	nova_Nova_String* l1_Nova_mappedOutput = (nova_Nova_String*)nova_null;
	Context1 contextArg48 = 
	{
	};
	Context2 contextArg49 = 
	{
	};
	nova_Nova_String* l1_Nova_mappedExpected = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_LinkedList* l1_Nova_linked = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_repeated = (nova_datastruct_list_Nova_Array*)nova_null;
	Context3 contextArg50 = 
	{
	};
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_String* l1_Nova_item = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking lambdas... ")));
	l1_Nova_list = generated12(this, exceptionData);
	l1_Nova_list2 = generated13(this, exceptionData);
	l1_Nova_mappedOutput = (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&stabilitytest_Nova_LambdaStability_Nova_testLambda48, this, &contextArg48)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&stabilitytest_Nova_LambdaStability_Nova_testLambda49, this, &contextArg49)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))));
	l1_Nova_mappedExpected = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("0: this?, 1: test?, 2: what shows up?"));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed first list map with 2 args. Expected '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_mappedExpected)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' but received '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_mappedOutput)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), !nova_Nova_String_Nova_equals(l1_Nova_mappedOutput, exceptionData, l1_Nova_mappedExpected));
	l1_Nova_linked = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	nova_datastruct_list_Nova_LinkedList_Nova_add(nova_datastruct_list_Nova_LinkedList_Nova_add(nova_datastruct_list_Nova_LinkedList_Nova_add((nova_datastruct_list_Nova_LinkedList*)(l1_Nova_linked), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test")))), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test2")))), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test3"))));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed reverse linked list")), !nova_Nova_String_Nova_equals(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_LinkedList_Nova_reverse((nova_datastruct_list_Nova_LinkedList*)(l1_Nova_linked), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test3, test2, test"))));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed forward linked list")), !nova_Nova_String_Nova_equals(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_linked), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test, test2, test3"))));
	l1_Nova_repeated = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&stabilitytest_Nova_LambdaStability_Nova_testLambda50, this, &contextArg50));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((l1_Nova_repeated)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		l1_Nova_item = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Map with no arguments failed")), !nova_Nova_String_Nova_equals(l1_Nova_item, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"))));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

nova_datastruct_list_Nova_Array* generated12(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 7);
}

nova_datastruct_list_Nova_IntArray* generated13(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int* l1_Nova_temp = (int*)nova_null;
	
	l1_Nova_temp = (int*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Int) * 7);
	l1_Nova_temp[0] = (int)(1);
	l1_Nova_temp[1] = (int)(2);
	l1_Nova_temp[2] = (int)(3);
	l1_Nova_temp[3] = (int)(4);
	l1_Nova_temp[4] = (int)(5);
	l1_Nova_temp[5] = (int)(6);
	l1_Nova_temp[6] = (int)(7);
	return nova_datastruct_list_Nova_IntArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 7);
}

char stabilitytest_Nova_LambdaStability_Nova_testLambda48(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return x->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_testLambda49(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int i, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, i)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(x), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")))));
}

nova_Nova_String* stabilitytest_Nova_LambdaStability_Nova_testLambda50(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"));
}

void stabilitytest_Nova_LambdaStability_Nova_super(stabilitytest_Nova_LambdaStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

