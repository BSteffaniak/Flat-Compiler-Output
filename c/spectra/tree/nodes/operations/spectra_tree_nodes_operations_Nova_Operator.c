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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




nova_datastruct_list_Nova_Array* generated20(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10, nova_Nova_String* value11, nova_Nova_String* value12, nova_Nova_String* value13, nova_Nova_String* value14, nova_Nova_String* value15, nova_Nova_String* value16, nova_Nova_String* value17, nova_Nova_String* value18, nova_Nova_String* value19, nova_Nova_String* value20, nova_Nova_String* value21, nova_Nova_String* value22, nova_Nova_String* value23, nova_Nova_String* value24, nova_Nova_String* value25, nova_Nova_String* value26, nova_Nova_String* value27, nova_Nova_String* value28, nova_Nova_String* value29, nova_Nova_String* value30, nova_Nova_String* value31, nova_Nova_String* value32, nova_Nova_String* value33);
nova_datastruct_list_Nova_Array* generated21(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4);
nova_datastruct_list_Nova_Array* generated22(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3);
nova_datastruct_list_Nova_Array* generated23(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0);
nova_datastruct_list_Nova_Array* generated24(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10, nova_Nova_String* value11, nova_Nova_String* value12, nova_Nova_String* value13, nova_Nova_String* value14, nova_Nova_String* value15, nova_Nova_String* value16, nova_Nova_String* value17, nova_Nova_String* value18, nova_Nova_String* value19, nova_Nova_String* value20, nova_Nova_String* value21, nova_Nova_String* value22, nova_Nova_String* value23, nova_Nova_String* value24, nova_Nova_String* value25, nova_Nova_String* value26, nova_Nova_String* value27, nova_Nova_String* value28);
nova_datastruct_list_Nova_Array* generated25(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10, nova_Nova_String* value11, nova_Nova_String* value12, nova_Nova_String* value13, nova_Nova_String* value14, nova_Nova_String* value15, nova_Nova_String* value16, nova_Nova_String* value17, nova_Nova_String* value18, nova_Nova_String* value19, nova_Nova_String* value20, nova_Nova_String* value21, nova_Nova_String* value22, nova_Nova_String* value23, nova_Nova_String* value24, nova_Nova_String* value25, nova_Nova_String* value26, nova_Nova_String* value27, nova_Nova_String* value28);
nova_datastruct_list_Nova_Array* generated26(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10);
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_AND;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_OR;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_DIVIDE;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_MULTIPLY;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_MODULO;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_ADD;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_ASSIGN;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_BANG;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_EQUALS;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_NOT_EQUAL;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_INCREMENT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_DECREMENT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_AND;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_OR;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_XOR;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_LESS;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER_EQ;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_LESS_EQ;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_L_SHIFT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_R_SHIFT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_UR_SHIFT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SAFE_NAVIGATION;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MODULO;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_ADD;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_XOR;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT;
nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_UR_SHIFT;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATORS;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS_NO_MINUS;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_MINUS;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_BINARY_OPERATORS;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_LOGICAL_OPERATORS;
nova_datastruct_list_Nova_Array* spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_OPERATORS;
nova_datastruct_list_Nova_CharArray* spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS;
nova_datastruct_list_Nova_CharArray* spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATOR_CHARS;
void spectra_tree_nodes_operations_Nova_Operator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_operations_Nova_Operator_Nova_AND = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("&&"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_OR = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("||"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_DIVIDE = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_MULTIPLY = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("*"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_MODULO = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("%"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_ADD = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("+"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_ASSIGN = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_BANG = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_EQUALS = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_NOT_EQUAL = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_INCREMENT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("++"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_DECREMENT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("--"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_AND = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("&"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_OR = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("|"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_XOR = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("^"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("~"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_LESS = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER_EQ = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_LESS_EQ = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_L_SHIFT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<<"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_R_SHIFT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">>"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_UR_SHIFT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">>>"));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SAFE_NAVIGATION = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?."));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("*="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MODULO = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("%="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_ADD = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("+="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("&="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("|="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_XOR = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("^="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<<="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">>="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_UR_SHIFT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">>>="));
		spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATORS = generated20(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_INCREMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_DECREMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_EQUALS, spectra_tree_nodes_operations_Nova_Operator_Nova_BANG, spectra_tree_nodes_operations_Nova_Operator_Nova_ASSIGN, spectra_tree_nodes_operations_Nova_Operator_Nova_NOT_EQUAL, spectra_tree_nodes_operations_Nova_Operator_Nova_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_UR_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER_EQ, spectra_tree_nodes_operations_Nova_Operator_Nova_LESS_EQ, spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER, spectra_tree_nodes_operations_Nova_Operator_Nova_LESS, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_XOR, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_SAFE_NAVIGATION);
		spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS = generated21(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_BANG, spectra_tree_nodes_operations_Nova_Operator_Nova_INCREMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_DECREMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT);
		spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS_NO_MINUS = generated22(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_BANG, spectra_tree_nodes_operations_Nova_Operator_Nova_INCREMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_DECREMENT, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT);
		spectra_tree_nodes_operations_Nova_Operator_Nova_MINUS = generated23(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT);
		spectra_tree_nodes_operations_Nova_Operator_Nova_BINARY_OPERATORS = generated24(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_EQUALS, spectra_tree_nodes_operations_Nova_Operator_Nova_NOT_EQUAL, spectra_tree_nodes_operations_Nova_Operator_Nova_ASSIGN, spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER_EQ, spectra_tree_nodes_operations_Nova_Operator_Nova_LESS_EQ, spectra_tree_nodes_operations_Nova_Operator_Nova_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_UR_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER, spectra_tree_nodes_operations_Nova_Operator_Nova_LESS, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_XOR);
		spectra_tree_nodes_operations_Nova_Operator_Nova_LOGICAL_OPERATORS = generated25(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_EQUALS, spectra_tree_nodes_operations_Nova_Operator_Nova_NOT_EQUAL, spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER_EQ, spectra_tree_nodes_operations_Nova_Operator_Nova_LESS_EQ, spectra_tree_nodes_operations_Nova_Operator_Nova_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_UR_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_GREATER, spectra_tree_nodes_operations_Nova_Operator_Nova_LESS, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_XOR, spectra_tree_nodes_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT);
		spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_OPERATORS = generated26(0, exceptionData, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_ADD, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_MODULO, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_UR_SHIFT, spectra_tree_nodes_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_XOR);
		spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
		spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATOR_CHARS = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	}
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_String* l2_Nova_operator = (nova_Nova_String*)nova_null;
		nova_datastruct_list_Nova_ArrayIterator* nova_local_2 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_String* l4_Nova_unary = (nova_Nova_String*)nova_null;
		
		nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATORS)), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
		{
			nova_datastruct_list_Nova_CharArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
			char l3_Nova_c = 0;
			
			l2_Nova_operator = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
			nova_local_1 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((nova_datastruct_list_Nova_CharArray*)((l2_Nova_operator->nova_Nova_String_Nova_chars)), exceptionData);
			while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
			{
				l3_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
				nova_datastruct_list_Nova_CharArray_Nova_addUnique(spectra_tree_nodes_operations_Nova_Operator_Nova_OPERATOR_SYMBOLS, exceptionData, l3_Nova_c);
			}
		}
		nova_local_2 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATORS)), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_2), exceptionData))
		{
			nova_datastruct_list_Nova_CharArrayIterator* nova_local_3 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
			char l5_Nova_c = 0;
			
			l4_Nova_unary = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_2), exceptionData));
			nova_local_3 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((nova_datastruct_list_Nova_CharArray*)((l4_Nova_unary->nova_Nova_String_Nova_chars)), exceptionData);
			while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_3, exceptionData))
			{
				l5_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_3, exceptionData));
				nova_datastruct_list_Nova_CharArray_Nova_addUnique(spectra_tree_nodes_operations_Nova_Operator_Nova_UNARY_OPERATOR_CHARS, exceptionData, l5_Nova_c);
			}
		}
	}
}

