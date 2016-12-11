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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_SyntaxUtils.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>

typedef struct
{
	/* var
	Accessible current */ spectra_tree_nodes_Nova_Accessible** spectra_tree_nodes_Nova_Accessible_Nova_current;
	/* Bool require = true */ int* spectra_tree_nodes_Nova_Accessible_Nova_require;
} Context1;


spectra_tree_nodes_Accessible_Extension_VTable spectra_tree_nodes_Accessible_Extension_VTable_val =
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
	},
};



nova_datastruct_list_Nova_Array* generated22(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated23(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated24(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated25(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
char spectra_tree_nodes_Nova_Accessible_static_Nova_lambda109(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);






void spectra_tree_nodes_Nova_Accessible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(this, exceptionData, generated22(this, exceptionData, type));
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	return spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(this, exceptionData, types, 0);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	while (l1_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null && spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) == opposite)
	{
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_current;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite, int inclusive)
{
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(this, exceptionData, generated23(this, exceptionData, type), opposite, inclusive);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite, int inclusive)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = this;
	if (inclusive && spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) != opposite)
	{
		return l1_Nova_current;
	}
	while (l1_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null && spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) != opposite)
	{
		l1_Nova_previous = l1_Nova_current;
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_previous;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(this, exceptionData, generated24(this, exceptionData, type), opposite);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = this;
	while (l1_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		if (spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) != opposite)
		{
			l1_Nova_previous = l1_Nova_current;
		}
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_previous;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getLastAccessed(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_previous = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_previous = this;
	l1_Nova_current = this;
	while (l1_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		l1_Nova_previous = l1_Nova_current;
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_previous;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type)
{
	return spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(this, exceptionData, generated25(this, exceptionData, type));
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(this, exceptionData);
	while (l1_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null && !spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance))
	{
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(l1_Nova_current, exceptionData);
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
	spectra_tree_nodes_Nova_Value* l1_Nova_n = (spectra_tree_nodes_Nova_Value*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_accessing = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	requireAccessingNode = (int)(requireAccessingNode == (intptr_t)nova_null ? 0 : requireAccessingNode);
	skipPriority = (int)(skipPriority == (intptr_t)nova_null ? 0 : skipPriority);
	l1_Nova_n = (spectra_tree_nodes_Nova_Value*)((nova_Nova_Object*)nova_null);
	l1_Nova_accessing = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	if (l1_Nova_accessing != (spectra_tree_nodes_Nova_Accessible*)nova_null || requireAccessingNode)
	{
		return l1_Nova_accessing;
	}
	return (spectra_tree_nodes_Nova_Accessible*)spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(l1_Nova_n), exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, int require)
{
	spectra_tree_nodes_Nova_Value* l1_Nova_node = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, parent, 0, require));
	if (nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance)))
	{
		return (spectra_tree_nodes_Nova_Accessible*)l1_Nova_node;
	}
	else
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse Accessible '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', received '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_node)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), 0), 1);
		return (spectra_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
	}
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, int require)
{
	nova_datastruct_list_Nova_Array* l1_Nova_fragments = (nova_datastruct_list_Nova_Array*)nova_null;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_fragments = spectra_util_Nova_CompilerStringFunctions_Nova_splitAtDotOperator(input, exceptionData, 0);
	if (l1_Nova_fragments != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		spectra_tree_nodes_Nova_Accessible* l2_Nova_root = (spectra_tree_nodes_Nova_Accessible*)nova_null;
		spectra_tree_nodes_Nova_Accessible* l2_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
		
		l2_Nova_root = spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_first((nova_datastruct_list_Nova_List*)(l1_Nova_fragments), exceptionData)), parent, require);
		l2_Nova_current = l2_Nova_root;
		if (l2_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null)
		{
			Context1* contextArg109 = NOVA_MALLOC(sizeof(Context1));
			contextArg109->spectra_tree_nodes_Nova_Accessible_Nova_current = &l2_Nova_current;
			contextArg109->spectra_tree_nodes_Nova_Accessible_Nova_require = &require;
			
			if (nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(l1_Nova_fragments), exceptionData, 1)), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_Nova_Accessible_static_Nova_lambda109, nova_null, contextArg109, (intptr_t)nova_null))
			{
				return (spectra_tree_nodes_Nova_Node*)l2_Nova_root;
			}
		}
	}
	return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* other)
{
	spectra_tree_nodes_Nova_Accessible_Mutator_Nova_safeNavigation(other, exceptionData, spectra_tree_nodes_Nova_Accessible_Accessor_Nova_safeNavigation(this, exceptionData));
	spectra_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode(other, exceptionData, spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(this, exceptionData));
	return other;
}

nova_Nova_String* spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(spectra_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(this, exceptionData) ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("."))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_Nova_Node*)spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(this, exceptionData))), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(this, exceptionData), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_datastruct_list_Nova_Array* generated22(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated23(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated24(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated25(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

char spectra_tree_nodes_Nova_Accessible_static_Nova_lambda109(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	spectra_tree_nodes_Nova_Accessible* l4_Nova_accessed = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l4_Nova_accessed = spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(0, exceptionData, _1, (spectra_tree_nodes_Nova_Node*)(*context->spectra_tree_nodes_Nova_Accessible_Nova_current), (*context->spectra_tree_nodes_Nova_Accessible_Nova_require));
	if (l4_Nova_accessed != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		spectra_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode((*context->spectra_tree_nodes_Nova_Accessible_Nova_current), exceptionData, l4_Nova_accessed);
		return 1;
	}
	return 0;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value)
{
	return value;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_returnedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Accessible* l1_Nova_prev = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	spectra_tree_nodes_Nova_Accessible* l1_Nova_current = (spectra_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_prev = this;
	l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(this, exceptionData);
	while (l1_Nova_current != (spectra_tree_nodes_Nova_Accessible*)nova_null)
	{
		l1_Nova_prev = l1_Nova_current;
		l1_Nova_current = spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_prev;
}


spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_n = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	l1_Nova_n = (spectra_tree_nodes_Nova_Node*)this;
	if (nova_Nova_Class_Nova_isOfType(l1_Nova_n->spectra_tree_nodes_Nova_Node_Nova_parent->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Accessible_Extension_VTable_val.classInstance)))
	{
		return (spectra_tree_nodes_Nova_Accessible*)l1_Nova_n->spectra_tree_nodes_Nova_Node_Nova_parent;
	}
	return (spectra_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}


spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(this, exceptionData))
	{
		return spectra_tree_nodes_Nova_Value_Accessor_Nova_typeClass(((spectra_tree_nodes_Nova_Value*)spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData)), exceptionData);
	}
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_Nova_Node*)this)), exceptionData);
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

char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData) != (spectra_tree_nodes_Nova_Accessible*)nova_null;
}


char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(this, exceptionData) != (spectra_tree_nodes_Nova_Accessible*)nova_null;
}


char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_canAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


