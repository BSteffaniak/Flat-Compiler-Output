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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/NativeObject.h>



void spectra_Nova_InvalidParseException_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_InvalidParseException* spectra_Nova_InvalidParseException_Nova_construct(spectra_Nova_InvalidParseException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node)
{
	CCLASS_NEW(spectra_Nova_InvalidParseException, this,);
	this->vtable = &spectra_InvalidParseException_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this, exceptionData);
	spectra_Nova_InvalidParseException_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_InvalidParseException_Nova_this(this, exceptionData, message, node);
	}
	
	return this;
}

void spectra_Nova_InvalidParseException_Nova_destroy(spectra_Nova_InvalidParseException** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Node_Nova_destroy(&(*this)->spectra_Nova_InvalidParseException_Nova_node, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_Nova_InvalidParseException_Nova_this(spectra_Nova_InvalidParseException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node)
{
	node = (spectra_tree_nodes_Nova_Node*)(node == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)node);
	nova_exception_Nova_Exception_Nova_this((nova_exception_Nova_Exception*)(this), exceptionData, message);
	this->spectra_Nova_InvalidParseException_Nova_node = node;
}

void spectra_Nova_InvalidParseException_Nova_super(spectra_Nova_InvalidParseException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_Nova_InvalidParseException_Nova_node = (spectra_tree_nodes_Nova_Node*)nova_null;
}

void spectra_Nova_InvalidParseExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_InvalidParseExceptionFunctionMap* spectra_Nova_InvalidParseExceptionFunctionMap_Nova_construct(spectra_Nova_InvalidParseExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_InvalidParseExceptionFunctionMap, this,);
	this->vtable = &spectra_InvalidParseException_InvalidParseExceptionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_ExceptionFunctionMap_Nova_super((nova_exception_Nova_ExceptionFunctionMap*)this, exceptionData);
	spectra_Nova_InvalidParseExceptionFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_InvalidParseExceptionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_InvalidParseExceptionFunctionMap_Nova_destroy(spectra_Nova_InvalidParseExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_InvalidParseExceptionFunctionMap_Nova_this(spectra_Nova_InvalidParseExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_Nova_InvalidParseException* spectra_Nova_InvalidParseExceptionFunctionMap_functionMapInvalidParseExceptionFunctionMap_Nova_construct(spectra_Nova_InvalidParseExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node)
{
	return spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, message, node);
}

void spectra_Nova_InvalidParseExceptionFunctionMap_Nova_super(spectra_Nova_InvalidParseExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_InvalidParseExceptionPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_InvalidParseExceptionPropertyMap* spectra_Nova_InvalidParseExceptionPropertyMap_Nova_construct(spectra_Nova_InvalidParseExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_InvalidParseExceptionPropertyMap, this,);
	this->vtable = &spectra_InvalidParseException_InvalidParseExceptionPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_exception_Nova_ExceptionPropertyMap_Nova_super((nova_exception_Nova_ExceptionPropertyMap*)this, exceptionData);
	spectra_Nova_InvalidParseExceptionPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_InvalidParseExceptionPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_InvalidParseExceptionPropertyMap_Nova_destroy(spectra_Nova_InvalidParseExceptionPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_InvalidParseExceptionPropertyMap_Nova_this(spectra_Nova_InvalidParseExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Node* spectra_Nova_InvalidParseExceptionPropertyMap_functionMap_Nova_node(spectra_Nova_InvalidParseExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_InvalidParseException* reference)
{
	return reference->spectra_Nova_InvalidParseException_Nova_node;
}

void spectra_Nova_InvalidParseExceptionPropertyMap_Nova_super(spectra_Nova_InvalidParseExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

