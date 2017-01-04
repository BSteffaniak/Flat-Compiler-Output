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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignment.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operator.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_ImplicitDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
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
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




char spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_parseAssignedNode(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_parseAssignment(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
void spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_ObjectNotationProperty* spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_construct(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_ObjectNotationProperty, this,);
	this->vtable = &spectra_tree_nodes_functions_ObjectNotationProperty_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_Operation_Nova_super((spectra_tree_nodes_operations_Nova_Operation*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_Assignment_Nova_super((spectra_tree_nodes_operations_Nova_Assignment*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_destroy(spectra_tree_nodes_functions_Nova_ObjectNotationProperty** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_this(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_operations_Nova_Assignment_Nova_this((spectra_tree_nodes_operations_Nova_Assignment*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_functions_Nova_ObjectNotationProperty* spectra_tree_nodes_functions_Nova_ObjectNotationProperty_static_Nova_parse(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_assignmentIndex = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_assignmentIndex = spectra_util_Nova_CompilerStringFunctions_0_Nova_findOperatorOnTopLevel(input, exceptionData, ':', (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_assignmentIndex > 0)
	{
		spectra_tree_nodes_functions_Nova_ObjectNotationProperty* l2_Nova_node = (spectra_tree_nodes_functions_Nova_ObjectNotationProperty*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_construct(0, exceptionData, parent, location);
		if (spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_parseAssignedNode(l2_Nova_node, exceptionData, spectra_tree_nodes_operations_Nova_Assignment_static_Nova_findAssigned(0, exceptionData, input, l1_Nova_assignmentIndex)) && spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_parseAssignment(l2_Nova_node, exceptionData, spectra_tree_nodes_operations_Nova_Assignment_static_Nova_findAssignment(0, exceptionData, input, l1_Nova_assignmentIndex)))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_node->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, (nova_Nova_Object*)(spectra_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(l2_Nova_node), location, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(":")))));
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_functions_Nova_ObjectNotationProperty*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_parseAssignedNode(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	spectra_tree_nodes_variables_Nova_Variable* l1_Nova_variable = (spectra_tree_nodes_variables_Nova_Variable*)nova_null;
	
	l1_Nova_variable = spectra_tree_nodes_variables_Nova_Variable_static_Nova_findVariable(0, exceptionData, input, this->spectra_tree_nodes_Nova_Node_Nova_parent, 0);
	if ((l1_Nova_variable) != (spectra_tree_nodes_variables_Nova_Variable*)nova_null)
	{
		spectra_tree_nodes_operations_Nova_Assignment_Mutator_Nova_assigned((spectra_tree_nodes_operations_Nova_Assignment*)(this), exceptionData, (spectra_tree_nodes_Nova_Value*)(l1_Nova_variable));
		return 1;
	}
	return 0;
}

char spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_parseAssignment(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	spectra_tree_nodes_Nova_Value* l1_Nova_value = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	l1_Nova_value = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null));
	if ((l1_Nova_value) != (spectra_tree_nodes_Nova_Value*)nova_null)
	{
		spectra_tree_nodes_operations_Nova_Assignment_Mutator_Nova_assignment((spectra_tree_nodes_operations_Nova_Assignment*)(this), exceptionData, l1_Nova_value);
		return 1;
	}
	return 0;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_writeNova(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_operations_Nova_Assignment_Accessor_Nova_assigned((spectra_tree_nodes_operations_Nova_Assignment*)(this), exceptionData)), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_operations_Nova_Assignment_Accessor_Nova_assignment((spectra_tree_nodes_operations_Nova_Assignment*)(this), exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_super(spectra_tree_nodes_functions_Nova_ObjectNotationProperty* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap* spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_functions_ObjectNotationProperty_ObjectNotationPropertyFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_destroy(spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_this(spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_super(spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

