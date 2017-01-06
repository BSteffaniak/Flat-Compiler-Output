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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/nova_Nova_String.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>



void nova_primitive_Nova_Null_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_Nova_Null* nova_primitive_Nova_Null_Nova_construct(nova_primitive_Nova_Null* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_Nova_Null, this,);
	this->vtable = &nova_primitive_Null_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super((nova_Nova_String*)this, exceptionData);
	nova_primitive_Nova_Null_Nova_super(this, exceptionData);
	
	{
		nova_primitive_Nova_Null_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_Nova_Null_Nova_destroy(nova_primitive_Nova_Null** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_Nova_Null_Nova_this(nova_primitive_Nova_Null* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_primitive_Nova_Null_Nova_concat(nova_primitive_Nova_Null* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* other)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("null")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((other), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

nova_Nova_String* nova_primitive_Nova_Null_Nova_toString(nova_primitive_Nova_Null* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("null"));
}

void nova_primitive_Nova_Null_Nova_super(nova_primitive_Nova_Null* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_Nova_NullFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_Nova_NullFunctionMap* nova_primitive_Nova_NullFunctionMap_Nova_construct(nova_primitive_Nova_NullFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_Nova_NullFunctionMap, this,);
	this->vtable = &nova_primitive_Null_NullFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_Nova_StringFunctionMap_Nova_super((nova_Nova_StringFunctionMap*)this, exceptionData);
	nova_primitive_Nova_NullFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_Nova_NullFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_Nova_NullFunctionMap_Nova_destroy(nova_primitive_Nova_NullFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_Nova_NullFunctionMap_Nova_this(nova_primitive_Nova_NullFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_primitive_Nova_Null* nova_primitive_Nova_NullFunctionMap_functionMapNullFunctionMap_static_Nova_construct(nova_primitive_Nova_NullFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_Nova_Null_Nova_construct(0, exceptionData);
}

nova_Nova_String* nova_primitive_Nova_NullFunctionMap_functionMap_Nova_concat(nova_primitive_Nova_NullFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_Nova_Null* reference, nova_Nova_String* other)
{
	return nova_primitive_Nova_Null_Nova_concat(reference, exceptionData, other);
}

nova_Nova_String* nova_primitive_Nova_NullFunctionMap_functionMap_Nova_toString(nova_primitive_Nova_NullFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_Nova_Null* reference)
{
	return nova_primitive_Nova_Null_Nova_toString(reference, exceptionData);
}

void nova_primitive_Nova_NullFunctionMap_Nova_super(nova_primitive_Nova_NullFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

