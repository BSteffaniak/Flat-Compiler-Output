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
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRangeIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>






void nova_datastruct_list_Nova_IntRange_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRange_0_Nova_construct(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntRange, this,);
	this->vtable = &nova_datastruct_list_IntRange_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_IntRange_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntRange_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRange_1_Nova_construct(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntRange, this,);
	this->vtable = &nova_datastruct_list_IntRange_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_IntRange_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntRange_0_Nova_this(this, exceptionData, start, end);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntRange_Nova_destroy(nova_datastruct_list_Nova_IntRange** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntRange_Nova_this(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_IntRange_0_Nova_this(this, exceptionData, 0, 0);
}

void nova_datastruct_list_Nova_IntRange_0_Nova_this(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	this->nova_datastruct_list_Nova_IntRange_Nova_start = start;
	this->nova_datastruct_list_Nova_IntRange_Nova_end = end;
}

char nova_datastruct_list_Nova_IntRange_0_Nova_contains(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	return value >= this->nova_datastruct_list_Nova_IntRange_Nova_start && value < this->nova_datastruct_list_Nova_IntRange_Nova_end;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntRange_Nova_toArray(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_ints = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l1_Nova_i = 0;
	
	l1_Nova_ints = nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_IntRange_Accessor_Nova_size(this, exceptionData));
	l1_Nova_i = this->nova_datastruct_list_Nova_IntRange_Nova_start;
	while (l1_Nova_i < this->nova_datastruct_list_Nova_IntRange_Nova_end)
	{
		nova_datastruct_list_Nova_IntArray_Nova_set(l1_Nova_ints, exceptionData, l1_Nova_i - this->nova_datastruct_list_Nova_IntRange_Nova_start, l1_Nova_i++);
	}
	return l1_Nova_ints;
}

void nova_datastruct_list_Nova_IntRange_Nova_forEach(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange_closure4_Nova_func nova_datastruct_list_Nova_IntRange_Nova_func, void* nova_datastruct_list_Nova_IntRange_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_value = 0;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_value = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_IntRange_Nova_func(nova_datastruct_list_Nova_IntRange_ref_Nova_func, exceptionData, l2_Nova_value, l1_Nova_i++, this, func_context);
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_IntRange_0_Nova_map(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange_closure8_Nova_mapFunc nova_datastruct_list_Nova_IntRange_Nova_mapFunc, void* nova_datastruct_list_Nova_IntRange_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_IntRange_Nova_mapFunc(nova_datastruct_list_Nova_IntRange_ref_Nova_mapFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

char nova_datastruct_list_Nova_IntRange_0_Nova_any(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange_closure12_Nova_anyFunc nova_datastruct_list_Nova_IntRange_Nova_anyFunc, void* nova_datastruct_list_Nova_IntRange_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_element = 0;
	
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_IntRange_Nova_anyFunc(nova_datastruct_list_Nova_IntRange_ref_Nova_anyFunc, exceptionData, l2_Nova_element, anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_IntRange_0_Nova_all(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange_closure16_Nova_allFunc nova_datastruct_list_Nova_IntRange_Nova_allFunc, void* nova_datastruct_list_Nova_IntRange_ref_Nova_allFunc, void* allFunc_context)
{
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_element = 0;
	
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (!nova_datastruct_list_Nova_IntRange_Nova_allFunc(nova_datastruct_list_Nova_IntRange_ref_Nova_allFunc, exceptionData, l2_Nova_element, allFunc_context))
		{
			return 0;
		}
	}
	return 1;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntRange_0_Nova_filter(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange_closure20_Nova_filterFunc nova_datastruct_list_Nova_IntRange_Nova_filterFunc, void* nova_datastruct_list_Nova_IntRange_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_list = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_value = 0;
	
	l1_Nova_list = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_value = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_IntRange_Nova_filterFunc(nova_datastruct_list_Nova_IntRange_ref_Nova_filterFunc, exceptionData, l2_Nova_value, l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return l1_Nova_list;
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRange_Nova_take(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, this->nova_datastruct_list_Nova_IntRange_Nova_start, (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, this->nova_datastruct_list_Nova_IntRange_Nova_start + howMany, this->nova_datastruct_list_Nova_IntRange_Nova_end));
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRange_Nova_skip(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, this->nova_datastruct_list_Nova_IntRange_Nova_start + howMany, this->nova_datastruct_list_Nova_IntRange_Nova_end), this->nova_datastruct_list_Nova_IntRange_Nova_end);
}

int nova_datastruct_list_Nova_IntRange_0_Nova_firstWhere(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange_closure24_Nova_func nova_datastruct_list_Nova_IntRange_Nova_func, void* nova_datastruct_list_Nova_IntRange_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_element = 0;
	
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_IntRange_Nova_func(nova_datastruct_list_Nova_IntRange_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return l2_Nova_element;
		}
	}
	return (int)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRange_Nova_reverse(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, this->nova_datastruct_list_Nova_IntRange_Nova_end, this->nova_datastruct_list_Nova_IntRange_Nova_start);
}

nova_Nova_String* nova_datastruct_list_Nova_IntRange_Nova_join(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	char l1_Nova_passed = 0;
	nova_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l2_Nova_element = 0;
	
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_passed = 0;
	nova_local_0 = (nova_datastruct_list_Nova_IntRangeIterator*)(nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (l1_Nova_passed)
		{
			l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_str, exceptionData, delimiter));
		}
		else
		{
			l1_Nova_passed = 1;
		}
		l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_str, exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l2_Nova_element)));
	}
	return l1_Nova_str;
}

