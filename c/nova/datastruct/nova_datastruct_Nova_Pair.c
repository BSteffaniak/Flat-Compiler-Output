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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_datastruct_Nova_Pair_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_Pair_Nova_construct(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value)
{
	CCLASS_NEW(nova_datastruct_Nova_Pair, this,);
	this->vtable = &nova_datastruct_Pair_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Pair_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Pair_Nova_this(this, exceptionData, key, value);
	}
	
	return this;
}

void nova_datastruct_Nova_Pair_Nova_destroy(nova_datastruct_Nova_Pair** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Pair_Nova_this(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value)
{
	this->nova_datastruct_Nova_Pair_Nova_key = key;
	this->nova_datastruct_Nova_Pair_Nova_value = value;
}

nova_Nova_String* nova_datastruct_Nova_Pair_Nova_toString(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Pair (")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->nova_datastruct_Nova_Pair_Nova_key)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->nova_datastruct_Nova_Pair_Nova_value)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))))))));
}

void nova_datastruct_Nova_Pair_Nova_super(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Pair_Nova_key = (nova_Nova_Object*)nova_null;
	this->nova_datastruct_Nova_Pair_Nova_value = (nova_Nova_Object*)nova_null;
}

void nova_datastruct_Nova_PairFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_PairFunctionMap* nova_datastruct_Nova_PairFunctionMap_Nova_construct(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_PairFunctionMap, this,);
	this->vtable = &nova_datastruct_Pair_PairFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_PairFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_PairFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_PairFunctionMap_Nova_destroy(nova_datastruct_Nova_PairFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_PairFunctionMap_Nova_this(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_PairFunctionMap_functionMapPairFunctionMap_static_Nova_construct(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value)
{
	return nova_datastruct_Nova_Pair_Nova_construct(0, exceptionData, key, value);
}

nova_Nova_String* nova_datastruct_Nova_PairFunctionMap_functionMap_Nova_toString(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* reference)
{
	return nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(reference), exceptionData);
}

void nova_datastruct_Nova_PairFunctionMap_Nova_super(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

