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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <stabilitytest/stabilitytest_Nova_Node.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;


stabilitytest_SyntaxStability_Extension_VTable stabilitytest_SyntaxStability_Extension_VTable_val =
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
	stabilitytest_Nova_SyntaxStability_Nova_test,
};



void stabilitytest_Nova_SyntaxStability_Nova_checkMatchStatements(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkLoops(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkWhileLoops(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkForLoops(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkUntil(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test1(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test2(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test3(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkMultipleReturnValues(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
int stabilitytest_Nova_SyntaxStability_static_Nova_ret2(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, int* ret1);
int stabilitytest_Nova_SyntaxStability_static_Nova_swap(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, int stabilitytest_Nova_SyntaxStability_Nova_a, int stabilitytest_Nova_SyntaxStability_Nova_b, int* ret1);
nova_Nova_String* stabilitytest_Nova_SyntaxStability_static_Nova_swap2(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_a, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_b, nova_Nova_String** ret1);
char stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_i);
void stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_s);
void stabilitytest_Nova_SyntaxStability_Nova_checkIterators(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkTernary(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkElvis(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
char stabilitytest_Nova_SyntaxStability_Nova_trueValue(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
char stabilitytest_Nova_SyntaxStability_Nova_falseValue(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkRepeat(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
int stabilitytest_Nova_SyntaxStability_0_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_s, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_arg, int stabilitytest_Nova_SyntaxStability_Nova_jum, int stabilitytest_Nova_SyntaxStability_Nova_jdd, int stabilitytest_Nova_SyntaxStability_Nova_joe);
int stabilitytest_Nova_SyntaxStability_1_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_s, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_arg, int stabilitytest_Nova_SyntaxStability_Nova_num, int stabilitytest_Nova_SyntaxStability_Nova_add);
void stabilitytest_Nova_SyntaxStability_Nova_checkNamedArguments(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkZipper(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_checkSafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_Node* stabilitytest_Nova_SyntaxStability_Nova_n);
nova_datastruct_list_Nova_Array* generated20(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated21(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated22(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* stabilitytest_Nova_SyntaxStability_Nova_testLambda64(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_x, nova_Nova_Object* stabilitytest_Nova_SyntaxStability_Nova_y, Context1* context);
nova_datastruct_list_Nova_Array* generated23(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_SyntaxStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_SyntaxStability* stabilitytest_Nova_SyntaxStability_Nova_construct(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* stabilitytest_Nova_SyntaxStability_Nova_program)
{
	CCLASS_NEW(stabilitytest_Nova_SyntaxStability, this,);
	this->vtable = &stabilitytest_SyntaxStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_SyntaxStability_Nova_this(this, exceptionData, stabilitytest_Nova_SyntaxStability_Nova_program);
	}
	
	return this;
}

void stabilitytest_Nova_SyntaxStability_Nova_destroy(stabilitytest_Nova_SyntaxStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_SyntaxStability_Nova_this(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* stabilitytest_Nova_SyntaxStability_Nova_program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, stabilitytest_Nova_SyntaxStability_Nova_program);
}

void stabilitytest_Nova_SyntaxStability_Nova_test(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_SyntaxStability_Nova_checkLoops(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkUntil(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkMatchStatements(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkIterators(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkTernary(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkElvis(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkRepeat(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkNamedArguments(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkZipper(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkSafeNavigation(this, exceptionData);
}

void stabilitytest_Nova_SyntaxStability_Nova_checkMatchStatements(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_num = 0;
	char l1_Nova_worked = 0;
	int l1_Nova_val = 0;
	char l1_Nova_worked2 = 0;
	char nova_local_0 = 0;
	int nova_local_1 = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking simple match statement... ")));
	l1_Nova_num = (int)(3);
	l1_Nova_worked = 0;
	switch ((l1_Nova_num))
	{
		case 1:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		case 2:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		case 3:
		l1_Nova_worked = 1;
		break;
		case 4:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		default:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match failed to accept the correct case")));
	}
	if (!l1_Nova_worked)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("FAIL")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking simple match statement with indentation... ")));
	l1_Nova_num = (int)(3);
	l1_Nova_worked = 0;
	switch ((l1_Nova_num))
	{
		case 1:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		case 2:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		case 3:
		l1_Nova_worked = 1;
		break;
		case 4:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		default:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match failed to accept the correct case")));
	}
	if (!l1_Nova_worked)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("FAIL")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking simple match statement with scopes... ")));
	l1_Nova_num = (int)(3);
	l1_Nova_worked = 0;
	switch ((l1_Nova_num))
	{
		case 1:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		case 2:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		case 3:
		l1_Nova_worked = 1;
		break;
		case 4:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
		break;
		default:
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match failed to accept the correct case")));
	}
	if (!l1_Nova_worked)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("FAIL")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking match statement with variable case values... ")));
	l1_Nova_val = (int)(1);
	l1_Nova_num = (int)(3);
	l1_Nova_worked = 0;
	if ((l1_Nova_num) == (l1_Nova_val++))
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
	}
	else if ((l1_Nova_num) == l1_Nova_val++)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
	}
	else if ((l1_Nova_num) == (l1_Nova_val++))
	{
		l1_Nova_worked = 1;
	}
	else if ((l1_Nova_num) == l1_Nova_val++)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
	}
	else
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match failed to accept the correct case")));
	}
	if (!l1_Nova_worked)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("FAIL")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking match statement with variable case values and fallthrough... ")));
	l1_Nova_val = (int)(1);
	l1_Nova_num = (int)(3);
	l1_Nova_worked = 0;
	l1_Nova_worked2 = 0;
	nova_local_1 = (l1_Nova_num++);
	do
	{
		if (nova_local_1 == l1_Nova_val++)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
			break;
		}
		else if (nova_local_1 == l1_Nova_val++)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match accepted incorrect case")));
			break;
		}
		else if (nova_local_1 == l1_Nova_val++)
		{
			l1_Nova_worked = 1;
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_local_1 == l1_Nova_val++)
		{
			l1_Nova_worked2 = 1;
			break;
		}
		else
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Match failed to accept the correct case")));
		}
	}
	while (0);
	if (!l1_Nova_worked || !l1_Nova_worked2)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("FAIL")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkLoops(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_SyntaxStability_Nova_checkWhileLoops(this, exceptionData);
	stabilitytest_Nova_SyntaxStability_Nova_checkForLoops(this, exceptionData);
}

void stabilitytest_Nova_SyntaxStability_Nova_checkWhileLoops(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_num = 0;
	int l1_Nova_num2 = 0;
	int l1_Nova_num3 = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking inline while loop... ")));
	l1_Nova_num = (int)(0);
	l1_Nova_num2 = (int)(0);
	l1_Nova_num3 = (int)(0);
	while (l1_Nova_num < 100)
	{
		l1_Nova_num++;
	}
	while (l1_Nova_num2 < 100)
	{
		l1_Nova_num2++;
	}
	while (l1_Nova_num3 < 100)
	{
		if (1)
		{
			if (1)
			{
				l1_Nova_num3++;
			}
		}
	}
	if (l1_Nova_num != 100 || l1_Nova_num2 != 100 || l1_Nova_num3 != 100)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inline while loop failed.")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkForLoops(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_num = 0;
	int l1_Nova_num2 = 0;
	int l1_Nova_num3 = 0;
	int l2_Nova_i = 0;
	int l4_Nova_i2 = 0;
	int l6_Nova_i3 = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking inline for loop... ")));
	l1_Nova_num = (int)(0);
	l1_Nova_num2 = (int)(0);
	l1_Nova_num3 = (int)(0);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)100; l2_Nova_i++)
	{
		l1_Nova_num++;
	}
	l4_Nova_i2 = (int)0;
	for (; l4_Nova_i2 < (int)100; l4_Nova_i2++)
	{
		l1_Nova_num2++;
	}
	l6_Nova_i3 = (int)0;
	for (; l6_Nova_i3 < (int)100; l6_Nova_i3++)
	{
		if (1)
		{
			if (1)
			{
				l1_Nova_num3++;
			}
		}
	}
	if (l1_Nova_num != 100 || l1_Nova_num2 != 100 || l1_Nova_num3 != 100)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inline for loop failed. Expected 100, 100, 100 received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num2))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num3))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkUntil(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_Object* l1_Nova_obj = (nova_Nova_Object*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking until statement... ")));
	l1_Nova_obj = (nova_Nova_Object*)nova_null;
	if (!(l1_Nova_obj != (nova_Nova_Object*)nova_null))
	{
		l1_Nova_obj = stabilitytest_Nova_SyntaxStability_static_Nova_test1(0, exceptionData);
		if (!(l1_Nova_obj != (nova_Nova_Object*)nova_null))
		{
			l1_Nova_obj = stabilitytest_Nova_SyntaxStability_static_Nova_test2(0, exceptionData);
			if (!(l1_Nova_obj != (nova_Nova_Object*)nova_null))
			{
				l1_Nova_obj = stabilitytest_Nova_SyntaxStability_static_Nova_test3(0, exceptionData);
				if (!(l1_Nova_obj != (nova_Nova_Object*)nova_null))
				{
					stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to stop after correct condition")));
				}
			}
		}
	}
	if (l1_Nova_obj == (nova_Nova_Object*)nova_null)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to reach correct condition")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test1(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_null;
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test2(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_null;
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_static_Nova_test3(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_Object_Nova_construct(0, exceptionData);
}

void stabilitytest_Nova_SyntaxStability_Nova_checkMultipleReturnValues(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_ret1 = 0;
	int l1_Nova_ret2 = 0;
	nova_Nova_String* l1_Nova_s1 = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_s2 = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking methods with multiple return values... ")));
	l1_Nova_ret1 = (int)(1);
	l1_Nova_ret2 = (int)(2);
	l1_Nova_ret1 = stabilitytest_Nova_SyntaxStability_static_Nova_ret2(0, exceptionData, &l1_Nova_ret2);
	if (l1_Nova_ret1 != 5 || l1_Nova_ret2 != 2)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to pass over second return value")));
	}
	l1_Nova_ret1 = (int)(1);
	l1_Nova_ret2 = (int)(2);
	l1_Nova_ret1 = stabilitytest_Nova_SyntaxStability_static_Nova_swap(0, exceptionData, l1_Nova_ret1, l1_Nova_ret2, &l1_Nova_ret2);
	if (l1_Nova_ret1 != 2 || l1_Nova_ret2 != 1)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to swap primitive values with multiple return values")));
	}
	l1_Nova_s1 = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello"));
	l1_Nova_s2 = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("world"));
	l1_Nova_s1 = stabilitytest_Nova_SyntaxStability_static_Nova_swap2(0, exceptionData, l1_Nova_s1, l1_Nova_s2, &l1_Nova_s2);
	if (!nova_Nova_String_Nova_equals(l1_Nova_s1, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("world"))) || !nova_Nova_String_Nova_equals(l1_Nova_s2, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello"))))
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to swap String values with multiple return values")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

int stabilitytest_Nova_SyntaxStability_static_Nova_ret2(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, int* ret1)
{
	return (int)5;
}

int stabilitytest_Nova_SyntaxStability_static_Nova_swap(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, int stabilitytest_Nova_SyntaxStability_Nova_a, int stabilitytest_Nova_SyntaxStability_Nova_b, int* ret1)
{
	int nova_local_0 = 0;
	
	nova_local_0 = stabilitytest_Nova_SyntaxStability_Nova_b;
	(*ret1) = stabilitytest_Nova_SyntaxStability_Nova_a;
	return nova_local_0;
}

nova_Nova_String* stabilitytest_Nova_SyntaxStability_static_Nova_swap2(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_a, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_b, nova_Nova_String** ret1)
{
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	
	nova_local_0 = stabilitytest_Nova_SyntaxStability_Nova_b;
	(*ret1) = stabilitytest_Nova_SyntaxStability_Nova_a;
	return nova_local_0;
}

char stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_i)
{
	return (char)stabilitytest_Nova_SyntaxStability_Nova_i->nova_Nova_String_Nova_count >= 4;
}

void stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_s)
{
	if (stabilitytest_Nova_SyntaxStability_Nova_s->nova_Nova_String_Nova_count < 4)
	{
		THROW(14, stabilitytest_Nova_UnstableException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("filtering failed"))));
	}
}

void stabilitytest_Nova_SyntaxStability_Nova_checkIterators(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Iterator* l1_Nova_iter = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_String* l8_Nova_string = (nova_Nova_String*)nova_null;
	int l4_Nova_n = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking filter functionality... ")));
	l1_Nova_list = generated20(this, exceptionData);
	l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&stabilitytest_Nova_SyntaxStability_static_Nova_filterFunc, this, nova_null));
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 14);
		
		{
			nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_list2), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&stabilitytest_Nova_SyntaxStability_static_Nova_foreachClosure, this, nova_null);
		}
	}
	CATCH (14)
	{
		stabilitytest_Nova_UnstableException* l2_Nova_e = (stabilitytest_Nova_UnstableException*)nova_null;
		
		l2_Nova_e = (stabilitytest_Nova_UnstableException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to filter data correctly")));
	}
	FINALLY
	{
	}
	END_TRY;
	l4_Nova_n = (int)0;
	for (; l4_Nova_n < (int)l1_Nova_list2->nova_datastruct_list_Nova_Array_Nova_count; l4_Nova_n++)
	{
		if ((int)(((nova_Nova_String*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_list2), exceptionData, l4_Nova_n))->nova_Nova_String_Nova_count) < 4)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to filter data correctly")));
		}
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking iterator functionality... ")));
	l1_Nova_iter = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)(l1_Nova_list2), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l1_Nova_iter), exceptionData))
	{
		if ((int)(((nova_Nova_String*)nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l1_Nova_iter), exceptionData))->nova_Nova_String_Nova_count) < 4)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to run iterator")));
		}
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking foreach loop functionality... ")));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((l1_Nova_list2)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		l8_Nova_string = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		if (l8_Nova_string->nova_Nova_String_Nova_count < 4)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to run foreach loop")));
		}
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkTernary(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char l1_Nova_first = 0;
	nova_Nova_String* l1_Nova_second = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking ternary functionality... ")));
	l1_Nova_first = (char)(stabilitytest_Nova_SyntaxStability_Nova_trueValue(this, exceptionData) ? nova_Nova_String_Nova_equals(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey"))) : nova_Nova_String_Nova_equals(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey2"))));
	if (!l1_Nova_first)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed first ternary test")));
	}
	l1_Nova_second = (nova_Nova_String*)(stabilitytest_Nova_SyntaxStability_Nova_falseValue(this, exceptionData) ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("one")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("two")));
	if (!nova_Nova_String_Nova_equals(l1_Nova_second, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("two"))))
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed second ternary test")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkElvis(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	nova_Nova_Object* l1_Nova_str2 = (nova_Nova_Object*)nova_null;
	nova_Nova_String* l1_Nova_result1 = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
	nova_Nova_Object* l1_Nova_result2 = (nova_Nova_Object*)nova_null;
	nova_Nova_Object* l1_Nova_nova_local_1 = (nova_Nova_Object*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking elvis functionality... ")));
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this isnt null"));
	l1_Nova_str2 = (nova_Nova_Object*)nova_null;
	l1_Nova_result1 = (nova_Nova_String*)((l1_Nova_nova_local_0 = l1_Nova_str) != (nova_Nova_String*)nova_null ? l1_Nova_nova_local_0 : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("wtf")));
	if (nova_Nova_String_Nova_equals(l1_Nova_result1, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("wtf"))))
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed first elvis test")));
	}
	l1_Nova_result2 = (nova_Nova_Object*)((l1_Nova_nova_local_1 = l1_Nova_str2) != (nova_Nova_Object*)nova_null ? l1_Nova_nova_local_1 : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is null")));
	if (!nova_operators_Nova_Equals_virtual_Nova_equals((nova_operators_Nova_Equals*)(l1_Nova_result2), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is null")))))
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed second elvis test")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

char stabilitytest_Nova_SyntaxStability_Nova_trueValue(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char stabilitytest_Nova_SyntaxStability_Nova_falseValue(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}

void stabilitytest_Nova_SyntaxStability_Nova_checkRepeat(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_i = 0;
	int repeatCounter3 = 0;
	int l1_Nova_times = 0;
	int repeatCounter4 = 0;
	int repeatCounter5 = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking repeat functionality... ")));
	l1_Nova_i = (int)(0);
	for (;;)
	{
		if (l1_Nova_i == 101)
		{
			break;
		}
		l1_Nova_i++;
	}
	if (l1_Nova_i != 101)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Vanilla repeat failed")));
	}
	l1_Nova_i = (int)(0);
	for (repeatCounter3 = 0; repeatCounter3 < 101; repeatCounter3++)
	{
		l1_Nova_i++;
	}
	if (l1_Nova_i != 101)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Repeat 101 times failed")));
	}
	l1_Nova_i = (int)(0);
	l1_Nova_times = (int)(101);
	for (repeatCounter4 = 0; repeatCounter4 < l1_Nova_times; repeatCounter4++)
	{
		l1_Nova_i++;
	}
	if (l1_Nova_i != 101)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Repeat times ("))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_times))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(") failed")))));
	}
	l1_Nova_i = (int)(0);
	for (repeatCounter5 = 0; repeatCounter5 < l1_Nova_times; repeatCounter5++)
	{
		l1_Nova_i++;
	}
	if (l1_Nova_i != 101)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Repeat fragment failed")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

int stabilitytest_Nova_SyntaxStability_0_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_s, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_arg, int stabilitytest_Nova_SyntaxStability_Nova_jum, int stabilitytest_Nova_SyntaxStability_Nova_jdd, int stabilitytest_Nova_SyntaxStability_Nova_joe)
{
	stabilitytest_Nova_SyntaxStability_Nova_jum = (int)(stabilitytest_Nova_SyntaxStability_Nova_jum == (intptr_t)nova_null ? 4 : stabilitytest_Nova_SyntaxStability_Nova_jum);
	stabilitytest_Nova_SyntaxStability_Nova_jdd = (int)(stabilitytest_Nova_SyntaxStability_Nova_jdd == (intptr_t)nova_null ? 0 : stabilitytest_Nova_SyntaxStability_Nova_jdd);
	stabilitytest_Nova_SyntaxStability_Nova_joe = (int)(stabilitytest_Nova_SyntaxStability_Nova_joe == (intptr_t)nova_null ? 0 : stabilitytest_Nova_SyntaxStability_Nova_joe);
	return (int)-1;
}

int stabilitytest_Nova_SyntaxStability_1_Nova_named(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_s, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_arg, int stabilitytest_Nova_SyntaxStability_Nova_num, int stabilitytest_Nova_SyntaxStability_Nova_add)
{
	stabilitytest_Nova_SyntaxStability_Nova_num = (int)(stabilitytest_Nova_SyntaxStability_Nova_num == (intptr_t)nova_null ? 4 : stabilitytest_Nova_SyntaxStability_Nova_num);
	stabilitytest_Nova_SyntaxStability_Nova_add = (int)(stabilitytest_Nova_SyntaxStability_Nova_add == (intptr_t)nova_null ? 0 : stabilitytest_Nova_SyntaxStability_Nova_add);
	return stabilitytest_Nova_SyntaxStability_Nova_num * stabilitytest_Nova_SyntaxStability_Nova_arg->nova_Nova_String_Nova_count + stabilitytest_Nova_SyntaxStability_Nova_add;
}

void stabilitytest_Nova_SyntaxStability_Nova_checkNamedArguments(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_num = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking named arguments... ")));
	l1_Nova_num = stabilitytest_Nova_SyntaxStability_1_Nova_named(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("yo")), 4, (intptr_t)nova_null);
	if (l1_Nova_num != 8)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Default argument failed. Expected 8, received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	}
	l1_Nova_num = stabilitytest_Nova_SyntaxStability_1_Nova_named(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("heyasdf")), 5, 2);
	if (l1_Nova_num != 37)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Named arguments failed. Expeced 37, received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" first")))));
	}
	l1_Nova_num = stabilitytest_Nova_SyntaxStability_1_Nova_named(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("heyasdf")), 5, 2);
	if (l1_Nova_num != 37)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Named arguments failed. Expeced 37, received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" second")))));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkZipper(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array1 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_array2 = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_zipped = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1 contextArg64 = 
	{
	};
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking zip function... ")));
	l1_Nova_array1 = generated21(this, exceptionData);
	l1_Nova_array2 = generated22(this, exceptionData);
	l1_Nova_zipped = nova_datastruct_list_Nova_List_Nova_zip((nova_datastruct_list_Nova_List*)(l1_Nova_array1), exceptionData, (nova_datastruct_list_Nova_List*)(l1_Nova_array2), (nova_datastruct_list_Nova_List_closure24_Nova_zipper)&stabilitytest_Nova_SyntaxStability_Nova_testLambda64, this, &contextArg64);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Zipped: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Nova_toString((nova_datastruct_list_Nova_Array*)((l1_Nova_zipped)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_checkSafeNavigation(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_Node* l1_Nova_node = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* l1_Nova_nova_local_13 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* l1_Nova_nova_local_14 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* l1_Nova_nova_local_15 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* l1_Nova_nova_local_16 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* l1_Nova_nova_local_17 = (stabilitytest_Nova_Node*)nova_null;
	stabilitytest_Nova_Node* l1_Nova_nova_local_18 = (stabilitytest_Nova_Node*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking safe navigation operator... ")));
	l1_Nova_node = stabilitytest_Nova_Node_Nova_construct(0, exceptionData);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_value = (int)(1);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0, exceptionData);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(2);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0, exceptionData);
	l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(3);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("if statement... ")));
	if ((int)((l1_Nova_nova_local_13 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_14 = l1_Nova_nova_local_13->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_15 = l1_Nova_nova_local_14->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (l1_Nova_nova_local_15->stabilitytest_Nova_Node_Nova_value) : 0)) : 0)) : 0) == 3 && (int)((l1_Nova_nova_local_16 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_17 = l1_Nova_nova_local_16->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (l1_Nova_nova_local_17->stabilitytest_Nova_Node_Nova_value) : 0)) : 0) == 2 && (int)((l1_Nova_nova_local_18 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? (l1_Nova_nova_local_18->stabilitytest_Nova_Node_Nova_value) : 0) == 1)
	{
		nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_0 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_2 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_3 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_4 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_5 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_6 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_7 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_8 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_9 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_10 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_11 = (stabilitytest_Nova_Node*)nova_null;
		stabilitytest_Nova_Node* l1_Nova_nova_local_12 = (stabilitytest_Nova_Node*)nova_null;
		
		nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("assignment... ")));
		if ((l1_Nova_nova_local_0 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null)
		{
			stabilitytest_Nova_Node* l6_Nova_nova_local_1 = (stabilitytest_Nova_Node*)nova_null;
			
			if ((l6_Nova_nova_local_1 = l1_Nova_nova_local_0->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null)
			{
				l6_Nova_nova_local_1->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(5);
			}
		}
		if ((int)((l1_Nova_nova_local_2 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_3 = l1_Nova_nova_local_2->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (l1_Nova_nova_local_3->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value) : 0)) : 0) != 5)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to set node value while safely navigating it")));
		}
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = (stabilitytest_Nova_Node*)((nova_Nova_Object*)nova_null);
		if ((int)((l1_Nova_nova_local_4 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_5 = l1_Nova_nova_local_4->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_6 = l1_Nova_nova_local_5->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (l1_Nova_nova_local_6->stabilitytest_Nova_Node_Nova_value) : 0)) : 0)) : 0) == 3)
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to skip null child")));
		}
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0, exceptionData);
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0, exceptionData);
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child = stabilitytest_Nova_Node_Nova_construct(0, exceptionData);
		l1_Nova_node->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_child->stabilitytest_Nova_Node_Nova_value = (int)(91);
		nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("function call... ")));
		stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode(this, exceptionData, (stabilitytest_Nova_Node*)((l1_Nova_nova_local_7 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)((stabilitytest_Nova_Node*)((l1_Nova_nova_local_8 = l1_Nova_nova_local_7->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)((stabilitytest_Nova_Node*)((l1_Nova_nova_local_9 = l1_Nova_nova_local_8->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)((stabilitytest_Nova_Node*)((l1_Nova_nova_local_10 = l1_Nova_nova_local_9->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (nova_Nova_Object*)(l1_Nova_nova_local_10->stabilitytest_Nova_Node_Nova_child) : (nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)nova_null));
		l1_Nova_array = generated23(this, exceptionData);
		nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("array access... ")));
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (int)((l1_Nova_nova_local_11 = l1_Nova_node) != (stabilitytest_Nova_Node*)nova_null ? ((int)((l1_Nova_nova_local_12 = l1_Nova_nova_local_11->stabilitytest_Nova_Node_Nova_child) != (stabilitytest_Nova_Node*)nova_null ? (l1_Nova_nova_local_12->stabilitytest_Nova_Node_Nova_value) : 0)) : 0), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello"))));
		if (!nova_Nova_String_Nova_equals((nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, 2)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello"))))
		{
			stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to set correct array index with correct value using the safe navigation operator")));
		}
	}
	else
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to safely navigate valid children")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_SyntaxStability_Nova_callMeWithNode(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_Node* stabilitytest_Nova_SyntaxStability_Nova_n)
{
	if (stabilitytest_Nova_SyntaxStability_Nova_n->stabilitytest_Nova_Node_Nova_value != 91)
	{
		stabilitytest_Nova_StabilityTest_1_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to call method with correct safely navigated node")));
	}
}

nova_datastruct_list_Nova_Array* generated20(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
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

nova_datastruct_list_Nova_Array* generated21(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("This"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 4);
}

nova_datastruct_list_Nova_Array* generated22(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("one"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("two"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("three"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("four"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 4);
}

nova_Nova_Object* stabilitytest_Nova_SyntaxStability_Nova_testLambda64(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* stabilitytest_Nova_SyntaxStability_Nova_x, nova_Nova_Object* stabilitytest_Nova_SyntaxStability_Nova_y, Context1* context)
{
	return (nova_Nova_Object*)nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((stabilitytest_Nova_SyntaxStability_Nova_x)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((stabilitytest_Nova_SyntaxStability_Nova_y)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

nova_datastruct_list_Nova_Array* generated23(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 5);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("1"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("2"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("3"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("4"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("5"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 5);
}

void stabilitytest_Nova_SyntaxStability_Nova_super(stabilitytest_Nova_SyntaxStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