spectra_tree_nodes_operations_Nova_Operator* spectra_tree_nodes_operations_Nova_Operator_Nova_construct(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* value)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_Operator, this,);
	this->vtable = &spectra_tree_nodes_operations_Operator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_Operator_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_Operator_Nova_this(this, exceptionData, parent, location, value);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_Operator_Nova_destroy(spectra_tree_nodes_operations_Nova_Operator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_operations_Nova_Operator_Nova_value, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_Operator_Nova_this(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* value)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	value = (nova_Nova_String*)(value == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)value);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_operations_Nova_Operator_Nova_value = value;
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_Operator_Nova_writeNova(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_operations_Nova_Operator_Nova_value;
}

nova_datastruct_list_Nova_Array* generated20(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10, nova_Nova_String* value11, nova_Nova_String* value12, nova_Nova_String* value13, nova_Nova_String* value14, nova_Nova_String* value15, nova_Nova_String* value16, nova_Nova_String* value17, nova_Nova_String* value18, nova_Nova_String* value19, nova_Nova_String* value20, nova_Nova_String* value21, nova_Nova_String* value22, nova_Nova_String* value23, nova_Nova_String* value24, nova_Nova_String* value25, nova_Nova_String* value26, nova_Nova_String* value27, nova_Nova_String* value28, nova_Nova_String* value29, nova_Nova_String* value30, nova_Nova_String* value31, nova_Nova_String* value32, nova_Nova_String* value33)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 34);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	l1_Nova_temp[9] = value9;
	l1_Nova_temp[10] = value10;
	l1_Nova_temp[11] = value11;
	l1_Nova_temp[12] = value12;
	l1_Nova_temp[13] = value13;
	l1_Nova_temp[14] = value14;
	l1_Nova_temp[15] = value15;
	l1_Nova_temp[16] = value16;
	l1_Nova_temp[17] = value17;
	l1_Nova_temp[18] = value18;
	l1_Nova_temp[19] = value19;
	l1_Nova_temp[20] = value20;
	l1_Nova_temp[21] = value21;
	l1_Nova_temp[22] = value22;
	l1_Nova_temp[23] = value23;
	l1_Nova_temp[24] = value24;
	l1_Nova_temp[25] = value25;
	l1_Nova_temp[26] = value26;
	l1_Nova_temp[27] = value27;
	l1_Nova_temp[28] = value28;
	l1_Nova_temp[29] = value29;
	l1_Nova_temp[30] = value30;
	l1_Nova_temp[31] = value31;
	l1_Nova_temp[32] = value32;
	l1_Nova_temp[33] = value33;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 34);
}

