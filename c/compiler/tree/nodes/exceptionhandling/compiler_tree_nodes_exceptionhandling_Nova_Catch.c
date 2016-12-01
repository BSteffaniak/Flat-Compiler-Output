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
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_exceptionhandling_Catch_Extension_VTable compiler_tree_nodes_exceptionhandling_Catch_Extension_VTable_val =
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
		0,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeNova,
	compiler_tree_nodes_exceptionhandling_Nova_Catch_Accessorfunc_Nova_scope,
	compiler_tree_nodes_exceptionhandling_Nova_Catch_Mutatorfunc_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
};



char compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_parseException(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
void compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_exceptionhandling_Nova_Catch* compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_construct(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_exceptionhandling_Nova_Catch, this,);
	this->vtable = &compiler_tree_nodes_exceptionhandling_Catch_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_destroy(compiler_tree_nodes_exceptionhandling_Nova_Catch** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	compiler_tree_nodes_Nova_Type_Nova_destroy(&(*this)->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable, exceptionData);
	compiler_tree_nodes_Nova_Scope_Nova_destroy(&(*this)->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_this(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Node_Nova_this((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	compiler_tree_nodes_exceptionhandling_Nova_Catch_Mutatorfunc_Nova_scope(this, exceptionData, compiler_tree_nodes_Nova_Scope_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), location));
}

compiler_tree_nodes_exceptionhandling_Nova_Catch* compiler_tree_nodes_exceptionhandling_Nova_Catch_static_Nova_parse(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(compiler_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("catch"))))
	{
		compiler_tree_nodes_exceptionhandling_Nova_Catch* l1_Nova_node = (compiler_tree_nodes_exceptionhandling_Nova_Catch*)nova_null;
		nova_Nova_String* l1_Nova_contents = (nova_Nova_String*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("catch"))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (nova_Nova_String_Nova_equals(compiler_util_Nova_CompilerStringFunctions_Nova_nextWord(l1_Nova_contents, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("all"))))
		{
			l1_Nova_node->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft = 1;
			l1_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_contents), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("all"))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		}
		if (l1_Nova_contents->nova_Nova_String_Nova_count > 0)
		{
			if (nova_Nova_String_Accessor_Nova_first(l1_Nova_contents, exceptionData) == '(')
			{
				if (nova_Nova_String_Accessor_Nova_last(l1_Nova_contents, exceptionData) == ')')
			{
				l1_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_contents), exceptionData, 1, l1_Nova_contents->nova_Nova_String_Nova_count - 1), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			}
			else
			{
				return (compiler_tree_nodes_exceptionhandling_Nova_Catch*)(nova_Nova_Object*)nova_null;
			}
		}
		if (!compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_parseException(l1_Nova_node, exceptionData, l1_Nova_contents))
		{
			THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse exception '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_contents)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node)), 1);
		}
		else
		{
			return l1_Nova_node;
		}
	}
}
return (compiler_tree_nodes_exceptionhandling_Nova_Catch*)(nova_Nova_Object*)nova_null;}

char compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_parseException(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_datastruct_list_Nova_Array* l1_Nova_values = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_values = compiler_util_Nova_CompilerStringFunctions_Nova_splitValues(input, exceptionData);
	switch ((nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_values), exceptionData)))
	{
		case 2:
		this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable = (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_values), exceptionData, 1));
		case 1:
		return (this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception = compiler_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_values), exceptionData, 0)), 0, 0, (intptr_t)nova_null)) != (compiler_tree_nodes_Nova_Type*)nova_null;
		default:
		return 0;
	}
	return 1;
}

nova_Nova_String* compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeException(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Type_Nova_toNova(this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception, exceptionData)), exceptionData, ((nova_Nova_String*)(this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable != (nova_Nova_String*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

nova_Nova_String* compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeNova(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("catch "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("all")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ("))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeException(this, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(") "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_exceptionhandling_Nova_Catch_Accessorfunc_Nova_scope(this, exceptionData)), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_exceptionhandling_Nova_Catch_Accessorfunc_Nova_scope(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope;
}

compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_exceptionhandling_Nova_Catch_Mutatorfunc_Nova_scope(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Scope* value)
{
	this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope = value;
	return value;
}

void compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_super(compiler_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft = 0;
	this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception = (compiler_tree_nodes_Nova_Type*)nova_null;
	this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable = (nova_Nova_String*)nova_null;
	this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope = (compiler_tree_nodes_Nova_Scope*)nova_null;
	this->compiler_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft = 0;
}

