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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operator.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
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



nova_datastruct_list_Nova_IntArray* spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
char spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operands);
char spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
void spectra_tree_nodes_operations_Nova_Operation_Nova_lambda66(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context1* context);
char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda67(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context);
char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda137(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context3* context);
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
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData) > 0)
	{
		spectra_tree_nodes_operations_Nova_Operation* l2_Nova_node = (spectra_tree_nodes_operations_Nova_Operation*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_operations_Nova_Operation_Nova_construct(0, exceptionData, parent, location);
		spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(l2_Nova_node, exceptionData, input, l1_Nova_matches);
		if (!spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(l2_Nova_node, exceptionData, input, l1_Nova_matches))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to parse operands for '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else
		{
			return l2_Nova_node;
		}
	}
	else
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("No operators in '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), 0), 1);
	}
	return (spectra_tree_nodes_operations_Nova_Operation*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_IntArray* spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	Context1* contextArg66 = NOVA_MALLOC(sizeof(Context1));
	contextArg66->spectra_tree_nodes_operations_Nova_Operation_Nova_input = &input;
	
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_forEach(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure8_Nova_func)&spectra_tree_nodes_operations_Nova_Operation_Nova_lambda66, this, contextArg66);
}

char spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operands)
{
	Context2* contextArg67 = NOVA_MALLOC(sizeof(Context2));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(operands), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_operations_Nova_Operation_Nova_lambda67, this, contextArg67, (intptr_t)nova_null);
}

char spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	nova_datastruct_list_Nova_Array* l1_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
	char l1_Nova_prev = 0;
	Context3* contextArg137 = NOVA_MALLOC(sizeof(Context3));
	contextArg137->spectra_tree_nodes_operations_Nova_Operation_Nova_prev = &l1_Nova_prev;
	contextArg137->spectra_tree_nodes_operations_Nova_Operation_Nova_input = &input;
	contextArg137->spectra_tree_nodes_operations_Nova_Operation_Nova_operands = &l1_Nova_operands;
	
	l1_Nova_operands = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_prev = 0;
	if (!nova_datastruct_list_Nova_IntArray_Nova_all(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure16_Nova_allFunc)&spectra_tree_nodes_operations_Nova_Operation_Nova_lambda137, this, contextArg137, (intptr_t)nova_null))
	{
		return 0;
	}
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_operands), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_prev, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
	return spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(this, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_operands));
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_Operation_Nova_writeNova(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	int l3_Nova_i = 0;
	
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData); l3_Nova_i++)
	{
		l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData, l3_Nova_i))), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, l3_Nova_i))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))))))))));
	}
	l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	return l1_Nova_output;
}

void spectra_tree_nodes_operations_Nova_Operation_Nova_lambda66(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context1* context)
{
	int l1_Nova_end = 0;
	spectra_tree_nodes_operations_Nova_Operator* l1_Nova_operator = (spectra_tree_nodes_operations_Nova_Operator*)nova_null;
	
	l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, start, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_operator = spectra_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), this->spectra_tree_nodes_Nova_Node_Nova_location, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input)), exceptionData, start, l1_Nova_end));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, (nova_Nova_Object*)(l1_Nova_operator));
}

char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda67(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context)
{
	spectra_tree_nodes_Nova_Value* l1_Nova_operand = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	l1_Nova_operand = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, _1, (spectra_tree_nodes_Nova_Node*)(this), this->spectra_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null));
	if ((l1_Nova_operand) != (spectra_tree_nodes_Nova_Value*)nova_null)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData, (nova_Nova_Object*)(l1_Nova_operand));
	}
	return l1_Nova_operand != (spectra_tree_nodes_Nova_Value*)nova_null;
}

char spectra_tree_nodes_operations_Nova_Operation_Nova_lambda137(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context3* context)
{
	if ((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_prev) > start)
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid operator location in operation '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' (current operands: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_operands))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))))))))), (spectra_tree_nodes_Nova_Node*)(this)), 1);
		return 0;
	}
	else
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_operands)), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input)), exceptionData, (*context->spectra_tree_nodes_operations_Nova_Operation_Nova_prev), start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
		(*context->spectra_tree_nodes_operations_Nova_Operation_Nova_prev) = spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->spectra_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, start, (intptr_t)nova_null, (intptr_t)nova_null);
		return 1;
	}
}

void spectra_tree_nodes_operations_Nova_Operation_Nova_super(spectra_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_operations_Nova_Operation_Nova_operators = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_operations_Nova_Operation_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
}


nova_datastruct_list_Nova_IntArray* spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap_Nova_parseOperators(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
char spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap0_Nova_parseOperands(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference, nova_datastruct_list_Nova_Array* operands);
char spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap1_Nova_parseOperands(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
void spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_OperationFunctionMap* spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_construct(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_OperationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_operations_Operation_OperationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_destroy(spectra_tree_nodes_operations_Nova_OperationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_this(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_operations_Nova_Operation* spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMapOperationFunctionMap_static_Nova_construct(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_operations_Nova_Operation_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_operations_Nova_Operation* spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_operations_Nova_Operation_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_datastruct_list_Nova_IntArray* spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap_Nova_parseOperators(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	return spectra_tree_nodes_operations_Nova_Operation_Nova_parseOperators(reference, exceptionData, input, matches);
}

char spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap0_Nova_parseOperands(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference, nova_datastruct_list_Nova_Array* operands)
{
	return spectra_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(reference, exceptionData, operands);
}

char spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap1_Nova_parseOperands(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	return spectra_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(reference, exceptionData, input, matches);
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_OperationFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operation* reference)
{
	return spectra_tree_nodes_operations_Nova_Operation_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_super(spectra_tree_nodes_operations_Nova_OperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

