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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_FieldDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_BodyFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Abstractable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_NovaInterface_Extension_VTable compiler_tree_nodes_NovaInterface_Extension_VTable_val =
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
		(char(*)(compiler_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, char))compiler_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract,
		(char(*)(compiler_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_isAbstract,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_addChild,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseStatement,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_replace,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_ClassDeclaration_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers,
	compiler_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPublic,
	compiler_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPrivate,
};


void compiler_tree_nodes_Nova_NovaInterface_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_NovaInterface* compiler_tree_nodes_Nova_NovaInterface_Nova_construct(compiler_tree_nodes_Nova_NovaInterface* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_NovaInterface, this,);
	this->vtable = &compiler_tree_nodes_NovaInterface_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_super((compiler_tree_nodes_Nova_ClassDeclaration*)this, exceptionData);
	compiler_tree_nodes_Nova_NovaInterface_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_NovaInterface_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_NovaInterface_Nova_destroy(compiler_tree_nodes_Nova_NovaInterface** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_NovaInterface_Nova_this(compiler_tree_nodes_Nova_NovaInterface* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_tree_nodes_Nova_NovaInterface_Nova_super(compiler_tree_nodes_Nova_NovaInterface* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

