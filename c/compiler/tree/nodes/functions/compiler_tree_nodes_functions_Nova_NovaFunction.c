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
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
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
	/* Bool require */ char* compiler_tree_nodes_functions_Nova_NovaFunction_Nova_require;
} Context2;


compiler_tree_nodes_functions_NovaFunction_Extension_VTable compiler_tree_nodes_functions_NovaFunction_Extension_VTable_val =
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
	compiler_tree_nodes_functions_Nova_NovaFunction_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_parseChild,
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_functions_Nova_NovaFunction_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_functions_Nova_NovaFunction_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_parse,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
};



nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findSignature(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findReturnType(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findParameters(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_testLambda16(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* word, int index, nova_datastruct_list_Nova_List* words, Context1* context);
char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_testLambda17(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context);


void compiler_tree_nodes_functions_Nova_NovaFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_Nova_NovaFunction* compiler_tree_nodes_functions_Nova_NovaFunction_Nova_construct(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_functions_Nova_NovaFunction, this,);
	this->vtable = &compiler_tree_nodes_functions_NovaFunction_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_NovaFunction_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_functions_Nova_NovaFunction_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_functions_Nova_NovaFunction_Nova_destroy(compiler_tree_nodes_functions_Nova_NovaFunction** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_nodes_functions_Nova_ParameterList_Nova_destroy(&(*this)->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_functions_Nova_NovaFunction_Nova_this(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
	this->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList = compiler_tree_nodes_functions_Nova_ParameterList_Nova_construct(0, exceptionData, parent, location);
}

compiler_tree_nodes_functions_Nova_NovaFunction* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_parse(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_signature = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_parameters = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_returnType = (nova_Nova_String*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_signature = compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findSignature(0, exceptionData, input);
	l1_Nova_parameters = compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findParameters(0, exceptionData, input);
	l1_Nova_returnType = compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findReturnType(0, exceptionData, input);
	if ((nova_Nova_Object*)l1_Nova_signature != (nova_Nova_Object*)(nova_Nova_String*)nova_null && (nova_Nova_Object*)l1_Nova_parameters != (nova_Nova_Object*)(nova_Nova_String*)nova_null && l1_Nova_returnType != (nova_Nova_String*)nova_null)
	{
		compiler_tree_nodes_functions_Nova_NovaFunction* l1_Nova_node = (compiler_tree_nodes_functions_Nova_NovaFunction*)nova_null;
		
		l1_Nova_node = compiler_tree_nodes_functions_Nova_NovaFunction_Nova_construct(0, exceptionData, parent, location);
		if (compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parseSignature(l1_Nova_node, exceptionData, l1_Nova_signature, require) && compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parseParameters(l1_Nova_node, exceptionData, l1_Nova_parameters, require) && (l1_Nova_returnType->nova_Nova_String_Nova_count == 0 || compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseType((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(l1_Nova_node), exceptionData, l1_Nova_returnType)))
		{
			return l1_Nova_node;
		}
	}
	if (require)
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid function declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent, (intptr_t)nova_null);
	}
	return (compiler_tree_nodes_functions_Nova_NovaFunction*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findSignature(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	int l1_Nova_start = 0;
	
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_start < 0)
		{
			return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
		}
		return nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, l1_Nova_start), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	
	nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findReturnType(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
	{
		int l1_Nova_start = 0;
		int l1_Nova_end = 0;
		
		l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
			if (l1_Nova_start < 0)
			{
				return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
			}
			l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
			if (l1_Nova_end < 0)
			{
				return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
			}
			if (compiler_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter(input, exceptionData, l1_Nova_end + 1, (intptr_t)nova_null))
			{
				return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
			}
			l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("->")), l1_Nova_end + 1, (intptr_t)nova_null);
			if (l1_Nova_end < 0)
			{
				return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
			}
			return nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_end + 2, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		}
		
		nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_static_Nova_findParameters(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
		{
			int l1_Nova_start = 0;
			int l1_Nova_end = 0;
			
			l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
				if (l1_Nova_start < 0)
				{
					return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
				}
				l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
				if (l1_Nova_end < 0)
				{
					return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
				}
				return nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_start + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
			}
			
			char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parseSignature(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* signature, char require)
			{
				Context1 contextArg16 = 
				{
				};
				
				return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_Nova_filterEmpty((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(signature, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))))), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_functions_Nova_NovaFunction_Nova_testLambda16, this, &contextArg16);
			}
			
			char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parseParameter(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
			{
				compiler_tree_nodes_functions_Nova_Parameter* l1_Nova_param = (compiler_tree_nodes_functions_Nova_Parameter*)nova_null;
				
				require = (int)(require == (intptr_t)nova_null ? 1 : require);
				l1_Nova_param = (compiler_tree_nodes_functions_Nova_Parameter*)(compiler_tree_nodes_functions_Nova_Parameter_static_Nova_parse(0, exceptionData, parameter, (compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList), this->compiler_tree_nodes_Nova_Node_Nova_location, 0));
				if (l1_Nova_param != (compiler_tree_nodes_functions_Nova_Parameter*)nova_null)
				{
					nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_NovaFunction_Accessor_Nova_parameters(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_param));
					return 1;
				}
				compiler_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((parameter)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
				return 0;
			}
			
			char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parseParameters(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, char require)
			{
				Context2 contextArg17 = 
				{
					&require,
				};
				
				return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(parameters, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_functions_Nova_NovaFunction_Nova_testLambda17, this, &contextArg17);
			}
			
			nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_Nova_writeReturnType(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return (nova_Nova_String*)(this->compiler_tree_nodes_Nova_Value_Nova_type != (nova_Nova_String*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" -> "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Value_Nova_type)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
			}
			
			nova_Nova_String* compiler_tree_nodes_functions_Nova_NovaFunction_Nova_toString(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, compiler_tree_nodes_functions_Nova_NovaFunction_Nova_writeReturnType(this, exceptionData)));
			}
			
			compiler_tree_nodes_functions_Nova_NovaFunction* compiler_tree_nodes_functions_Nova_NovaFunction_Nova_cloneTo(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_NovaFunction* other)
			{
				compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo(((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData, (compiler_tree_nodes_variables_Nova_InstanceDeclaration*)(other));
				other->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList = this->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList;
				return other;
			}
			
			char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_testLambda16(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* word, int index, nova_datastruct_list_Nova_List* words, Context1* context)
			{
				if (index == ((nova_datastruct_list_Nova_Array*)words)->nova_datastruct_list_Nova_Array_Nova_count - 1)
				{
					this->compiler_tree_nodes_Nova_Identifier_Nova_name = word;
					return compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(this->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData);
				}
				return compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, word);
			}
			
			char compiler_tree_nodes_functions_Nova_NovaFunction_Nova_testLambda17(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context)
			{
				return compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parseParameter(this, exceptionData, _1, (*context->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_require));
			}
			
			compiler_tree_nodes_functions_Nova_NovaFunction* compiler_tree_nodes_functions_Nova_NovaFunction_Accessor_Nova_parentFunction(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return this;
			}
			
			
			nova_datastruct_list_Nova_Array* compiler_tree_nodes_functions_Nova_NovaFunction_Accessor_Nova_parameters(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				return compiler_tree_nodes_functions_Nova_ParameterList_Accessor_Nova_parameters(this->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList, exceptionData);
			}
			
			
			void compiler_tree_nodes_functions_Nova_NovaFunction_Nova_super(compiler_tree_nodes_functions_Nova_NovaFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
			{
				this->compiler_tree_nodes_functions_Nova_NovaFunction_Nova_parameterList = (compiler_tree_nodes_functions_Nova_ParameterList*)nova_null;
			}
			
						