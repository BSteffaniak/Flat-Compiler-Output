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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>



void nova_primitive_number_Nova_Char_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_Char* nova_primitive_number_Nova_Char_Nova_construct(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	CCLASS_NEW(nova_primitive_number_Nova_Char, this,);
	this->vtable = &nova_primitive_number_Char_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super((nova_primitive_Nova_Primitive*)this, exceptionData);
	nova_primitive_number_Nova_Number_Nova_super((nova_primitive_number_Nova_Number*)this, exceptionData);
	nova_primitive_number_Nova_Char_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_Char_Nova_this(this, exceptionData, value);
	}
	
	return this;
}

void nova_primitive_number_Nova_Char_Nova_destroy(nova_primitive_number_Nova_Char** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_Char_Nova_this(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->nova_primitive_number_Nova_Char_Nova_value = value;
}

char nova_primitive_number_Nova_Char_static_Nova_toLowerCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	int l1_Nova_id = 0;
	
	l1_Nova_id = (int)c;
	if (l1_Nova_id >= 65 && l1_Nova_id <= 90)
	{
		return (char)(char)(l1_Nova_id + 32);
	}
	return c;
}

char nova_primitive_number_Nova_Char_static_Nova_toUpperCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	int l1_Nova_id = 0;
	
	l1_Nova_id = (int)c;
	if (l1_Nova_id >= 97 && l1_Nova_id <= 122)
	{
		return (char)(char)(l1_Nova_id - 32);
	}
	return c;
}

char nova_primitive_number_Nova_Char_Nova_toLowerCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Char_static_Nova_toLowerCase(this, exceptionData, this->nova_primitive_number_Nova_Char_Nova_value);
}

char nova_primitive_number_Nova_Char_Nova_toUpperCase(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Char_static_Nova_toUpperCase(this, exceptionData, this->nova_primitive_number_Nova_Char_Nova_value);
}

char nova_primitive_number_Nova_Char_0_Nova_compareTo(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char other)
{
	return this->nova_primitive_number_Nova_Char_Nova_value - other;
}

char nova_primitive_number_Nova_Char_Nova_multiply(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return this->nova_primitive_number_Nova_Char_Nova_value * value;
}

nova_Nova_String* nova_primitive_number_Nova_Char_Nova_toString(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Char_static_Nova_toString(this, exceptionData, this->nova_primitive_number_Nova_Char_Nova_value);
}

nova_Nova_String* nova_primitive_number_Nova_Char_static_Nova_toString(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_Nova_String_0_Nova_construct(0, exceptionData, c);
}

void nova_primitive_number_Nova_Char_Nova_super(nova_primitive_number_Nova_Char* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_primitive_number_Nova_Char_Nova_value = 0;
}


nova_primitive_number_Nova_Char* nova_primitive_number_Nova_CharFunctionMap_functionMapCharFunctionMap_Nova_construct(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char value);
void nova_primitive_number_Nova_CharFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_CharFunctionMap* nova_primitive_number_Nova_CharFunctionMap_Nova_construct(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_number_Nova_CharFunctionMap, this,);
	this->vtable = &nova_primitive_number_Char_CharFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_primitive_Nova_PrimitiveFunctionMap_Nova_super((nova_primitive_Nova_PrimitiveFunctionMap*)this, exceptionData);
	nova_primitive_number_Nova_NumberFunctionMap_Nova_super((nova_primitive_number_Nova_NumberFunctionMap*)this, exceptionData);
	nova_primitive_number_Nova_CharFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_CharFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_number_Nova_CharFunctionMap_Nova_destroy(nova_primitive_number_Nova_CharFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_CharFunctionMap_Nova_this(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_primitive_number_Nova_Char* nova_primitive_number_Nova_CharFunctionMap_functionMapCharFunctionMap_Nova_construct(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return nova_primitive_number_Nova_Char_Nova_construct(0, exceptionData, value);
}

char nova_primitive_number_Nova_CharFunctionMap_functionMap_static_Nova_toLowerCase(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_primitive_number_Nova_Char_static_Nova_toLowerCase(0, exceptionData, c);
}

char nova_primitive_number_Nova_CharFunctionMap_functionMap_static_Nova_toUpperCase(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_primitive_number_Nova_Char_static_Nova_toUpperCase(0, exceptionData, c);
}

char nova_primitive_number_Nova_CharFunctionMap_functionMap_Nova_toLowerCase(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Char* reference)
{
	return nova_primitive_number_Nova_Char_Nova_toLowerCase(reference, exceptionData);
}

char nova_primitive_number_Nova_CharFunctionMap_functionMap_Nova_toUpperCase(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Char* reference)
{
	return nova_primitive_number_Nova_Char_Nova_toUpperCase(reference, exceptionData);
}

char nova_primitive_number_Nova_CharFunctionMap_functionMap_Nova_compareTo(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Char* reference, char other)
{
	return nova_primitive_number_Nova_Char_0_Nova_compareTo(reference, exceptionData, other);
}

char nova_primitive_number_Nova_CharFunctionMap_functionMap_Nova_multiply(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Char* reference, char value)
{
	return (char)nova_primitive_number_Nova_Char_Nova_multiply(reference, exceptionData, value);
}

nova_Nova_String* nova_primitive_number_Nova_CharFunctionMap_functionMap_Nova_toString(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Char* reference)
{
	return nova_primitive_number_Nova_Char_Nova_toString(reference, exceptionData);
}

nova_Nova_String* nova_primitive_number_Nova_CharFunctionMap_functionMap_static_Nova_toString(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, c);
}

void nova_primitive_number_Nova_CharFunctionMap_Nova_super(nova_primitive_number_Nova_CharFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_number_Nova_CharPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_CharPropertyMap* nova_primitive_number_Nova_CharPropertyMap_Nova_construct(nova_primitive_number_Nova_CharPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_number_Nova_CharPropertyMap, this,);
	this->vtable = &nova_primitive_number_Char_CharPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_primitive_Nova_PrimitivePropertyMap_Nova_super((nova_primitive_Nova_PrimitivePropertyMap*)this, exceptionData);
	nova_primitive_number_Nova_NumberPropertyMap_Nova_super((nova_primitive_number_Nova_NumberPropertyMap*)this, exceptionData);
	nova_primitive_number_Nova_CharPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_CharPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_number_Nova_CharPropertyMap_Nova_destroy(nova_primitive_number_Nova_CharPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_CharPropertyMap_Nova_this(nova_primitive_number_Nova_CharPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_number_Nova_CharPropertyMap_Nova_super(nova_primitive_number_Nova_CharPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