nova_datastruct_list_Nova_Array* generated21(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 5);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 5);
}

nova_datastruct_list_Nova_Array* generated22(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 4);
}

nova_datastruct_list_Nova_Array* generated23(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated24(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10, nova_Nova_String* value11, nova_Nova_String* value12, nova_Nova_String* value13, nova_Nova_String* value14, nova_Nova_String* value15, nova_Nova_String* value16, nova_Nova_String* value17, nova_Nova_String* value18, nova_Nova_String* value19, nova_Nova_String* value20, nova_Nova_String* value21, nova_Nova_String* value22, nova_Nova_String* value23, nova_Nova_String* value24, nova_Nova_String* value25, nova_Nova_String* value26, nova_Nova_String* value27, nova_Nova_String* value28)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 29);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	l1_Nova_temp[9] = value9;
	l1_Nova_temp[10] = value10;
	l1_Nova_temp[11] = value11;
	l1_Nova_temp[12] = value12;
	l1_Nova_temp[13] = value13;
	l1_Nova_temp[14] = value14;
	l1_Nova_temp[15] = value15;
	l1_Nova_temp[16] = value16;
	l1_Nova_temp[17] = value17;
	l1_Nova_temp[18] = value18;
	l1_Nova_temp[19] = value19;
	l1_Nova_temp[20] = value20;
	l1_Nova_temp[21] = value21;
	l1_Nova_temp[22] = value22;
	l1_Nova_temp[23] = value23;
	l1_Nova_temp[24] = value24;
	l1_Nova_temp[25] = value25;
	l1_Nova_temp[26] = value26;
	l1_Nova_temp[27] = value27;
	l1_Nova_temp[28] = value28;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 29);
}

