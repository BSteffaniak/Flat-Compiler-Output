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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;



nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* argument);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_validateDeclarationCompatible(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchClosureDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchThisDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchFunctionDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_lambda129(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Constructor* _1, Context1* context);




void spectra_tree_nodes_functions_Nova_FunctionCall_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCall_Nova_construct(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_FunctionCall, this,);
	this->vtable = &spectra_tree_nodes_functions_FunctionCall_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_Variable_Nova_super((spectra_tree_nodes_variables_Nova_Variable*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_FunctionCall_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_FunctionCall_Nova_destroy(spectra_tree_nodes_functions_Nova_FunctionCall** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_functions_Nova_FunctionArgumentList_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_FunctionCall_Nova_this(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_Variable_Nova_this((spectra_tree_nodes_variables_Nova_Variable*)(this), exceptionData, parent, location, 0);
	this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList = spectra_tree_nodes_functions_Nova_FunctionArgumentList_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), location);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_Nova_FunctionCall_0_static_Nova_parse(0, exceptionData, input, parent, location, require, (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)((nova_Nova_Object*)nova_null));
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCall_0_static_Nova_parse(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require, spectra_tree_nodes_functions_Nova_FunctionDeclaration* declaration)
{
	nova_Nova_String* l1_Nova_name = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_arguments = (nova_datastruct_list_Nova_Array*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	declaration = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(declaration == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)declaration);
	l1_Nova_name = spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(0, exceptionData, input);
	l1_Nova_arguments = spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(0, exceptionData, input);
	if ((l1_Nova_name) != (nova_Nova_String*)nova_null && (l1_Nova_arguments) != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		spectra_tree_nodes_functions_Nova_FunctionCall* l2_Nova_node = (spectra_tree_nodes_functions_Nova_FunctionCall*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_functions_Nova_FunctionCall_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name = l1_Nova_name;
		l2_Nova_node->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(declaration);
		if (!spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(l2_Nova_node, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_arguments)))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse arguments '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_arguments)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else if ((declaration) == (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null && !spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(l2_Nova_node, exceptionData))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find declaration for function '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_node)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else if ((declaration) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null && !spectra_tree_nodes_functions_Nova_FunctionCall_Nova_validateDeclarationCompatible(l2_Nova_node, exceptionData))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Given declaration '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((declaration)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' is not compatible with function call '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_node)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else
		{
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_functions_Nova_FunctionCall*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index > 0)
	{
		nova_Nova_String* l2_Nova_name = (nova_Nova_String*)nova_null;
		
		l2_Nova_name = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l2_Nova_name, exceptionData))
		{
			return l2_Nova_name;
		}
	}
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start > 0)
	{
		int l2_Nova_end = 0;
		
		l2_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
	if (l2_Nova_end > l1_Nova_start && nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_end + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)->nova_Nova_String_Nova_count == 0)
	{
		return spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_start + 1, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	}
}
return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* argument)
{
	nova_Nova_Object* l1_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_value = (nova_Nova_Object*)nova_null;
	if (((l1_Nova_value)) == (nova_Nova_Object*)nova_null)
	{
		l1_Nova_value = (nova_Nova_Object*)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_static_Nova_parse(0, exceptionData, argument, (spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList), 0, (intptr_t)nova_null));
		if (((l1_Nova_value)) == (nova_Nova_Object*)nova_null)
		{
			l1_Nova_value = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, argument, (spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList), 0, (intptr_t)nova_null));
			if (((l1_Nova_value)) == (nova_Nova_Object*)nova_null)
			{
				return 0;
			}
		}
	}
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_value));
	return 1;
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(arguments), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument, this, nova_null, 0);
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_validateDeclarationCompatible(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration != (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchClosureDeclaration(this, exceptionData) || spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchThisDeclaration(this, exceptionData) || spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchFunctionDeclaration(this, exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchClosureDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_variables_Nova_VariableDeclaration* l1_Nova_variable = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
	
	l1_Nova_variable = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_Node_Nova_parent), exceptionData, this->spectra_tree_nodes_Nova_Identifier_Nova_name, (intptr_t)nova_null));
	if (nova_meta_Nova_Class_Nova_isOfType(l1_Nova_variable->vtable->classInstance, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val.classInstance)))
	{
		this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_variable;
		return 1;
	}
	return 0;
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchThisDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_Nova_String_Nova_equals(this->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this"))) && !spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))
	{
		spectra_tree_nodes_Nova_ClassDeclaration* l2_Nova_constructor = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
		Context1* contextArg129 = NOVA_MALLOC(sizeof(Context1));
		
		l2_Nova_constructor = (spectra_tree_nodes_Nova_ClassDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_constructors(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_functions_Nova_FunctionCall_Nova_lambda129, this, contextArg129));
		if ((l2_Nova_constructor) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null)
		{
			this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(l2_Nova_constructor);
			return 1;
		}
	}
	return 0;
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchFunctionDeclaration(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_ClassDeclaration* l2_Nova_ref = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
	
	if ((l2_Nova_ref = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData)) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null)
	{
		spectra_tree_nodes_functions_Nova_FunctionDeclaration* l3_Nova_func = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
		
		if ((l3_Nova_func = spectra_tree_nodes_Nova_ClassDeclaration_Nova_findFunction(l2_Nova_ref, exceptionData, this->spectra_tree_nodes_Nova_Identifier_Nova_name, (intptr_t)nova_null)) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
		{
			this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(l3_Nova_func);
			return 1;
		}
		else
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find declaration for function call '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' in class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_ref)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(this)), 1);
		}
	}
	else
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not get reference class for function call '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this)), 1);
	}
	return 0;
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCall_Nova_cloneTo(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* other)
{
	spectra_tree_nodes_variables_Nova_Variable_Nova_cloneTo(((spectra_tree_nodes_variables_Nova_Variable*)this), exceptionData, (spectra_tree_nodes_variables_Nova_Variable*)(other));
	other->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList = this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList;
	return other;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCall_Nova_writeName(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_Identifier_Nova_name;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCall_Nova_writeNova(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_functions_Nova_FunctionCall_virtual_Nova_writeName((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData, spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))))));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCall_Nova_toString(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionCall_Nova_lambda129(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Constructor* _1, Context1* context)
{
	return 1;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_ArgumentList_Accessor_Nova_arguments((spectra_tree_nodes_Nova_ArgumentList*)(this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList), exceptionData);
}


char spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_isAssignable(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_function(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration;
}


spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_parentFunctionCall(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


void spectra_tree_nodes_functions_Nova_FunctionCall_Nova_super(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList = (spectra_tree_nodes_functions_Nova_FunctionArgumentList*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCall_virtual_Nova_writeName(spectra_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_functions_Nova_FunctionCall_virtual_Nova_writeName((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData);
}


nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_static_Nova_findName(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_static_Nova_findArguments(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_parseArgument(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference, nova_Nova_String* argument);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_parseArguments(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference, nova_datastruct_list_Nova_Array* arguments);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_validateDeclarationCompatible(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchClosureDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchThisDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference);
char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchFunctionDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference);
void spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_functions_FunctionCall_FunctionCallFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_destroy(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_this(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMapFunctionCallFunctionMap_static_Nova_construct(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap0_static_Nova_parse(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require, spectra_tree_nodes_functions_Nova_FunctionDeclaration* declaration)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	declaration = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(declaration == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)declaration);
	return spectra_tree_nodes_functions_Nova_FunctionCall_0_static_Nova_parse(0, exceptionData, input, parent, location, require, declaration);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_static_Nova_findName(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(0, exceptionData, input);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_static_Nova_findArguments(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(0, exceptionData, input);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_parseArgument(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference, nova_Nova_String* argument)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument(reference, exceptionData, argument);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_parseArguments(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference, nova_datastruct_list_Nova_Array* arguments)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(reference, exceptionData, arguments);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_validateDeclarationCompatible(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_validateDeclarationCompatible(reference, exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(reference, exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchClosureDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchClosureDeclaration(reference, exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchThisDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchThisDeclaration(reference, exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_searchFunctionDeclaration(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_searchFunctionDeclaration(reference, exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference, spectra_tree_nodes_functions_Nova_FunctionCall* other)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_cloneTo(reference, exceptionData, other);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_writeName(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_writeName(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_writeNova(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return spectra_tree_nodes_functions_Nova_FunctionCall_Nova_toString(reference, exceptionData);
}

void spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_super(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_virtualfunctionMap_Nova_writeName(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionCall* reference)
{
	return this->vtable->spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_virtualfunctionMap_Nova_writeName(this, exceptionData, reference);
}

