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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operator.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_UnaryOperation.h>
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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Priority.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_operations_UnaryOperation_Extension_VTable compiler_tree_nodes_operations_UnaryOperation_Extension_VTable_val =
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
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Value_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_writeNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	compiler_tree_nodes_operations_Nova_UnaryOperation_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_parseOperator(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int match);
char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_parseOperand(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int match);
char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_LEFT;
char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_EITHER;
char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_RIGHT;
void compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_LEFT = -1;
		compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_EITHER = 0;
		compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_RIGHT = 1;
	}
}

compiler_tree_nodes_operations_Nova_UnaryOperation* compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_construct(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_operations_Nova_UnaryOperation, this,);
	this->vtable = &compiler_tree_nodes_operations_UnaryOperation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_destroy(compiler_tree_nodes_operations_Nova_UnaryOperation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	compiler_tree_nodes_operations_Nova_Operator_Nova_destroy(&(*this)->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operator, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_destroy(&(*this)->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operand, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_this(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Value_Nova_this((compiler_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
}

compiler_tree_nodes_operations_Nova_UnaryOperation* compiler_tree_nodes_operations_Nova_UnaryOperation_static_Nova_parse(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_matches = (nova_datastruct_list_Nova_IntArray*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_matches = compiler_util_Nova_CompilerStringFunctions_Nova_findOperatorIndices(input, exceptionData, compiler_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS, (intptr_t)nova_null);
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData) == 1)
	{
		compiler_tree_nodes_operations_Nova_UnaryOperation* l1_Nova_node = (compiler_tree_nodes_operations_Nova_UnaryOperation*)nova_null;
		int l1_Nova_match = 0;
		
		l1_Nova_node = compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_match = (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Accessorfunc_Nova_first(l1_Nova_matches, exceptionData));
		if (!compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_parseOperator(l1_Nova_node, exceptionData, input, l1_Nova_match))
		{
			THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse unary operator for '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
		}
		else if (!compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_parseOperand(l1_Nova_node, exceptionData, input, l1_Nova_match))
		{
			THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse unary operand for '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
		}
		else
		{
			return l1_Nova_node;
		}
	}
	return (compiler_tree_nodes_operations_Nova_UnaryOperation*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_parseOperator(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int match)
{
	nova_Nova_String* l1_Nova_value = (nova_Nova_String*)nova_null;
	
	l1_Nova_value = nova_Nova_String_Nova_getGroupedChars(input, exceptionData, compiler_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATOR_CHARS, match, (intptr_t)nova_null, (intptr_t)nova_null);
	if ((match == 0) ^ (match + l1_Nova_value->nova_Nova_String_Nova_count == input->nova_Nova_String_Nova_count))
	{
		this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operator = compiler_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), this->compiler_tree_nodes_Nova_Node_Nova_location, l1_Nova_value);
		this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operatorSide = (char)(match == 0 ? compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_LEFT : compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_RIGHT);
		return 1;
	}
	return 0;
}

char compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_parseOperand(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int match)
{
	nova_Nova_String* l1_Nova_value = (nova_Nova_String*)nova_null;
	
	if (match == 0)
	{
		l1_Nova_value = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operator->compiler_tree_nodes_operations_Nova_Operator_Nova_value->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	else
	{
		l1_Nova_value = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, match), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	return (this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operand = (compiler_tree_nodes_Nova_Value*)(compiler_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, l1_Nova_value, (compiler_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null))) != (compiler_tree_nodes_Nova_Value*)nova_null;
	return 0;
}

nova_Nova_String* compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_writeNova(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operatorSide == compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_LEFT ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operator), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operand), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operand), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operator), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
}

void compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_super(compiler_tree_nodes_operations_Nova_UnaryOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operatorSide = 0;
	this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operator = (compiler_tree_nodes_operations_Nova_Operator*)nova_null;
	this->compiler_tree_nodes_operations_Nova_UnaryOperation_Nova_operand = (compiler_tree_nodes_Nova_Value*)nova_null;
}

