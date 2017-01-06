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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Parameter.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_CallableFunction.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaParameter.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_CallableFunction.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/spectra_tree_Nova_StatementIterator.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;
typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_name;
} Context2;
typedef struct
{
} Context3;



nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameterClause(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda132(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda133(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, Context2* context);
nova_datastruct_list_Nova_Array* generated29(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda134(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);





void spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_closures_Nova_LambdaExpression, this,);
	this->vtable = &spectra_tree_nodes_functions_closures_LambdaExpression_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_destroy(spectra_tree_nodes_functions_closures_Nova_LambdaExpression** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Scope_Nova_destroy(&(*this)->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope, exceptionData);
	spectra_tree_nodes_functions_Nova_ParameterList_Nova_destroy(&(*this)->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_genericParameters, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_this(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Value_Nova_this((spectra_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_scope(this, exceptionData, spectra_tree_nodes_Nova_Scope_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), location));
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc0_Nova_parameterList(this, exceptionData, spectra_tree_nodes_functions_Nova_ParameterList_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), location));
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findVariableDeclaration(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	nova_datastruct_list_Nova_Array* l1_Nova_parameter = (nova_datastruct_list_Nova_Array*)nova_null;
	Context2* contextArg133 = NOVA_MALLOC(sizeof(Context2));
	contextArg133->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_name = &name;
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	l1_Nova_parameter = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda133, this, contextArg133));
	if ((l1_Nova_parameter) != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_parameter;
	}
	return spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_Nova_Value*)this)), exceptionData, name, searchAncestors);
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_static_Nova_parse(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_arrowIndex = 0;
	nova_Nova_String* l1_Nova_parameters = (nova_Nova_String*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_arrowIndex = spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=>")), 1, (intptr_t)nova_null);
	l1_Nova_parameters = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	if (l1_Nova_arrowIndex > 0)
	{
		l1_Nova_parameters = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_arrowIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (nova_Nova_String_Accessor_Nova_first(l1_Nova_parameters, exceptionData) == '(' && nova_Nova_String_Accessor_Nova_last(l1_Nova_parameters, exceptionData) == ')')
	{
		l1_Nova_parameters = nova_Nova_String_Nova_trimEnds(l1_Nova_parameters, exceptionData, 1, 1);
	}
}
if ((l1_Nova_parameters) != (nova_Nova_String*)nova_null || nova_Nova_String_Accessor_Nova_first(input, exceptionData) == '{')
{
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression* l4_Nova_node = (spectra_tree_nodes_functions_closures_Nova_LambdaExpression*)nova_null;
	nova_Nova_String* l4_Nova_operation = (nova_Nova_String*)nova_null;
	
	l4_Nova_node = spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct(0, exceptionData, parent, location);
	l4_Nova_operation = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (int)(l1_Nova_arrowIndex > 0 ? l1_Nova_arrowIndex : (int)0), (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	if (!spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(l4_Nova_node, exceptionData, l4_Nova_operation))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse lambda expression operation '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l4_Nova_operation), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l4_Nova_node)), 1);
	}
	else if (!spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameters(l4_Nova_node, exceptionData, l1_Nova_parameters, (intptr_t)nova_null))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse lambda expression parameters '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l1_Nova_parameters), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l4_Nova_node)), 1);
	}
	else
	{
		return l4_Nova_node;
	}
}
return (spectra_tree_nodes_functions_closures_Nova_LambdaExpression*)(nova_Nova_Object*)nova_null;}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	
	l1_Nova_start = spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel(input, exceptionData, '{', (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start >= 0)
	{
		int l2_Nova_end = 0;
		
		l2_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '{', '}', (intptr_t)nova_null, (intptr_t)nova_null);
	return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_start + 1, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}
THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find lambda expression operation in '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this)), 1);
return (nova_Nova_String*)(nova_Nova_Object*)nova_null;}

char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_Nova_String* l1_Nova_operation = (nova_Nova_String*)nova_null;
	
	l1_Nova_operation = spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(this, exceptionData, input);
	if ((l1_Nova_operation) != (nova_Nova_String*)nova_null)
	{
		if (l1_Nova_operation->nova_Nova_String_Nova_count > 0)
		{
			spectra_tree_Nova_StatementIterator* l3_Nova_statements = (spectra_tree_Nova_StatementIterator*)nova_null;
			spectra_tree_Nova_StatementIterator* nova_local_0 = (spectra_tree_Nova_StatementIterator*)nova_null;
			nova_Nova_String* l4_Nova_statement = (nova_Nova_String*)nova_null;
			
			l3_Nova_statements = spectra_util_Nova_CompilerStringFunctions_Nova_getStatements(l1_Nova_operation, exceptionData, (nova_datastruct_list_Nova_Stack*)(nova_datastruct_list_Nova_Stack_1_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(generated29(this, exceptionData)))));
			nova_local_0 = l3_Nova_statements;
			while (spectra_tree_Nova_StatementIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
			{
				l4_Nova_statement = (nova_Nova_String*)(spectra_tree_Nova_StatementIterator_Accessor_Nova_next(nova_local_0, exceptionData));
				spectra_tree_nodes_Nova_NodeList_Nova_addChild((spectra_tree_nodes_Nova_NodeList*)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData)), exceptionData, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, l4_Nova_statement, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData)), 0, (intptr_t)nova_null)), (intptr_t)nova_null, (intptr_t)nova_null);
			}
			spectra_tree_nodes_Nova_Scope_Nova_parsePlaceholders(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData), exceptionData);
		}
		return 1;
	}
	return 0;
}

