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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_ImmutableArray,
	nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_array;
	
)



void nova_datastruct_list_Nova_ImmutableArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_0_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ImmutableArray, this);
	this->vtable = &nova_datastruct_list_ImmutableArray_Extension_VTable_val;
	nova_datastruct_list_Nova_ImmutableArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ImmutableArray_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ImmutableArray, this);
	this->vtable = &nova_datastruct_list_ImmutableArray_Extension_VTable_val;
	nova_datastruct_list_Nova_ImmutableArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ImmutableArray_0_Nova_this(this, exceptionData, array);
	}
	
	return this;
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** array, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ImmutableArray, this);
	this->vtable = &nova_datastruct_list_ImmutableArray_Extension_VTable_val;
	nova_datastruct_list_Nova_ImmutableArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ImmutableArray_1_Nova_this(this, exceptionData, array, count);
	}
	
	return this;
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array, char clone)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ImmutableArray, this);
	this->vtable = &nova_datastruct_list_ImmutableArray_Extension_VTable_val;
	nova_datastruct_list_Nova_ImmutableArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ImmutableArray_2_Nova_this(this, exceptionData, (nova_datastruct_list_Nova_Array*)(array), clone);
	}
	
	return this;
}

void nova_datastruct_list_Nova_ImmutableArray_Nova_destroy(nova_datastruct_list_Nova_ImmutableArray** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_ImmutableArray_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_ImmutableArray_0_Nova_this(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

void nova_datastruct_list_Nova_ImmutableArray_0_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	nova_datastruct_list_Nova_ImmutableArray_2_Nova_this(this, exceptionData, array, 1);
}

void nova_datastruct_list_Nova_ImmutableArray_1_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** array, int count)
{
	nova_datastruct_list_Nova_ImmutableArray_2_Nova_this(this, exceptionData, nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, array, count), 0);
}

void nova_datastruct_list_Nova_ImmutableArray_2_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array, char clone)
{
	this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array = (nova_datastruct_list_Nova_Array*)(clone ? nova_datastruct_list_Nova_Array_virtual_Nova_clone((nova_datastruct_list_Nova_Array*)(array), exceptionData) : array);
	nova_datastruct_list_Nova_ImmutableArray_Mutatorfunc_Nova_count(this, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(array), exceptionData));
}

int nova_datastruct_list_Nova_ImmutableArray_Nova_indexOf(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	return nova_datastruct_list_Nova_Array_Nova_indexOf(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array, exceptionData, element, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_map(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray_closure4_Nova_mapFunc nova_datastruct_list_Nova_ImmutableArray_Nova_mapFunc, void* nova_datastruct_list_Nova_ImmutableArray_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)nova_datastruct_list_Nova_ImmutableArray_Nova_mapFunc, nova_datastruct_list_Nova_ImmutableArray_ref_Nova_mapFunc, mapFunc_context)), 0);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_forEach(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray_closure8_Nova_func nova_datastruct_list_Nova_ImmutableArray_Nova_func, void* nova_datastruct_list_Nova_ImmutableArray_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)nova_datastruct_list_Nova_ImmutableArray_Nova_func, nova_datastruct_list_Nova_ImmutableArray_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_filter(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray_closure12_Nova_filterFunc nova_datastruct_list_Nova_ImmutableArray_Nova_filterFunc, void* nova_datastruct_list_Nova_ImmutableArray_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)nova_datastruct_list_Nova_ImmutableArray_Nova_filterFunc, nova_datastruct_list_Nova_ImmutableArray_ref_Nova_filterFunc, filterFunc_context)), 0);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_toArray(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_ImmutableArray_Nova_toMutable(this, exceptionData);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_take(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, howMany)), 0);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_skip(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, howMany)), 0);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_reverse(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData)), 0);
}

nova_Nova_String* nova_datastruct_list_Nova_ImmutableArray_Nova_toString(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ImmutableArray [")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))));
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_0_Nova_add(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	nova_datastruct_list_Nova_Array_0_Nova_add(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array, exceptionData, element);
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), 0);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_1_Nova_add(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* element)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_clone((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData));
	nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, index, element);
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_array), 0);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_0_Nova_remove(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_clone((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData));
	nova_datastruct_list_Nova_Array_1_Nova_remove((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, element);
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_array), 0);
}

nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_1_Nova_remove(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_clone((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_primitive_number_Nova_Int_Nova_construct(0, exceptionData, index)));
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_ImmutableArray_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_array), 0);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_toMutable(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_virtual_Nova_clone((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Nova_get(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, index);
}

nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Nova_set(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* value)
{
}

int nova_datastruct_list_Nova_ImmutableArray_Accessorfunc_Nova_count(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_ImmutableArray_Nova_count;
}

int nova_datastruct_list_Nova_ImmutableArray_Mutatorfunc_Nova_count(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_ImmutableArray_Nova_count = value;
	return value;
}

char nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_empty(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_ImmutableArray_Accessorfunc_Nova_count(this, exceptionData) == 0;
}


nova_datastruct_list_Nova_ImmutableArrayIterator* nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_iterator(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ImmutableArrayIterator*)nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_construct(0, exceptionData, this);
}


nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_first(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_first((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Mutator_Nova_first(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_List_virtual_Mutator0_Nova_first((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, (nova_Nova_Object*)(value));
	return (nova_Nova_Object*)value;
}

nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_last(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_last((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Mutator_Nova_last(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_List_virtual_Mutator0_Nova_last((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array), exceptionData, (nova_Nova_Object*)(value));
	return (nova_Nova_Object*)value;
}

void nova_datastruct_list_Nova_ImmutableArray_Nova_super(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_ImmutableArray_Nova_count = 0;
	this->prv->nova_datastruct_list_Nova_ImmutableArray_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
}

void nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_ImmutableArrayFunctionMap* nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_construct(nova_datastruct_list_Nova_ImmutableArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ImmutableArrayFunctionMap, this,);
	this->vtable = &nova_datastruct_list_ImmutableArray_ImmutableArrayFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_destroy(nova_datastruct_list_Nova_ImmutableArrayFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_this(nova_datastruct_list_Nova_ImmutableArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_super(nova_datastruct_list_Nova_ImmutableArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

