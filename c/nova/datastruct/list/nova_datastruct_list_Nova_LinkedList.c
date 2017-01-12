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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedListIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* E value */ nova_Nova_Object** nova_datastruct_list_Nova_LinkedList_Nova_value;
} Context92;


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_LinkedList,
	nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Nova_start;
	nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Nova_current;
	
)

char nova_datastruct_list_Nova_LinkedList_Nova_lambda93(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context92* context);

void nova_datastruct_list_Nova_LinkedList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_construct(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedList, this);
	this->vtable = &nova_datastruct_list_LinkedList_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedList_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedList_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedList_Nova_destroy(nova_datastruct_list_Nova_LinkedList** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_ListNode_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_LinkedList_Nova_start, exceptionData);
	nova_datastruct_list_Nova_ListNode_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_LinkedList_Nova_current, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	
	NOVA_FREE(*this);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_addAll(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l2_Nova_d = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((data)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_d = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_LinkedList_Nova_add(this, exceptionData, l2_Nova_d);
	}
	return this;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_add(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	nova_datastruct_list_Nova_ListNode* l1_Nova_node = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	l1_Nova_node = nova_datastruct_list_Nova_ListNode_Nova_construct(0, exceptionData, data, 0);
	if ((this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start) != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = l1_Nova_node;
	}
	else
	{
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = l1_Nova_node;
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = l1_Nova_node;
	}
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = l1_Nova_node;
	this->nova_datastruct_list_Nova_LinkedList_Nova_size++;
	return this;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_remove(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	nova_datastruct_list_Nova_ListNode* l1_Nova_prev = (nova_datastruct_list_Nova_ListNode*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_cur = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	if ((nova_Nova_Object*)this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start->nova_datastruct_list_Nova_ListNode_Nova_data == (nova_Nova_Object*)data)
	{
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start->nova_datastruct_list_Nova_ListNode_Nova_next;
	}
	l1_Nova_prev = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start;
	l1_Nova_cur = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start->nova_datastruct_list_Nova_ListNode_Nova_next;
	while ((l1_Nova_cur) != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		nova_Nova_Object* l3_Nova_d = (nova_Nova_Object*)nova_null;
		
		l3_Nova_d = l1_Nova_cur->nova_datastruct_list_Nova_ListNode_Nova_data;
		if ((nova_Nova_Object*)l3_Nova_d == (nova_Nova_Object*)data)
		{
			l1_Nova_prev->nova_datastruct_list_Nova_ListNode_Nova_next = l1_Nova_cur->nova_datastruct_list_Nova_ListNode_Nova_next;
			this->nova_datastruct_list_Nova_LinkedList_Nova_size--;
		}
		l1_Nova_cur = l1_Nova_cur->nova_datastruct_list_Nova_ListNode_Nova_next;
	}
	return this;
}

char nova_datastruct_list_Nova_LinkedList_0_Nova_contains(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	Context92* contextArg93 = NOVA_MALLOC(sizeof(Context92));
	contextArg93->nova_datastruct_list_Nova_LinkedList_Nova_value = &value;
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure296_Nova_anyFunc)&nova_datastruct_list_Nova_LinkedList_Nova_lambda93, this, contextArg93);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_LinkedList_Nova_toArray(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, this->nova_datastruct_list_Nova_LinkedList_Nova_size, (intptr_t)nova_null);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, l1_Nova_i++, l2_Nova_element);
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_map(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure264_Nova_mapFunc nova_datastruct_list_Nova_LinkedList_Nova_mapFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_array = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_LinkedList_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedList_Nova_mapFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_mapFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, mapFunc_context)));
	}
	return l1_Nova_array;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_forEach(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure268_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_LinkedList_Nova_func(nova_datastruct_list_Nova_LinkedList_ref_Nova_func, exceptionData, l2_Nova_element, l1_Nova_i++, this, func_context);
	}
	return this;
}

