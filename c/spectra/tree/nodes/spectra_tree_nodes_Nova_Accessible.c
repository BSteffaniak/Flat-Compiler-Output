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
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_SyntaxUtils.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/util/spectra_util_Nova_Location.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* var
	Accessible current */ spectra_tree_nodes_Nova_Accessible** spectra_tree_nodes_Nova_Accessible_Nova_current;
	/* Bool require = true */ int* spectra_tree_nodes_Nova_Accessible_Nova_require;
} Context118;



nova_datastruct_list_Nova_Array* generated2(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated3(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated4(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated5(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0);
char spectra_tree_nodes_Nova_Accessible_static_Nova_lambda119(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context118* context);





void spectra_tree_nodes_Nova_Accessible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(this, exceptionData, generated2(this, exceptionData, type));
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	return spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(this, exceptionData, types, 0);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Accessible*)nova_null && spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, (nova_meta_Nova_Class*)(l1_Nova_current->vtable->classInstance)) == opposite)
	{
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_current;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, char opposite, int inclusive)
{
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(this, exceptionData, generated3(this, exceptionData, type), opposite, inclusive);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite, int inclusive)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = this;
	if (inclusive && spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, (nova_meta_Nova_Class*)(l1_Nova_current->vtable->classInstance)) != opposite)
	{
		return l1_Nova_current;
	}
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Accessible*)nova_null && spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, (nova_meta_Nova_Class*)(l1_Nova_current->vtable->classInstance)) != opposite)
	{
		l1_Nova_previous = l1_Nova_current;
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_previous;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, char opposite)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(this, exceptionData, generated4(this, exceptionData, type), opposite);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = this;
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		if (spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, (nova_meta_Nova_Class*)(l1_Nova_current->vtable->classInstance)) != opposite)
		{
			l1_Nova_previous = l1_Nova_current;
		}
		l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_previous;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getLastAccessed(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_previous = this;
	l1_Nova_current = this;
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		l1_Nova_previous = l1_Nova_current;
		l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_previous;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(this, exceptionData, generated5(this, exceptionData, type));
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData));
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Accessible*)nova_null && !spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, (nova_meta_Nova_Class*)(((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance)))
	{
		l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_current;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int inclusive)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_reference = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_node = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* nova_local_0 = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	if (!spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(this, exceptionData))
	{
		if (inclusive)
		{
			return this;
		}
		return spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode(this, exceptionData, 0, 1);
	}
	l1_Nova_reference = spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode(this, exceptionData, 0, 1);
	l1_Nova_node = (spectra_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	return (spectra_tree_nodes_Nova_Accessible*)((nova_local_0 = l1_Nova_node) != (spectra_tree_nodes_Nova_Accessible*)nova_null ? nova_local_0 : l1_Nova_reference);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int requireAccessingNode, int skipPriority)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_accessing = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	requireAccessingNode = (int)(requireAccessingNode == (intptr_t)nova_null ? 0 : requireAccessingNode);
	skipPriority = (int)(skipPriority == (intptr_t)nova_null ? 0 : skipPriority);
	l1_Nova_accessing = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	if ((l1_Nova_accessing) != (spectra_tree_nodes_Nova_Accessible*)nova_null || requireAccessingNode)
	{
		return l1_Nova_accessing;
	}
	return (spectra_tree_nodes_Nova_Accessible*)spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, int require)
{
	spectra_tree_nodes_Nova_Value* l1_Nova_node = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, parent, 0, require));
	if (!nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(l1_Nova_node->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance)))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse Accessible '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', received '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_node)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), 0), 1);
	}
	else
	{
		return (spectra_tree_nodes_Nova_Accessible*)l1_Nova_node;
	}
	return (spectra_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, int require)
{
	nova_datastruct_list_Nova_Array* l2_Nova_fragments = (nova_datastruct_list_Nova_Array*)nova_null;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if ((l2_Nova_fragments = spectra_util_Nova_CompilerStringFunctions_Nova_splitAtDotOperator(input, exceptionData, 0)) != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		spectra_tree_nodes_Nova_Accessible* l3_Nova_root = (spectra_tree_nodes_Nova_Accessible*)nova_null;
		
		if ((l3_Nova_root = spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(l2_Nova_fragments), exceptionData)), parent, require)) != (spectra_tree_nodes_Nova_Accessible*)nova_null)
		{
			spectra_tree_nodes_Nova_Accessible* l3_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
			Context118* contextArg119 = NOVA_MALLOC(sizeof(Context118));
			contextArg119->spectra_tree_nodes_Nova_Accessible_Nova_current = &l3_Nova_current;
			contextArg119->spectra_tree_nodes_Nova_Accessible_Nova_require = &require;
			
			l3_Nova_current = l3_Nova_root;
			if (nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(l2_Nova_fragments), exceptionData, 1)), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_Accessible_static_Nova_lambda119, nova_null, contextArg119, (intptr_t)nova_null))
			{
				return (spectra_tree_nodes_Nova_Node*)l3_Nova_root;
			}
		}
	}
	return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* other)
{
	spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_safeNavigation((spectra_tree_nodes_Nova_Accessible*)(other), exceptionData, spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_safeNavigation((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData));
	spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(other), exceptionData, spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData));
	return other;
}

