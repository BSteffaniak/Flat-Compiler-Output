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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Parameter.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
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



spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
		0,
		0,
		0,
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
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova,
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
	spectra_tree_nodes_functions_closures_Nova_LambdaParameter_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers,
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Accessor_Nova_isImplicit,
};



char spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_parseFromSourceParamter(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name);

void spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_closures_Nova_LambdaParameter* spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_construct(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_closures_Nova_LambdaParameter, this,);
	this->vtable = &spectra_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_LocalDeclaration*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Parameter_Nova_super((spectra_tree_nodes_functions_Nova_Parameter*)this, exceptionData);
	spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_destroy(spectra_tree_nodes_functions_closures_Nova_LambdaParameter** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_this(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_functions_Nova_Parameter_Nova_this((spectra_tree_nodes_functions_Nova_Parameter*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_functions_closures_Nova_LambdaParameter* spectra_tree_nodes_functions_closures_Nova_LambdaParameter_static_Nova_parse(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_functions_closures_Nova_LambdaParameter* l1_Nova_node = (spectra_tree_nodes_functions_closures_Nova_LambdaParameter*)nova_null;
	spectra_tree_nodes_functions_Nova_Parameter* l1_Nova_parameter = (spectra_tree_nodes_functions_Nova_Parameter*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_construct(0, exceptionData, parent, location);
	l1_Nova_parameter = (spectra_tree_nodes_functions_Nova_Parameter*)(spectra_tree_nodes_functions_Nova_Parameter_static_Nova_parse(0, exceptionData, input, parent, location, require));
	if (l1_Nova_parameter != (spectra_tree_nodes_functions_Nova_Parameter*)nova_null)
	{
		return (spectra_tree_nodes_functions_closures_Nova_LambdaParameter*)spectra_tree_nodes_functions_Nova_Parameter_Nova_cloneTo(l1_Nova_parameter, exceptionData, (spectra_tree_nodes_functions_Nova_Parameter*)(l1_Nova_node));
	}
	else if (!spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(input, exceptionData))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid lambda parameter name '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' given")))), (spectra_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
	}
	else if (!spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_parseFromSourceParamter(l1_Nova_node, exceptionData, input))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse lambda parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (spectra_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
	}
	else
	{
		return l1_Nova_node;
	}
	return (spectra_tree_nodes_functions_closures_Nova_LambdaParameter*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_parseFromSourceParamter(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	spectra_tree_nodes_functions_Nova_Parameter* l1_Nova_source = (spectra_tree_nodes_functions_Nova_Parameter*)nova_null;
	
	l1_Nova_source = spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Accessor_Nova_sourceParameter(this, exceptionData);
	if (l1_Nova_source != (spectra_tree_nodes_functions_Nova_Parameter*)nova_null)
	{
		spectra_tree_nodes_functions_Nova_Parameter_Nova_cloneTo(l1_Nova_source, exceptionData, (spectra_tree_nodes_functions_Nova_Parameter*)(this));
		this->spectra_tree_nodes_Nova_Identifier_Nova_name = name;
		return 1;
	}
	THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find corresponding closure parameter for lambda parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (spectra_tree_nodes_Nova_Node*)(this)), 1);
	return 0;
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Accessor_Nova_sourceParameter(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_functions_Nova_ParameterList* l1_Nova_parameters = (spectra_tree_nodes_functions_Nova_ParameterList*)nova_null;
	int l1_Nova_index = 0;
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression* l1_Nova_lambda = (spectra_tree_nodes_functions_closures_Nova_LambdaExpression*)nova_null;
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* l1_Nova_closure = (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null;
	
	l1_Nova_parameters = (spectra_tree_nodes_functions_Nova_ParameterList*)this->spectra_tree_nodes_Nova_Node_Nova_parent;
	l1_Nova_index = spectra_tree_nodes_Nova_NodeList_Accessor_Nova_count((spectra_tree_nodes_Nova_NodeList*)(l1_Nova_parameters), exceptionData);
	l1_Nova_lambda = (spectra_tree_nodes_functions_closures_Nova_LambdaExpression*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda((spectra_tree_nodes_Nova_Node*)(l1_Nova_parameters), exceptionData));
	l1_Nova_closure = spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_closureDeclaration(l1_Nova_lambda, exceptionData);
	if (l1_Nova_closure != (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null)
	{
		nova_datastruct_list_Nova_Array* l2_Nova_sourceParameters = (nova_datastruct_list_Nova_Array*)nova_null;
		
		l2_Nova_sourceParameters = spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(l1_Nova_closure), exceptionData);
		return (spectra_tree_nodes_functions_Nova_Parameter*)(l2_Nova_sourceParameters != (nova_datastruct_list_Nova_Array*)nova_null && nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l2_Nova_sourceParameters), exceptionData) > l1_Nova_index ? (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_sourceParameters), exceptionData, l1_Nova_index) : (nova_Nova_Object*)nova_null);
	}
}


void spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_super(spectra_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

