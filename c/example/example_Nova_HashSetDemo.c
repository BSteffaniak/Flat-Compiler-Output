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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
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
#include <nova/datastruct/nova_datastruct_Nova_HashSet.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



example_HashSetDemo_Extension_VTable example_HashSetDemo_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void example_Nova_HashSetDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_HashSetDemo* example_Nova_HashSetDemo_Nova_construct(example_Nova_HashSetDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_HashSetDemo, this,);
	this->vtable = &example_HashSetDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_HashSetDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_HashSetDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_HashSetDemo_Nova_destroy(example_Nova_HashSetDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_HashSetDemo_static_Nova_main(example_Nova_HashSetDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_Nova_HashSet* l1_Nova_set = (nova_datastruct_Nova_HashSet*)nova_null;
	int l1_Nova_count = 0;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	long_long l1_Nova_stringTime = 0;
	long_long l1_Nova_addTime = 0;
	long_long nova_zero_check6 = 0;
	long_long nova_zero_check7 = 0;
	long_long l1_Nova_getTime = 0;
	long_long nova_zero_check8 = 0;
	long_long nova_zero_check9 = 0;
	long_long l1_Nova_newStringTime = 0;
	long_long nova_zero_check10 = 0;
	long_long nova_zero_check11 = 0;
	int l2_Nova_i = 0;
	int l4_Nova_i = 0;
	int l10_Nova_i = 0;
	int l16_Nova_i = 0;
	
	l1_Nova_set = nova_datastruct_Nova_HashSet_0_Nova_construct(0, exceptionData);
	nova_datastruct_Nova_HashSet_Nova_add((nova_datastruct_Nova_HashSet*)(l1_Nova_set), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("TEseting"))));
	nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(l1_Nova_set));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains TEset? "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (nova_datastruct_Nova_HashSet_0_Nova_contains((nova_datastruct_Nova_HashSet*)(l1_Nova_set), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("TEset"))))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains TEseting? "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (nova_datastruct_Nova_HashSet_0_Nova_contains((nova_datastruct_Nova_HashSet*)(l1_Nova_set), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("TEseting"))))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(l1_Nova_set));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Benchmarking")));
	l1_Nova_count = 50000;
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)l1_Nova_count; l2_Nova_i++)
	{
		nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("my string"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l2_Nova_i))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
	}
	l1_Nova_stringTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)), exceptionData));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Took "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (l1_Nova_stringTime))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms to create "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_count))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" strings")))))));
	l4_Nova_i = (int)0;
	for (; l4_Nova_i < (int)50000; l4_Nova_i++)
	{
		nova_datastruct_Nova_HashSet_Nova_add((nova_datastruct_Nova_HashSet*)(l1_Nova_set), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("my string"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l4_Nova_i))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	}
	l1_Nova_addTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)), exceptionData));
	nova_zero_check6 = l1_Nova_stringTime;
	if (nova_zero_check6 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_zero_check7 = nova_zero_check6;
	if (nova_zero_check7 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Took "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (l1_Nova_addTime))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms to call add "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_count))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" times "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, ((l1_Nova_addTime - l1_Nova_stringTime) * 100 / nova_zero_check6))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("% overhead")))))))));
	nova_time_Nova_Timer_Nova_start(l1_Nova_timer, exceptionData);
	l10_Nova_i = (int)0;
	for (; l10_Nova_i < (int)l1_Nova_count; l10_Nova_i++)
	{
		nova_datastruct_Nova_HashSet_Nova_get((nova_datastruct_Nova_HashSet*)(l1_Nova_set), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("my string"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l10_Nova_i))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	}
	l1_Nova_getTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)), exceptionData));
	nova_zero_check8 = l1_Nova_stringTime;
	if (nova_zero_check8 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_zero_check9 = nova_zero_check8;
	if (nova_zero_check9 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Took "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (l1_Nova_getTime))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms to call get "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_count))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" times "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, ((l1_Nova_getTime - l1_Nova_stringTime) * 100 / nova_zero_check8))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("% overhead")))))))));
	nova_time_Nova_Timer_Nova_start(l1_Nova_timer, exceptionData);
	l16_Nova_i = (int)0;
	for (; l16_Nova_i < (int)l1_Nova_count; l16_Nova_i++)
	{
		nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("my string"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l16_Nova_i))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
	}
	l1_Nova_newStringTime = (long_long)(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer), exceptionData)), exceptionData));
	nova_zero_check10 = l1_Nova_stringTime;
	if (nova_zero_check10 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_zero_check11 = nova_zero_check10;
	if (nova_zero_check11 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Took "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (l1_Nova_newStringTime))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms to create "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_count))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" strings "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, ((l1_Nova_newStringTime - l1_Nova_stringTime) * 100 / nova_zero_check10))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("% overhead")))))))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_HashSetDemo_Nova_this(example_Nova_HashSetDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_HashSetDemo_Nova_super(example_Nova_HashSetDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

