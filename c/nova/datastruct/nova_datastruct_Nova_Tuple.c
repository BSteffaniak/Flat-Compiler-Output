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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>





void nova_datastruct_Nova_Tuple_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Tuple* nova_datastruct_Nova_Tuple_Nova_construct(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items)
{
	CCLASS_NEW(nova_datastruct_Nova_Tuple, this,);
	this->vtable = &nova_datastruct_Tuple_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Tuple_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Tuple_Nova_this(this, exceptionData, items);
	}
	
	return this;
}

void nova_datastruct_Nova_Tuple_Nova_destroy(nova_datastruct_Nova_Tuple** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_datastruct_Nova_Tuple_Nova_items, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Tuple_Nova_this(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items)
{
	this->nova_datastruct_Nova_Tuple_Nova_items = items;
}

char nova_datastruct_Nova_Tuple_0_Nova_contains(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_Nova_Object*)(value));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_toArray(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_Nova_toArray(this->nova_datastruct_Nova_Tuple_Nova_items, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_0_Nova_forEach(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure80_Nova_func nova_datastruct_Nova_Tuple_Nova_func, void* nova_datastruct_Nova_Tuple_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)nova_datastruct_Nova_Tuple_Nova_func, nova_datastruct_Nova_Tuple_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_Tuple_0_Nova_any(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure84_Nova_anyFunc nova_datastruct_Nova_Tuple_Nova_anyFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure296_Nova_anyFunc)nova_datastruct_Nova_Tuple_Nova_anyFunc, nova_datastruct_Nova_Tuple_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_Nova_Tuple_0_Nova_all(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure88_Nova_allFunc nova_datastruct_Nova_Tuple_Nova_allFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_allFunc, void* allFunc_context)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)nova_datastruct_Nova_Tuple_Nova_allFunc, nova_datastruct_Nova_Tuple_ref_Nova_allFunc, allFunc_context, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_0_Nova_filter(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure92_Nova_filterFunc nova_datastruct_Nova_Tuple_Nova_filterFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)nova_datastruct_Nova_Tuple_Nova_filterFunc, nova_datastruct_Nova_Tuple_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_take(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, howMany);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_skip(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple_0_Nova_firstWhere(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure96_Nova_func nova_datastruct_Nova_Tuple_Nova_func, void* nova_datastruct_Nova_Tuple_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure316_Nova_func)nova_datastruct_Nova_Tuple_Nova_func, nova_datastruct_Nova_Tuple_ref_Nova_func, func_context);
}

nova_datastruct_Nova_Tuple* nova_datastruct_Nova_Tuple_Nova_reverse(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Tuple_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData)));
}

nova_datastruct_list_Nova_List* nova_datastruct_Nova_Tuple_0_Nova_map(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure100_Nova_mapFunc nova_datastruct_Nova_Tuple_Nova_mapFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_List*)nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)nova_datastruct_Nova_Tuple_Nova_mapFunc, nova_datastruct_Nova_Tuple_ref_Nova_mapFunc, mapFunc_context);
}

nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_Nova_Tuple_Accessor_Nova_iterator(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ArrayIterator*)nova_datastruct_list_Nova_ArrayIterator_Nova_construct(0, exceptionData, this->nova_datastruct_Nova_Tuple_Nova_items);
}


