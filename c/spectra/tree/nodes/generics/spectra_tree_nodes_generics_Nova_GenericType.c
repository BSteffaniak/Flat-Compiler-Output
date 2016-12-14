#include <precompiled.h>
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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



spectra_tree_nodes_generics_GenericType_Extension_VTable spectra_tree_nodes_generics_GenericType_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_EqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	spectra_tree_nodes_Nova_Type_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_generics_Nova_GenericType_Nova_isValid,
	spectra_tree_nodes_generics_Nova_GenericType_Nova_cloneTo,
	spectra_tree_nodes_generics_Nova_GenericType_Accessor_Nova_isGeneric,
	spectra_tree_nodes_generics_Nova_GenericType_Accessor_Nova_isPrimitiveType,
};





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

