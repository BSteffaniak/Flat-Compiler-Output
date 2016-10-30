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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
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
} Context1;
typedef struct
{
} Context2;


compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable_val =
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
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_parseChild,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_static_Nova_parse,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier,
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers,
};



char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_testLambda18(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_testLambda19(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_variables_Nova_VariableDeclaration, this,);
	this->vtable = &compiler_tree_nodes_variables_VariableDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_destroy(compiler_tree_nodes_variables_Nova_VariableDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_this(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Identifier_Nova_this((compiler_tree_nodes_Nova_Identifier*)(this), exceptionData, parent, location);
}

compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_variables_Nova_VariableDeclaration_static_Nova_parse(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	int l1_Nova_nameStart = 0;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_nameStart = compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(input, exceptionData, input->nova_Nova_String_Nova_count - 2, -1, (intptr_t)nova_null);
	if (l1_Nova_nameStart > 0)
	{
		compiler_tree_nodes_variables_Nova_VariableDeclaration* l1_Nova_node = (compiler_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_node->compiler_tree_nodes_Nova_Identifier_Nova_name = nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_nameStart + 1, (intptr_t)nova_null);
		if (compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l1_Nova_node->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData) && compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseType(l1_Nova_node, exceptionData, input))
		{
			return l1_Nova_node;
		}
	}
	return (compiler_tree_nodes_variables_Nova_VariableDeclaration*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseType(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	this->compiler_tree_nodes_Nova_Value_Nova_type = compiler_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	if (this->compiler_tree_nodes_Nova_Value_Nova_type != (nova_Nova_String*)nova_null)
	{
		return compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(this->compiler_tree_nodes_Nova_Value_Nova_type, exceptionData);
	}
	return 0;
}

char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	return 0;
}

char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifiers(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	Context1 contextArg18 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(modifiers, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))))), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_testLambda18, this, &contextArg18);
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	Context2 contextArg19 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(modifiers, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))))), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_testLambda19, this, &contextArg19);
}

nova_Nova_String* compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

nova_Nova_String* compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_toString(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Value_Nova_writeType((compiler_tree_nodes_Nova_Value*)(this), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
}

compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_VariableDeclaration* other)
{
	compiler_tree_nodes_Nova_Identifier_Nova_cloneTo(((compiler_tree_nodes_Nova_Identifier*)this), exceptionData, (compiler_tree_nodes_Nova_Identifier*)(other));
	return other;
}

char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_testLambda18(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	return x->nova_Nova_String_Nova_count == 0 || compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, x);
}

char compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_testLambda19(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return x->nova_Nova_String_Nova_count > 0 && !compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, x);
}

void compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	return this->vtable->compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, modifier);
}

nova_Nova_String* compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers(compiler_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData);
}
