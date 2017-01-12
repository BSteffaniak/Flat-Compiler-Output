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



void spectra_tree_nodes_Nova_Abstractable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_String* spectra_tree_nodes_Nova_Abstractable_Nova_writeAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(spectra_tree_nodes_Nova_Abstractable_virtual_Accessor_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData) ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

spectra_tree_nodes_Nova_Abstractable* spectra_tree_nodes_Nova_Abstractable_0_Nova_cloneTo(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Abstractable* other)
{
	spectra_tree_nodes_Nova_Abstractable_virtual_Mutator_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(other), exceptionData, spectra_tree_nodes_Nova_Abstractable_virtual_Accessor_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData));
	return other;
}

char spectra_tree_nodes_Nova_Abstractable_Accessor_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}

char spectra_tree_nodes_Nova_Abstractable_Mutator_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return value;
}

char spectra_tree_nodes_Nova_Abstractable_virtual_Accessor_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Abstractable_virtual_Accessor_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Abstractable_virtual_Mutator_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Abstractable_virtual_Mutator_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData, value);
}

void spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_AbstractableFunctionMap* spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_construct(spectra_tree_nodes_Nova_AbstractableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_AbstractableFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Abstractable_AbstractableFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_AbstractableFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_this(spectra_tree_nodes_Nova_AbstractableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_Nova_AbstractableFunctionMap_functionMap_Nova_writeAbstract(spectra_tree_nodes_Nova_AbstractableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Abstractable* reference)
{
	return spectra_tree_nodes_Nova_Abstractable_Nova_writeAbstract(reference, exceptionData);
}

spectra_tree_nodes_Nova_Abstractable* spectra_tree_nodes_Nova_AbstractableFunctionMap_functionMap0_Nova_cloneTo(spectra_tree_nodes_Nova_AbstractableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Abstractable* reference, spectra_tree_nodes_Nova_Abstractable* other)
{
	return spectra_tree_nodes_Nova_Abstractable_0_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_Nova_AbstractableFunctionMap_Nova_super(spectra_tree_nodes_Nova_AbstractableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_AbstractablePropertyMap* spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_construct(spectra_tree_nodes_Nova_AbstractablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_AbstractablePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_Abstractable_AbstractablePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_AbstractablePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_this(spectra_tree_nodes_Nova_AbstractablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_Nova_AbstractablePropertyMap_functionMap0_Nova_isAbstract(spectra_tree_nodes_Nova_AbstractablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Abstractable* reference)
{
	return spectra_tree_nodes_Nova_Abstractable_Accessor_Nova_isAbstract(reference, exceptionData);
}

void spectra_tree_nodes_Nova_AbstractablePropertyMap_Nova_super(spectra_tree_nodes_Nova_AbstractablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_Nova_AbstractablePropertyMap_virtualfunctionMap0_Nova_isAbstract(spectra_tree_nodes_Nova_AbstractablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Abstractable* reference)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_AbstractablePropertyMap_virtualfunctionMap0_Nova_isAbstract(this, exceptionData, reference);
}

