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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_PropertyFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_BodyFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericParameter.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericCompatible.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_CallableFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NumericRange.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Priority.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_functions_MutatorFunction_Extension_VTable compiler_tree_nodes_functions_MutatorFunction_Extension_VTable_val =
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
		(compiler_tree_nodes_functions_Nova_Parameter*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter,
		(compiler_tree_nodes_functions_Nova_ParameterList*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList,
		(nova_datastruct_list_Nova_Array*(*)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))compiler_tree_nodes_functions_Nova_FunctionDeclaration_Mutatorfunc_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_genericParameters,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_addChild,
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_findVariableDeclaration,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_writeNova,
	compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope,
	compiler_tree_nodes_functions_Nova_BodyFunction_Mutatorfunc_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	compiler_tree_nodes_functions_Nova_MutatorFunction_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_writeReturnType,
};


void compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_Nova_MutatorFunction* compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_construct(compiler_tree_nodes_functions_Nova_MutatorFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_functions_Nova_MutatorFunction, this,);
	this->vtable = &compiler_tree_nodes_functions_MutatorFunction_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_super((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_super((compiler_tree_nodes_functions_Nova_BodyFunction*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_PropertyFunction_Nova_super((compiler_tree_nodes_functions_Nova_PropertyFunction*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_destroy(compiler_tree_nodes_functions_Nova_MutatorFunction** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_this(compiler_tree_nodes_functions_Nova_MutatorFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_functions_Nova_PropertyFunction_Nova_this((compiler_tree_nodes_functions_Nova_PropertyFunction*)(this), exceptionData, parent, location);
}

compiler_tree_nodes_functions_Nova_MutatorFunction* compiler_tree_nodes_functions_Nova_MutatorFunction_static_Nova_parse(compiler_tree_nodes_functions_Nova_MutatorFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
}

void compiler_tree_nodes_functions_Nova_MutatorFunction_Nova_super(compiler_tree_nodes_functions_Nova_MutatorFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

