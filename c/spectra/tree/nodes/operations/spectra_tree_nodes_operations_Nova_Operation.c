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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operator.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
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
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String input */ nova_Nova_String** spectra_tree_nodes_operations_Nova_Operation_Nova_input;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* var
	Byte prev */ char* spectra_tree_nodes_operations_Nova_Operation_Nova_prev;
	/* String input */ nova_Nova_String** spectra_tree_nodes_operations_Nova_Operation_Nova_input;
	/* var
	Array<String, String, String> operands */ nova_datastruct_list_Nova_Array** spectra_tree_nodes_operations_Nova_Operation_Nova_operands;
} Context3;


spectra_tree_nodes_operations_Operation_Extension_VTable spectra_tree_nodes_operations_Operation_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		0,
		0,
	},
	spectra_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_Node_Nova_addChild,
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_Nova_Value_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_operations_Nova_Operation_Nova_writeNova,
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
	spectra_tree_nodes_operations_Nova_Operation_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



nova_datastruct_list_Nova_IntArray* spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
char spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operands);
char spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
void spectra_tree_nodes_operations_Nova_Operation_Nova_lambda54(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context1* context);
char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda55(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context);
char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda130(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context3* context);
void spectra_tree_nodes_operations_Nova_Operation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_Operation* spectra_tree_nodes_operations_Nova_Operation_Nova_construct(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_Operation, this,);
	this->vtable = &spectra_tree_nodes_operations_Operation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_Operation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_Operation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_Operation_Nova_destroy(spectra_tree_nodes_operations_Nova_Operation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_operations_Nova_Operation_Nova_operators, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_operations_Nova_Operation_Nova_operands, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_Operation_Nova_this(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Value_Nova_this((spectra_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
	this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

spectra_tree_nodes_operations_Nova_Operation* spectra_tree_nodes_operations_Nova_Operation_static_Nova_parse(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_matches = (nova_datastruct_list_Nova_IntArray*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_matches = spectra_util_Nova_CompilerStringFunctions_Nova_findOperatorIndices(input, exceptionData, 0, 0);
	if (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData) > 0)
	{
		spectra_tree_nodes_operations_Nova_Operation* l1_Nova_node = (spectra_tree_nodes_operations_Nova_Operation*)nova_null;
		
		l1_Nova_node = spectra_tree_nodes_operations_Nova_Operation_Nova_construct(0, exceptionData, parent, location);
		spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(l1_Nova_node, exceptionData, input, l1_Nova_matches);
		if (!spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(l1_Nova_node, exceptionData, input, l1_Nova_matches))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to parse operands for '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (spectra_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
		}
		else
		{
			return l1_Nova_node;
		}
	}
	else
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("No operators in '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), 0), 1);
	}
	return (spectra_tree_nodes_operations_Nova_Operation*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_IntArray* spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	Context1 contextArg54 = 
	{
		&input,
	};
	
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_forEach(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure6_Nova_func)&spectra_tree_nodes_operations_Nova_Operation_Nova_lambda54, this, &contextArg54);
}

char spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operands)
{
	Context2 contextArg55 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(operands), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&spectra_tree_nodes_operations_Nova_Operation_Nova_lambda55, this, &contextArg55, (intptr_t)nova_null);
}

char spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	nova_datastruct_list_Nova_Array* l1_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
	char l1_Nova_prev = 0;
	Context3 contextArg130 = 
	{
		&l1_Nova_prev,
		&input,
		&l1_Nova_operands,
	};
	
	l1_Nova_operands = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_prev = 0;
	if (!nova_datastruct_list_Nova_IntArray_Nova_all(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure12_Nova_allFunc)&spectra_tree_nodes_operations_Nova_Operation_Nova_lambda130, this, &contextArg130, (intptr_t)nova_null))
	{
		return 0;
	}
	nova_datastruct_list_Nova_Array_virtual0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_operands), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_prev, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
	return spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(this, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_operands));
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_Operation_Nova_writeNova(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	int l2_Nova_i = 0;
	
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData); l2_Nova_i++)
	{
		l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData, l2_Nova_i))), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, l2_Nova_i))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))))));
	}
	l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	return l1_Nova_output;
}

void spectra_tree_nodes_operations_Nova_Operation_Nova_lambda54(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context1* context)
{
	int l1_Nova_end = 0;
	spectra_tree_nodes_operations_Nova_Operator* l1_Nova_operator = (spectra_tree_nodes_operations_Nova_Operator*)nova_null;
	
	l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, start, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_operator = spectra_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), this->spectra_tree_nodes_Nova_Node_Nova_location, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input)), exceptionData, start, l1_Nova_end));
	nova_datastruct_list_Nova_Array_virtual0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, (nova_Nova_Object*)(l1_Nova_operator));
}

char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda55(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context)
{
	spectra_tree_nodes_Nova_Value* l1_Nova_operand = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	l1_Nova_operand = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, _1, (spectra_tree_nodes_Nova_Node*)(this), this->spectra_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null));
	if (l1_Nova_operand != (spectra_tree_nodes_Nova_Value*)nova_null)
	{
		nova_datastruct_list_Nova_Array_virtual0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData, (nova_Nova_Object*)(l1_Nova_operand));
	}
	return l1_Nova_operand != (spectra_tree_nodes_Nova_Value*)nova_null;
}

char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda130(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context3* context)
{
	if ((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_prev) > start)
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid operator location in operation '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' (current operands: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_operands))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))))), (spectra_tree_nodes_Nova_Node*)(this)), 1);
		return 0;
	}
	else
	{
		nova_datastruct_list_Nova_Array_virtual0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_operands)), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input)), exceptionData, (*context->spectra_tree_nodes_operations_Nova_Operation_Nova_prev), start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
		(*context->spectra_tree_nodes_operations_Nova_Operation_Nova_prev) = spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, start, (intptr_t)nova_null, (intptr_t)nova_null);
		return 1;
	}
}

void spectra_tree_nodes_operations_Nova_Operation_Nova_super(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
}

