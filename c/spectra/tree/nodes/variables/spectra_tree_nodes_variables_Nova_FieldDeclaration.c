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
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_InstanceDeclaration.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
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
#include <nova/operators/nova_operators_Nova_Equals.h>



spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
		0,
		0,
		0,
		(void(*)(spectra_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*))spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssigned,
	},
	spectra_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_Node_Nova_addChild,
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeNova,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scope,
	spectra_tree_nodes_Nova_Node_Mutator_Nova_scope,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_index,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_program,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic,
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate,
};



int spectra_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_findAccessorIndex(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int defaultReturnValue);
char spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parseAccessorValue(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parseInitializationValue(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_FieldDeclaration* spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_construct(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_FieldDeclaration, this,);
	this->vtable = &spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_destroy(spectra_tree_nodes_variables_Nova_FieldDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue, exceptionData);
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_this(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_FieldDeclaration* spectra_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_parse(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_initializationValue = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_accessorValue = (nova_Nova_String*)nova_null;
	char l1_Nova_twoWay = 0;
	int l1_Nova_accessorIndex = 0;
	spectra_tree_nodes_variables_Nova_InstanceDeclaration* l1_Nova_declaration = (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_initializationValue = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	l1_Nova_accessorValue = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	l1_Nova_twoWay = 0;
	l1_Nova_accessorIndex = spectra_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_findAccessorIndex(0, exceptionData, input, (intptr_t)nova_null);
	if (l1_Nova_accessorIndex > 0)
	{
		nova_Nova_String* l1_Nova_accessorOperator = (nova_Nova_String*)nova_null;
		
		l1_Nova_accessorOperator = (nova_Nova_String*)(nova_Nova_String_Nova_get(input, exceptionData, l1_Nova_accessorIndex) == '<' ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<=>")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=>")));
		l1_Nova_accessorValue = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_accessorIndex + l1_Nova_accessorOperator->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l1_Nova_twoWay = (char)(nova_Nova_String_Nova_equals(l1_Nova_accessorOperator, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<=>"))));
		input = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_accessorIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	else
	{
		int l2_Nova_initializationValueIndex = 0;
		
		l2_Nova_initializationValueIndex = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '=', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_initializationValueIndex > 0)
		{
			l1_Nova_initializationValue = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_initializationValueIndex + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			input = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l2_Nova_initializationValueIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		}
	}
	l1_Nova_declaration = (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(spectra_tree_nodes_variables_Nova_InstanceDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require));
	if (l1_Nova_declaration != (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)nova_null)
	{
		spectra_tree_nodes_variables_Nova_FieldDeclaration* l4_Nova_node = (spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null;
		
		l4_Nova_node = spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_construct(0, exceptionData, parent, location);
		if (l1_Nova_accessorValue != (nova_Nova_String*)nova_null)
		{
			l4_Nova_node->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, l1_Nova_accessorValue, (spectra_tree_nodes_Nova_Node*)(l4_Nova_node), location, (intptr_t)nova_null));
			l4_Nova_node->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_isTwoWayAccessor = l1_Nova_twoWay;
		}
		else if (l1_Nova_initializationValue != (nova_Nova_String*)nova_null)
		{
			l4_Nova_node->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, l1_Nova_initializationValue, (spectra_tree_nodes_Nova_Node*)(l4_Nova_node), location, (intptr_t)nova_null));
		}
		return (spectra_tree_nodes_variables_Nova_FieldDeclaration*)spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Node*)(l1_Nova_declaration), exceptionData, (spectra_tree_nodes_Nova_Node*)(l4_Nova_node));
	}
	return (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(nova_Nova_Object*)nova_null;
}

int spectra_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_findAccessorIndex(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int defaultReturnValue)
{
	int l1_Nova_index = 0;
	
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=>")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index < 0)
	{
		l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<=>")), (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_index < 0)
		{
			return defaultReturnValue;
		}
		else
		{
			return l1_Nova_index;
		}
	}
	else
	{
		return l1_Nova_index;
	}
}

char spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parseAccessorValue(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_Nova_Class_Nova_isOfType(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)) ? (this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue = spectra_tree_nodes_Nova_Value_1_static_Nova_parse(0, exceptionData, (spectra_tree_nodes_Nova_PlaceholderValue*)this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue, (intptr_t)nova_null)) != (spectra_tree_nodes_Nova_Value*)nova_null : 1);
}

char spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parseInitializationValue(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_Nova_Class_Nova_isOfType(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)) ? (this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue = spectra_tree_nodes_Nova_Value_1_static_Nova_parse(0, exceptionData, (spectra_tree_nodes_Nova_PlaceholderValue*)this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue, (intptr_t)nova_null)) != (spectra_tree_nodes_Nova_Value*)nova_null : 1);
}

char spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parsePlaceholders(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parseAccessorValue(this, exceptionData) & spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parseInitializationValue(this, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeInitializationValue(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue != (spectra_tree_nodes_Nova_Value*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" = "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeAccessorValue(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue != (spectra_tree_nodes_Nova_Value*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_isTwoWayAccessor ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" <=> ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" => "))))), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue), exceptionData)) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeNova(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeInitializationValue(this, exceptionData)), exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeAccessorValue(this, exceptionData)));
}

void spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_super(spectra_tree_nodes_variables_Nova_FieldDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_initializationValue = (spectra_tree_nodes_Nova_Value*)nova_null;
	this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_accessorValue = (spectra_tree_nodes_Nova_Value*)nova_null;
	this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_isTwoWayAccessor = 0;
	this->spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_isTwoWayAccessor = 0;
}