char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameters(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (parameters) == (nova_Nova_String*)nova_null || spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters(((spectra_tree_nodes_functions_Nova_CallableFunction*)this), exceptionData, parameters, require);
}

spectra_tree_nodes_functions_closures_Nova_LambdaParameter* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameter(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_closures_Nova_LambdaParameter_static_Nova_parse(0, exceptionData, parameter, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor1_Nova_parameterList((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), 0, require);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData) == 1)
	{
		return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, 0)), exceptionData);
	}
	else if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData) > 1)
	{
		Context3* contextArg134 = NOVA_MALLOC(sizeof(Context3));
		
		return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("(")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda134, this, contextArg134)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))));
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameterClause(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData) > 0 ? nova_Nova_String_Nova_plus(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(this, exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" -> "))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeNova(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(this, exceptionData), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(this, exceptionData)), exceptionData));
}

char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda132(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_Identifier_Nova_name);
}

char spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda133(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_name));
}

nova_datastruct_list_Nova_Array* generated29(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression** l1_Nova_temp = (spectra_tree_nodes_functions_closures_Nova_LambdaExpression**)nova_null;
	
	l1_Nova_temp = (spectra_tree_nodes_functions_closures_Nova_LambdaExpression**)NOVA_MALLOC(sizeof(spectra_tree_nodes_functions_closures_Nova_LambdaExpression) * 1);
	l1_Nova_temp[0] = this;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda134(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredFunctionDeclaration(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_ClassDeclaration* l1_Nova_reference = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_similar = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1* contextArg132 = NOVA_MALLOC(sizeof(Context1));
	spectra_tree_nodes_Nova_ClassDeclaration* nova_local_0 = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
	
	l1_Nova_reference = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass((spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData);
	l1_Nova_similar = (nova_datastruct_list_Nova_Array*)((nova_local_0 = l1_Nova_reference) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null ? (nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_local_0->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_lambda132, this, contextArg132)) : (nova_Nova_Object*)nova_null);
	return (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_Nova_Object*)nova_null;
}


int spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, (nova_Nova_Object*)(this), nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData));
}


spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_closureDeclaration(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)((spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_function(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null ? (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_function(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData)), exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index(this, exceptionData)) : spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredClosureDeclaration(this, exceptionData));
}


spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredClosureDeclaration(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)(spectra_tree_nodes_functions_Nova_Parameter*)((spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredFunctionDeclaration(this, exceptionData)) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null ? (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_inferredFunctionDeclaration(this, exceptionData)), exceptionData)), exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_index(this, exceptionData)) : (nova_Nova_Object*)nova_null);
}


spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessor_Nova_parentLambda(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_scope(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope;
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_scope(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value)
{
	this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope = value;
	return value;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc1_Nova_parameterList(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc0_Nova_parameterList(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ParameterList* value)
{
	this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList = value;
	return value;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_genericParameters;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Mutatorfunc_Nova_genericParameters(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_genericParameters = value;
	return value;
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_super(spectra_tree_nodes_functions_closures_Nova_LambdaExpression* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_scope = (spectra_tree_nodes_Nova_Scope*)nova_null;
	this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parameterList = (spectra_tree_nodes_functions_Nova_ParameterList*)nova_null;
	this->spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_genericParameters = (nova_datastruct_list_Nova_Array*)nova_null;
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_construct(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_functions_closures_LambdaExpression_LambdaExpressionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_destroy(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_this(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMapLambdaExpressionFunctionMap_static_Nova_construct(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_findVariableDeclaration(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference, nova_Nova_String* name, int searchAncestors)
{
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findVariableDeclaration(reference, exceptionData, name, searchAncestors);
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_findOperation(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference, nova_Nova_String* input)
{
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_findOperation(reference, exceptionData, input);
}

char spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_parseOperation(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference, nova_Nova_String* input)
{
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseOperation(reference, exceptionData, input);
}

char spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_parseParameters(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference, nova_Nova_String* parameters, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameters(reference, exceptionData, parameters, require);
}

spectra_tree_nodes_functions_closures_Nova_LambdaParameter* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap0_Nova_parseParameter(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference, nova_Nova_String* parameter, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_parseParameter(reference, exceptionData, parameter, require);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_writeParameters(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference)
{
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_writeParameterClause(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference)
{
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameterClause(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_closures_Nova_LambdaExpression* reference)
{
	return spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_super(spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

