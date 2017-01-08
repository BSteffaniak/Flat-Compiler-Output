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
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
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
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>








void spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_InstanceDeclaration* spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_construct(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_InstanceDeclaration, this,);
	this->vtable = &spectra_tree_nodes_variables_InstanceDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_destroy(spectra_tree_nodes_variables_Nova_InstanceDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_InstanceDeclaration* spectra_tree_nodes_variables_Nova_InstanceDeclaration_static_Nova_parse(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_datastruct_list_Nova_Array* l1_Nova_words = (nova_datastruct_list_Nova_Array*)nova_null;
	spectra_tree_nodes_variables_Nova_VariableDeclaration* l1_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_words = spectra_util_Nova_CompilerStringFunctions_Nova_splitValues(input, exceptionData);
	l1_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(spectra_tree_nodes_variables_Nova_VariableDeclaration_static_Nova_parse(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_Nova_takeLast((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData, 2)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), parent, location, require));
	if ((l1_Nova_declaration) != (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null)
	{
		spectra_tree_nodes_variables_Nova_InstanceDeclaration* l2_Nova_node = (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_construct(0, exceptionData, parent, location);
		if (spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(l2_Nova_node), exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_words), exceptionData) - 2))))
		{
			return (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Node*)(l1_Nova_declaration), exceptionData, (spectra_tree_nodes_Nova_Node*)(l2_Nova_node));
		}
	}
	return (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	char nova_local_0 = 0;
	
	if (spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier(((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this), exceptionData, modifier))
	{
		return 1;
	}
	do
	{
		if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("public"))))
		{
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("private"))))
		{
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("visible"))))
		{
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("protected"))))
		{
			this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility = modifier;
			break;
		}
		else if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("static"))))
		{
			this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic = 1;
			break;
		}
		else
		{
			return 0;
		}
	}
	while (0);
	return 1;
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeVisibility(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus((this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeStatic(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("static")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeVisibility(this, exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeStatic(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))))));
}

spectra_tree_nodes_variables_Nova_InstanceDeclaration* spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_InstanceDeclaration* other)
{
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo(((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this), exceptionData, (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(other));
	other->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic = this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic;
	other->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility = this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility;
	return other;
}

char spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isInstance(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return !this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic;
}


char spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_equals(this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("public")));
}


char spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility->nova_Nova_String_Nova_count == 0 || nova_Nova_String_Nova_equals(this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("private")));
}


char spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isProtected(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_equals(this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("protected")));
}


void spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic = 0;
	this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_isStatic = 0;
	this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

char spectra_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPublic(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPublic((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData);
}

char spectra_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPrivate(spectra_tree_nodes_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPrivate((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData);
}

void spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_construct(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_variables_InstanceDeclaration_InstanceDeclarationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_destroy(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_this(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_variables_Nova_InstanceDeclaration* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMapInstanceDeclarationFunctionMap_Nova_construct(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_InstanceDeclaration* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMap_Nova_parseModifier(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_InstanceDeclaration* reference, nova_Nova_String* modifier)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier(reference, exceptionData, modifier);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMap_Nova_writeVisibility(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_InstanceDeclaration* reference)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeVisibility(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMap_Nova_writeStatic(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_InstanceDeclaration* reference)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeStatic(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMap_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_InstanceDeclaration* reference)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers(reference, exceptionData);
}

spectra_tree_nodes_variables_Nova_InstanceDeclaration* spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_InstanceDeclaration* reference, spectra_tree_nodes_variables_Nova_InstanceDeclaration* other)
{
	return spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_super(spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

