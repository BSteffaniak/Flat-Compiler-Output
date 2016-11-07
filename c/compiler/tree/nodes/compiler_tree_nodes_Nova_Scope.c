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
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignment.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* Accessible current */ compiler_tree_nodes_Nova_Accessible** compiler_tree_nodes_Nova_Scope_Nova_current;
	/* Bool require = true */ int* compiler_tree_nodes_Nova_Scope_Nova_require;
} Context3;


compiler_tree_nodes_Scope_Extension_VTable compiler_tree_nodes_Scope_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Scope_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Scope_Nova_toNova,
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

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Scope_Nova_parseIdentifierAccess(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, int require);
char compiler_tree_nodes_Nova_Scope_Nova_testLambda30(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_testLambda31(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
char compiler_tree_nodes_Nova_Scope_Nova_testLambda93(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context);

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

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Scope_Nova_parseStatement(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (compiler_tree_nodes_Nova_Node_Accessor_Nova_phase((compiler_tree_nodes_Nova_Node*)(this), exceptionData) == 1)
	{
		return (compiler_tree_nodes_Nova_Node*)compiler_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, input, parent, location, (intptr_t)nova_null);
	}
	l1_Nova_node = (compiler_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
	{
		l1_Nova_node = compiler_tree_nodes_Nova_Scope_Nova_parseIdentifierAccess(this, exceptionData, input, parent, require);
		if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
		{
			l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_operations_Nova_Assignment_static_Nova_parse(0, exceptionData, input, parent, location, require));
			if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
			{
				l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_operations_Nova_Operation_static_Nova_parse(0, exceptionData, input, parent, location, require));
				if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
				{
					l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, parent, location, require));
				}
			}
		}
	}
	return l1_Nova_node;
}

compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Scope_Nova_parseAccessible(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, int require)
{
	nova_Nova_Object* l1_Nova_node = (nova_Nova_Object*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)this->compiler_tree_nodes_Nova_Node_Nova_parent : (nova_Nova_Object*)parent);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (nova_Nova_Object*)nova_null;
	if (!(l1_Nova_node != (nova_Nova_Object*)nova_null))
	{
		l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_StaticClassReference_static_Nova_parse(0, exceptionData, input, parent, this->compiler_tree_nodes_Nova_Node_Nova_location, require));
		if (!(l1_Nova_node != (nova_Nova_Object*)nova_null))
		{
			l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse(0, exceptionData, input, parent, this->compiler_tree_nodes_Nova_Node_Nova_location, require));
		}
	}
	return (compiler_tree_nodes_Nova_Accessible*)l1_Nova_node;
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Scope_Nova_parseIdentifierAccess(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, int require)
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
			Context3 contextArg93 = 
			{
				&l2_Nova_current,
				&require,
			};
			
			if (nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(l1_Nova_fragments), exceptionData, 1)), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_Scope_Nova_testLambda93, this, &contextArg93, (intptr_t)nova_null))
			{
				return (compiler_tree_nodes_Nova_Node*)l2_Nova_root;
			}
		}
	}
	return (compiler_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg30 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_Scope_Nova_testLambda30, this, &contextArg30, 0);
}

nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_toNova(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg31 = 
	{
	};
	
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("{\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_Scope_Nova_testLambda31, this, &contextArg31)), exceptionData, 0)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("}"))));
}

char compiler_tree_nodes_Nova_Scope_Nova_testLambda30(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)))
	{
		compiler_tree_nodes_Nova_PlaceholderValue* l2_Nova_placeholder = (compiler_tree_nodes_Nova_PlaceholderValue*)nova_null;
		compiler_tree_nodes_Nova_Node* l2_Nova_parsed = (compiler_tree_nodes_Nova_Node*)nova_null;
		
		l2_Nova_placeholder = (compiler_tree_nodes_Nova_PlaceholderValue*)child;
		l2_Nova_parsed = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Scope_Nova_parseStatement(this, exceptionData, compiler_tree_nodes_Nova_PlaceholderValue_Accessor_Nova_value(l2_Nova_placeholder, exceptionData), child->compiler_tree_nodes_Nova_Node_Nova_parent, child->compiler_tree_nodes_Nova_Node_Nova_location, 1));
		if (l2_Nova_parsed != (compiler_tree_nodes_Nova_Node*)nova_null)
		{
			return nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(child), (nova_Nova_Object*)(l2_Nova_parsed));
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
}

nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_testLambda31(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

char compiler_tree_nodes_Nova_Scope_Nova_testLambda93(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context)
{
	compiler_tree_nodes_Nova_Accessible* l4_Nova_accessed = (compiler_tree_nodes_Nova_Accessible*)nova_null;
	
	l4_Nova_accessed = compiler_tree_nodes_Nova_Scope_Nova_parseAccessible(this, exceptionData, _1, (compiler_tree_nodes_Nova_Node*)(*context->compiler_tree_nodes_Nova_Scope_Nova_current), (*context->compiler_tree_nodes_Nova_Scope_Nova_require));
	if (l4_Nova_accessed != (compiler_tree_nodes_Nova_Accessible*)nova_null)
	{
		compiler_tree_nodes_Nova_Accessible_virtual_Mutator0_Nova_accessedNode((compiler_tree_nodes_Nova_Accessible*)((*context->compiler_tree_nodes_Nova_Scope_Nova_current)), exceptionData, l4_Nova_accessed);
		return 1;
	}
	return 0;
}

int compiler_tree_nodes_Nova_Scope_Accessor_Nova_depth(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_current = (compiler_tree_nodes_Nova_Node*)nova_null;
	char l1_Nova_depth = 0;
	
	l1_Nova_current = (compiler_tree_nodes_Nova_Node*)(this);
	l1_Nova_depth = 0;
	while (l1_Nova_current != (compiler_tree_nodes_Nova_Node*)nova_null)
	{
		l1_Nova_depth++;
		l1_Nova_current = compiler_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(l1_Nova_current, exceptionData);
	}
	return (int)l1_Nova_depth;
}


void compiler_tree_nodes_Nova_Scope_Nova_super(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Scope_Nova_declarations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->compiler_tree_nodes_Nova_Scope_Nova_id = 0;
}

