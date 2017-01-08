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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* let String delimiter = "" */ nova_Nova_String** nova_datastruct_list_Nova_List_Nova_delimiter;
} Context1;
typedef struct
{
	/* let Type value */ nova_Nova_Object** nova_datastruct_list_Nova_List_Nova_value;
} Context2;
typedef struct
{
	/* let EqualsOperator<Object> value */ nova_operators_Nova_EqualsOperator** nova_datastruct_list_Nova_List_Nova_value;
} Context3;
typedef struct
{
} Context4;
typedef struct
{
	/* let String delimiter = "" */ nova_Nova_String** nova_datastruct_list_Nova_List_Nova_delimiter;
} Context5;
typedef struct
{
} Context6;
typedef struct
{
} Context7;



nova_Nova_String* nova_datastruct_list_Nova_List_Nova_lambda2(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* str, nova_Nova_Object* e, int i, nova_datastruct_list_Nova_List* _4, Context1* context);
char nova_datastruct_list_Nova_List_Nova_lambda18(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context2* context);
char nova_datastruct_list_Nova_List_Nova_lambda22(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context3* context);
char nova_datastruct_list_Nova_List_Nova_lambda23(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context4* context);
nova_Nova_String* nova_datastruct_list_Nova_List_Nova_lambda24(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* str, nova_Nova_Object* e, int _3, nova_datastruct_list_Nova_List* _4, Context5* context);
char nova_datastruct_list_Nova_List_Nova_lambda166(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context6* context);
char nova_datastruct_list_Nova_List_Nova_lambda167(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context7* context);
void nova_datastruct_list_Nova_List_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

char nova_datastruct_list_Nova_List_0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	Context2* contextArg18 = NOVA_MALLOC(sizeof(Context2));
	contextArg18->nova_datastruct_list_Nova_List_Nova_value = &value;
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&nova_datastruct_list_Nova_List_Nova_lambda18, this, contextArg18);
}

char nova_datastruct_list_Nova_List_1_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	Context3* contextArg22 = NOVA_MALLOC(sizeof(Context3));
	contextArg22->nova_datastruct_list_Nova_List_Nova_value = &value;
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&nova_datastruct_list_Nova_List_Nova_lambda22, this, contextArg22);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure4_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, l2_Nova_value, l1_Nova_i++, this, func_context);
	}
	return this;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure8_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData), (intptr_t)nova_null);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_mapFunc(nova_datastruct_list_Nova_List_ref_Nova_mapFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_array;
}

