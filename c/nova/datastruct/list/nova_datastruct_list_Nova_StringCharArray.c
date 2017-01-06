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
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_datastruct_list_Nova_StringCharArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_StringCharArray* nova_datastruct_list_Nova_StringCharArray_0_Nova_construct(nova_datastruct_list_Nova_StringCharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* data)
{
	CCLASS_NEW(nova_datastruct_list_Nova_StringCharArray, this,);
	this->vtable = &nova_datastruct_list_StringCharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super((nova_datastruct_list_Nova_CharArray*)this, exceptionData);
	nova_datastruct_list_Nova_StringCharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_StringCharArray_0_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

nova_datastruct_list_Nova_StringCharArray* nova_datastruct_list_Nova_StringCharArray_1_Nova_construct(nova_datastruct_list_Nova_StringCharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_StringCharArray, this,);
	this->vtable = &nova_datastruct_list_StringCharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super((nova_datastruct_list_Nova_CharArray*)this, exceptionData);
	nova_datastruct_list_Nova_StringCharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_StringCharArray_1_Nova_this(this, exceptionData, data, count);
	}
	
	return this;
}

void nova_datastruct_list_Nova_StringCharArray_Nova_destroy(nova_datastruct_list_Nova_StringCharArray** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_StringCharArray_0_Nova_this(nova_datastruct_list_Nova_StringCharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* data)
{
	nova_datastruct_list_Nova_CharArray_1_Nova_this((nova_datastruct_list_Nova_CharArray*)(this), exceptionData, (char*)(data->nova_datastruct_list_Nova_Array_Nova_data), nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(data), exceptionData));
}

void nova_datastruct_list_Nova_StringCharArray_1_Nova_this(nova_datastruct_list_Nova_StringCharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	nova_datastruct_list_Nova_CharArray_1_Nova_this((nova_datastruct_list_Nova_CharArray*)(this), exceptionData, data, count);
}

void nova_datastruct_list_Nova_StringCharArray_Nova_super(nova_datastruct_list_Nova_StringCharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_StringCharArrayFunctionMap* nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_construct(nova_datastruct_list_Nova_StringCharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_StringCharArrayFunctionMap, this,);
	this->vtable = &nova_datastruct_list_StringCharArray_StringCharArrayFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_ArrayFunctionMap_Nova_super((nova_datastruct_list_Nova_ArrayFunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_super((nova_datastruct_list_Nova_CharArrayFunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_destroy(nova_datastruct_list_Nova_StringCharArrayFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_this(nova_datastruct_list_Nova_StringCharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_StringCharArray* nova_datastruct_list_Nova_StringCharArrayFunctionMap_functionMapStringCharArrayFunctionMap0_static_Nova_construct(nova_datastruct_list_Nova_StringCharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* data)
{
	return nova_datastruct_list_Nova_StringCharArray_0_Nova_construct(0, exceptionData, data);
}

nova_datastruct_list_Nova_StringCharArray* nova_datastruct_list_Nova_StringCharArrayFunctionMap_functionMapStringCharArrayFunctionMap1_static_Nova_construct(nova_datastruct_list_Nova_StringCharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	return nova_datastruct_list_Nova_StringCharArray_1_Nova_construct(0, exceptionData, data, count);
}

void nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_super(nova_datastruct_list_Nova_StringCharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