char nova_datastruct_list_Nova_LinkedList_0_Nova_any(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure272_Nova_anyFunc nova_datastruct_list_Nova_LinkedList_Nova_anyFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_LinkedList_Nova_anyFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_anyFunc, exceptionData, l2_Nova_element, anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_LinkedList_0_Nova_all(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure276_Nova_allFunc nova_datastruct_list_Nova_LinkedList_Nova_allFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_contradiction = 0;
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (!nova_datastruct_list_Nova_LinkedList_Nova_allFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_allFunc, exceptionData, l2_Nova_element, allFunc_context))
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

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_filter(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure280_Nova_filterFunc nova_datastruct_list_Nova_LinkedList_Nova_filterFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_filtered = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_filtered = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_LinkedList_Nova_filterFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_filterFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_LinkedList_Nova_add(l1_Nova_filtered, exceptionData, l2_Nova_element);
		}
	}
	return l1_Nova_filtered;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_take(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_list = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l3_Nova_element = (nova_Nova_Object*)nova_null;
	
	if (howMany > this->nova_datastruct_list_Nova_LinkedList_Nova_size)
	{
		howMany = this->nova_datastruct_list_Nova_LinkedList_Nova_size;
	}
	l1_Nova_list = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l3_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_list->nova_datastruct_list_Nova_LinkedList_Nova_size == howMany)
		{
			break;
		}
		nova_datastruct_list_Nova_LinkedList_Nova_add(l1_Nova_list, exceptionData, l3_Nova_element);
	}
	return l1_Nova_list;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_skip(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ > howMany)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, l2_Nova_element);
		}
	}
	return (nova_datastruct_list_Nova_LinkedList*)l1_Nova_list;
}