nova_Nova_String* nova_datastruct_list_Nova_IntRange_Nova_toString(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->nova_datastruct_list_Nova_IntRange_Nova_start)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("..")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->nova_datastruct_list_Nova_IntRange_Nova_end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

int nova_datastruct_list_Nova_IntRange_Mutator_Nova_last(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_IntRange_Nova_end = value + 1;
	return value;
}

int nova_datastruct_list_Nova_IntRange_Accessor_Nova_size(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_IntRange_Nova_end - this->nova_datastruct_list_Nova_IntRange_Nova_start;
}


nova_datastruct_list_Nova_IntRangeIterator* nova_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_IntRangeIterator_Nova_construct(0, exceptionData, this);
}


int nova_datastruct_list_Nova_IntRange_Accessor_Nova_first(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_IntRange_Nova_start;
}

int nova_datastruct_list_Nova_IntRange_Mutator_Nova_first(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_IntRange_Nova_start = value;
	return value;
}

int nova_datastruct_list_Nova_IntRange_Accessor_Nova_last(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_IntRange_Nova_end - 1;
}

int nova_datastruct_list_Nova_IntRange_Accessorfunc_Nova_count(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_IntRange_Nova_count;
}

int nova_datastruct_list_Nova_IntRange_Mutatorfunc_Nova_count(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_IntRange_Nova_count = value;
	return value;
}

void nova_datastruct_list_Nova_IntRange_Nova_super(nova_datastruct_list_Nova_IntRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_IntRange_Nova_start = 0;
	this->nova_datastruct_list_Nova_IntRange_Nova_end = 0;
	this->nova_datastruct_list_Nova_IntRange_Nova_count = 0;
}

void nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntRangeFunctionMap* nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_construct(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntRangeFunctionMap, this,);
	this->vtable = &nova_datastruct_list_IntRange_IntRangeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_destroy(nova_datastruct_list_Nova_IntRangeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_this(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMapIntRangeFunctionMap0_Nova_construct(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_IntRange_0_Nova_construct(0, exceptionData);
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMapIntRangeFunctionMap1_Nova_construct(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	return nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, start, end);
}

char nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_contains(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, int value)
{
	return nova_datastruct_list_Nova_IntRange_0_Nova_contains(reference, exceptionData, value);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_toArray(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference)
{
	return (nova_datastruct_list_Nova_IntArray*)nova_datastruct_list_Nova_IntRange_Nova_toArray(reference, exceptionData);
}

void nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap_Nova_forEach(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_datastruct_list_Nova_IntRangeFunctionMap_closure25_Nova_func nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_func, void* nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_IntRange_Nova_forEach(reference, exceptionData, (nova_datastruct_list_Nova_IntRange_closure4_Nova_func)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_func, nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_map(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_datastruct_list_Nova_IntRangeFunctionMap_closure26_Nova_mapFunc nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_IntRange_0_Nova_map(reference, exceptionData, (nova_datastruct_list_Nova_IntRange_closure8_Nova_mapFunc)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_mapFunc, nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

char nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_any(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_datastruct_list_Nova_IntRangeFunctionMap_closure27_Nova_anyFunc nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_IntRange_0_Nova_any(reference, exceptionData, (nova_datastruct_list_Nova_IntRange_closure12_Nova_anyFunc)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_anyFunc, nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_all(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_datastruct_list_Nova_IntRangeFunctionMap_closure28_Nova_allFunc nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_allFunc, void* allFunc_context)
{
	return nova_datastruct_list_Nova_IntRange_0_Nova_all(reference, exceptionData, (nova_datastruct_list_Nova_IntRange_closure16_Nova_allFunc)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_allFunc, nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_allFunc, allFunc_context);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_filter(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_datastruct_list_Nova_IntRangeFunctionMap_closure29_Nova_filterFunc nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_IntArray*)nova_datastruct_list_Nova_IntRange_0_Nova_filter(reference, exceptionData, (nova_datastruct_list_Nova_IntRange_closure20_Nova_filterFunc)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_filterFunc, nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_take(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, int howMany)
{
	return (nova_datastruct_list_Nova_IntRange*)nova_datastruct_list_Nova_IntRange_Nova_take(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_skip(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, int howMany)
{
	return (nova_datastruct_list_Nova_IntRange*)nova_datastruct_list_Nova_IntRange_Nova_skip(reference, exceptionData, howMany);
}

int nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_datastruct_list_Nova_IntRangeFunctionMap_closure30_Nova_func nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_func, void* nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_func, void* func_context)
{
	return (int)nova_datastruct_list_Nova_IntRange_0_Nova_firstWhere(reference, exceptionData, (nova_datastruct_list_Nova_IntRange_closure24_Nova_func)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_func, nova_datastruct_list_Nova_IntRangeFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap_Nova_reverse(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference)
{
	return (nova_datastruct_list_Nova_IntRange*)nova_datastruct_list_Nova_IntRange_Nova_reverse(reference, exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap0_Nova_join(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_list_Nova_IntRange_Nova_join(reference, exceptionData, delimiter);
}

nova_Nova_String* nova_datastruct_list_Nova_IntRangeFunctionMap_functionMap_Nova_toString(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* reference)
{
	return nova_datastruct_list_Nova_IntRange_Nova_toString(reference, exceptionData);
}

void nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_super(nova_datastruct_list_Nova_IntRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

