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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




nova_datastruct_list_Nova_Array* generated1(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value0, nova_Nova_Object* value1);
void nova_datastruct_Nova_Tuple2_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Tuple2* nova_datastruct_Nova_Tuple2_Nova_construct(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* item1, nova_Nova_Object* item2)
{
	CCLASS_NEW(nova_datastruct_Nova_Tuple2, this,);
	this->vtable = &nova_datastruct_Tuple2_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Tuple_Nova_super((nova_datastruct_Nova_Tuple*)this, exceptionData);
	nova_datastruct_Nova_Tuple2_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Tuple2_Nova_this(this, exceptionData, item1, item2);
	}
	
	return this;
}

void nova_datastruct_Nova_Tuple2_Nova_destroy(nova_datastruct_Nova_Tuple2** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Tuple2_Nova_this(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* item1, nova_Nova_Object* item2)
{
	nova_datastruct_Nova_Tuple_Nova_this((nova_datastruct_Nova_Tuple*)(this), exceptionData, generated1(0, exceptionData, item1, item2));
}

nova_datastruct_list_Nova_Array* generated1(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value0, nova_Nova_Object* value1)
{
	nova_Nova_Object** l1_Nova_temp = (nova_Nova_Object**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Object**)NOVA_MALLOC(sizeof(nova_Nova_Object) * 2);
	l1_Nova_temp[0] = (nova_Nova_Object*)(value0);
	l1_Nova_temp[1] = (nova_Nova_Object*)(value1);
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple2_Accessor_Nova_item1(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, 0);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple2_Mutator_Nova_item1(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, 0, (nova_Nova_Object*)(value));
	return (nova_Nova_Object*)value;
}

nova_Nova_Object* nova_datastruct_Nova_Tuple2_Accessor_Nova_item2(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, 1);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple2_Mutator_Nova_item2(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, 1, (nova_Nova_Object*)(value));
	return (nova_Nova_Object*)value;
}

void nova_datastruct_Nova_Tuple2_Nova_super(nova_datastruct_Nova_Tuple2* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_Tuple2FunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Tuple2FunctionMap* nova_datastruct_Nova_Tuple2FunctionMap_Nova_construct(nova_datastruct_Nova_Tuple2FunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_Tuple2FunctionMap, this,);
	this->vtable = &nova_datastruct_Tuple2_Tuple2FunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_Tuple2FunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Tuple2FunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_Tuple2FunctionMap_Nova_destroy(nova_datastruct_Nova_Tuple2FunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Tuple2FunctionMap_Nova_this(nova_datastruct_Nova_Tuple2FunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_Tuple2FunctionMap_Nova_super(nova_datastruct_Nova_Tuple2FunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

