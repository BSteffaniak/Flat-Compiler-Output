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
#include <compiler/util/compiler_util_Nova_SyntaxUtils.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>



compiler_tree_nodes_Accessible_Extension_VTable compiler_tree_nodes_Accessible_Extension_VTable_val =
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
		(compiler_tree_nodes_Nova_Accessible*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Accessible*))compiler_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode,
		(compiler_tree_nodes_Nova_Accessible*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode,
		0,
	},
};



nova_datastruct_list_Nova_Array* generated20(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated21(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated22(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated23(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);





void compiler_tree_nodes_Nova_Accessible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type)
{
	return compiler_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(this, exceptionData, generated20(this, exceptionData, type));
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	return compiler_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(this, exceptionData, types, 0);
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_current = compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	while ((nova_Nova_Object*)l1_Nova_current != (nova_Nova_Object*)(compiler_tree_nodes_Nova_Accessible*)nova_null && compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) == opposite)
	{
		l1_Nova_current = compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_current;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite, int inclusive)
{
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	return compiler_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(this, exceptionData, generated21(this, exceptionData, type), opposite, inclusive);
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite, int inclusive)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_previous = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	compiler_tree_nodes_Nova_Accessible* l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	l1_Nova_previous = (compiler_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = this;
	if (inclusive && compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) != opposite)
	{
		return l1_Nova_current;
	}
	while ((nova_Nova_Object*)l1_Nova_current != (nova_Nova_Object*)(compiler_tree_nodes_Nova_Accessible*)nova_null && compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) != opposite)
	{
		l1_Nova_previous = l1_Nova_current;
		l1_Nova_current = compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(l1_Nova_current, exceptionData);
	}
	return l1_Nova_previous;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite)
{
	return compiler_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(this, exceptionData, generated22(this, exceptionData, type), opposite);
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_previous = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	compiler_tree_nodes_Nova_Accessible* l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_previous = (compiler_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = this;
	while (l1_Nova_current != (compiler_tree_nodes_Nova_Accessible*)nova_null)
	{
		if (compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance) != opposite)
		{
			l1_Nova_previous = l1_Nova_current;
		}
		l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)(compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_previous;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Nova_getLastAccessed(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_previous = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	compiler_tree_nodes_Nova_Accessible* l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_previous = this;
	l1_Nova_current = this;
	while (l1_Nova_current != (compiler_tree_nodes_Nova_Accessible*)nova_null)
	{
		l1_Nova_previous = l1_Nova_current;
		l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)(compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_previous;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type)
{
	return compiler_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(this, exceptionData, generated23(this, exceptionData, type));
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)(compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData));
	while ((nova_Nova_Object*)l1_Nova_current != (nova_Nova_Object*)(compiler_tree_nodes_Nova_Accessible*)nova_null && !compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l1_Nova_current)->vtable->classInstance))
	{
		l1_Nova_current = (compiler_tree_nodes_Nova_Accessible*)(compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(l1_Nova_current), exceptionData));
	}
	return l1_Nova_current;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int inclusive)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_reference = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	compiler_tree_nodes_Nova_Accessible* l1_Nova_node = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	if (!compiler_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(this, exceptionData))
	{
		if (inclusive)
		{
			return this;
		}
		return compiler_tree_nodes_Nova_Accessible_Nova_getReferenceNode(this, exceptionData, 0, 1);
	}
	l1_Nova_reference = compiler_tree_nodes_Nova_Accessible_Nova_getReferenceNode(this, exceptionData, 0, 1);
	l1_Nova_node = (compiler_tree_nodes_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	if (l1_Nova_node == (compiler_tree_nodes_Nova_Accessible*)nova_null)
	{
		return l1_Nova_reference;
	}
	return l1_Nova_node;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Nova_getReferenceNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int requireAccessingNode, int skipPriority)
{
	compiler_tree_nodes_Nova_Value* l1_Nova_n = (compiler_tree_nodes_Nova_Value*)nova_null;
	compiler_tree_nodes_Nova_Accessible* l1_Nova_accessing = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	requireAccessingNode = (int)(requireAccessingNode == (intptr_t)nova_null ? 0 : requireAccessingNode);
	skipPriority = (int)(skipPriority == (intptr_t)nova_null ? 0 : skipPriority);
	l1_Nova_n = (compiler_tree_nodes_Nova_Value*)((nova_Nova_Object*)nova_null);
	l1_Nova_accessing = compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	if ((nova_Nova_Object*)l1_Nova_accessing != (nova_Nova_Object*)(compiler_tree_nodes_Nova_Accessible*)nova_null || requireAccessingNode)
	{
		return l1_Nova_accessing;
	}
	return (compiler_tree_nodes_Nova_Accessible*)compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_nodes_Nova_Node*)(l1_Nova_n), exceptionData);
}

nova_Nova_String* compiler_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(compiler_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(this, exceptionData) ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("."))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData))), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_datastruct_list_Nova_Array* generated20(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated21(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated22(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated23(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Accessible* value)
{
	return value;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_n = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	l1_Nova_n = (compiler_tree_nodes_Nova_Node*)this;
	if (nova_Nova_Class_Nova_isOfType(l1_Nova_n->compiler_tree_nodes_Nova_Node_Nova_parent->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Accessible_Extension_VTable_val.classInstance)))
	{
		return (compiler_tree_nodes_Nova_Accessible*)l1_Nova_n->compiler_tree_nodes_Nova_Node_Nova_parent;
	}
	return (compiler_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}


compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (compiler_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(this, exceptionData))
	{
		return compiler_tree_nodes_Nova_Value_Accessor_Nova_typeClass(((compiler_tree_nodes_Nova_Value*)compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData)), exceptionData);
	}
	return compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_nodes_Nova_Node*)(((compiler_tree_nodes_Nova_Node*)this)), exceptionData);
}


compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData) != (compiler_tree_nodes_Nova_Accessible*)nova_null;
}


char compiler_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData) != (compiler_tree_nodes_Nova_Accessible*)nova_null;
}


char compiler_tree_nodes_Nova_Accessible_Accessor_Nova_canAccess(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_virtual_Mutator0_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Accessible* value)
{
	return this->vtable->itable.compiler_tree_nodes_Nova_Accessible_virtual_Mutator0_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData, value);
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)(this), exceptionData);
}

