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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ArrayType.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




char spectra_tree_nodes_Nova_ArrayType_Nova_parseDimensions(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimensions, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent);


void spectra_tree_nodes_Nova_ArrayType_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ArrayType* spectra_tree_nodes_Nova_ArrayType_Nova_construct(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ArrayType, this,);
	this->vtable = &spectra_tree_nodes_ArrayType_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Type_Nova_super((spectra_tree_nodes_Nova_Type*)this, exceptionData);
	spectra_tree_nodes_Nova_ArrayType_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ArrayType_Nova_this(this, exceptionData, type);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ArrayType_Nova_destroy(spectra_tree_nodes_Nova_ArrayType** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Type_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ArrayType_Nova_type, exceptionData);
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ArrayType_Nova_this(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type)
{
	spectra_tree_nodes_Nova_Type_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Type*)(type), exceptionData, (spectra_tree_nodes_Nova_Type*)(this));
	this->spectra_tree_nodes_Nova_ArrayType_Nova_type = type;
	this->spectra_tree_nodes_Nova_Type_Nova_name = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Array"));
}

spectra_tree_nodes_Nova_ArrayType* spectra_tree_nodes_Nova_ArrayType_static_Nova_parse(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_start = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(input, exceptionData, '[', (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start > 0)
	{
		spectra_tree_nodes_Nova_Type* l2_Nova_type = (spectra_tree_nodes_Nova_Type*)nova_null;
		
		l2_Nova_type = (spectra_tree_nodes_Nova_Type*)(spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), parent, location, require));
		if ((l2_Nova_type) != (spectra_tree_nodes_Nova_Type*)nova_null)
		{
			spectra_tree_nodes_Nova_ArrayType* l3_Nova_node = (spectra_tree_nodes_Nova_ArrayType*)nova_null;
			nova_Nova_String* l3_Nova_dimensions = (nova_Nova_String*)nova_null;
			
			l3_Nova_node = spectra_tree_nodes_Nova_ArrayType_Nova_construct(0, exceptionData, l2_Nova_type);
			l3_Nova_dimensions = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_start, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			if (!spectra_tree_nodes_Nova_ArrayType_Nova_parseDimensions(l3_Nova_node, exceptionData, l3_Nova_dimensions, input, parent))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse array dimensions '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l3_Nova_dimensions), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), parent), 1);
			}
			else
			{
				return l3_Nova_node;
			}
		}
	}
	return (spectra_tree_nodes_Nova_ArrayType*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_Nova_ArrayType_Nova_parseDimensions(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimensions, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent)
{
	char l1_Nova_start = 0;
	int l1_Nova_end = 0;
	int l1_Nova_last = 0;
	
	l1_Nova_start = 0;
	l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(dimensions, exceptionData, l1_Nova_start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_last = l1_Nova_end;
	while (l1_Nova_end > l1_Nova_start)
	{
		l1_Nova_last = l1_Nova_end;
		this->spectra_tree_nodes_Nova_ArrayType_Nova_arrayDimensions++;
		if (nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(dimensions), exceptionData, l1_Nova_start + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)->nova_Nova_String_Nova_count > 0)
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Type declaration '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' cannot have contents within the array brackets")))))), parent), 1);
			return 0;
		}
		l1_Nova_start = (char)(nova_Nova_String_1_Nova_indexOf(dimensions, exceptionData, '[', l1_Nova_end + 1, (intptr_t)nova_null, (intptr_t)nova_null));
		if (l1_Nova_start < 0)
		{
			break;
		}
		l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(dimensions, exceptionData, l1_Nova_start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null);
	}
	return dimensions->nova_Nova_String_Nova_count == l1_Nova_last + 1;
}

char spectra_tree_nodes_Nova_ArrayType_Nova_isValid(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	return spectra_tree_nodes_Nova_Type_virtual_Nova_isValid((spectra_tree_nodes_Nova_Type*)(this->spectra_tree_nodes_Nova_ArrayType_Nova_type), exceptionData, parent);
}

