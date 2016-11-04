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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
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

typedef struct
{
	/* String input */ nova_Nova_String** compiler_tree_nodes_Nova_StaticClassReference_Nova_input;
} Context1;


compiler_tree_nodes_StaticClassReference_Extension_VTable compiler_tree_nodes_StaticClassReference_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		(compiler_tree_nodes_Nova_Accessible*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Accessible*))compiler_tree_nodes_Nova_StaticClassReference_Mutatorfunc0_Nova_accessedNode,
		(compiler_tree_nodes_Nova_Accessible*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_Nova_StaticClassReference_Accessorfunc_Nova_accessedNode,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	compiler_tree_nodes_Nova_Identifier_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Identifier_Nova_cloneTo,
	compiler_tree_nodes_Nova_StaticClassReference_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_StaticClassReference_static_Nova_parse,
};



char compiler_tree_nodes_Nova_StaticClassReference_static_Nova_testLambda32(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context1* context);
void compiler_tree_nodes_Nova_StaticClassReference_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_StaticClassReference* compiler_tree_nodes_Nova_StaticClassReference_Nova_construct(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, nova_Nova_String* name)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_StaticClassReference, this,);
	this->vtable = &compiler_tree_nodes_StaticClassReference_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_Nova_StaticClassReference_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_StaticClassReference_Nova_this(this, exceptionData, parent, location, name);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_StaticClassReference_Nova_destroy(compiler_tree_nodes_Nova_StaticClassReference** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_StaticClassReference_Nova_this(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, nova_Nova_String* name)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	compiler_tree_nodes_Nova_Identifier_Nova_this((compiler_tree_nodes_Nova_Identifier*)(this), exceptionData, parent, location);
	this->compiler_tree_nodes_Nova_Identifier_Nova_name = name;
	this->compiler_tree_nodes_Nova_Value_Nova_type = name;
}

compiler_tree_nodes_Nova_StaticClassReference* compiler_tree_nodes_Nova_StaticClassReference_static_Nova_parse(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	Context1 contextArg32 = 
	{
		&input,
	};
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (compiler_tree_nodes_Nova_StaticClassReference*)(nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_tree_nodes_Nova_StaticClassReference_static_Nova_testLambda32, nova_null, &contextArg32) ? (nova_Nova_Object*)compiler_tree_nodes_Nova_StaticClassReference_Nova_construct(0, exceptionData, parent, location, input) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* compiler_tree_nodes_Nova_StaticClassReference_Nova_toNova(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Node_Nova_toNova((compiler_tree_nodes_Nova_Node*)(((compiler_tree_nodes_Nova_Identifier*)this)), exceptionData)), exceptionData, compiler_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData));
}

char compiler_tree_nodes_Nova_StaticClassReference_static_Nova_testLambda32(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(compiler_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, (*context->compiler_tree_nodes_Nova_StaticClassReference_Nova_input));
}

char compiler_tree_nodes_Nova_StaticClassReference_Accessorfunc_Nova_safeNavigation(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_Nova_StaticClassReference_Nova_safeNavigation;
}

char compiler_tree_nodes_Nova_StaticClassReference_Mutatorfunc_Nova_safeNavigation(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->compiler_tree_nodes_Nova_StaticClassReference_Nova_safeNavigation = value;
	return value;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_StaticClassReference_Accessorfunc_Nova_accessedNode(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_Nova_StaticClassReference_Nova_accessedNode;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_StaticClassReference_Mutatorfunc0_Nova_accessedNode(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Accessible* value)
{
	this->compiler_tree_nodes_Nova_StaticClassReference_Nova_accessedNode = value;
	return value;
}

void compiler_tree_nodes_Nova_StaticClassReference_Nova_super(compiler_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_StaticClassReference_Nova_safeNavigation = 0;
	this->compiler_tree_nodes_Nova_StaticClassReference_Nova_accessedNode = (compiler_tree_nodes_Nova_Accessible*)nova_null;
}

