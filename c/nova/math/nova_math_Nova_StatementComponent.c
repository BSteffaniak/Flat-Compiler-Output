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
#include <nova/NativeObject.h>



void nova_math_Nova_StatementComponent_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_StatementComponent* nova_math_Nova_StatementComponent_Nova_construct(nova_math_Nova_StatementComponent* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, nova_math_Nova_StatementComponent* next)
{
	CCLASS_NEW(nova_math_Nova_StatementComponent, this,);
	this->vtable = &nova_math_StatementComponent_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_StatementComponent_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_StatementComponent_Nova_this(this, exceptionData, data, next);
	}
	
	return this;
}

void nova_math_Nova_StatementComponent_Nova_destroy(nova_math_Nova_StatementComponent** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_math_Nova_StatementComponent_Nova_destroy(&(*this)->nova_math_Nova_StatementComponent_Nova_next, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_StatementComponent_Nova_this(nova_math_Nova_StatementComponent* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, nova_math_Nova_StatementComponent* next)
{
	next = (nova_math_Nova_StatementComponent*)(next == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)next);
	this->nova_math_Nova_StatementComponent_Nova_data = data;
	this->nova_math_Nova_StatementComponent_Nova_next = next;
}

nova_Nova_String* nova_math_Nova_StatementComponent_Nova_toString(nova_math_Nova_StatementComponent* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->nova_math_Nova_StatementComponent_Nova_data)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

void nova_math_Nova_StatementComponent_Nova_super(nova_math_Nova_StatementComponent* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_StatementComponent_Nova_data = (nova_Nova_Object*)nova_null;
	this->nova_math_Nova_StatementComponent_Nova_next = (nova_math_Nova_StatementComponent*)nova_null;
}

void nova_math_Nova_StatementComponentFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_StatementComponentFunctionMap* nova_math_Nova_StatementComponentFunctionMap_Nova_construct(nova_math_Nova_StatementComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_StatementComponentFunctionMap, this,);
	this->vtable = &nova_math_StatementComponent_StatementComponentFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_StatementComponentFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_StatementComponentFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_StatementComponentFunctionMap_Nova_destroy(nova_math_Nova_StatementComponentFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_StatementComponentFunctionMap_Nova_this(nova_math_Nova_StatementComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_Nova_StatementComponent* nova_math_Nova_StatementComponentFunctionMap_functionMapStatementComponentFunctionMap_Nova_construct(nova_math_Nova_StatementComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, nova_math_Nova_StatementComponent* next)
{
	return nova_math_Nova_StatementComponent_Nova_construct(0, exceptionData, data, next);
}

nova_Nova_String* nova_math_Nova_StatementComponentFunctionMap_functionMap_Nova_toString(nova_math_Nova_StatementComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_StatementComponent* reference)
{
	return nova_math_Nova_StatementComponent_Nova_toString(reference, exceptionData);
}

void nova_math_Nova_StatementComponentFunctionMap_Nova_super(nova_math_Nova_StatementComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_StatementComponentPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_StatementComponentPropertyMap* nova_math_Nova_StatementComponentPropertyMap_Nova_construct(nova_math_Nova_StatementComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_StatementComponentPropertyMap, this,);
	this->vtable = &nova_math_StatementComponent_StatementComponentPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_Nova_StatementComponentPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_StatementComponentPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_StatementComponentPropertyMap_Nova_destroy(nova_math_Nova_StatementComponentPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_StatementComponentPropertyMap_Nova_this(nova_math_Nova_StatementComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_Object* nova_math_Nova_StatementComponentPropertyMap_functionMap_Nova_data(nova_math_Nova_StatementComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_StatementComponent* reference)
{
	return (nova_Nova_Object*)reference->nova_math_Nova_StatementComponent_Nova_data;
}

nova_math_Nova_StatementComponent* nova_math_Nova_StatementComponentPropertyMap_functionMap_Nova_next(nova_math_Nova_StatementComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_StatementComponent* reference)
{
	return reference->nova_math_Nova_StatementComponent_Nova_next;
}

void nova_math_Nova_StatementComponentPropertyMap_Nova_super(nova_math_Nova_StatementComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

