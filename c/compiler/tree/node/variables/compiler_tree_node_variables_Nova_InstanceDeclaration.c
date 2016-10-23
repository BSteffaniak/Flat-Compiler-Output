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
#include <compiler/tree/node/compiler_tree_node_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/node/variables/compiler_tree_node_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Identifier.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Accessible.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Value.h>
#include <compiler/tree/node/arrays/compiler_tree_node_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaClass.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotatable.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotation.h>
#include <compiler/tree/node/exceptionhandling/compiler_tree_node_exceptionhandling_Nova_Try.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_NovaFunction.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaFile.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Program.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Scope.h>
#include <compiler/tree/node/compiler_tree_node_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_node_variables_InstanceDeclaration_Extension_VTable compiler_tree_node_variables_InstanceDeclaration_Extension_VTable_val =
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
		(void(*)(compiler_tree_node_annotation_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_node_annotation_Nova_Annotation*))compiler_tree_node_Nova_Node_Nova_addAnnotation,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_node_Nova_Node_Nova_addAnnotation,
	compiler_tree_node_Nova_Node_Nova_clone,
	compiler_tree_node_Nova_Node_Accessor_Nova_program,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_tryParse,
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
};






void compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_node_variables_Nova_InstanceDeclaration* compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_construct(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_node_variables_Nova_InstanceDeclaration, this,);
	this->vtable = &compiler_tree_node_variables_InstanceDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_node_Nova_Node_Nova_super((compiler_tree_node_Nova_Node*)this, exceptionData);
	compiler_tree_node_Nova_Value_Nova_super((compiler_tree_node_Nova_Value*)this, exceptionData);
	compiler_tree_node_Nova_Identifier_Nova_super((compiler_tree_node_Nova_Identifier*)this, exceptionData);
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_node_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_super(this, exceptionData);
	
	{
		compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_destroy(compiler_tree_node_variables_Nova_InstanceDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_this(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_this((compiler_tree_node_variables_Nova_VariableDeclaration*)(this), exceptionData, parent, location);
}

compiler_tree_node_variables_Nova_InstanceDeclaration* compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_tryParse(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (1)
	{
		compiler_tree_node_variables_Nova_InstanceDeclaration* l1_Nova_node = (compiler_tree_node_variables_Nova_InstanceDeclaration*)nova_null;
		
		l1_Nova_node = compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_construct(0, exceptionData, parent, location);
		return l1_Nova_node;
	}
	return (compiler_tree_node_variables_Nova_InstanceDeclaration*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_parseModifier(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	char nova_local_0 = 0;
	
	if (compiler_tree_node_variables_Nova_VariableDeclaration_Nova_parseModifier(((compiler_tree_node_variables_Nova_VariableDeclaration*)this), exceptionData, modifier))
	{
		return 1;
	}
	do
	{
		if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("public"))))
		{
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("private"))))
		{
			nova_local_0 = 1;
		}
		if (nova_local_0 || nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("protected"))))
		{
			this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility = modifier;
			break;
		}
		else if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("static"))))
		{
			this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_isStatic = 1;
			break;
		}
		else
		{
			return 0;
		}
	}
	while (0);
	return 1;
}

nova_Nova_String* compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeVisibility(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility != (nova_Nova_String*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeStatic(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_isStatic ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("static")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeModifiers(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeVisibility(this, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeStatic(this, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")))));
}

char compiler_tree_node_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_equals(this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("public")));
}


char compiler_tree_node_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_equals(this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("private")));
}


char compiler_tree_node_variables_Nova_InstanceDeclaration_Accessor_Nova_isProtected(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_equals(this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("protected")));
}


void compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_super(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_isStatic = 0;
	this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility = (nova_Nova_String*)nova_null;
	this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_isStatic = 0;
	this->compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_visibility = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("private"));
}

nova_Nova_String* compiler_tree_node_variables_Nova_InstanceDeclaration_virtual_Nova_writeModifiers(compiler_tree_node_variables_Nova_InstanceDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_node_variables_Nova_InstanceDeclaration_virtual_Nova_writeModifiers((compiler_tree_node_variables_Nova_InstanceDeclaration*)(this), exceptionData);
}

