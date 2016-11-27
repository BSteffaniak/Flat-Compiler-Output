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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignment.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Catch.h>
#include <compiler/tree/nodes/controlstructures/compiler_tree_nodes_controlstructures_Nova_IfStatement.h>
#include <compiler/tree/nodes/controlstructures/compiler_tree_nodes_controlstructures_Nova_ElseStatement.h>
#include <compiler/tree/nodes/controlstructures/loops/compiler_tree_nodes_controlstructures_loops_Nova_Loop.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Return.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
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
		0,
		0,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Scope_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Scope_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
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

nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child);
nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_childToNova(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child);
nova_datastruct_list_Nova_Array* generated12(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0, nova_Nova_Class* value1);
char compiler_tree_nodes_Nova_Scope_Nova_testLambda36(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);

nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_Scope_Nova_LADDER_FORM;
void compiler_tree_nodes_Nova_Scope_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_nodes_Nova_Scope_Nova_LADDER_FORM = generated12(0, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val.classInstance), (nova_Nova_Class*)(compiler_tree_nodes_exceptionhandling_Catch_Extension_VTable_val.classInstance));
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
		l1_Nova_node = compiler_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(0, exceptionData, input, parent, require);
		if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
		{
			l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_controlstructures_Nova_IfStatement_static_Nova_parse(0, exceptionData, input, parent, location, require));
			if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
			{
				l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_controlstructures_Nova_ElseStatement_static_Nova_parse(0, exceptionData, input, parent, location, require));
				if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
				{
					l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_controlstructures_loops_Nova_Loop_static_Nova_parse(0, exceptionData, input, parent, location, require));
					if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
					{
						l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Return_static_Nova_parse(0, exceptionData, input, parent, location, require));
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
				}
			}
		}
	}
	return l1_Nova_node;
}

char compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg36 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_Scope_Nova_testLambda36, this, &contextArg36, 0);
}

nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Scope_Nova_LADDER_FORM), exceptionData, (nova_Nova_Object*)(child->vtable->classInstance)) ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_childToNova(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(this, exceptionData, child)), exceptionData, compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(child), exceptionData));
}

nova_Nova_String* compiler_tree_nodes_Nova_Scope_Nova_toNova(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("{"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_Scope_Nova_childToNova, this, nova_null)), exceptionData, 0)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n}"))));
}

nova_datastruct_list_Nova_Array* generated12(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0, nova_Nova_Class* value1)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 2);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

char compiler_tree_nodes_Nova_Scope_Nova_testLambda36(compiler_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)))
	{
		compiler_tree_nodes_Nova_PlaceholderValue* l2_Nova_placeholder = (compiler_tree_nodes_Nova_PlaceholderValue*)nova_null;
		compiler_tree_nodes_Nova_Node* l2_Nova_parsed = (compiler_tree_nodes_Nova_Node*)nova_null;
		
		l2_Nova_placeholder = (compiler_tree_nodes_Nova_PlaceholderValue*)child;
		l2_Nova_parsed = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Scope_Nova_parseStatement(this, exceptionData, l2_Nova_placeholder->compiler_tree_nodes_Nova_PlaceholderValue_Nova_value, child->compiler_tree_nodes_Nova_Node_Nova_parent, child->compiler_tree_nodes_Nova_Node_Nova_location, 1));
		if (l2_Nova_parsed != (compiler_tree_nodes_Nova_Node*)nova_null)
		{
			nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(child), (nova_Nova_Object*)(l2_Nova_parsed));
			if (compiler_tree_nodes_Nova_PlaceholderValue_Accessorfunc_Nova_scope(l2_Nova_placeholder, exceptionData) != (compiler_tree_nodes_Nova_Scope*)nova_null)
			{
				compiler_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope((compiler_tree_nodes_Nova_Node*)(l2_Nova_parsed), exceptionData, compiler_tree_nodes_Nova_PlaceholderValue_Accessorfunc_Nova_scope(l2_Nova_placeholder, exceptionData));
				if (compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((compiler_tree_nodes_Nova_Node*)(l2_Nova_parsed), exceptionData) != (compiler_tree_nodes_Nova_Scope*)nova_null)
				{
					return compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((compiler_tree_nodes_Nova_Node*)(l2_Nova_parsed), exceptionData), exceptionData);
				}
			}
			return 1;
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

