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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_NovaFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaClass.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Bool require = true */ int* compiler_tree_nodes_Nova_Scope_Nova_require;
} Context1;


compiler_tree_nodes_Scope_Extension_VTable compiler_tree_nodes_Scope_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Scope_Nova_parseChild,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
};


CCLASS_PRIVATE
(
	int compiler_tree_nodes_Nova_Scope_Nova_id;
	
)

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Scope_Nova_parseIdentifierAccess(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Scope* parent, int require);
char compiler_tree_nodes_Nova_Scope_Nova_testLambda60(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
void compiler_tree_nodes_Nova_Scope_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Scope_Nova_construct(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Scope, this);
	this->vtable = &compiler_tree_nodes_Scope_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_NodeList_Nova_super((compiler_tree_nodes_Nova_NodeList*)this, exceptionData);
	compiler_tree_nodes_Nova_Scope_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Scope_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Scope_Nova_destroy(compiler_tree_nodes_Nova_Scope** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Scope_Nova_declarations, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_Scope_Nova_this(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_NodeList_Nova_this((compiler_tree_nodes_Nova_NodeList*)(this), exceptionData, parent, location);
	this->compiler_tree_nodes_Nova_Scope_Nova_declarations = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Scope_Nova_parseChild(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int require)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (compiler_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
	{
		l1_Nova_node = compiler_tree_nodes_Nova_Scope_Nova_parseIdentifierAccess(this, exceptionData, input, this, require);
		if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
		{
			l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Value_static_Nova_parse(0, exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), this->compiler_tree_nodes_Nova_Node_Nova_location, require));
		}
	}
	return l1_Nova_node;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Scope_Nova_parseAccessible(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, int require)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)this : (nova_Nova_Object*)parent);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (compiler_tree_nodes_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Scope_Nova_parseIdentifierAccess(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Scope* parent, int require)
{
	char l1_Nova_prev = 0;
	int l1_Nova_dot = 0;
	nova_datastruct_list_Nova_Array* l1_Nova_fragments = (nova_datastruct_list_Nova_Array*)nova_null;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_prev = 0;
	l1_Nova_dot = compiler_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(input, exceptionData, (intptr_t)nova_null);
	l1_Nova_fragments = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	while (l1_Nova_dot > 0)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_fragments), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_prev, l1_Nova_dot)));
		l1_Nova_prev = (char)(l1_Nova_dot + 1);
		l1_Nova_dot = compiler_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex(input, exceptionData, l1_Nova_prev);
	}
	if (l1_Nova_prev > 0)
	{
		compiler_tree_nodes_Nova_Accessible* l2_Nova_root = (compiler_tree_nodes_Nova_Accessible*)nova_null;
		compiler_tree_nodes_Nova_Accessible* l2_Nova_current = (compiler_tree_nodes_Nova_Accessible*)nova_null;
		
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_fragments), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_prev, (intptr_t)nova_null)));
		l2_Nova_root = compiler_tree_nodes_Nova_Scope_Nova_parseAccessible(this, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_fragments), exceptionData, 0)), 0, require);
		l2_Nova_current = l2_Nova_root;
		if (l2_Nova_current != (compiler_tree_nodes_Nova_Accessible*)nova_null)
		{
			Context1 contextArg60 = 
			{
				&require,
			};
			
			if (nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(l1_Nova_fragments), exceptionData, 1)), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_Scope_Nova_testLambda60, this, &contextArg60))
			{
				return (compiler_tree_nodes_Nova_Node*)l2_Nova_root;
			}
		}
	}
	return (compiler_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_Nova_Scope_Nova_testLambda60(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	compiler_tree_nodes_Nova_Accessible* l1_Nova_accessed = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	l1_Nova_accessed = compiler_tree_nodes_Nova_Scope_Nova_parseAccessible(this, exceptionData, _1, (compiler_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null), (*context->compiler_tree_nodes_Nova_Scope_Nova_require));
	if (l1_Nova_accessed != (compiler_tree_nodes_Nova_Accessible*)nova_null)
	{
		return 1;
	}
	return 0;
}

void compiler_tree_nodes_Nova_Scope_Nova_super(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Scope_Nova_declarations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->compiler_tree_nodes_Nova_Scope_Nova_id = 0;
}

