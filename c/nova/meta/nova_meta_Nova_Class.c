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
#include <nova/meta/nova_meta_Nova_Field.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* let Class<Object> other */ nova_meta_Nova_Class** nova_meta_Nova_Class_Nova_other;
} Context103;



char nova_meta_Nova_Class_Nova_isOfTypeClass(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* other);
char nova_meta_Nova_Class_Nova_isOfTypeInterface(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* other);
char nova_meta_Nova_Class_Nova_lambda104(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* i, Context103* context);


nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_Class_Nova_ALL;
void nova_meta_Nova_Class_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_Class* nova_meta_Nova_Class_Nova_construct(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface)
{
	CCLASS_NEW(nova_meta_Nova_Class, this,);
	this->vtable = &nova_meta_Class_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_Class_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_Class_Nova_this(this, exceptionData, location, isInterface);
	}
	
	return this;
}

void nova_meta_Nova_Class_Nova_destroy(nova_meta_Nova_Class** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_meta_Nova_Class_Nova_destroy(&(*this)->nova_meta_Nova_Class_Nova_extension, exceptionData);
	nova_datastruct_list_Nova_ImmutableArray_Nova_destroy(&(*this)->nova_meta_Nova_Class_Nova_interfaces, exceptionData);
	nova_datastruct_list_Nova_ImmutableArray_Nova_destroy(&(*this)->nova_meta_Nova_Class_Nova_fields, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_destroy(&(*this)->nova_meta_Nova_Class_Nova_functionMap, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_destroy(&(*this)->nova_meta_Nova_Class_Nova_propertyMap, exceptionData);
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_meta_Nova_Class_Nova_location, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_Class_Nova_this(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface)
{
	this->nova_meta_Nova_Class_Nova_location = location;
	this->nova_meta_Nova_Class_Nova_isInterface = isInterface;
}

char nova_meta_Nova_Class_Nova_isOfType(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* other)
{
	return (char)(other->nova_meta_Nova_Class_Nova_isInterface ? nova_meta_Nova_Class_Nova_isOfTypeInterface(this, exceptionData, other) : nova_meta_Nova_Class_Nova_isOfTypeClass(this, exceptionData, other));
}

char nova_meta_Nova_Class_Nova_isOfTypeClass(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* other)
{
	nova_meta_Nova_Class* l1_Nova_current = (nova_meta_Nova_Class*)nova_null;
	
	l1_Nova_current = this;
	while ((l1_Nova_current) != (nova_meta_Nova_Class*)nova_null)
	{
		if (l1_Nova_current == other)
		{
			return 1;
		}
		l1_Nova_current = l1_Nova_current->nova_meta_Nova_Class_Nova_extension;
	}
	return 0;
}

char nova_meta_Nova_Class_Nova_isOfTypeInterface(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* other)
{
	nova_meta_Nova_Class* l1_Nova_current = (nova_meta_Nova_Class*)nova_null;
	
	l1_Nova_current = this;
	while ((l1_Nova_current) != (nova_meta_Nova_Class*)nova_null)
	{
		Context103* contextArg104 = NOVA_MALLOC(sizeof(Context103));
		contextArg104->nova_meta_Nova_Class_Nova_other = &other;
		
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(l1_Nova_current->nova_meta_Nova_Class_Nova_interfaces), exceptionData, (nova_datastruct_list_Nova_List_closure296_Nova_anyFunc)&nova_meta_Nova_Class_Nova_lambda104, this, contextArg104))
		{
			return 1;
		}
		l1_Nova_current = l1_Nova_current->nova_meta_Nova_Class_Nova_extension;
	}
	return 0;
}

nova_Nova_String* nova_meta_Nova_Class_Nova_toString(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Class \"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->nova_meta_Nova_Class_Nova_location), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))));
}

char nova_meta_Nova_Class_Nova_lambda104(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* i, Context103* context)
{
	return (nova_Nova_Object*)i == (nova_Nova_Object*)(*context->nova_meta_Nova_Class_Nova_other) || nova_meta_Nova_Class_Nova_isOfTypeInterface(i, exceptionData, (*context->nova_meta_Nova_Class_Nova_other));
}

nova_Nova_String* nova_meta_Nova_Class_Accessor_Nova_package(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_meta_Nova_Class_Nova_location), exceptionData, 0, nova_Nova_String_1_Nova_lastIndexOf(this->nova_meta_Nova_Class_Nova_location, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, 0));
}


