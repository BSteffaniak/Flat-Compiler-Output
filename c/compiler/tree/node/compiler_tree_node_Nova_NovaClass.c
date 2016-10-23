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
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/node/variables/compiler_tree_node_variables_Nova_InstanceDeclaration.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Abstractable.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Node.h>
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

typedef struct
{
	/* NovaClass node */ compiler_tree_node_Nova_NovaClass** compiler_tree_node_Nova_NovaClass_Nova_node;
} Context1;


compiler_tree_node_NovaClass_Extension_VTable compiler_tree_node_NovaClass_Extension_VTable_val =
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
		(nova_Nova_String*(*)(compiler_tree_node_Nova_Abstractable*, nova_exception_Nova_ExceptionData*))compiler_tree_node_Nova_NovaClass_Nova_writeAbstract,
		(void(*)(compiler_tree_node_annotation_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_node_annotation_Nova_Annotation*))compiler_tree_node_Nova_Node_Nova_addAnnotation,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	compiler_tree_node_Nova_NovaClass_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_node_Nova_Node_Nova_addAnnotation,
	compiler_tree_node_Nova_Node_Nova_clone,
	compiler_tree_node_Nova_Node_Accessor_Nova_program,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_node_Nova_NovaClass_Accessor_Nova_parentClass,
	compiler_tree_node_Nova_NovaClass_Nova_tryParse,
	compiler_tree_node_Nova_NovaClass_Nova_parseModifier,
	compiler_tree_node_Nova_NovaClass_Nova_writeModifiers,
	compiler_tree_node_Nova_NovaClass_Nova_writeAbstract,
};



