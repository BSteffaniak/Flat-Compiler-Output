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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ArrayType.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>






void spectra_tree_nodes_generics_Nova_GenericType_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_generics_Nova_GenericType* spectra_tree_nodes_generics_Nova_GenericType_0_Nova_construct(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	CCLASS_NEW(spectra_tree_nodes_generics_Nova_GenericType, this,);
	this->vtable = &spectra_tree_nodes_generics_GenericType_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Type_Nova_super((spectra_tree_nodes_Nova_Type*)this, exceptionData);
	spectra_tree_nodes_generics_Nova_GenericType_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_generics_Nova_GenericType_Nova_this(this, exceptionData, name);
	}
	
	return this;
}

spectra_tree_nodes_generics_Nova_GenericType* spectra_tree_nodes_generics_Nova_GenericType_1_Nova_construct(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type, spectra_tree_nodes_generics_Nova_GenericParameter* parameter)
{
	CCLASS_NEW(spectra_tree_nodes_generics_Nova_GenericType, this,);
	this->vtable = &spectra_tree_nodes_generics_GenericType_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Type_Nova_super((spectra_tree_nodes_Nova_Type*)this, exceptionData);
	spectra_tree_nodes_generics_Nova_GenericType_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_generics_Nova_GenericType_0_Nova_this(this, exceptionData, type, parameter);
	}
	
	return this;
}

void spectra_tree_nodes_generics_Nova_GenericType_Nova_destroy(spectra_tree_nodes_generics_Nova_GenericType** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_generics_Nova_GenericParameter_Nova_destroy(&(*this)->spectra_tree_nodes_generics_Nova_GenericType_Nova_parameter, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_generics_Nova_GenericType_Nova_this(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	spectra_tree_nodes_Nova_Type_Nova_this((spectra_tree_nodes_Nova_Type*)(this), exceptionData, name);
}

void spectra_tree_nodes_generics_Nova_GenericType_0_Nova_this(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type, spectra_tree_nodes_generics_Nova_GenericParameter* parameter)
{
	spectra_tree_nodes_Nova_Type_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Type*)(type), exceptionData, (spectra_tree_nodes_Nova_Type*)(this));
	this->spectra_tree_nodes_generics_Nova_GenericType_Nova_parameter = parameter;
}

char spectra_tree_nodes_generics_Nova_GenericType_Nova_isValid(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	return 1;
}

spectra_tree_nodes_generics_Nova_GenericType* spectra_tree_nodes_generics_Nova_GenericType_Nova_cloneTo(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericType* other)
{
	spectra_tree_nodes_Nova_Type_Nova_cloneTo(((spectra_tree_nodes_Nova_Type*)this), exceptionData, (spectra_tree_nodes_Nova_Type*)(other));
	other->spectra_tree_nodes_generics_Nova_GenericType_Nova_parameter = this->spectra_tree_nodes_generics_Nova_GenericType_Nova_parameter;
	return other;
}

char spectra_tree_nodes_generics_Nova_GenericType_Accessor_Nova_isGeneric(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}


char spectra_tree_nodes_generics_Nova_GenericType_Accessor_Nova_isPrimitiveType(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


void spectra_tree_nodes_generics_Nova_GenericType_Nova_super(spectra_tree_nodes_generics_Nova_GenericType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_generics_Nova_GenericType_Nova_parameter = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
}

void spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_construct(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_generics_GenericType_GenericTypeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_TypeFunctionMap_Nova_super((spectra_tree_nodes_Nova_TypeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_destroy(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_this(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_generics_Nova_GenericType* spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_functionMapGenericTypeFunctionMap_static_Nova_construct(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	return spectra_tree_nodes_generics_Nova_GenericType_0_Nova_construct(0, exceptionData, name);
}

spectra_tree_nodes_generics_Nova_GenericType* spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_functionMapGenericTypeFunctionMap0_static_Nova_construct(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type, spectra_tree_nodes_generics_Nova_GenericParameter* parameter)
{
	return spectra_tree_nodes_generics_Nova_GenericType_1_Nova_construct(0, exceptionData, type, parameter);
}

char spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_functionMap_Nova_isValid(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericType* reference, spectra_tree_nodes_Nova_Node* parent)
{
	return spectra_tree_nodes_generics_Nova_GenericType_Nova_isValid(reference, exceptionData, parent);
}

spectra_tree_nodes_generics_Nova_GenericType* spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericType* reference, spectra_tree_nodes_generics_Nova_GenericType* other)
{
	return spectra_tree_nodes_generics_Nova_GenericType_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_super(spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

