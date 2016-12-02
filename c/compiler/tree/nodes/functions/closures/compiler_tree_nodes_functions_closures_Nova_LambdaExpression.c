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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_CallableFunction.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_LambdaParameter.h>
#include <compiler/tree/compiler_tree_Nova_StatementIterator.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_UnaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_TernaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_ElvisOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignable.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
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
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
	/* String name */ nova_Nova_String** compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_name;
} Context2;
typedef struct
{
} Context3;


compiler_tree_nodes_functions_closures_LambdaExpression_Extension_VTable compiler_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val =
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
		(compiler_tree_nodes_functions_Nova_Parameter*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameter,
		(char(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameters,
		(compiler_tree_nodes_functions_Nova_ParameterList*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_parameterList,
		(nova_datastruct_list_Nova_Array*(*)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))compiler_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Value_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeNova,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_scope,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_parentLambda,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameterClause(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda121(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda122(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_Parameter* _1, Context2* context);
nova_datastruct_list_Nova_Array* generated29(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda123(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_Parameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);





void compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_closures_Nova_LambdaExpression* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_functions_closures_Nova_LambdaExpression, this,);
	this->vtable = &compiler_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_destroy(compiler_tree_nodes_functions_closures_Nova_LambdaExpression** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_nodes_functions_Nova_ParameterList_Nova_destroy(&(*this)->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList, exceptionData);
	compiler_tree_nodes_Nova_Scope_Nova_destroy(&(*this)->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_this(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Value_Nova_this((compiler_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_scope(this, exceptionData, compiler_tree_nodes_Nova_Scope_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), location));
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_parameterList(this, exceptionData, compiler_tree_nodes_functions_Nova_ParameterList_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), location));
}

compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findVariableDeclaration(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	nova_datastruct_list_Nova_Array* l1_Nova_parameter = (nova_datastruct_list_Nova_Array*)nova_null;
	Context2 contextArg122 = 
	{
		&name,
	};
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	l1_Nova_parameter = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure24_Nova_func)&compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda122, this, &contextArg122));
	if (l1_Nova_parameter != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		return (compiler_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_parameter;
	}
	return compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration((compiler_tree_nodes_Nova_Node*)(((compiler_tree_nodes_Nova_Value*)this)), exceptionData, name, searchAncestors);
}

compiler_tree_nodes_functions_closures_Nova_LambdaExpression* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_static_Nova_parse(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	int l1_Nova_arrowIndex = 0;
	nova_Nova_String* l1_Nova_parameters = (nova_Nova_String*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_arrowIndex = compiler_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("->")), 1, (intptr_t)nova_null);
	l1_Nova_parameters = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	if (l1_Nova_arrowIndex > 0)
	{
		l1_Nova_parameters = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_arrowIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (nova_Nova_String_Accessor_Nova_first(l1_Nova_parameters, exceptionData) == '(' && nova_Nova_String_Accessor_Nova_last(l1_Nova_parameters, exceptionData) == ')')
	{
		l1_Nova_parameters = nova_Nova_String_Nova_trimEnds(l1_Nova_parameters, exceptionData, 1, 1);
	}
}
if ((nova_Nova_Object*)l1_Nova_parameters != (nova_Nova_Object*)(nova_Nova_String*)nova_null || nova_Nova_String_Accessor_Nova_first(input, exceptionData) == '{')
{
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression* l3_Nova_node = (compiler_tree_nodes_functions_closures_Nova_LambdaExpression*)nova_null;
	nova_Nova_String* l3_Nova_operation = (nova_Nova_String*)nova_null;
	
	l3_Nova_node = compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct(0, exceptionData, parent, location);
	l3_Nova_operation = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (int)(l1_Nova_arrowIndex > 0 ? l1_Nova_arrowIndex : (int)0), (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	if (!compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(l3_Nova_node, exceptionData, l3_Nova_operation))
	{
		THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse lambda expression operation '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l3_Nova_operation)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l3_Nova_node)), 1);
	}
	else if (!compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameters(l3_Nova_node, exceptionData, l1_Nova_parameters, (intptr_t)nova_null))
	{
		THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse lambda expression parameters '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_parameters)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l3_Nova_node)), 1);
	}
	else
	{
		return l3_Nova_node;
	}
}
return (compiler_tree_nodes_functions_closures_Nova_LambdaExpression*)(nova_Nova_Object*)nova_null;}

nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	
	l1_Nova_start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(input, exceptionData, '{', (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start >= 0)
	{
		int l1_Nova_end = 0;
		
		l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '{', '}', (intptr_t)nova_null, (intptr_t)nova_null);
	return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_start + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}
THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find lambda expression operation in '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(this)), 1);
return (nova_Nova_String*)(nova_Nova_Object*)nova_null;}

char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_Nova_String* l1_Nova_operation = (nova_Nova_String*)nova_null;
	
	l1_Nova_operation = compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(this, exceptionData, input);
	if (l1_Nova_operation != (nova_Nova_String*)nova_null)
	{
		if (l1_Nova_operation->nova_Nova_String_Nova_count > 0)
		{
			compiler_tree_Nova_StatementIterator* l2_Nova_statements = (compiler_tree_Nova_StatementIterator*)nova_null;
			compiler_tree_Nova_StatementIterator* nova_local_0 = (compiler_tree_Nova_StatementIterator*)nova_null;
			nova_Nova_String* l3_Nova_statement = (nova_Nova_String*)nova_null;
			
			l2_Nova_statements = compiler_util_Nova_CompilerStringFunctions_Nova_getStatements(l1_Nova_operation, exceptionData, (nova_datastruct_list_Nova_Stack*)(nova_datastruct_list_Nova_Stack_1_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(generated29(this, exceptionData)))));
			nova_local_0 = l2_Nova_statements;
			while (compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
			{
				l3_Nova_statement = (nova_Nova_String*)(compiler_tree_Nova_StatementIterator_Accessor_Nova_next(nova_local_0, exceptionData));
				compiler_tree_nodes_Nova_NodeList_Nova_addChild((compiler_tree_nodes_Nova_NodeList*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData)), exceptionData, (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, l3_Nova_statement, (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData)), 0, (intptr_t)nova_null)), (intptr_t)nova_null, (intptr_t)nova_null);
			}
			compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData), exceptionData);
		}
		return 1;
	}
	return 0;
}