nova_Nova_String* nova_meta_Nova_Class_Accessor_Nova_name(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_meta_Nova_Class_Nova_location), exceptionData, nova_Nova_String_1_Nova_lastIndexOf(this->nova_meta_Nova_Class_Nova_location, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, (intptr_t)nova_null) + 1, (intptr_t)nova_null);
}


void nova_meta_Nova_Class_Nova_super(nova_meta_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
	this->nova_meta_Nova_Class_Nova_interfaces = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
	this->nova_meta_Nova_Class_Nova_fields = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
	this->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_null;
	this->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_null;
	this->nova_meta_Nova_Class_Nova_isInterface = 0;
	this->nova_meta_Nova_Class_Nova_location = (nova_Nova_String*)nova_null;
	this->nova_meta_Nova_Class_Nova_fields = nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null)), exceptionData);
}


char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfTypeClass(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other);
char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfTypeInterface(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other);
void nova_meta_Nova_ClassFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_ClassFunctionMap* nova_meta_Nova_ClassFunctionMap_Nova_construct(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_ClassFunctionMap, this,);
	this->vtable = &nova_meta_Class_ClassFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_meta_Nova_ClassFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_ClassFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_ClassFunctionMap_Nova_destroy(nova_meta_Nova_ClassFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_ClassFunctionMap_Nova_this(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_meta_Nova_Class* nova_meta_Nova_ClassFunctionMap_functionMapClassFunctionMap_Nova_construct(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface)
{
	return (nova_meta_Nova_Class*)nova_meta_Nova_Class_Nova_construct(0, exceptionData, location, isInterface);
}

char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfType(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other)
{
	return nova_meta_Nova_Class_Nova_isOfType(reference, exceptionData, other);
}

char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfTypeClass(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other)
{
	return nova_meta_Nova_Class_Nova_isOfTypeClass(reference, exceptionData, other);
}

char nova_meta_Nova_ClassFunctionMap_functionMap_Nova_isOfTypeInterface(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference, nova_meta_Nova_Class* other)
{
	return nova_meta_Nova_Class_Nova_isOfTypeInterface(reference, exceptionData, other);
}

nova_Nova_String* nova_meta_Nova_ClassFunctionMap_functionMap_Nova_toString(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return nova_meta_Nova_Class_Nova_toString(reference, exceptionData);
}

void nova_meta_Nova_ClassFunctionMap_Nova_super(nova_meta_Nova_ClassFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_meta_Nova_ClassPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_ClassPropertyMap* nova_meta_Nova_ClassPropertyMap_Nova_construct(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_ClassPropertyMap, this,);
	this->vtable = &nova_meta_Class_ClassPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_meta_Nova_ClassPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_ClassPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_ClassPropertyMap_Nova_destroy(nova_meta_Nova_ClassPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_ClassPropertyMap_Nova_this(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_meta_Nova_Class* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_extension(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_extension;
}

nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_interfaces(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_interfaces;
}

nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_fields(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_fields;
}

nova_meta_Nova_FunctionMap* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_functionMap(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_functionMap;
}

nova_meta_Nova_PropertyMap* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_propertyMap(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_propertyMap;
}

char nova_meta_Nova_ClassPropertyMap_functionMap_Nova_isInterface(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_isInterface;
}

nova_Nova_String* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_location(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return reference->nova_meta_Nova_Class_Nova_location;
}

nova_Nova_String* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_package(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return nova_meta_Nova_Class_Accessor_Nova_package(reference, exceptionData);
}

nova_Nova_String* nova_meta_Nova_ClassPropertyMap_functionMap_Nova_name(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* reference)
{
	return nova_meta_Nova_Class_Accessor_Nova_name(reference, exceptionData);
}

nova_datastruct_list_Nova_ImmutableArray* nova_meta_Nova_ClassPropertyMap_functionMap_static_Nova_ALL(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_meta_Nova_Class_Nova_ALL;
}

void nova_meta_Nova_ClassPropertyMap_Nova_super(nova_meta_Nova_ClassPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

