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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operator.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_TernaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_ElvisOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignable.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NumericRange.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String input */ nova_Nova_String** compiler_tree_nodes_operations_Nova_Operation_Nova_input;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* String input */ nova_Nova_String** compiler_tree_nodes_operations_Nova_Operation_Nova_input;
	/* IntArray matches */ nova_datastruct_list_Nova_IntArray** compiler_tree_nodes_operations_Nova_Operation_Nova_matches;
} Context3;
typedef struct
{
	/* Byte prev */ char* compiler_tree_nodes_operations_Nova_Operation_Nova_prev;
	/* String input */ nova_Nova_String** compiler_tree_nodes_operations_Nova_Operation_Nova_input;
	/* Array<String, String, String> operands */ nova_datastruct_list_Nova_Array** compiler_tree_nodes_operations_Nova_Operation_Nova_operands;
} Context4;


compiler_tree_nodes_operations_Operation_Extension_VTable compiler_tree_nodes_operations_Operation_Extension_VTable_val =
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
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Value_Nova_cloneTo,
	compiler_tree_nodes_operations_Nova_Operation_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_operations_Nova_Operation_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



nova_datastruct_list_Nova_IntArray* compiler_tree_nodes_operations_Nova_Operation_static_Nova_findOperatorIndices(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_datastruct_list_Nova_IntArray* compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperators(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
char compiler_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operands);
char compiler_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
void compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda45(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context1* context);
char compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda46(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context);
void compiler_tree_nodes_operations_Nova_Operation_static_Nova_testLambda112(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
char compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda113(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context4* context);
void compiler_tree_nodes_operations_Nova_Operation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_operations_Nova_Operation* compiler_tree_nodes_operations_Nova_Operation_Nova_construct(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_operations_Nova_Operation, this,);
	this->vtable = &compiler_tree_nodes_operations_Operation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_operations_Nova_Operation_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_operations_Nova_Operation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_destroy(compiler_tree_nodes_operations_Nova_Operation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_operations_Nova_Operation_Nova_operators, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_operations_Nova_Operation_Nova_operands, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_this(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Value_Nova_this((compiler_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
	this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_tree_nodes_operations_Nova_Operation_Nova_operands = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

compiler_tree_nodes_operations_Nova_Operation* compiler_tree_nodes_operations_Nova_Operation_static_Nova_parse(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_matches = (nova_datastruct_list_Nova_IntArray*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_matches = compiler_tree_nodes_operations_Nova_Operation_static_Nova_findOperatorIndices(0, exceptionData, input);
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData) > 0)
	{
		compiler_tree_nodes_operations_Nova_Operation* l1_Nova_node = (compiler_tree_nodes_operations_Nova_Operation*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_operations_Nova_Operation_Nova_construct(0, exceptionData, parent, location);
		compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperators(l1_Nova_node, exceptionData, input, l1_Nova_matches);
		if (!compiler_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(l1_Nova_node, exceptionData, input, l1_Nova_matches))
		{
			THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to parse operands for '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
		}
		else
		{
			return l1_Nova_node;
		}
	}
	else
	{
		THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("No operators in '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), 0), 1);
	}
	return (compiler_tree_nodes_operations_Nova_Operation*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_IntArray* compiler_tree_nodes_operations_Nova_Operation_static_Nova_findOperatorIndices(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_matches = (nova_datastruct_list_Nova_IntArray*)nova_null;
	Context3 contextArg112 = 
	{
		&input,
		&l1_Nova_matches,
	};
	int l2_Nova_i = 0;
	
	l1_Nova_matches = nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, 0);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_operations_Nova_Operator_Nova_BINARY_OPERATORS), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_nodes_operations_Nova_Operation_static_Nova_testLambda112, nova_null, &contextArg112);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData); l2_Nova_i++)
	{
		int l4_Nova_j = 0;
		
		l4_Nova_j = (int)1;
		for (; l4_Nova_j < (int)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData) - l2_Nova_i); l4_Nova_j++)
		{
			if ((int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l4_Nova_j - 1) > (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l4_Nova_j))
			{
				int l5_Nova_temp = 0;
				
				l5_Nova_temp = (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l4_Nova_j - 1));
				nova_datastruct_list_Nova_IntArray_Nova_set(l1_Nova_matches, exceptionData, l4_Nova_j - 1, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get(l1_Nova_matches, exceptionData, l4_Nova_j)));
				nova_datastruct_list_Nova_IntArray_Nova_set(l1_Nova_matches, exceptionData, l4_Nova_j, l5_Nova_temp);
			}
		}
	}
	return l1_Nova_matches;
}