char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameters(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (nova_Nova_Object*)parameters == (nova_Nova_Object*)(nova_Nova_String*)nova_null || compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters(((compiler_tree_nodes_functions_Nova_CallableFunction*)this), exceptionData, parameters, require);
}

compiler_tree_nodes_functions_closures_Nova_LambdaParameter* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameter(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return compiler_tree_nodes_functions_closures_Nova_LambdaParameter_static_Nova_parse(0, exceptionData, parameter, (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_parameterList(this, exceptionData)), 0, require);
}

nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData) == 1)
	{
		return compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, 0)), exceptionData);
	}
	else if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData) > 1)
	{
		Context3 contextArg123 = 
		{
		};
		
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("("))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda123, this, &contextArg123)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")"))));
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameterClause(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData) > 0 ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" -> "))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeNova(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(this, exceptionData)), exceptionData, compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData)), exceptionData));
}

char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda121(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_Nova_String_Nova_equals(_1->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData, compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((compiler_tree_nodes_Nova_Node*)(this), exceptionData)->compiler_tree_nodes_Nova_Identifier_Nova_name);
}

char compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda122(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_Parameter* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(_1->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_name));
}

nova_datastruct_list_Nova_Array* generated29(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression** l1_Nova_temp = (compiler_tree_nodes_functions_closures_Nova_LambdaExpression**)nova_null;
	
	l1_Nova_temp = (compiler_tree_nodes_functions_closures_Nova_LambdaExpression**)NOVA_MALLOC(sizeof(compiler_tree_nodes_functions_closures_Nova_LambdaExpression) * 1);
	l1_Nova_temp[0] = this;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_Nova_String* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda123(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_Parameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

compiler_tree_nodes_functions_Nova_FunctionDeclaration* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredFunctionDeclaration(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_ClassDeclaration* l1_Nova_reference = (compiler_tree_nodes_Nova_ClassDeclaration*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_similar = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1 contextArg121 = 
	{
	};
	
	l1_Nova_reference = compiler_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass((compiler_tree_nodes_Nova_Accessible*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((compiler_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData);
	l1_Nova_similar = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_reference->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda121, this, &contextArg121));
	return (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_Nova_Object*)nova_null;
}


compiler_tree_nodes_functions_Nova_ParameterList* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_parameterList(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList;
}

compiler_tree_nodes_functions_Nova_ParameterList* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_parameterList(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_ParameterList* value)
{
	this->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList = value;
	return value;
}

int compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, (nova_Nova_Object*)(this), nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData));
}


compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_closureDeclaration(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration*)(compiler_tree_nodes_functions_Nova_Parameter*)(compiler_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_function(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData) != (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null ? nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(compiler_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_function(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData)), exceptionData, compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index(this, exceptionData)) : (compiler_tree_nodes_functions_Nova_Parameter*)compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredClosureDeclaration(this, exceptionData));
}


compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredClosureDeclaration(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration*)(compiler_tree_nodes_functions_Nova_Parameter*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredFunctionDeclaration(this, exceptionData) != (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null ? (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((compiler_tree_nodes_functions_Nova_CallableFunction*)(compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredFunctionDeclaration(this, exceptionData)), exceptionData)), exceptionData, compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index(this, exceptionData)) : (nova_Nova_Object*)nova_null);
}


compiler_tree_nodes_functions_closures_Nova_LambdaExpression* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_parentLambda(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope;
}

compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_scope(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Scope* value)
{
	this->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope = value;
	return value;
}

void compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_super(compiler_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList = (compiler_tree_nodes_functions_Nova_ParameterList*)nova_null;
	this->compiler_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope = (compiler_tree_nodes_Nova_Scope*)nova_null;
}