nova_Nova_String* spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(spectra_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(this, exceptionData) ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData)), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_datastruct_list_Nova_Array* generated2(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0)
{
	nova_meta_Nova_Class** l1_Nova_temp = (nova_meta_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_meta_Nova_Class**)NOVA_MALLOC(sizeof(nova_meta_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated3(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0)
{
	nova_meta_Nova_Class** l1_Nova_temp = (nova_meta_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_meta_Nova_Class**)NOVA_MALLOC(sizeof(nova_meta_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated4(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0)
{
	nova_meta_Nova_Class** l1_Nova_temp = (nova_meta_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_meta_Nova_Class**)NOVA_MALLOC(sizeof(nova_meta_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated5(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0)
{
	nova_meta_Nova_Class** l1_Nova_temp = (nova_meta_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_meta_Nova_Class**)NOVA_MALLOC(sizeof(nova_meta_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

char spectra_tree_nodes_Nova_Accessible_static_Nova_lambda119(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context118* context)
{
	spectra_tree_nodes_Nova_Accessible* l5_Nova_accessed = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	if ((l5_Nova_accessed = spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(0, exceptionData, _1, (spectra_tree_nodes_Nova_Node*)((*context->spectra_tree_nodes_Nova_Accessible_Nova_current)), (*context->spectra_tree_nodes_Nova_Accessible_Nova_require))) != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)((*context->spectra_tree_nodes_Nova_Accessible_Nova_current)), exceptionData, l5_Nova_accessed);
		(*context->spectra_tree_nodes_Nova_Accessible_Nova_current) = l5_Nova_accessed;
		return 1;
	}
	else
	{
		return 0;
	}
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_returnedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_prev = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_prev = this;
	l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData));
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		l1_Nova_prev = l1_Nova_current;
		l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)(spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_prev;
}


spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(((spectra_tree_nodes_Nova_Node*)this)->spectra_tree_nodes_Nova_Node_Nova_parent->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance)))
	{
		return (spectra_tree_nodes_Nova_Accessible*)((spectra_tree_nodes_Nova_Node*)this)->spectra_tree_nodes_Nova_Node_Nova_parent;
	}
	return (spectra_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}


char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_safeNavigation(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}

char spectra_tree_nodes_Nova_Accessible_Mutator_Nova_safeNavigation(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return value;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value)
{
	return value;
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_ClassDeclaration*)(spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(this, exceptionData) ? spectra_tree_nodes_Nova_Value_Accessor_Nova_typeClass((spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData)), exceptionData) : spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this), exceptionData));
}


char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData) != (spectra_tree_nodes_Nova_Accessible*)nova_null;
}


char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData) != (spectra_tree_nodes_Nova_Accessible*)nova_null;
}


char spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_safeNavigation(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_safeNavigation((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_safeNavigation(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_safeNavigation((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData, value);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_accessedNode((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData, value);
}

void spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_AccessibleFunctionMap* spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_construct(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_AccessibleFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Accessible_AccessibleFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_AccessibleFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_this(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap0_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_meta_Nova_Class* type)
{
	return spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType(reference, exceptionData, type);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap1_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_datastruct_list_Nova_Array* types)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(reference, exceptionData, types);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap2_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_datastruct_list_Nova_Array* types, char opposite)
{
	return spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(reference, exceptionData, types, opposite);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap0_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_meta_Nova_Class* type, char opposite, char inclusive)
{
	return spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType(reference, exceptionData, type, opposite, inclusive);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap1_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_datastruct_list_Nova_Array* types, char opposite, char inclusive)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(reference, exceptionData, types, opposite, inclusive);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap0_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_meta_Nova_Class* type, char opposite)
{
	return spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType(reference, exceptionData, type, opposite);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap1_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_datastruct_list_Nova_Array* types, char opposite)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(reference, exceptionData, types, opposite);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap_Nova_getLastAccessed(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Nova_getLastAccessed(reference, exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap0_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_meta_Nova_Class* type)
{
	return spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType(reference, exceptionData, type);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap1_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, nova_datastruct_list_Nova_Array* types)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(reference, exceptionData, types);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap_Nova_getRootReferenceNode(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, char inclusive)
{
	return spectra_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode(reference, exceptionData, inclusive);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap_Nova_getReferenceNode(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, char requireAccessingNode, char skipPriority)
{
	return spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode(reference, exceptionData, requireAccessingNode, skipPriority);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap0_static_Nova_parse(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, char require)
{
	return spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(0, exceptionData, input, parent, require);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap_static_Nova_parseDotAccess(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, char require)
{
	return spectra_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(0, exceptionData, input, parent, require);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap0_Nova_cloneTo(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference, spectra_tree_nodes_Nova_Accessible* other)
{
	return spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo(reference, exceptionData, other);
}

nova_Nova_String* spectra_tree_nodes_Nova_AccessibleFunctionMap_functionMap_Nova_writeAccessedNodes(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(reference, exceptionData);
}

void spectra_tree_nodes_Nova_AccessibleFunctionMap_Nova_super(spectra_tree_nodes_Nova_AccessibleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_AccessiblePropertyMap* spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_construct(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_AccessiblePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_Accessible_AccessiblePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_AccessiblePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_this(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap0_Nova_safeNavigation(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_safeNavigation(reference, exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap0_Nova_accessedNode(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(reference, exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap_Nova_returnedNode(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_returnedNode(reference, exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap_Nova_accessingNode(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(reference, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap_Nova_referenceClass(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass(reference, exceptionData);
}

char spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap_Nova_isAccessed(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(reference, exceptionData);
}

char spectra_tree_nodes_Nova_AccessiblePropertyMap_functionMap_Nova_doesAccess(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(reference, exceptionData);
}

void spectra_tree_nodes_Nova_AccessiblePropertyMap_Nova_super(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_Nova_AccessiblePropertyMap_virtualfunctionMap0_Nova_safeNavigation(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_AccessiblePropertyMap_virtualfunctionMap0_Nova_safeNavigation(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_AccessiblePropertyMap_virtualfunctionMap0_Nova_accessedNode(spectra_tree_nodes_Nova_AccessiblePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* reference)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_AccessiblePropertyMap_virtualfunctionMap0_Nova_accessedNode(this, exceptionData, reference);
}

