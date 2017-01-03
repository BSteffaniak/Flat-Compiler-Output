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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;


CCLASS_PRIVATE
(
	nova_datastruct_Nova_HashMap* nova_datastruct_Nova_ImmutableHashMap_Nova_map;
	
)

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda14(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context1* context);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda15(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context2* context);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda16(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context3* context);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda17(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context4* context);

void nova_datastruct_Nova_ImmutableHashMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_ImmutableHashMap* nova_datastruct_Nova_ImmutableHashMap_0_Nova_construct(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map)
{
	CCLASS_NEW(nova_datastruct_Nova_ImmutableHashMap, this);
	this->vtable = &nova_datastruct_ImmutableHashMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_ImmutableHashMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_ImmutableHashMap_0_Nova_this(this, exceptionData, map);
	}
	
	return this;
}

nova_datastruct_Nova_ImmutableHashMap* nova_datastruct_Nova_ImmutableHashMap_1_Nova_construct(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map, char clone)
{
	CCLASS_NEW(nova_datastruct_Nova_ImmutableHashMap, this);
	this->vtable = &nova_datastruct_ImmutableHashMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_ImmutableHashMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_ImmutableHashMap_1_Nova_this(this, exceptionData, (nova_datastruct_Nova_HashMap*)(map), clone);
	}
	
	return this;
}

void nova_datastruct_Nova_ImmutableHashMap_Nova_destroy(nova_datastruct_Nova_ImmutableHashMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_Nova_HashMap_Nova_destroy(&(*this)->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData);
	NOVA_FREE((*this)->prv);
	
	nova_datastruct_Nova_Pair_Nova_destroy(&(*this)->nova_datastruct_Nova_ImmutableHashMap_Nova_first, exceptionData);
	nova_datastruct_Nova_Pair_Nova_destroy(&(*this)->nova_datastruct_Nova_ImmutableHashMap_Nova_last, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_ImmutableHashMap_0_Nova_this(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map)
{
	nova_datastruct_Nova_ImmutableHashMap_1_Nova_this(this, exceptionData, map, 1);
}

void nova_datastruct_Nova_ImmutableHashMap_1_Nova_this(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map, char clone)
{
	this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map = (nova_datastruct_Nova_HashMap*)(clone ? nova_datastruct_Nova_HashMap_Nova_clone((nova_datastruct_Nova_HashMap*)(map), exceptionData) : map);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_toArray(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1* contextArg14 = NOVA_MALLOC(sizeof(Context1));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_ImmutableHashMap_func0_Nova_map(this, exceptionData, (nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func)&nova_datastruct_Nova_ImmutableHashMap_Nova_lambda14, this, contextArg14);
}

char nova_datastruct_Nova_ImmutableHashMap_0_Nova_contains(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value)
{
	return nova_datastruct_Nova_HashMap_Nova_contains(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, value);
}

char nova_datastruct_Nova_ImmutableHashMap_0_Nova_any(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure4_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context)
{
	return nova_datastruct_Nova_HashMap_Nova_any(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, (nova_datastruct_Nova_HashMap_closure4_Nova_func)nova_datastruct_Nova_ImmutableHashMap_Nova_func, nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_ImmutableHashMap_0_Nova_all(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure8_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context)
{
	return nova_datastruct_Nova_HashMap_Nova_all(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, (nova_datastruct_Nova_HashMap_closure8_Nova_func)nova_datastruct_Nova_ImmutableHashMap_Nova_func, nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_func0_Nova_map(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_map(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, (nova_datastruct_Nova_HashMap_closure12_Nova_func)nova_datastruct_Nova_ImmutableHashMap_Nova_func, nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_0_Nova_filter(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure16_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_filter(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, (nova_datastruct_Nova_HashMap_closure16_Nova_func)nova_datastruct_Nova_ImmutableHashMap_Nova_func, nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, func_context);
}

nova_Nova_String* nova_datastruct_Nova_ImmutableHashMap_Nova_join(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	return nova_datastruct_Nova_HashMap_Nova_join(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, delimiter);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_skip(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context2* contextArg15 = NOVA_MALLOC(sizeof(Context2));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_ImmutableHashMap_func0_Nova_map(this, exceptionData, (nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func)&nova_datastruct_Nova_ImmutableHashMap_Nova_lambda15, this, contextArg15)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_take(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context3* contextArg16 = NOVA_MALLOC(sizeof(Context3));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_ImmutableHashMap_func0_Nova_map(this, exceptionData, (nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func)&nova_datastruct_Nova_ImmutableHashMap_Nova_lambda16, this, contextArg16)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_reverse(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4* contextArg17 = NOVA_MALLOC(sizeof(Context4));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_ImmutableHashMap_func0_Nova_map(this, exceptionData, (nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func)&nova_datastruct_Nova_ImmutableHashMap_Nova_lambda17, this, contextArg17)), exceptionData);
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_0_Nova_firstWhere(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure20_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_Nova_Pair*)nova_datastruct_Nova_HashMap_Nova_firstWhere(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, (nova_datastruct_Nova_HashMap_closure20_Nova_func)nova_datastruct_Nova_ImmutableHashMap_Nova_func, nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, func_context);
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_ImmutableHashMap_0_Nova_forEach(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure24_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_Nova_HashMap*)nova_datastruct_Nova_HashMap_Nova_forEach(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, (nova_datastruct_Nova_HashMap_closure24_Nova_func)nova_datastruct_Nova_ImmutableHashMap_Nova_func, nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_ImmutableHashMap_Nova_containsKey(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key)
{
	return nova_datastruct_Nova_HashMap_Nova_containsKey(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, key);
}

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_get(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashMap_Nova_get(this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map, exceptionData, key);
}

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_set(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value)
{
}

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda14(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context1* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda15(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context2* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda16(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context3* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_lambda17(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context4* context)
{
}

int nova_datastruct_Nova_ImmutableHashMap_Accessor_Nova_count(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map->nova_datastruct_Nova_HashMap_Nova_count;
}


nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_ImmutableHashMap_Accessorfunc_Nova_iterator(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_ImmutableHashMap_Nova_iterator;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_ImmutableHashMap_Mutatorfunc_Nova_iterator(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* value)
{
	this->nova_datastruct_Nova_ImmutableHashMap_Nova_iterator = value;
	return (nova_datastruct_list_Nova_Iterator*)value;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Accessorfunc_Nova_first(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_ImmutableHashMap_Nova_first;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Mutatorfunc_Nova_first(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value)
{
	this->nova_datastruct_Nova_ImmutableHashMap_Nova_first = value;
	return value;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Accessorfunc_Nova_last(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_ImmutableHashMap_Nova_last;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Mutatorfunc_Nova_last(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value)
{
	this->nova_datastruct_Nova_ImmutableHashMap_Nova_last = value;
	return value;
}

void nova_datastruct_Nova_ImmutableHashMap_Nova_super(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_ImmutableHashMap_Nova_iterator = (nova_datastruct_list_Nova_Iterator*)nova_null;
	this->nova_datastruct_Nova_ImmutableHashMap_Nova_first = (nova_datastruct_Nova_Pair*)nova_null;
	this->nova_datastruct_Nova_ImmutableHashMap_Nova_last = (nova_datastruct_Nova_Pair*)nova_null;
	this->prv->nova_datastruct_Nova_ImmutableHashMap_Nova_map = (nova_datastruct_Nova_HashMap*)nova_null;
}

void nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap* nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_construct(nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap, this,);
	this->vtable = &nova_datastruct_ImmutableHashMap_nova_datastruct_ImmutableHashMapFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_destroy(nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_this(nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_super(nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

