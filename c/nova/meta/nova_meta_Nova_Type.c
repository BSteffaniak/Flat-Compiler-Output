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
#include <nova/meta/nova_meta_Nova_GenericArgument.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_meta_Nova_Type_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_Type* nova_meta_Nova_Type_Nova_construct(nova_meta_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, nova_datastruct_list_Nova_ImmutableArray* genericArguments)
{
	CCLASS_NEW(nova_meta_Nova_Type, this,);
	this->vtable = &nova_meta_Type_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_Type_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_Type_Nova_this(this, exceptionData, value, genericArguments);
	}
	
	return this;
}

void nova_meta_Nova_Type_Nova_destroy(nova_meta_Nova_Type** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_meta_Nova_Type_Nova_value, exceptionData);
	nova_datastruct_list_Nova_ImmutableArray_Nova_destroy(&(*this)->nova_meta_Nova_Type_Nova_genericArguments, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_Type_Nova_this(nova_meta_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, nova_datastruct_list_Nova_ImmutableArray* genericArguments)
{
	this->nova_meta_Nova_Type_Nova_value = value;
	this->nova_meta_Nova_Type_Nova_genericArguments = genericArguments;
}

void nova_meta_Nova_Type_Nova_super(nova_meta_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_meta_Nova_Type_Nova_value = (nova_Nova_String*)nova_null;
	this->nova_meta_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
}

void nova_meta_Nova_TypeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_TypeFunctionMap* nova_meta_Nova_TypeFunctionMap_Nova_construct(nova_meta_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_TypeFunctionMap, this,);
	this->vtable = &nova_meta_Type_TypeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_meta_Nova_TypeFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_TypeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_TypeFunctionMap_Nova_destroy(nova_meta_Nova_TypeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_TypeFunctionMap_Nova_this(nova_meta_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_meta_Nova_Type* nova_meta_Nova_TypeFunctionMap_functionMapTypeFunctionMap_static_Nova_construct(nova_meta_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value, nova_datastruct_list_Nova_ImmutableArray* genericArguments)
{
	return nova_meta_Nova_Type_Nova_construct(0, exceptionData, value, genericArguments);
}

void nova_meta_Nova_TypeFunctionMap_Nova_super(nova_meta_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