nova_Nova_Object* nova_datastruct_list_Nova_LinkedList_0_Nova_firstWhere(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure284_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_LinkedList_Nova_func(nova_datastruct_list_Nova_LinkedList_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return (nova_Nova_Object*)l2_Nova_element;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_reverse(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_list = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_prev = (nova_datastruct_list_Nova_ListNode*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_current = (nova_datastruct_list_Nova_ListNode*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_next = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	l1_Nova_prev = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
	l1_Nova_next = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
	if ((this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start) != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		l1_Nova_current = nova_datastruct_list_Nova_ListNode_Nova_clone(this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start, exceptionData);
	}
	while ((l1_Nova_current) != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		l1_Nova_next = l1_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next;
		l1_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
		if ((l1_Nova_next) != (nova_datastruct_list_Nova_ListNode*)nova_null)
		{
			l1_Nova_next = nova_datastruct_list_Nova_ListNode_Nova_clone(l1_Nova_next, exceptionData);
		}
		if ((l1_Nova_prev) != (nova_datastruct_list_Nova_ListNode*)nova_null)
		{
			l1_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = nova_datastruct_list_Nova_ListNode_Nova_clone(l1_Nova_prev, exceptionData);
		}
		l1_Nova_prev = l1_Nova_current;
		l1_Nova_current = l1_Nova_next;
	}
	l1_Nova_list->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = l1_Nova_prev;
	return l1_Nova_list;
}

void nova_datastruct_list_Nova_LinkedList_Nova_this(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_datastruct_list_Nova_LinkedList_Nova_lambda93(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context92* context)
{
	return (nova_Nova_Object*)_1 == (nova_Nova_Object*)(*context->nova_datastruct_list_Nova_LinkedList_Nova_value);
}

nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Mutator_Nova_first(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ListNode* value)
{
	value->nova_datastruct_list_Nova_ListNode_Nova_next = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start;
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = value;
	return value;
}

nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Mutator_Nova_last(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ListNode* value)
{
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = value;
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = value;
	return value;
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_LinkedListIterator*)nova_datastruct_list_Nova_LinkedListIterator_Nova_construct(0, exceptionData, this);
}


nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_first(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start;
}

nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_last(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current;
}

int nova_datastruct_list_Nova_LinkedList_Accessorfunc_Nova_count(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_LinkedList_Nova_count;
}

int nova_datastruct_list_Nova_LinkedList_Mutatorfunc_Nova_count(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_LinkedList_Nova_count = value;
	return value;
}

void nova_datastruct_list_Nova_LinkedList_Nova_super(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_LinkedList_Nova_size = 0;
	this->nova_datastruct_list_Nova_LinkedList_Nova_count = 0;
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = (nova_datastruct_list_Nova_ListNode*)nova_null;
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = (nova_datastruct_list_Nova_ListNode*)nova_null;
}

void nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedListFunctionMap* nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_construct(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedListFunctionMap, this,);
	this->vtable = &nova_datastruct_list_LinkedList_LinkedListFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_destroy(nova_datastruct_list_Nova_LinkedListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_this(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMapLinkedListFunctionMap_Nova_construct(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap_Nova_addAll(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_Array* data)
{
	return nova_datastruct_list_Nova_LinkedList_Nova_addAll(reference, exceptionData, data);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap_Nova_add(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_Nova_Object* data)
{
	return nova_datastruct_list_Nova_LinkedList_Nova_add(reference, exceptionData, data);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap_Nova_remove(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_Nova_Object* data)
{
	return nova_datastruct_list_Nova_LinkedList_Nova_remove(reference, exceptionData, data);
}

char nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_contains(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_Nova_Object* value)
{
	return nova_datastruct_list_Nova_LinkedList_0_Nova_contains(reference, exceptionData, value);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_toArray(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_LinkedList_Nova_toArray(reference, exceptionData);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_map(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_LinkedListFunctionMap_closure457_Nova_mapFunc nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_0_Nova_map(reference, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure264_Nova_mapFunc)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_mapFunc, nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_forEach(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_LinkedListFunctionMap_closure458_Nova_func nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_0_Nova_forEach(reference, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure268_Nova_func)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_func, nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_func, func_context);
}

char nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_any(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_LinkedListFunctionMap_closure459_Nova_anyFunc nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_LinkedList_0_Nova_any(reference, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure272_Nova_anyFunc)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_anyFunc, nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_all(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_LinkedListFunctionMap_closure460_Nova_allFunc nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_allFunc, void* allFunc_context, char stopOnContradiction)
{
	return nova_datastruct_list_Nova_LinkedList_0_Nova_all(reference, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure276_Nova_allFunc)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_allFunc, nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_filter(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_LinkedListFunctionMap_closure461_Nova_filterFunc nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_0_Nova_filter(reference, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure280_Nova_filterFunc)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_filterFunc, nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_take(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, int howMany)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_Nova_take(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_skip(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, int howMany)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_Nova_skip(reference, exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference, nova_datastruct_list_Nova_LinkedListFunctionMap_closure462_Nova_func nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_func, void* nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_LinkedList_0_Nova_firstWhere(reference, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure284_Nova_func)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_func, nova_datastruct_list_Nova_LinkedListFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListFunctionMap_functionMap_Nova_reverse(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return (nova_datastruct_list_Nova_LinkedList*)nova_datastruct_list_Nova_LinkedList_Nova_reverse(reference, exceptionData);
}

void nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_super(nova_datastruct_list_Nova_LinkedListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedListPropertyMap* nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_construct(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedListPropertyMap, this,);
	this->vtable = &nova_datastruct_list_LinkedList_LinkedListPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_destroy(nova_datastruct_list_Nova_LinkedListPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_this(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_datastruct_list_Nova_LinkedListPropertyMap_functionMap_Nova_size(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return reference->nova_datastruct_list_Nova_LinkedList_Nova_size;
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedListPropertyMap_functionMap0_Nova_iterator(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return (nova_datastruct_list_Nova_LinkedListIterator*)nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator(reference, exceptionData);
}

nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedListPropertyMap_functionMap0_Nova_first(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return (nova_datastruct_list_Nova_ListNode*)nova_datastruct_list_Nova_LinkedList_Accessor_Nova_first(reference, exceptionData);
}

nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedListPropertyMap_functionMap0_Nova_last(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return (nova_datastruct_list_Nova_ListNode*)nova_datastruct_list_Nova_LinkedList_Accessor_Nova_last(reference, exceptionData);
}

int nova_datastruct_list_Nova_LinkedListPropertyMap_functionMap0_Nova_count(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* reference)
{
	return nova_datastruct_list_Nova_LinkedList_Accessorfunc_Nova_count(reference, exceptionData);
}

void nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_super(nova_datastruct_list_Nova_LinkedListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

