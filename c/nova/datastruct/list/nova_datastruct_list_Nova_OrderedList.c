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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>



void nova_datastruct_list_Nova_OrderedList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

char nova_datastruct_list_Nova_OrderedList_Nova_findIndex(nova_datastruct_list_Nova_OrderedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_OrderedList_closure4_Nova_condition nova_datastruct_list_Nova_OrderedList_Nova_condition, void* nova_datastruct_list_Nova_OrderedList_ref_Nova_condition, void* condition_context, int defaultReturnValue)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_List* l1_Nova_list = (nova_datastruct_list_Nova_List*)nova_null;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_i = (int)(0);
	l1_Nova_list = (nova_datastruct_list_Nova_List*)this;
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_list)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_OrderedList_Nova_condition(nova_datastruct_list_Nova_OrderedList_ref_Nova_condition, exceptionData, l2_Nova_element, l1_Nova_i++, this, condition_context))
		{
			return (char)l1_Nova_i;
		}
	}
	return (char)defaultReturnValue;
}

