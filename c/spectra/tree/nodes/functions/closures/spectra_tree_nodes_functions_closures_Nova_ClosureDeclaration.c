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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Parameter.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_CallableFunction.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureParameter.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
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
#include <nova/operators/nova_operators_Nova_Equals.h>



spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		(spectra_tree_nodes_functions_Nova_Parameter*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parseParameter,
		(char(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters,
		(spectra_tree_nodes_functions_Nova_ParameterList*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Accessorfunc_Nova_parameterList,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Mutatorfunc_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Accessorfunc_Nova_genericParameters,
		(void(*)(spectra_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*))spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssigned,
	},
	spectra_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_Node_Nova_addChild,
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_functions_Nova_Parameter_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_functions_Nova_Parameter_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_writeNova,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scope,
	spectra_tree_nodes_Nova_Node_Mutator_Nova_scope,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_index,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_program,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_static_Nova_parse,
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parseType,
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers,
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Accessor_Nova_isImplicit,
};



nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_static_Nova_findType(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int endIndex);
void spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_construct(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration, this,);
	this->vtable = &spectra_tree_nodes_functions_closures_ClosureDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_LocalDeclaration*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Parameter_Nova_super((spectra_tree_nodes_functions_Nova_Parameter*)this, exceptionData);
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_destroy(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_functions_Nova_ParameterList_Nova_destroy(&(*this)->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parameterList, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_genericParameters, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_this(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_functions_Nova_Parameter_Nova_this((spectra_tree_nodes_functions_Nova_Parameter*)(this), exceptionData, parent, location);
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Mutatorfunc_Nova_parameterList(this, exceptionData, spectra_tree_nodes_functions_Nova_ParameterList_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0));
}

spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_static_Nova_parse(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_parenIndex = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_parenIndex = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_parenIndex > 0)
	{
		int l1_Nova_endIndex = 0;
		
		l1_Nova_endIndex = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_parenIndex, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_endIndex > l1_Nova_parenIndex)
	{
		spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* l2_Nova_node = (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null;
		nova_Nova_String* l2_Nova_name = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_name = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_parenIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseName((spectra_tree_nodes_functions_Nova_CallableFunction*)(l2_Nova_node), exceptionData, l2_Nova_name))
		{
			nova_Nova_String* l3_Nova_type = (nova_Nova_String*)nova_null;
			
			l3_Nova_type = spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_static_Nova_findType(0, exceptionData, input, l1_Nova_endIndex);
			if (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parseType(l2_Nova_node, exceptionData, l3_Nova_type) && spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(l2_Nova_node), exceptionData, nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_parenIndex + 1, l1_Nova_endIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), 1))
			{
				l2_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name = l2_Nova_name;
				return l2_Nova_node;
			}
		}
	}
}
return (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)(nova_Nova_Object*)nova_null;}

char spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parseType(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type)
{
	return (nova_Nova_Object*)type == (nova_Nova_Object*)(nova_Nova_String*)nova_null || spectra_tree_nodes_Nova_Value_Nova_parseType((spectra_tree_nodes_Nova_Value*)(((spectra_tree_nodes_functions_Nova_Parameter*)this)), exceptionData, type);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_static_Nova_findType(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int endIndex)
{
	int l1_Nova_typeIndex = 0;
	
	l1_Nova_typeIndex = nova_Nova_String_2_Nova_indexOf(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("->")), endIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_typeIndex > endIndex)
	{
		return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_typeIndex + 2, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_functions_closures_Nova_ClosureParameter* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parseParameter(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_closures_Nova_ClosureParameter_static_Nova_parse(0, exceptionData, parameter, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Accessorfunc_Nova_parameterList(this, exceptionData)), 0, require);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_writeType(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData) != (spectra_tree_nodes_Nova_Type*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-> "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Type_Nova_toNova(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_writeNova(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim((nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->spectra_tree_nodes_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Accessorfunc_Nova_parameterList(this, exceptionData)), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))))), exceptionData, spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_writeType(this, exceptionData))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Accessorfunc_Nova_parameterList(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parameterList;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Mutatorfunc_Nova_parameterList(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ParameterList* value)
{
	this->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parameterList = value;
	return value;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_genericParameters;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Mutatorfunc_Nova_genericParameters(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	this->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_genericParameters = value;
	return (nova_datastruct_list_Nova_Array*)value;
}

void spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_super(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_parameterList = (spectra_tree_nodes_functions_Nova_ParameterList*)nova_null;
	this->spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_genericParameters = (nova_datastruct_list_Nova_Array*)nova_null;
}