char nova_datastruct_list_Nova_List_0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_anyFunc(nova_datastruct_list_Nova_List_ref_Nova_anyFunc, exceptionData, l2_Nova_element, anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_List_0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure16_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	int l1_Nova_i = 0;
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_i = (int)(0);
	l1_Nova_contradiction = 0;
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (!nova_datastruct_list_Nova_List_Nova_allFunc(nova_datastruct_list_Nova_List_ref_Nova_allFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, allFunc_context))
		{
			if (stopOnContradiction)
			{
				return 0;
			}
			l1_Nova_contradiction = 1;
		}
	}
	return !l1_Nova_contradiction;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure20_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_filterFunc(nova_datastruct_list_Nova_List_ref_Nova_filterFunc, exceptionData, l2_Nova_value, l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_filterNull(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4* contextArg23 = NOVA_MALLOC(sizeof(Context4));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&nova_datastruct_list_Nova_List_Nova_lambda23, this, contextArg23);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_filterEmpty(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if ((nova_Nova_Object*)(l2_Nova_value) != (nova_Nova_Object*)(nova_Nova_Object*)nova_null && ((nova_Nova_String*)l2_Nova_value)->nova_Nova_String_Nova_count > 0)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ >= howMany)
		{
			return (nova_datastruct_list_Nova_List*)l1_Nova_list;
		}
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_takeLast(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	long_long l1_Nova_startIndex = 0;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l3_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_startIndex = nova_math_Nova_Math_static_Nova_max(0, exceptionData, 0, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - howMany);
	if (l1_Nova_startIndex == nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData))
	{
		return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
	}
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l3_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ >= l1_Nova_startIndex)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l3_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ >= howMany)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_firstOr(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _default, nova_datastruct_list_Nova_List_closure24_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	Context6* contextArg196 = NOVA_MALLOC(sizeof(Context6));
	
	nova_datastruct_list_Nova_List_Nova_func = (nova_datastruct_list_Nova_List_closure24_Nova_func)(nova_datastruct_list_Nova_List_Nova_func == 0 ? (nova_datastruct_list_Nova_List_closure24_Nova_func)&nova_datastruct_list_Nova_List_Nova_lambda166 : nova_datastruct_list_Nova_List_Nova_func);
	nova_datastruct_list_Nova_List_ref_Nova_func = (void*)(nova_datastruct_list_Nova_List_ref_Nova_func == 0 ? (void*)this : nova_datastruct_list_Nova_List_ref_Nova_func);
	func_context = (void*)(func_context == 0 ? (void*)contextArg196 : func_context);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return (nova_Nova_Object*)l2_Nova_element;
		}
	}
	return (nova_Nova_Object*)_default;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_firstOrThrow(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* e, nova_datastruct_list_Nova_List_closure28_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	Context7* contextArg197 = NOVA_MALLOC(sizeof(Context7));
	
	nova_datastruct_list_Nova_List_Nova_func = (nova_datastruct_list_Nova_List_closure28_Nova_func)(nova_datastruct_list_Nova_List_Nova_func == 0 ? (nova_datastruct_list_Nova_List_closure28_Nova_func)&nova_datastruct_list_Nova_List_Nova_lambda167 : nova_datastruct_list_Nova_List_Nova_func);
	nova_datastruct_list_Nova_List_ref_Nova_func = (void*)(nova_datastruct_list_Nova_List_ref_Nova_func == 0 ? (void*)this : nova_datastruct_list_Nova_List_ref_Nova_func);
	func_context = (void*)(func_context == 0 ? (void*)contextArg197 : func_context);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return (nova_Nova_Object*)l2_Nova_element;
		}
	}
	THROW(e, 0);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure32_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return (nova_Nova_Object*)l2_Nova_element;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_firstNonNull(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure36_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
		
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		l2_Nova_value = nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, l2_Nova_element, func_context);
		if ((nova_Nova_Object*)(l2_Nova_value) != (nova_Nova_Object*)(nova_Nova_Object*)nova_null)
		{
			return (nova_Nova_Object*)l2_Nova_value;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_zip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* other, nova_datastruct_list_Nova_List_closure40_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* zipper_context)
{
	nova_datastruct_list_Nova_Iterator* l1_Nova_i1 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_Iterator* l1_Nova_i2 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i1 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(this), exceptionData));
	l1_Nova_i2 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(other), exceptionData));
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i1), exceptionData) && nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i2), exceptionData))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_zipper(nova_datastruct_list_Nova_List_ref_Nova_zipper, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i1), exceptionData)), (OtherType*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i2), exceptionData)), zipper_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}


nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_reduce(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure44_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context, nova_Nova_Object* initialValue)
{
	nova_Nova_Object* l1_Nova_value = (nova_Nova_Object*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_value = initialValue;
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		l1_Nova_value = nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, (Out*)(l1_Nova_value), l2_Nova_element, l1_Nova_i++, (nova_datastruct_list_Nova_List*)(this), func_context);
	}
	return (nova_Nova_Object*)l1_Nova_value;
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	Context1* contextArg2 = NOVA_MALLOC(sizeof(Context1));
	contextArg2->nova_datastruct_list_Nova_List_Nova_delimiter = &delimiter;
	
	delimiter = (nova_Nova_String*)(delimiter == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : (nova_Nova_Object*)delimiter);
	return (nova_Nova_String*)nova_datastruct_list_Nova_List_Nova_reduce(this, exceptionData, (nova_datastruct_list_Nova_List_closure44_Nova_func)&nova_datastruct_list_Nova_List_Nova_lambda2, this, contextArg2, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_stitch(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	Context5* contextArg24 = NOVA_MALLOC(sizeof(Context5));
	contextArg24->nova_datastruct_list_Nova_List_Nova_delimiter = &delimiter;
	
	delimiter = (nova_Nova_String*)(delimiter == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : (nova_Nova_Object*)delimiter);
	return (nova_Nova_String*)nova_datastruct_list_Nova_List_Nova_reduce(this, exceptionData, (nova_datastruct_list_Nova_List_closure44_Nova_func)&nova_datastruct_list_Nova_List_Nova_lambda24, this, contextArg24, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_toEnglish(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* conjunction, int oxford)
{
	oxford = (int)(oxford == (intptr_t)nova_null ? 1 : oxford);
	return (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 1 ? nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - 1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(oxford ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus((conjunction), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - 1)), exceptionData)))))) : nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(this), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_lambda2(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* str, nova_Nova_Object* e, int i, nova_datastruct_list_Nova_List* _4, Context1* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(str), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(i > 0 ? (*context->nova_datastruct_list_Nova_List_Nova_delimiter) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(e), exceptionData))));
}