nova_datastruct_list_Nova_Array* generated25(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10, nova_Nova_String* value11, nova_Nova_String* value12, nova_Nova_String* value13, nova_Nova_String* value14, nova_Nova_String* value15, nova_Nova_String* value16, nova_Nova_String* value17, nova_Nova_String* value18, nova_Nova_String* value19, nova_Nova_String* value20, nova_Nova_String* value21, nova_Nova_String* value22, nova_Nova_String* value23, nova_Nova_String* value24, nova_Nova_String* value25, nova_Nova_String* value26, nova_Nova_String* value27, nova_Nova_String* value28)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 29);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	l1_Nova_temp[9] = value9;
	l1_Nova_temp[10] = value10;
	l1_Nova_temp[11] = value11;
	l1_Nova_temp[12] = value12;
	l1_Nova_temp[13] = value13;
	l1_Nova_temp[14] = value14;
	l1_Nova_temp[15] = value15;
	l1_Nova_temp[16] = value16;
	l1_Nova_temp[17] = value17;
	l1_Nova_temp[18] = value18;
	l1_Nova_temp[19] = value19;
	l1_Nova_temp[20] = value20;
	l1_Nova_temp[21] = value21;
	l1_Nova_temp[22] = value22;
	l1_Nova_temp[23] = value23;
	l1_Nova_temp[24] = value24;
	l1_Nova_temp[25] = value25;
	l1_Nova_temp[26] = value26;
	l1_Nova_temp[27] = value27;
	l1_Nova_temp[28] = value28;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 29);
}

nova_datastruct_list_Nova_Array* generated26(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value0, nova_Nova_String* value1, nova_Nova_String* value2, nova_Nova_String* value3, nova_Nova_String* value4, nova_Nova_String* value5, nova_Nova_String* value6, nova_Nova_String* value7, nova_Nova_String* value8, nova_Nova_String* value9, nova_Nova_String* value10)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 11);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	l1_Nova_temp[9] = value9;
	l1_Nova_temp[10] = value10;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 11);
}

void spectra_tree_nodes_operations_Nova_Operator_Nova_super(spectra_tree_nodes_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_operations_Nova_Operator_Nova_value = (nova_Nova_String*)nova_null;
}

void spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_OperatorFunctionMap* spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_construct(spectra_tree_nodes_operations_Nova_OperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_OperatorFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_operations_Operator_OperatorFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_destroy(spectra_tree_nodes_operations_Nova_OperatorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_this(spectra_tree_nodes_operations_Nova_OperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_operations_Nova_Operator* spectra_tree_nodes_operations_Nova_OperatorFunctionMap_functionMapOperatorFunctionMap_static_Nova_construct(spectra_tree_nodes_operations_Nova_OperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* value)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	value = (nova_Nova_String*)(value == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)value);
	return spectra_tree_nodes_operations_Nova_Operator_Nova_construct(0, exceptionData, parent, location, value);
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_OperatorFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_operations_Nova_OperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Operator* reference)
{
	return spectra_tree_nodes_operations_Nova_Operator_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_super(spectra_tree_nodes_operations_Nova_OperatorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