char compiler_tree_node_Nova_NovaClass_Nova_parseExtension(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_node_Nova_NovaClass_Nova_parseImplementations(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_node_Nova_NovaClass_Nova_testLambda58(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);

void compiler_tree_node_Nova_NovaClass_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_node_Nova_NovaClass* compiler_tree_node_Nova_NovaClass_Nova_construct(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_node_Nova_NovaClass, this,);
	this->vtable = &compiler_tree_node_NovaClass_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_node_Nova_Node_Nova_super((compiler_tree_node_Nova_Node*)this, exceptionData);
	compiler_tree_node_Nova_Value_Nova_super((compiler_tree_node_Nova_Value*)this, exceptionData);
	compiler_tree_node_Nova_Identifier_Nova_super((compiler_tree_node_Nova_Identifier*)this, exceptionData);
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_node_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_node_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_node_Nova_NovaClass_Nova_super(this, exceptionData);
	
	{
		compiler_tree_node_Nova_NovaClass_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_node_Nova_NovaClass_Nova_destroy(compiler_tree_node_Nova_NovaClass** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void compiler_tree_node_Nova_NovaClass_Nova_this(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_this((compiler_tree_node_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
}

compiler_tree_node_Nova_NovaClass* compiler_tree_node_Nova_NovaClass_Nova_tryParse(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	int l1_Nova_index = 0;
	
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_index = nova_Nova_String_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index >= 0)
	{
		compiler_tree_node_Nova_NovaClass* l1_Nova_node = (compiler_tree_node_Nova_NovaClass*)nova_null;
		nova_Nova_String* l1_Nova_modifiers = (nova_Nova_String*)nova_null;
		int l1_Nova_start = 0;
		int l1_Nova_end = 0;
		
		l1_Nova_node = compiler_tree_node_Nova_NovaClass_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_modifiers = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		if (!compiler_tree_node_variables_Nova_VariableDeclaration_Nova_parseModifiers((compiler_tree_node_variables_Nova_VariableDeclaration*)(l1_Nova_node), exceptionData, l1_Nova_modifiers) && require)
		{
			Context1 contextArg58 = 
			{
				&l1_Nova_node,
			};
			
			nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(compiler_tree_node_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers((compiler_tree_node_variables_Nova_VariableDeclaration*)(l1_Nova_node), exceptionData, l1_Nova_modifiers)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_node_Nova_NovaClass_Nova_testLambda58, this, &contextArg58);
			if (require)
			{
				THROW(10, compiler_Nova_SyntaxErrorException_0_Nova_construct(0, exceptionData));
			}
			return (compiler_tree_node_Nova_NovaClass*)(nova_Nova_Object*)nova_null;
		}
		l1_Nova_start = nova_Nova_String_Nova_nextNonWhitespaceIndex(input, exceptionData, l1_Nova_index + 6, (intptr_t)nova_null);
		l1_Nova_end = nova_Nova_String_Nova_nextWhitespaceIndex(input, exceptionData, l1_Nova_start + 1, (intptr_t)nova_null);
		if (l1_Nova_end > l1_Nova_start)
		{
			nova_Nova_String* l5_Nova_extensions = (nova_Nova_String*)nova_null;
			nova_Nova_String* l5_Nova_implementations = (nova_Nova_String*)nova_null;
			
			l1_Nova_node->compiler_tree_node_Nova_Identifier_Nova_name = nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_start, l1_Nova_end);
			l5_Nova_extensions = nova_Nova_String_Nova_substring(input, exceptionData, nova_Nova_String_Nova_nextNonWhitespaceIndex(input, exceptionData, l1_Nova_end + 1, input->nova_Nova_String_Nova_count), (intptr_t)nova_null);
			l5_Nova_implementations = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
			if (nova_Nova_String_Nova_containsWord(l5_Nova_extensions, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements")), (intptr_t)nova_null))
			{
				l5_Nova_implementations = nova_Nova_String_Nova_substring(l5_Nova_extensions, exceptionData, nova_Nova_String_Nova_nextWhitespaceIndex(l5_Nova_extensions, exceptionData, nova_Nova_String_Nova_nextWordIndex(l5_Nova_extensions, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements")), (intptr_t)nova_null, (intptr_t)nova_null) + 10, (intptr_t)nova_null), (intptr_t)nova_null);
			}
			return l1_Nova_node;
		}
	}
	return (compiler_tree_node_Nova_NovaClass*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_node_Nova_NovaClass_Nova_parseExtension(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char compiler_tree_node_Nova_NovaClass_Nova_parseImplementations(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char compiler_tree_node_Nova_NovaClass_Nova_parseModifier(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	if (compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_parseModifier(((compiler_tree_node_variables_Nova_InstanceDeclaration*)this), exceptionData, modifier))
	{
		return 1;
	}
	if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract"))))
	{
		this->compiler_tree_node_Nova_NovaClass_Nova_isAbstract = 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

nova_Nova_String* compiler_tree_node_Nova_NovaClass_Nova_writeAbstract(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_node_Nova_NovaClass_Nova_isAbstract ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_node_Nova_NovaClass_Nova_writeModifiers(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeModifiers(((compiler_tree_node_variables_Nova_InstanceDeclaration*)this), exceptionData)), exceptionData, compiler_tree_node_Nova_NovaClass_Nova_writeAbstract(this, exceptionData));
}

nova_Nova_String* compiler_tree_node_Nova_NovaClass_Nova_toString(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_0_Nova_replace(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_node_Nova_NovaClass_Nova_writeModifiers(this, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" class "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_node_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")));
}

void compiler_tree_node_Nova_NovaClass_Nova_testLambda58(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid modifier '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_node_Nova_Node*)((*context->compiler_tree_node_Nova_NovaClass_Nova_node)), 0);
}

compiler_tree_node_Nova_NovaClass* compiler_tree_node_Nova_NovaClass_Accessor_Nova_parentClass(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


void compiler_tree_node_Nova_NovaClass_Nova_super(compiler_tree_node_Nova_NovaClass* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_node_Nova_NovaClass_Nova_isAbstract = 0;
	this->compiler_tree_node_Nova_NovaClass_Nova_isAbstract = 0;
}

