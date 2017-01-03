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
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>






spectra_tree_nodes_Nova_Value* spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_DEFAULT_IMPLICIT_REFERENCE;
void spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_DEFAULT_IMPLICIT_REFERENCE = spectra_tree_nodes_Nova_Value_Nova_construct(0, exceptionData, 0, 0, spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Object")), 0, 0, (intptr_t)nova_null));
	}
}

spectra_tree_nodes_variables_Nova_ImplicitDeclaration* spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_construct(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_ImplicitDeclaration, this,);
	this->vtable = &spectra_tree_nodes_variables_ImplicitDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_LocalDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_destroy(spectra_tree_nodes_variables_Nova_ImplicitDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_this(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_LocalDeclaration*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_ImplicitDeclaration* spectra_tree_nodes_variables_Nova_ImplicitDeclaration_static_Nova_parse(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("var"))))
	{
		nova_datastruct_list_Nova_Array* l2_Nova_values = (nova_datastruct_list_Nova_Array*)nova_null;
		
		l2_Nova_values = spectra_util_Nova_CompilerStringFunctions_Nova_splitValues(input, exceptionData);
		if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l2_Nova_values), exceptionData) == 2)
		{
			spectra_tree_nodes_variables_Nova_ImplicitDeclaration* l3_Nova_node = (spectra_tree_nodes_variables_Nova_ImplicitDeclaration*)nova_null;
			
			l3_Nova_node = spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_construct(0, exceptionData, parent, location);
			l3_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name = (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_values), exceptionData, 1));
			if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l3_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData))
			{
				l3_Nova_node->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference = spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_DEFAULT_IMPLICIT_REFERENCE;
				return l3_Nova_node;
			}
		}
	}
	return (spectra_tree_nodes_variables_Nova_ImplicitDeclaration*)(nova_Nova_Object*)nova_null;
}

void spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_onAssigned(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value)
{
	if (this->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference == spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_DEFAULT_IMPLICIT_REFERENCE)
	{
		this->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference = value;
	}
	else
	{
		this->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference = value;
	}
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_writeType(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("var"));
}

spectra_tree_nodes_variables_Nova_ImplicitDeclaration* spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_cloneTo(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_ImplicitDeclaration* other)
{
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_cloneTo(((spectra_tree_nodes_variables_Nova_LocalDeclaration*)this), exceptionData, (spectra_tree_nodes_variables_Nova_LocalDeclaration*)(other));
	other->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference = this->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference;
	return other;
}

char spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Accessor_Nova_isImplicit(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}


spectra_tree_nodes_Nova_Type* spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Accessorfunc_Nova_type(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference), exceptionData);
}


void spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_super(spectra_tree_nodes_variables_Nova_ImplicitDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_implicitReference = (spectra_tree_nodes_Nova_Value*)nova_null;
}