nova_Nova_String* spectra_tree_nodes_Nova_ArrayType_Nova_writeArray(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_repeat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[]")), exceptionData, this->spectra_tree_nodes_Nova_ArrayType_Nova_arrayDimensions);
}

nova_Nova_String* spectra_tree_nodes_Nova_ArrayType_Nova_writeNova(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_ArrayType_Nova_type->spectra_tree_nodes_Nova_Type_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_ArrayType_Nova_writeArray(this, exceptionData), exceptionData, spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters((spectra_tree_nodes_Nova_Type*)(this), exceptionData))));
}

spectra_tree_nodes_Nova_ArrayType* spectra_tree_nodes_Nova_ArrayType_Nova_cloneTo(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* other)
{
	spectra_tree_nodes_Nova_Type_Nova_cloneTo(((spectra_tree_nodes_Nova_Type*)this), exceptionData, (spectra_tree_nodes_Nova_Type*)(other));
	other->spectra_tree_nodes_Nova_ArrayType_Nova_arrayDimensions = this->spectra_tree_nodes_Nova_ArrayType_Nova_arrayDimensions;
	return other;
}

char spectra_tree_nodes_Nova_ArrayType_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric((spectra_tree_nodes_Nova_Type*)(this->spectra_tree_nodes_Nova_ArrayType_Nova_type), exceptionData);
}


char spectra_tree_nodes_Nova_ArrayType_Accessor_Nova_isPrimitiveType(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isPrimitiveType((spectra_tree_nodes_Nova_Type*)(this->spectra_tree_nodes_Nova_ArrayType_Nova_type), exceptionData);
}


void spectra_tree_nodes_Nova_ArrayType_Nova_super(spectra_tree_nodes_Nova_ArrayType* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_ArrayType_Nova_type = (spectra_tree_nodes_Nova_Type*)nova_null;
	this->spectra_tree_nodes_Nova_ArrayType_Nova_arrayDimensions = 0;
	this->spectra_tree_nodes_Nova_ArrayType_Nova_arrayDimensions = (int)(0);
}


char spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_Nova_parseDimensions(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* reference, nova_Nova_String* dimensions, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent);
void spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ArrayTypeFunctionMap* spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ArrayTypeFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_ArrayType_ArrayTypeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_TypeFunctionMap_Nova_super((spectra_tree_nodes_Nova_TypeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ArrayTypeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_this(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_ArrayType* spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMapArrayTypeFunctionMap_static_Nova_construct(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type)
{
	return spectra_tree_nodes_Nova_ArrayType_Nova_construct(0, exceptionData, type);
}

spectra_tree_nodes_Nova_ArrayType* spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_ArrayType_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_Nova_parseDimensions(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* reference, nova_Nova_String* dimensions, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent)
{
	return spectra_tree_nodes_Nova_ArrayType_Nova_parseDimensions(reference, exceptionData, dimensions, input, parent);
}

char spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_Nova_isValid(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* reference, spectra_tree_nodes_Nova_Node* parent)
{
	return spectra_tree_nodes_Nova_ArrayType_Nova_isValid(reference, exceptionData, parent);
}

nova_Nova_String* spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_Nova_writeArray(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* reference)
{
	return spectra_tree_nodes_Nova_ArrayType_Nova_writeArray(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* reference)
{
	return spectra_tree_nodes_Nova_ArrayType_Nova_writeNova(reference, exceptionData);
}

spectra_tree_nodes_Nova_ArrayType* spectra_tree_nodes_Nova_ArrayTypeFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArrayType* reference, spectra_tree_nodes_Nova_ArrayType* other)
{
	return spectra_tree_nodes_Nova_ArrayType_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_Nova_ArrayTypeFunctionMap_Nova_super(spectra_tree_nodes_Nova_ArrayTypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

