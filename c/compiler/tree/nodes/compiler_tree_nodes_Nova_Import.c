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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaClass.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_NovaFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_Import_Extension_VTable compiler_tree_nodes_Import_Extension_VTable_val =
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
	compiler_tree_nodes_Nova_Node_Nova_parseChild,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
};





nova_Nova_String* compiler_tree_nodes_Nova_Import_Nova_IDENTIFIER;
nova_Nova_String* compiler_tree_nodes_Nova_Import_Nova_ALIAS_IDENTIFIER;
void compiler_tree_nodes_Nova_Import_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_nodes_Nova_Import_Nova_IDENTIFIER = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("import"));
		compiler_tree_nodes_Nova_Import_Nova_ALIAS_IDENTIFIER = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("as"));
	}
}

compiler_tree_nodes_Nova_Import* compiler_tree_nodes_Nova_Import_Nova_construct(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Import, this,);
	this->vtable = &compiler_tree_nodes_Import_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Import_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Import_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Import_Nova_destroy(compiler_tree_nodes_Nova_Import** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Import_Nova_alias, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Import_Nova_importLocation, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_Import_Nova_this(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Node_Nova_this((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
}

nova_Nova_String* compiler_tree_nodes_Nova_Import_Nova_getClassLocation(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, int aliased)
{
	aliased = (int)(aliased == (intptr_t)nova_null ? 0 : aliased);
	return (nova_Nova_String*)(aliased && this->compiler_tree_nodes_Nova_Import_Nova_alias != (nova_Nova_String*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Import_Accessor_Nova_parentLocation(this, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Import_Nova_alias)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : this->compiler_tree_nodes_Nova_Import_Nova_importLocation);
}

compiler_tree_nodes_Nova_Import* compiler_tree_nodes_Nova_Import_static_Nova_parse(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (1)
	{
		compiler_tree_nodes_Nova_Import* l1_Nova_node = (compiler_tree_nodes_Nova_Import*)nova_null;
		char l1_Nova_quoteStart = 0;
		char l1_Nova_quoteEnd = 0;
		nova_Nova_String* l1_Nova_importLocation = (nova_Nova_String*)nova_null;
		nova_Nova_String* l1_Nova_alias = (nova_Nova_String*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_Nova_Import_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_quoteStart = 0;
		if (l1_Nova_quoteStart < 0 || (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(input->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_quoteStart) != '"')
		{
			return (compiler_tree_nodes_Nova_Import*)(nova_Nova_Object*)nova_null;
		}
		l1_Nova_quoteEnd = 0;
		if (l1_Nova_quoteEnd < 0)
		{
		}
		l1_Nova_importLocation = nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_quoteStart + 1, l1_Nova_quoteEnd);
		l1_Nova_alias = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_quoteEnd + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		if (1)
		{
			return l1_Nova_node;
		}
	}
	return (compiler_tree_nodes_Nova_Import*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* compiler_tree_nodes_Nova_Import_Accessor_Nova_parentLocation(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_substring(this->compiler_tree_nodes_Nova_Import_Nova_importLocation, exceptionData, 0, nova_Nova_String_Nova_lastIndexOf(this->compiler_tree_nodes_Nova_Import_Nova_importLocation, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, 0));
}


compiler_tree_nodes_Nova_NovaClass* compiler_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Program_Nova_getClassDeclaration(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData, this->compiler_tree_nodes_Nova_Import_Nova_importLocation);
}


void compiler_tree_nodes_Nova_Import_Nova_super(compiler_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Import_Nova_used = 0;
	this->compiler_tree_nodes_Nova_Import_Nova_alias = (nova_Nova_String*)nova_null;
	this->compiler_tree_nodes_Nova_Import_Nova_importLocation = (nova_Nova_String*)nova_null;
}

