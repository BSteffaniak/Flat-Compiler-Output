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
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_CallableFunction.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Parameter.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
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

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_name;
} Context3;


spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val =
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
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		(spectra_tree_nodes_functions_Nova_Parameter*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter,
		(char(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters,
		(spectra_tree_nodes_functions_Nova_ParameterList*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList,
		(spectra_tree_nodes_functions_Nova_ParameterList*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_ParameterList*))spectra_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc0_Nova_parameterList,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))spectra_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc_Nova_genericParameters,
		0,
	},
	spectra_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_Node_Nova_addChild,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeNova,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scope,
	spectra_tree_nodes_Nova_Node_Mutator_Nova_scope,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_index,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_program,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessor_Nova_parentFunction,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate,
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeReturnType,
};



nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findSignature(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findReturnType(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findParameters(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda32(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda60(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* word, int index, nova_datastruct_list_Nova_List* words, Context2* context);
char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda124(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, Context3* context);

void spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_construct(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_FunctionDeclaration, this,);
	this->vtable = &spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_destroy(spectra_tree_nodes_functions_Nova_FunctionDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_genericParameters, exceptionData);
	spectra_tree_nodes_functions_Nova_ParameterList_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parameterList, exceptionData);
	spectra_tree_nodes_functions_Nova_Parameter_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_this(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc0_Nova_parameterList(this, exceptionData, spectra_tree_nodes_functions_Nova_ParameterList_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0));
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_findVariableDeclaration(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	nova_datastruct_list_Nova_Array* l1_Nova_parameter = (nova_datastruct_list_Nova_Array*)nova_null;
	Context3* contextArg124 = NOVA_MALLOC(sizeof(Context3));
	contextArg124->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_name = &name;
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	if (this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference != (spectra_tree_nodes_functions_Nova_Parameter*)nova_null && nova_Nova_String_Nova_equals(this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, name))
	{
		return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference;
	}
	l1_Nova_parameter = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda124, this, contextArg124));
	if (l1_Nova_parameter != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_parameter;
	}
	return spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData, name, searchAncestors);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_parse(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_signature = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_parameters = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_returnType = (nova_Nova_String*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_signature = spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findSignature(0, exceptionData, input);
	l1_Nova_parameters = spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findParameters(0, exceptionData, input);
	l1_Nova_returnType = spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findReturnType(0, exceptionData, input);
	if (l1_Nova_signature != (nova_Nova_String*)nova_null && l1_Nova_parameters != (nova_Nova_String*)nova_null && l1_Nova_returnType != (nova_Nova_String*)nova_null)
	{
		spectra_tree_nodes_functions_Nova_FunctionDeclaration* l1_Nova_node = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
		
		l1_Nova_node = spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_construct(0, exceptionData, parent, location);
		if (spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parseSignature(l1_Nova_node, exceptionData, l1_Nova_signature, require) && spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(l1_Nova_node), exceptionData, l1_Nova_parameters, require) && (l1_Nova_returnType->nova_Nova_String_Nova_count == 0 || spectra_tree_nodes_Nova_Value_virtual_Nova_parseType((spectra_tree_nodes_Nova_Value*)(l1_Nova_node), exceptionData, l1_Nova_returnType)))
		{
			if (!l1_Nova_node->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic)
			{
				l1_Nova_node->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference = spectra_tree_nodes_functions_Nova_Parameter_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList(l1_Nova_node, exceptionData)), 0);
				l1_Nova_node->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference->spectra_tree_nodes_Nova_Identifier_Nova_name = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this"));
				spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(l1_Nova_node->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference), exceptionData, spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(l1_Nova_node), exceptionData)), exceptionData));
			}
			return l1_Nova_node;
		}
	}
	if (require)
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid function declaration '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), parent, (intptr_t)nova_null);
	}
	return (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findSignature(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start < 0)
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findReturnType(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	int l1_Nova_end = 0;
	
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start < 0)
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
if (l1_Nova_end < 0)
{
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}
if (spectra_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter(input, exceptionData, l1_Nova_end + 1, (intptr_t)nova_null))
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}
l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("->")), l1_Nova_end + 1, (intptr_t)nova_null);
if (l1_Nova_end < 0)
{
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}
return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_end + 2, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_findParameters(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	int l1_Nova_end = 0;
	
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start < 0)
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
if (l1_Nova_end < 0)
{
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}
return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_start + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);}

char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parseSignature(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* signature, char require)
{
	Context2* contextArg60 = NOVA_MALLOC(sizeof(Context2));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_Nova_filterEmpty((nova_datastruct_list_Nova_List*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitValues(signature, exceptionData)), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda60, this, contextArg60, 0);
}

char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parsePlaceholders(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1* contextArg32 = NOVA_MALLOC(sizeof(Context1));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda32, this, contextArg32, 0) & spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeAnnotationSeparator(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeReturnType(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData) != (spectra_tree_nodes_Nova_Type*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" -> ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeHeader(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace((nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Identifier_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList(this, exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration_virtual_Nova_writeReturnType((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(this), exceptionData))))));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeNova(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeHeader(this, exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_cloneTo(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* other)
{
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData, (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(other));
	spectra_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo(((spectra_tree_nodes_generics_Nova_GenericCompatible*)this), exceptionData, (spectra_tree_nodes_generics_Nova_GenericCompatible*)(other));
	spectra_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc0_Nova_parameterList(other, exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList(this, exceptionData));
	other->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference = this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference;
	return other;
}

char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda32(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	return spectra_tree_nodes_functions_Nova_Parameter_Nova_parsePlaceholders(_1, exceptionData);
}

char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda60(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* word, int index, nova_datastruct_list_Nova_List* words, Context2* context)
{
	if (index == nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(((nova_datastruct_list_Nova_Array*)words)), exceptionData) - 1)
	{
		return spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseName((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, word);
	}
	else
	{
		return spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, word);
	}
}

char spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_lambda124(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* _1, Context3* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_name));
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessor_Nova_parentFunction(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_genericParameters;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc_Nova_genericParameters(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_genericParameters = value;
	return value;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parameterList;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc0_Nova_parameterList(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ParameterList* value)
{
	this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parameterList = value;
	return value;
}

void spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_super(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_genericParameters = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parameterList = (spectra_tree_nodes_functions_Nova_ParameterList*)nova_null;
	this->spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_objectReference = (spectra_tree_nodes_functions_Nova_Parameter*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_FunctionDeclaration_virtual_Nova_writeReturnType(spectra_tree_nodes_functions_Nova_FunctionDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_functions_Nova_FunctionDeclaration_virtual_Nova_writeReturnType((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(this), exceptionData);
}

