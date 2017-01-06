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
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




nova_Nova_String* spectra_tree_nodes_Nova_Literal_static_Nova_getLiteralType(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_Nova_Literal_Nova_formatValue(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Literal_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Literal* spectra_tree_nodes_Nova_Literal_Nova_construct(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Literal, this,);
	this->vtable = &spectra_tree_nodes_Literal_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Literal_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Literal_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Literal_Nova_destroy(spectra_tree_nodes_Nova_Literal** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Literal_Nova_value, exceptionData);
	
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Literal_Nova_this(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Value_Nova_this((spectra_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
}

spectra_tree_nodes_Nova_Literal* spectra_tree_nodes_Nova_Literal_static_Nova_parse(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_type = (nova_Nova_String*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_type = spectra_tree_nodes_Nova_Literal_static_Nova_getLiteralType(0, exceptionData, input);
	if ((l1_Nova_type) != (nova_Nova_String*)nova_null)
	{
		spectra_tree_nodes_Nova_Literal* l2_Nova_node = (spectra_tree_nodes_Nova_Literal*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_Nova_Literal_Nova_construct(0, exceptionData, parent, location);
		spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(l2_Nova_node), exceptionData, spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, l1_Nova_type, 0, 0, (intptr_t)nova_null));
		l2_Nova_node->spectra_tree_nodes_Nova_Literal_Nova_value = input;
		if (spectra_tree_nodes_Nova_Literal_Nova_formatValue(l2_Nova_node, exceptionData))
		{
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_Nova_Literal*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_Nova_Literal_static_Nova_getLiteralType(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	if (nova_Nova_String_Nova_equals(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("null"))))
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Object"));
	}
	else if (input->nova_Nova_String_Nova_count >= 2 && nova_Nova_String_Nova_get(input, exceptionData, 0) == '"' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(input->nova_Nova_String_Nova_chars), exceptionData) == '"')
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("String"));
	}
	else if ((input->nova_Nova_String_Nova_count == 3 || input->nova_Nova_String_Nova_count == 4 && nova_Nova_String_Nova_get(input, exceptionData, 1) == '\\') && nova_Nova_String_Nova_get(input, exceptionData, 0) == '\'' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(input->nova_Nova_String_Nova_chars), exceptionData) == '\'')
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Char"));
	}
	else if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isBool(input, exceptionData))
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Bool"));
	}
	else if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isNumber(input, exceptionData))
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Int"));
	}
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_Nova_Literal_Nova_formatValue(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("String"))))
	{
	}
	return 1;
}

nova_Nova_String* spectra_tree_nodes_Nova_Literal_Nova_writeNova(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(this->spectra_tree_nodes_Nova_Literal_Nova_value, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData, spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))));
}

char spectra_tree_nodes_Nova_Literal_Accessorfunc_Nova_safeNavigation(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_Literal_Nova_safeNavigation;
}

char spectra_tree_nodes_Nova_Literal_Mutatorfunc0_Nova_safeNavigation(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->spectra_tree_nodes_Nova_Literal_Nova_safeNavigation = value;
	return value;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Literal_Accessorfunc_Nova_accessedNode(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_Literal_Nova_accessedNode;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Literal_Mutatorfunc0_Nova_accessedNode(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value)
{
	this->spectra_tree_nodes_Nova_Literal_Nova_accessedNode = value;
	return value;
}

void spectra_tree_nodes_Nova_Literal_Nova_super(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Literal_Nova_value = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_Literal_Nova_safeNavigation = 0;
	this->spectra_tree_nodes_Nova_Literal_Nova_accessedNode = (spectra_tree_nodes_Nova_Accessible*)nova_null;
}

void spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_LiteralFunctionMap* spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_construct(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_LiteralFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Literal_LiteralFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_LiteralFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_this(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Literal* spectra_tree_nodes_Nova_LiteralFunctionMap_functionMapLiteralFunctionMap_static_Nova_construct(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_Nova_Literal_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_Nova_Literal* spectra_tree_nodes_Nova_LiteralFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_Literal_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_Nova_LiteralFunctionMap_functionMap_static_Nova_getLiteralType(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return spectra_tree_nodes_Nova_Literal_static_Nova_getLiteralType(0, exceptionData, input);
}

char spectra_tree_nodes_Nova_LiteralFunctionMap_functionMap_Nova_formatValue(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Literal* reference)
{
	return spectra_tree_nodes_Nova_Literal_Nova_formatValue(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_LiteralFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Literal* reference)
{
	return spectra_tree_nodes_Nova_Literal_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_super(spectra_tree_nodes_Nova_LiteralFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