char nova_datastruct_list_Nova_List_Nova_lambda18(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context2* context)
{
	return (nova_Nova_Object*)_1 == (nova_Nova_Object*)(*context->nova_datastruct_list_Nova_List_Nova_value);
}

char nova_datastruct_list_Nova_List_Nova_lambda22(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context3* context)
{
	return nova_operators_Nova_EqualsOperator_virtual0_Nova_equals((nova_operators_Nova_EqualsOperator*)(((nova_operators_Nova_EqualsOperator*)_1)), exceptionData, (nova_Nova_Object*)((*context->nova_datastruct_list_Nova_List_Nova_value)));
}

char nova_datastruct_list_Nova_List_Nova_lambda23(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context4* context)
{
	return _1 != (nova_Nova_Object*)nova_null;
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_lambda24(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* str, nova_Nova_Object* e, int _3, nova_datastruct_list_Nova_List* _4, Context5* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(str), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((*context->nova_datastruct_list_Nova_List_Nova_delimiter), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(e), exceptionData))));
}

char nova_datastruct_list_Nova_List_Nova_lambda166(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context6* context)
{
	return 1;
}

char nova_datastruct_list_Nova_List_Nova_lambda167(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context7* context)
{
	return 1;
}

int nova_datastruct_list_Nova_List_Accessor_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)0;
}

int nova_datastruct_list_Nova_List_Mutator_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	return value;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_List_Accessor_Nova_iterator(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Iterator*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_List_Mutator0_Nova_iterator(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* value)
{
	return value;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Accessor_Nova_first(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Mutator_Nova_first(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)value;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Accessor_Nova_last(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Mutator_Nova_last(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)value;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_virtual_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

char nova_datastruct_list_Nova_List_virtual1_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual1_Nova_contains((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure4_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)nova_datastruct_list_Nova_List_Nova_func, nova_datastruct_list_Nova_List_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure8_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)nova_datastruct_list_Nova_List_Nova_mapFunc, nova_datastruct_list_Nova_List_ref_Nova_mapFunc, mapFunc_context);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)nova_datastruct_list_Nova_List_Nova_anyFunc, nova_datastruct_list_Nova_List_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure16_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)nova_datastruct_list_Nova_List_Nova_allFunc, nova_datastruct_list_Nova_List_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure20_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)nova_datastruct_list_Nova_List_Nova_filterFunc, nova_datastruct_list_Nova_List_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this), exceptionData, howMany);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this), exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure32_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)nova_datastruct_list_Nova_List_Nova_func, nova_datastruct_list_Nova_List_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_reverse(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_List_virtual_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, delimiter);
}

int nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

int nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual_Mutator_Nova_first(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Mutator_Nova_first((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual_Mutator_Nova_last(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Mutator_Nova_last((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

void nova_datastruct_list_Nova_ListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_ListFunctionMap* nova_datastruct_list_Nova_ListFunctionMap_Nova_construct(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ListFunctionMap, this,);
	this->vtable = &nova_datastruct_list_List_ListFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_ListFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ListFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_ListFunctionMap_Nova_destroy(nova_datastruct_list_Nova_ListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_ListFunctionMap_Nova_this(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_toArray(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_Nova_toArray(reference, exceptionData);
}

char nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_contains(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_Object* value)
{
	return nova_datastruct_list_Nova_List_0_Nova_contains(reference, exceptionData, value);
}

char nova_datastruct_list_Nova_ListFunctionMap_functionMap1_Nova_contains(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_operators_Nova_EqualsOperator* value)
{
	return nova_datastruct_list_Nova_List_1_Nova_contains(reference, exceptionData, value);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_forEach(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure45_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return nova_datastruct_list_Nova_List_0_Nova_forEach(reference, exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_map(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure46_Nova_mapFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return nova_datastruct_list_Nova_List_0_Nova_map(reference, exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_mapFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

char nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_any(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure47_Nova_anyFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_List_0_Nova_any(reference, exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_anyFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_all(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure48_Nova_allFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_allFunc, void* allFunc_context, char stopOnContradiction)
{
	return nova_datastruct_list_Nova_List_0_Nova_all(reference, exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_allFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_filter(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure49_Nova_filterFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return nova_datastruct_list_Nova_List_0_Nova_filter(reference, exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_filterFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_filterNull(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference)
{
	return nova_datastruct_list_Nova_List_Nova_filterNull(reference, exceptionData);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_filterEmpty(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference)
{
	return nova_datastruct_list_Nova_List_Nova_filterEmpty(reference, exceptionData);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_take(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, int howMany)
{
	return nova_datastruct_list_Nova_List_Nova_take(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_takeLast(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_Nova_takeLast(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_skip(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, int howMany)
{
	return nova_datastruct_list_Nova_List_Nova_skip(reference, exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_firstOr(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_Object* _default, nova_datastruct_list_Nova_ListFunctionMap_closure50_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_Nova_firstOr(reference, exceptionData, _default, (nova_datastruct_list_Nova_List_closure24_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_Nova_Object* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_firstOrThrow(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_exception_Nova_Exception* e, nova_datastruct_list_Nova_ListFunctionMap_closure51_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_Nova_firstOrThrow(reference, exceptionData, e, (nova_datastruct_list_Nova_List_closure28_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_Nova_Object* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure52_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_0_Nova_firstWhere(reference, exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_Nova_Object* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_firstNonNull(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure53_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_Nova_firstNonNull(reference, exceptionData, (nova_datastruct_list_Nova_List_closure36_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_zip(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_List* other, nova_datastruct_list_Nova_ListFunctionMap_closure54_Nova_zipper nova_datastruct_list_Nova_ListFunctionMap_Nova_zipper, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_zipper, void* zipper_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_Nova_zip(reference, exceptionData, other, (nova_datastruct_list_Nova_List_closure40_Nova_zipper)nova_datastruct_list_Nova_ListFunctionMap_Nova_zipper, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_zipper, zipper_context);
}

nova_Nova_Object* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_reduce(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure55_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context, nova_Nova_Object* initialValue)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_Nova_reduce(reference, exceptionData, (nova_datastruct_list_Nova_List_closure44_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context, initialValue);
}

nova_Nova_String* nova_datastruct_list_Nova_ListFunctionMap_functionMap0_Nova_join(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_list_Nova_List_Nova_join(reference, exceptionData, delimiter);
}

nova_Nova_String* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_stitch(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_list_Nova_List_Nova_stitch(reference, exceptionData, delimiter);
}

nova_Nova_String* nova_datastruct_list_Nova_ListFunctionMap_functionMap_Nova_toEnglish(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_String* conjunction, char oxford)
{
	return nova_datastruct_list_Nova_List_Nova_toEnglish(reference, exceptionData, conjunction, oxford);
}

void nova_datastruct_list_Nova_ListFunctionMap_Nova_super(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_toArray(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_toArray(this, exceptionData, reference);
}

char nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_contains(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_Object* value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_contains(this, exceptionData, reference, value);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_forEach(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure45_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_forEach(this, exceptionData, reference, (nova_datastruct_list_Nova_ListFunctionMap_closure45_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_map(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure46_Nova_mapFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_map(this, exceptionData, reference, (nova_datastruct_list_Nova_ListFunctionMap_closure46_Nova_mapFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_mapFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

char nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_any(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure47_Nova_anyFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_any(this, exceptionData, reference, (nova_datastruct_list_Nova_ListFunctionMap_closure47_Nova_anyFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_anyFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_all(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure48_Nova_allFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_allFunc, void* allFunc_context, char stopOnContradiction)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_all(this, exceptionData, reference, (nova_datastruct_list_Nova_ListFunctionMap_closure48_Nova_allFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_allFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_filter(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure49_Nova_filterFunc nova_datastruct_list_Nova_ListFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_filter(this, exceptionData, reference, (nova_datastruct_list_Nova_ListFunctionMap_closure49_Nova_filterFunc)nova_datastruct_list_Nova_ListFunctionMap_Nova_filterFunc, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_take(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, int howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_take(this, exceptionData, reference, howMany);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_skip(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, int howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_skip(this, exceptionData, reference, howMany);
}

nova_Nova_Object* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_firstWhere(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_datastruct_list_Nova_ListFunctionMap_closure52_Nova_func nova_datastruct_list_Nova_ListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_firstWhere(this, exceptionData, reference, (nova_datastruct_list_Nova_ListFunctionMap_closure52_Nova_func)nova_datastruct_list_Nova_ListFunctionMap_Nova_func, nova_datastruct_list_Nova_ListFunctionMap_ref_Nova_func, func_context);
}

nova_Nova_String* nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_join(nova_datastruct_list_Nova_ListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* reference, nova_Nova_String* delimiter)
{
	return this->vtable->itable.nova_datastruct_list_Nova_ListFunctionMap_virtualfunctionMap0_Nova_join(this, exceptionData, reference, delimiter);
}

