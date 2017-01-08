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
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_ImmutableHashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_datastruct_Nova_ReversibleHashMap,
	nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_buckets;
	int nova_datastruct_Nova_HashMap_Nova_bucketSize;
	
	nova_datastruct_Nova_HashMap* nova_datastruct_Nova_ReversibleHashMap_Nova_rev;
	
)
void nova_datastruct_Nova_ReversibleHashMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_ReversibleHashMap* nova_datastruct_Nova_ReversibleHashMap_Nova_construct(nova_datastruct_Nova_ReversibleHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_ReversibleHashMap, this);
	this->vtable = &nova_datastruct_ReversibleHashMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashMap_Nova_super((nova_datastruct_Nova_HashMap*)this, exceptionData);
	nova_datastruct_Nova_ReversibleHashMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_ReversibleHashMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_ReversibleHashMap_Nova_destroy(nova_datastruct_Nova_ReversibleHashMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_Nova_HashMap_Nova_destroy(&(*this)->prv->nova_datastruct_Nova_ReversibleHashMap_Nova_rev, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_ReversibleHashMap_Nova_this(nova_datastruct_Nova_ReversibleHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_datastruct_Nova_ReversibleHashMap_Nova_rev = nova_datastruct_Nova_HashMap_0_Nova_construct(0, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_ReversibleHashMap_Nova_add(nova_datastruct_Nova_ReversibleHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key, nova_operators_Nova_EqualsOperator* value)
{
	return (nova_operators_Nova_EqualsOperator*)value;
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_ReversibleHashMap_Nova_getKey(nova_datastruct_Nova_ReversibleHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	return (nova_operators_Nova_EqualsOperator*)nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)(this->prv->nova_datastruct_Nova_ReversibleHashMap_Nova_rev), exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_ReversibleHashMap_Nova_getValue(nova_datastruct_Nova_ReversibleHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key)
{
	return (nova_operators_Nova_EqualsOperator*)nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)(this), exceptionData, key);
}

void nova_datastruct_Nova_ReversibleHashMap_Nova_super(nova_datastruct_Nova_ReversibleHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_datastruct_Nova_ReversibleHashMap_Nova_rev = (nova_datastruct_Nova_HashMap*)nova_null;
}

void nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_ReversibleHashMapFunctionMap* nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_construct(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_ReversibleHashMapFunctionMap, this,);
	this->vtable = &nova_datastruct_ReversibleHashMap_ReversibleHashMapFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_HashMapFunctionMap_Nova_super((nova_datastruct_Nova_HashMapFunctionMap*)this, exceptionData);
	nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_destroy(nova_datastruct_Nova_ReversibleHashMapFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_this(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_ReversibleHashMap* nova_datastruct_Nova_ReversibleHashMapFunctionMap_functionMapReversibleHashMapFunctionMap_Nova_construct(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_Nova_ReversibleHashMap*)nova_datastruct_Nova_ReversibleHashMap_Nova_construct(0, exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_ReversibleHashMapFunctionMap_functionMap_Nova_add(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ReversibleHashMap* reference, nova_Nova_Object* key, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_ReversibleHashMap_Nova_add(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key), (nova_operators_Nova_EqualsOperator*)(value));
}

nova_Nova_Object* nova_datastruct_Nova_ReversibleHashMapFunctionMap_functionMap_Nova_getKey(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ReversibleHashMap* reference, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_ReversibleHashMap_Nova_getKey(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

nova_Nova_Object* nova_datastruct_Nova_ReversibleHashMapFunctionMap_functionMap_Nova_getValue(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ReversibleHashMap* reference, nova_Nova_Object* key)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_ReversibleHashMap_Nova_getValue(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key));
}

void nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_super(nova_datastruct_Nova_ReversibleHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