nova_datastruct_list_Nova_IntArray* compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperators(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	Context1 contextArg45 = 
	{
		&input,
	};
	
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_forEach(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure6_Nova_func)&compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda45, this, &contextArg45);
}

char compiler_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* operands)
{
	Context2 contextArg46 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(operands), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda46, this, &contextArg46, (intptr_t)nova_null);
}

char compiler_tree_nodes_operations_Nova_Operation_1_Nova_parseOperands(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	nova_datastruct_list_Nova_Array* l1_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
	char l1_Nova_prev = 0;
	Context4 contextArg113 = 
	{
		&l1_Nova_prev,
		&input,
		&l1_Nova_operands,
	};
	
	l1_Nova_operands = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_prev = 0;
	if (!nova_datastruct_list_Nova_IntArray_Nova_all(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure12_Nova_allFunc)&compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda113, this, &contextArg113, (intptr_t)nova_null))
	{
		return 0;
	}
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_operands), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_prev, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
	return compiler_tree_nodes_operations_Nova_Operation_0_Nova_parseOperands(this, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_operands));
}

nova_Nova_String* compiler_tree_nodes_operations_Nova_Operation_Nova_toNova(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	int l2_Nova_i = 0;
	
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData); l2_Nova_i++)
	{
		l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData, l2_Nova_i))), exceptionData)), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, l2_Nova_i))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))))));
	}
	l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	return l1_Nova_output;
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda45(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context1* context)
{
	int l1_Nova_end = 0;
	compiler_tree_nodes_operations_Nova_Operator* l1_Nova_operator = (compiler_tree_nodes_operations_Nova_Operator*)nova_null;
	
	l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, start, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_operator = compiler_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), this->compiler_tree_nodes_Nova_Node_Nova_location, nova_Nova_String_Nova_substring((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, start, l1_Nova_end));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, (nova_Nova_Object*)(l1_Nova_operator));
}

char compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda46(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context)
{
	compiler_tree_nodes_Nova_Value* l1_Nova_operand = (compiler_tree_nodes_Nova_Value*)nova_null;
	
	l1_Nova_operand = (compiler_tree_nodes_Nova_Value*)(compiler_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, _1, (compiler_tree_nodes_Nova_Node*)(this), this->compiler_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null));
	if (l1_Nova_operand != (compiler_tree_nodes_Nova_Value*)nova_null)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operands), exceptionData, (nova_Nova_Object*)(l1_Nova_operand));
	}
	return l1_Nova_operand != (compiler_tree_nodes_Nova_Value*)nova_null;
}

void compiler_tree_nodes_operations_Nova_Operation_static_Nova_testLambda112(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = (int)(0);
	while ((l1_Nova_index = compiler_util_Nova_CompilerStringFunctions_0_Nova_findStringInBaseScope((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, operator, l1_Nova_index + 1, (intptr_t)nova_null, (intptr_t)nova_null)) > 0)
	{
		if (compiler_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, operator, l1_Nova_index))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_matches)), exceptionData, (nova_Nova_Object*)(l1_Nova_index));
		}
	}
}

char compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda113(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int _2, nova_datastruct_list_Nova_IntArray* _3, Context4* context)
{
	if ((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_prev) > start)
	{
		THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid operator location in operation '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' (current operands: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_operands))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))))), (compiler_tree_nodes_Nova_Node*)(this)), 1);
		return 0;
	}
	else
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_operands)), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, (*context->compiler_tree_nodes_operations_Nova_Operation_Nova_prev), start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
		(*context->compiler_tree_nodes_operations_Nova_Operation_Nova_prev) = compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, start, (intptr_t)nova_null, (intptr_t)nova_null);
		return 1;
	}
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_super(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_operations_Nova_Operation_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
}

