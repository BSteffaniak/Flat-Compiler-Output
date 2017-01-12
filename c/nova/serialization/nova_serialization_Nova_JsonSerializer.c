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



CCLASS_PRIVATE
(
	nova_serialization_Nova_JsonSerializer,
	int nova_serialization_Nova_JsonSerializer_Nova_BUILDER_CAPACITY;
	
)
void nova_serialization_Nova_JsonSerializer_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_serialization_Nova_JsonSerializer* nova_serialization_Nova_JsonSerializer_Nova_construct(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_serialization_Nova_JsonSerializer, this);
	this->vtable = &nova_serialization_JsonSerializer_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_serialization_Nova_JsonSerializer_Nova_super(this, exceptionData);
	
	{
		nova_serialization_Nova_JsonSerializer_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_serialization_Nova_JsonSerializer_Nova_destroy(nova_serialization_Nova_JsonSerializer** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	
	
	
	
	
	
	
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_serialization_Nova_JsonSerializer_Nova_serialize(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* object)
{
}

void nova_serialization_Nova_JsonSerializer_Nova_parse(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* json)
{
}

void nova_serialization_Nova_JsonSerializer_Nova_this(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_serialization_Nova_JsonSerializer_Nova_super(nova_serialization_Nova_JsonSerializer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NONE = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_OPEN = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_CLOSE = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_OPEN = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_CLOSE = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COLON = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COMMA = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_STRING = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NUMBER = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_TRUE = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_FALSE = 0;
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NULL = 0;
	this->prv->nova_serialization_Nova_JsonSerializer_Nova_BUILDER_CAPACITY = 0;
	this->prv->nova_serialization_Nova_JsonSerializer_Nova_BUILDER_CAPACITY = (int)(2000);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NONE = (int)(0);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_OPEN = (int)(1);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_CLOSE = (int)(2);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_OPEN = (int)(3);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_CLOSE = (int)(4);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COLON = (int)(5);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COMMA = (int)(6);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_STRING = (int)(7);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NUMBER = (int)(8);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_TRUE = (int)(9);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_FALSE = (int)(10);
	this->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NULL = (int)(11);
}

void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_serialization_Nova_JsonSerializerFunctionMap* nova_serialization_Nova_JsonSerializerFunctionMap_Nova_construct(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_serialization_Nova_JsonSerializerFunctionMap, this,);
	this->vtable = &nova_serialization_JsonSerializer_JsonSerializerFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_serialization_Nova_JsonSerializerFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_serialization_Nova_JsonSerializerFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_destroy(nova_serialization_Nova_JsonSerializerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_this(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_serialization_Nova_JsonSerializer* nova_serialization_Nova_JsonSerializerFunctionMap_functionMapJsonSerializerFunctionMap_Nova_construct(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_serialization_Nova_JsonSerializer_Nova_construct(0, exceptionData);
}

void nova_serialization_Nova_JsonSerializerFunctionMap_functionMap_Nova_serialize(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference, nova_Nova_Object* object)
{
	nova_serialization_Nova_JsonSerializer_Nova_serialize(reference, exceptionData, object);
}

void nova_serialization_Nova_JsonSerializerFunctionMap_functionMap_Nova_parse(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference, nova_Nova_String* json)
{
	nova_serialization_Nova_JsonSerializer_Nova_parse(reference, exceptionData, json);
}

void nova_serialization_Nova_JsonSerializerFunctionMap_Nova_super(nova_serialization_Nova_JsonSerializerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_serialization_Nova_JsonSerializerPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_serialization_Nova_JsonSerializerPropertyMap* nova_serialization_Nova_JsonSerializerPropertyMap_Nova_construct(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_serialization_Nova_JsonSerializerPropertyMap, this,);
	this->vtable = &nova_serialization_JsonSerializer_JsonSerializerPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_serialization_Nova_JsonSerializerPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_serialization_Nova_JsonSerializerPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_serialization_Nova_JsonSerializerPropertyMap_Nova_destroy(nova_serialization_Nova_JsonSerializerPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_serialization_Nova_JsonSerializerPropertyMap_Nova_this(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_NONE(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NONE;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_CURLY_OPEN(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_OPEN;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_CURLY_CLOSE(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_CURLY_CLOSE;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_SQUARED_OPEN(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_OPEN;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_SQUARED_CLOSE(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_SQUARED_CLOSE;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_COLON(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COLON;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_COMMA(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_COMMA;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_STRING(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_STRING;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_NUMBER(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NUMBER;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_TRUE(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_TRUE;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_FALSE(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_FALSE;
}

int nova_serialization_Nova_JsonSerializerPropertyMap_functionMap_Nova_TOKEN_NULL(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_serialization_Nova_JsonSerializer* reference)
{
	return reference->nova_serialization_Nova_JsonSerializer_Nova_TOKEN_NULL;
}

void nova_serialization_Nova_JsonSerializerPropertyMap_Nova_super(nova_serialization_Nova_JsonSerializerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

