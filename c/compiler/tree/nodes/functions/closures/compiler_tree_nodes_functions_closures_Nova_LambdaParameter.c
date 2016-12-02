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
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignable.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_UnaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_TernaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_ElvisOperation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NumericRange.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Priority.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_functions_closures_LambdaParameter_Extension_VTable compiler_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val =
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
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
		0,
		0,
		(void(*)(compiler_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Value*))compiler_tree_nodes_operations_Nova_Assignable_Nova_onAssigned,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_functions_Nova_Parameter_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_functions_Nova_Parameter_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_index,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	compiler_tree_nodes_functions_closures_Nova_LambdaParameter_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers,
	compiler_tree_nodes_variables_Nova_LocalDeclaration_Accessor_Nova_isImplicit,
};



char compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_parseFromSourceParamter(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name);

void compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_closures_Nova_LambdaParameter* compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_construct(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_functions_closures_Nova_LambdaParameter, this,);
	this->vtable = &compiler_tree_nodes_functions_closures_LambdaParameter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_LocalDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_LocalDeclaration*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_Parameter_Nova_super((compiler_tree_nodes_functions_Nova_Parameter*)this, exceptionData);
	compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_destroy(compiler_tree_nodes_functions_closures_Nova_LambdaParameter** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_this(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_functions_Nova_Parameter_Nova_this((compiler_tree_nodes_functions_Nova_Parameter*)(this), exceptionData, parent, location);
}

compiler_tree_nodes_functions_closures_Nova_LambdaParameter* compiler_tree_nodes_functions_closures_Nova_LambdaParameter_static_Nova_parse(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	compiler_tree_nodes_functions_closures_Nova_LambdaParameter* l1_Nova_node = (compiler_tree_nodes_functions_closures_Nova_LambdaParameter*)nova_null;
	compiler_tree_nodes_functions_Nova_Parameter* l1_Nova_parameter = (compiler_tree_nodes_functions_Nova_Parameter*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_construct(0, exceptionData, parent, location);
	l1_Nova_parameter = (compiler_tree_nodes_functions_Nova_Parameter*)(compiler_tree_nodes_functions_Nova_Parameter_static_Nova_parse(0, exceptionData, input, parent, location, require));
	if (l1_Nova_parameter != (compiler_tree_nodes_functions_Nova_Parameter*)nova_null)
	{
		return (compiler_tree_nodes_functions_closures_Nova_LambdaParameter*)compiler_tree_nodes_functions_Nova_Parameter_Nova_cloneTo(l1_Nova_parameter, exceptionData, (compiler_tree_nodes_functions_Nova_Parameter*)(l1_Nova_node));
	}
	else if (!compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(input, exceptionData))
	{
		THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid lambda parameter name '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' given")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
	}
	else if (!compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_parseFromSourceParamter(l1_Nova_node, exceptionData, input))
	{
		THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse lambda parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
	}
	else
	{
		return l1_Nova_node;
	}
	return (compiler_tree_nodes_functions_closures_Nova_LambdaParameter*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_parseFromSourceParamter(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	compiler_tree_nodes_functions_Nova_Parameter* l1_Nova_source = (compiler_tree_nodes_functions_Nova_Parameter*)nova_null;
	
	l1_Nova_source = compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Accessor_Nova_sourceParameter(this, exceptionData);
	if (l1_Nova_source != (compiler_tree_nodes_functions_Nova_Parameter*)nova_null)
	{
		compiler_tree_nodes_functions_Nova_Parameter_Nova_cloneTo(l1_Nova_source, exceptionData, (compiler_tree_nodes_functions_Nova_Parameter*)(this));
		this->compiler_tree_nodes_Nova_Identifier_Nova_name = name;
		return 1;
	}
	THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find corresponding closure parameter for lambda parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(this)), 1);
	return 0;
}

compiler_tree_nodes_functions_Nova_Parameter* compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Accessor_Nova_sourceParameter(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_functions_Nova_ParameterList* l1_Nova_parameters = (compiler_tree_nodes_functions_Nova_ParameterList*)nova_null;
	int l1_Nova_index = 0;
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression* l1_Nova_lambda = (compiler_tree_nodes_functions_closures_Nova_LambdaExpression*)nova_null;
	compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration* l1_Nova_closure = (compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null;
	
	l1_Nova_parameters = (compiler_tree_nodes_functions_Nova_ParameterList*)this->compiler_tree_nodes_Nova_Node_Nova_parent;
	l1_Nova_index = compiler_tree_nodes_Nova_NodeList_Accessor_Nova_count((compiler_tree_nodes_Nova_NodeList*)(l1_Nova_parameters), exceptionData);
	l1_Nova_lambda = (compiler_tree_nodes_functions_closures_Nova_LambdaExpression*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda((compiler_tree_nodes_Nova_Node*)(l1_Nova_parameters), exceptionData));
	l1_Nova_closure = compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_closureDeclaration(l1_Nova_lambda, exceptionData);
	if (l1_Nova_closure != (compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null)
	{
		nova_datastruct_list_Nova_Array* l2_Nova_sourceParameters = (nova_datastruct_list_Nova_Array*)nova_null;
		
		l2_Nova_sourceParameters = compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(l1_Nova_closure), exceptionData);
		return (compiler_tree_nodes_functions_Nova_Parameter*)((nova_Nova_Object*)l2_Nova_sourceParameters != (nova_Nova_Object*)(nova_datastruct_list_Nova_Array*)nova_null && nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l2_Nova_sourceParameters), exceptionData) > l1_Nova_index ? (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_sourceParameters), exceptionData, l1_Nova_index) : (nova_Nova_Object*)nova_null);
	}
}


void compiler_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_super(compiler_tree_nodes_functions_closures_Nova_LambdaParameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