nova_Nova_Object* nova_datastruct_Nova_Tuple_Accessor_Nova_first(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple_Mutator_Nova_first(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_List_virtual_Mutator_Nova_first((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_Nova_Object*)(value));
	return value;
}

nova_Nova_Object* nova_datastruct_Nova_Tuple_Accessor_Nova_last(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple_Mutator_Nova_last(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_List_virtual_Mutator_Nova_last((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_Nova_Object*)(value));
	return value;
}

int nova_datastruct_Nova_Tuple_Accessorfunc_Nova_count(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Tuple_Nova_count;
}

int nova_datastruct_Nova_Tuple_Mutatorfunc_Nova_count(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_Nova_Tuple_Nova_count = value;
	return value;
}

void nova_datastruct_Nova_Tuple_Nova_super(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Tuple_Nova_items = (nova_datastruct_list_Nova_Array*)nova_null;
	this->nova_datastruct_Nova_Tuple_Nova_count = 0;
}

void nova_datastruct_Nova_TupleFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_TupleFunctionMap* nova_datastruct_Nova_TupleFunctionMap_Nova_construct(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_TupleFunctionMap, this,);
	this->vtable = &nova_datastruct_Tuple_TupleFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_TupleFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_TupleFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_TupleFunctionMap_Nova_destroy(nova_datastruct_Nova_TupleFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_TupleFunctionMap_Nova_this(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_Tuple* nova_datastruct_Nova_TupleFunctionMap_functionMapTupleFunctionMap_Nova_construct(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items)
{
	return nova_datastruct_Nova_Tuple_Nova_construct(0, exceptionData, items);
}

char nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_contains(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_Nova_Object* value)
{
	return nova_datastruct_Nova_Tuple_0_Nova_contains(reference, exceptionData, value);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_toArray(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple_Nova_toArray(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_forEach(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_datastruct_Nova_TupleFunctionMap_closure411_Nova_func nova_datastruct_Nova_TupleFunctionMap_Nova_func, void* nova_datastruct_Nova_TupleFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple_0_Nova_forEach(reference, exceptionData, (nova_datastruct_Nova_Tuple_closure80_Nova_func)nova_datastruct_Nova_TupleFunctionMap_Nova_func, nova_datastruct_Nova_TupleFunctionMap_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_any(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_datastruct_Nova_TupleFunctionMap_closure412_Nova_anyFunc nova_datastruct_Nova_TupleFunctionMap_Nova_anyFunc, void* nova_datastruct_Nova_TupleFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_Nova_Tuple_0_Nova_any(reference, exceptionData, (nova_datastruct_Nova_Tuple_closure84_Nova_anyFunc)nova_datastruct_Nova_TupleFunctionMap_Nova_anyFunc, nova_datastruct_Nova_TupleFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_all(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_datastruct_Nova_TupleFunctionMap_closure413_Nova_allFunc nova_datastruct_Nova_TupleFunctionMap_Nova_allFunc, void* nova_datastruct_Nova_TupleFunctionMap_ref_Nova_allFunc, void* allFunc_context)
{
	return nova_datastruct_Nova_Tuple_0_Nova_all(reference, exceptionData, (nova_datastruct_Nova_Tuple_closure88_Nova_allFunc)nova_datastruct_Nova_TupleFunctionMap_Nova_allFunc, nova_datastruct_Nova_TupleFunctionMap_ref_Nova_allFunc, allFunc_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_filter(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_datastruct_Nova_TupleFunctionMap_closure414_Nova_filterFunc nova_datastruct_Nova_TupleFunctionMap_Nova_filterFunc, void* nova_datastruct_Nova_TupleFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple_0_Nova_filter(reference, exceptionData, (nova_datastruct_Nova_Tuple_closure92_Nova_filterFunc)nova_datastruct_Nova_TupleFunctionMap_Nova_filterFunc, nova_datastruct_Nova_TupleFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_take(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple_Nova_take(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_skip(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple_Nova_skip(reference, exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_datastruct_Nova_TupleFunctionMap_closure415_Nova_func nova_datastruct_Nova_TupleFunctionMap_Nova_func, void* nova_datastruct_Nova_TupleFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_Tuple_0_Nova_firstWhere(reference, exceptionData, (nova_datastruct_Nova_Tuple_closure96_Nova_func)nova_datastruct_Nova_TupleFunctionMap_Nova_func, nova_datastruct_Nova_TupleFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_Nova_Tuple* nova_datastruct_Nova_TupleFunctionMap_functionMap_Nova_reverse(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference)
{
	return (nova_datastruct_Nova_Tuple*)nova_datastruct_Nova_Tuple_Nova_reverse(reference, exceptionData);
}

nova_datastruct_list_Nova_List* nova_datastruct_Nova_TupleFunctionMap_functionMap0_Nova_map(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple* reference, nova_datastruct_Nova_TupleFunctionMap_closure416_Nova_mapFunc nova_datastruct_Nova_TupleFunctionMap_Nova_mapFunc, void* nova_datastruct_Nova_TupleFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_List*)nova_datastruct_Nova_Tuple_0_Nova_map(reference, exceptionData, (nova_datastruct_Nova_Tuple_closure100_Nova_mapFunc)nova_datastruct_Nova_TupleFunctionMap_Nova_mapFunc, nova_datastruct_Nova_TupleFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

void nova_datastruct_Nova_TupleFunctionMap_Nova_super(nova_datastruct_Nova_TupleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

