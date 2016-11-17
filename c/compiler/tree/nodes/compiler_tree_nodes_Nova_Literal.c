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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
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



compiler_tree_nodes_Literal_Extension_VTable compiler_tree_nodes_Literal_Extension_VTable_val =
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
		(compiler_tree_nodes_Nova_Accessible*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Accessible*))compiler_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode,
		(compiler_tree_nodes_Nova_Accessible*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	compiler_tree_nodes_Nova_Literal_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Value_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_Literal_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



nova_Nova_String* compiler_tree_nodes_Nova_Literal_static_Nova_getLiteralType(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char compiler_tree_nodes_Nova_Literal_Nova_formatValue(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_Literal_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_Literal* compiler_tree_nodes_Nova_Literal_Nova_construct(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Literal, this,);
	this->vtable = &compiler_tree_nodes_Literal_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Literal_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Literal_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Literal_Nova_destroy(compiler_tree_nodes_Nova_Literal** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Literal_Nova_value, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_Literal_Nova_this(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Value_Nova_this((compiler_tree_nodes_Nova_Value*)(this), exceptionData, parent, location);
}

compiler_tree_nodes_Nova_Literal* compiler_tree_nodes_Nova_Literal_static_Nova_parse(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_type = (nova_Nova_String*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_type = compiler_tree_nodes_Nova_Literal_static_Nova_getLiteralType(0, exceptionData, input);
	if (l1_Nova_type != (nova_Nova_String*)nova_null)
	{
		compiler_tree_nodes_Nova_Literal* l1_Nova_node = (compiler_tree_nodes_Nova_Literal*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_Nova_Literal_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_node->compiler_tree_nodes_Nova_Value_Nova_type = compiler_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, l1_Nova_type, 0, 0, (intptr_t)nova_null);
		l1_Nova_node->compiler_tree_nodes_Nova_Literal_Nova_value = input;
		if (compiler_tree_nodes_Nova_Literal_Nova_formatValue(l1_Nova_node, exceptionData))
		{
			return l1_Nova_node;
		}
	}
	return (compiler_tree_nodes_Nova_Literal*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* compiler_tree_nodes_Nova_Literal_static_Nova_getLiteralType(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	if (input->nova_Nova_String_Nova_count >= 2 && nova_Nova_String_Nova_get(input, exceptionData, 0) == '"' && (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_last((nova_datastruct_list_Nova_CharArray*)(input->nova_Nova_String_Nova_chars), exceptionData) == '"')
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("String"));
	}
	else if (compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isNumber(input, exceptionData))
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Int"));
	}
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_Nova_Literal_Nova_formatValue(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_Nova_String_Nova_equals(this->compiler_tree_nodes_Nova_Value_Nova_type->compiler_tree_nodes_Nova_Type_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("String"))))
	{
	}
	return 1;
}

nova_Nova_String* compiler_tree_nodes_Nova_Literal_Nova_toString(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_Nova_Literal_Nova_value;
}

void compiler_tree_nodes_Nova_Literal_Nova_super(compiler_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Literal_Nova_value = (nova_Nova_String*)nova_null;
}

