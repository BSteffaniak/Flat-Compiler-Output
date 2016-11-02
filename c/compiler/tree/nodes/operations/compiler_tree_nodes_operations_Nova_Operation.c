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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operator.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String input */ nova_Nova_String** compiler_tree_nodes_operations_Nova_Operation_Nova_input;
	/* CharArray symbols */ nova_datastruct_list_Nova_CharArray** compiler_tree_nodes_operations_Nova_Operation_Nova_symbols;
	/* IntArray matches */ nova_datastruct_list_Nova_IntArray** compiler_tree_nodes_operations_Nova_Operation_Nova_matches;
} Context1;
typedef struct
{
	/* String input */ nova_Nova_String** compiler_tree_nodes_operations_Nova_Operation_Nova_input;
	/* CharArray symbols */ nova_datastruct_list_Nova_CharArray** compiler_tree_nodes_operations_Nova_Operation_Nova_symbols;
} Context2;
typedef struct
{
	/* Array<String, String, String> operands */ nova_datastruct_list_Nova_Array** compiler_tree_nodes_operations_Nova_Operation_Nova_operands;
	/* String input */ nova_Nova_String** compiler_tree_nodes_operations_Nova_Operation_Nova_input;
	/* Byte prev */ char* compiler_tree_nodes_operations_Nova_Operation_Nova_prev;
	/* CharArray symbols */ nova_datastruct_list_Nova_CharArray** compiler_tree_nodes_operations_Nova_Operation_Nova_symbols;
} Context3;


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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	nova_Nova_Object_Nova_equals,
	compiler_tree_nodes_operations_Nova_Operation_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Value_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_operations_Nova_Operation_static_Nova_parse,
};



nova_datastruct_list_Nova_IntArray* compiler_tree_nodes_operations_Nova_Operation_static_Nova_findOperatorIndices(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperators(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
char compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperands(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches);
void compiler_tree_nodes_operations_Nova_Operation_static_Nova_testLambda82(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda83(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int i, nova_datastruct_list_Nova_IntArray* starts, Context2* context);
void compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda84(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int i, nova_datastruct_list_Nova_IntArray* starts, Context3* context);
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
	compiler_tree_nodes_Nova_Value_Nova_this((compiler_tree_nodes_Nova_Value*)(this), exceptionData, parent, location);
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
	if (l1_Nova_matches->nova_datastruct_list_Nova_Array_Nova_count > 0)
	{
		compiler_tree_nodes_operations_Nova_Operation* l1_Nova_node = (compiler_tree_nodes_operations_Nova_Operation*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_operations_Nova_Operation_Nova_construct(0, exceptionData, parent, location);
		if (compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperators(l1_Nova_node, exceptionData, input, l1_Nova_matches) && compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperands(l1_Nova_node, exceptionData, input, l1_Nova_matches))
		{
			return l1_Nova_node;
		}
	}
	return (compiler_tree_nodes_operations_Nova_Operation*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_IntArray* compiler_tree_nodes_operations_Nova_Operation_static_Nova_findOperatorIndices(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_matches = (nova_datastruct_list_Nova_IntArray*)nova_null;
	nova_datastruct_list_Nova_CharArray* l1_Nova_symbols = (nova_datastruct_list_Nova_CharArray*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_ops = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1 contextArg82 = 
	{
		&input,
		&l1_Nova_symbols,
		&l1_Nova_matches,
	};
	
	l1_Nova_matches = nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, 0);
	l1_Nova_symbols = compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS;
	l1_Nova_ops = compiler_tree_nodes_operations_Nova_Operator_Nova_BINARY_OPERATORS;
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_ops), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_nodes_operations_Nova_Operation_static_Nova_testLambda82, nova_null, &contextArg82);
	return l1_Nova_matches;
}

char compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperators(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_symbols = (nova_datastruct_list_Nova_CharArray*)nova_null;
	Context2 contextArg83 = 
	{
		&input,
		&l1_Nova_symbols,
	};
	
	l1_Nova_symbols = compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS;
	nova_datastruct_list_Nova_IntArray_Nova_forEach(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure6_Nova_func)&compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda83, this, &contextArg83);
	return 1;
}

char compiler_tree_nodes_operations_Nova_Operation_Nova_parseOperands(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_datastruct_list_Nova_IntArray* matches)
{
	nova_datastruct_list_Nova_Array* l1_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_CharArray* l1_Nova_symbols = (nova_datastruct_list_Nova_CharArray*)nova_null;
	char l1_Nova_prev = 0;
	Context3 contextArg84 = 
	{
		&l1_Nova_operands,
		&input,
		&l1_Nova_prev,
		&l1_Nova_symbols,
	};
	
	l1_Nova_operands = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_symbols = compiler_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS;
	l1_Nova_prev = 0;
	nova_datastruct_list_Nova_IntArray_Nova_forEach(matches, exceptionData, (nova_datastruct_list_Nova_IntArray_closure6_Nova_func)&compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda84, this, &contextArg84);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_operands), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_prev, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)));
	return 1;
}

nova_Nova_String* compiler_tree_nodes_operations_Nova_Operation_Nova_toString(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	
	l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("operator "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	return l1_Nova_output;
}

void compiler_tree_nodes_operations_Nova_Operation_static_Nova_testLambda82(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operator, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = compiler_util_Nova_CompilerStringFunctions_0_Nova_findStringInBaseScope((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, operator, 1, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index > 0 && l1_Nova_index < (*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input)->nova_Nova_String_Nova_count - operator->nova_Nova_String_Nova_count && !nova_datastruct_list_Nova_CharArray_Nova_contains((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_symbols), exceptionData, nova_Nova_String_Nova_get((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, l1_Nova_index - 1)) && !nova_datastruct_list_Nova_CharArray_Nova_contains((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_symbols), exceptionData, nova_Nova_String_Nova_get((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, l1_Nova_index + operator->nova_Nova_String_Nova_count)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_matches)), exceptionData, (nova_Nova_Object*)(l1_Nova_index));
	}
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda83(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int i, nova_datastruct_list_Nova_IntArray* starts, Context2* context)
{
	int l1_Nova_end = 0;
	compiler_tree_nodes_operations_Nova_Operator* l1_Nova_operator = (compiler_tree_nodes_operations_Nova_Operator*)nova_null;
	
	l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, (*context->compiler_tree_nodes_operations_Nova_Operation_Nova_symbols), start, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_operator = compiler_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), this->compiler_tree_nodes_Nova_Node_Nova_location, nova_Nova_String_Nova_substring((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, start, l1_Nova_end));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators), exceptionData, (nova_Nova_Object*)(l1_Nova_operator));
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_testLambda84(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int i, nova_datastruct_list_Nova_IntArray* starts, Context3* context)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_operands)), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, (*context->compiler_tree_nodes_operations_Nova_Operation_Nova_prev), start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)));
	(*context->compiler_tree_nodes_operations_Nova_Operation_Nova_prev) = compiler_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain((*context->compiler_tree_nodes_operations_Nova_Operation_Nova_input), exceptionData, (*context->compiler_tree_nodes_operations_Nova_Operation_Nova_symbols), start, (intptr_t)nova_null, (intptr_t)nova_null);
}

void compiler_tree_nodes_operations_Nova_Operation_Nova_super(compiler_tree_nodes_operations_Nova_Operation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_operations_Nova_Operation_Nova_operators = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_operations_Nova_Operation_Nova_operands = (nova_datastruct_list_Nova_Array*)nova_null;
}

