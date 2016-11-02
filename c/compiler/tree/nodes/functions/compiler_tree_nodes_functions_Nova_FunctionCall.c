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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
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


compiler_tree_nodes_functions_FunctionCall_Extension_VTable compiler_tree_nodes_functions_FunctionCall_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		(compiler_tree_nodes_Nova_Identifier*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Identifier*))compiler_tree_nodes_Nova_Identifier_Mutatorfunc0_Nova_accessedNode,
		(compiler_tree_nodes_Nova_Identifier*(*)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_Nova_Identifier_Accessorfunc_Nova_accessedNode,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	nova_Nova_Object_Nova_equals,
	compiler_tree_nodes_functions_Nova_FunctionCall_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Identifier_Nova_cloneTo,
	compiler_tree_nodes_functions_Nova_FunctionCall_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse,
	compiler_tree_nodes_Nova_Identifier_Accessorfunc_Nova_accessedNode,
	compiler_tree_nodes_Nova_Identifier_Mutatorfunc0_Nova_accessedNode,
};



nova_Nova_String* compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_datastruct_list_Nova_Array* compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* argument);
char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments);
char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_testLambda30(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);

void compiler_tree_nodes_functions_Nova_FunctionCall_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_Nova_FunctionCall* compiler_tree_nodes_functions_Nova_FunctionCall_Nova_construct(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_functions_Nova_FunctionCall, this,);
	this->vtable = &compiler_tree_nodes_functions_FunctionCall_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_Variable_Nova_super((compiler_tree_nodes_variables_Nova_Variable*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_FunctionCall_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_functions_Nova_FunctionCall_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_functions_Nova_FunctionCall_Nova_destroy(compiler_tree_nodes_functions_Nova_FunctionCall** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_nodes_functions_Nova_FunctionArgumentList_Nova_destroy(&(*this)->compiler_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_functions_Nova_FunctionCall_Nova_this(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_variables_Nova_Variable_Nova_this((compiler_tree_nodes_variables_Nova_Variable*)(this), exceptionData, parent, location, 0);
	this->compiler_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList = compiler_tree_nodes_functions_Nova_FunctionArgumentList_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), location);
}

compiler_tree_nodes_functions_Nova_FunctionCall* compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_name = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_arguments = (nova_datastruct_list_Nova_Array*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_name = compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(0, exceptionData, input);
	l1_Nova_arguments = compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(0, exceptionData, input);
	if ((nova_Nova_Object*)l1_Nova_name != (nova_Nova_Object*)(nova_Nova_String*)nova_null && l1_Nova_arguments != (nova_datastruct_list_Nova_Array*)nova_null)
	{
		compiler_tree_nodes_functions_Nova_FunctionCall* l1_Nova_node = (compiler_tree_nodes_functions_Nova_FunctionCall*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_functions_Nova_FunctionCall_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_node->compiler_tree_nodes_Nova_Identifier_Nova_name = l1_Nova_name;
		if (compiler_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(l1_Nova_node, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_arguments)) && compiler_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(l1_Nova_node, exceptionData))
		{
			return l1_Nova_node;
		}
	}
	return (compiler_tree_nodes_functions_Nova_FunctionCall*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_findName(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_index > 0)
		{
			nova_Nova_String* l1_Nova_name = (nova_Nova_String*)nova_null;
			
			l1_Nova_name = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
			if (compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l1_Nova_name, exceptionData))
			{
				return l1_Nova_name;
			}
		}
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_findArguments(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
	{
		int l1_Nova_start = 0;
		
		l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
			if (l1_Nova_start > 0)
			{
				int l1_Nova_end = 0;
				
				l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
				if (l1_Nova_end > l1_Nova_start)
				{
					return compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_start + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
				}
			}
			return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
		}
		
		char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* argument)
		{
			compiler_tree_nodes_Nova_Value* l1_Nova_statement = (compiler_tree_nodes_Nova_Value*)nova_null;
			
			l1_Nova_statement = (compiler_tree_nodes_Nova_Value*)(compiler_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, argument, (compiler_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null));
			if (l1_Nova_statement != (compiler_tree_nodes_Nova_Value*)nova_null)
			{
				nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_statement));
				return 1;
			}
			return 0;
		}
		
		char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_parseArguments(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments)
		{
			Context1 contextArg30 = 
			{
			};
			
			return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(arguments), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_functions_Nova_FunctionCall_Nova_testLambda30, this, &contextArg30, (intptr_t)nova_null);
		}
		
		char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_searchDeclaration(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
		{
			return 1;
		}
		
		nova_Nova_String* compiler_tree_nodes_functions_Nova_FunctionCall_Nova_toNova(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
		{
			return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this->compiler_tree_nodes_Nova_Identifier_Nova_name), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->compiler_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
		}
		
		nova_Nova_String* compiler_tree_nodes_functions_Nova_FunctionCall_Nova_toString(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
		{
			return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Identifier_Nova_toString((compiler_tree_nodes_Nova_Identifier*)(((compiler_tree_nodes_variables_Nova_Variable*)this)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->compiler_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
		}
		
		char compiler_tree_nodes_functions_Nova_FunctionCall_Nova_testLambda30(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
		{
			return compiler_tree_nodes_functions_Nova_FunctionCall_Nova_parseArgument(this, exceptionData, _1);
		}
		
		nova_datastruct_list_Nova_Array* compiler_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
		{
			return compiler_tree_nodes_Nova_ArgumentList_Accessor_Nova_arguments((compiler_tree_nodes_Nova_ArgumentList*)(this->compiler_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList), exceptionData);
		}
		
		
		void compiler_tree_nodes_functions_Nova_FunctionCall_Nova_super(compiler_tree_nodes_functions_Nova_FunctionCall* this, nova_exception_Nova_ExceptionData* exceptionData)
		{
			this->compiler_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList = (compiler_tree_nodes_functions_Nova_FunctionArgumentList*)nova_null;
		}
		
				