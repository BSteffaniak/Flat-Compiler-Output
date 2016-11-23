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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_CallableFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignable.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_functions_BodyFunction_Extension_VTable compiler_tree_nodes_functions_BodyFunction_Extension_VTable_val =
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
		(compiler_tree_nodes_functions_Nova_Parameter*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter,
		(compiler_tree_nodes_functions_Nova_ParameterList*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_parameterList,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_addChild,
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_findVariableDeclaration,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parsePlaceholders,
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_cloneTo,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope,
	compiler_tree_nodes_functions_Nova_BodyFunction_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate,
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_writeReturnType,
};



int compiler_tree_nodes_functions_Nova_BodyFunction_static_Nova_findInlineBodyIndex(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int defaultReturnValue);
char compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parseInlineBody(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_functions_Nova_BodyFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_Nova_BodyFunction* compiler_tree_nodes_functions_Nova_BodyFunction_Nova_construct(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_functions_Nova_BodyFunction, this,);
	this->vtable = &compiler_tree_nodes_functions_BodyFunction_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_super((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)this, exceptionData);
	compiler_tree_nodes_functions_Nova_BodyFunction_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_functions_Nova_BodyFunction_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_functions_Nova_BodyFunction_Nova_destroy(compiler_tree_nodes_functions_Nova_BodyFunction** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_nodes_Nova_Scope_Nova_destroy(&(*this)->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_scope, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_destroy(&(*this)->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody, exceptionData);
	
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_functions_Nova_BodyFunction_Nova_this(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_this((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)(this), exceptionData, parent, location);
	compiler_tree_nodes_functions_Nova_BodyFunction_Mutatorfunc_Nova_scope(this, exceptionData, compiler_tree_nodes_Nova_Scope_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), location));
}

void compiler_tree_nodes_functions_Nova_BodyFunction_Nova_addChild(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope(this, exceptionData)->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(child));
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parseStatement(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return compiler_tree_nodes_Nova_Scope_Nova_parseStatement(compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope(this, exceptionData), exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), location, require);
}

compiler_tree_nodes_functions_Nova_BodyFunction* compiler_tree_nodes_functions_Nova_BodyFunction_static_Nova_parse(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_Nova_String* l1_Nova_inlineBody = (nova_Nova_String*)nova_null;
	int l1_Nova_inlineBodyIndex = 0;
	compiler_tree_nodes_functions_Nova_FunctionDeclaration* l1_Nova_function = (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_inlineBody = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	l1_Nova_inlineBodyIndex = compiler_tree_nodes_functions_Nova_BodyFunction_static_Nova_findInlineBodyIndex(0, exceptionData, input, (intptr_t)nova_null);
	if (l1_Nova_inlineBodyIndex > 0)
	{
		l1_Nova_inlineBody = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_inlineBodyIndex + 2, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		input = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, l1_Nova_inlineBodyIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	l1_Nova_function = (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)(compiler_tree_nodes_functions_Nova_FunctionDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require));
	if (l1_Nova_function != (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
	{
		compiler_tree_nodes_functions_Nova_BodyFunction* l2_Nova_node = (compiler_tree_nodes_functions_Nova_BodyFunction*)nova_null;
		
		l2_Nova_node = compiler_tree_nodes_functions_Nova_BodyFunction_Nova_construct(0, exceptionData, parent, location);
		if (l1_Nova_inlineBody != (nova_Nova_String*)nova_null)
		{
			l2_Nova_node->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, l1_Nova_inlineBody, (compiler_tree_nodes_Nova_Node*)(l2_Nova_node), location, require));
		}
		return (compiler_tree_nodes_functions_Nova_BodyFunction*)compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_cloneTo(l1_Nova_function, exceptionData, (compiler_tree_nodes_functions_Nova_FunctionDeclaration*)(l2_Nova_node));
	}
	if (require)
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid function declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent, (intptr_t)nova_null);
	}
	return (compiler_tree_nodes_functions_Nova_BodyFunction*)(nova_Nova_Object*)nova_null;
}

int compiler_tree_nodes_functions_Nova_BodyFunction_static_Nova_findInlineBodyIndex(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int defaultReturnValue)
{
	int l1_Nova_start = 0;
	int l1_Nova_end = 0;
	
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_start < 0)
		{
			return defaultReturnValue;
		}
		l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_start, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_end < 0)
		{
			return defaultReturnValue;
		}
		l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=>")), l1_Nova_end + 1, (intptr_t)nova_null);
		if (l1_Nova_end < 0)
		{
			return defaultReturnValue;
		}
		else
		{
			return l1_Nova_end;
		}
	}
	
	char compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parseInlineBody(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		if (nova_Nova_Class_Nova_isOfType(this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)))
		{
			this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_Nova_Scope_Nova_parseStatement(compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope(this, exceptionData), exceptionData, ((compiler_tree_nodes_Nova_PlaceholderValue*)this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody)->compiler_tree_nodes_Nova_PlaceholderValue_Nova_value, this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody->compiler_tree_nodes_Nova_Node_Nova_parent, 0, (intptr_t)nova_null));
			if (this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody == (compiler_tree_nodes_Nova_Node*)nova_null)
			{
				return 0;
			}
			else if (nova_Nova_Class_Nova_isOfType(this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance)))
			{
				compiler_tree_nodes_Nova_Type* l3_Nova_type = (compiler_tree_nodes_Nova_Type*)nova_null;
				
				l3_Nova_type = (compiler_tree_nodes_Nova_Type*)(compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(((compiler_tree_nodes_Nova_Value*)this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody)), exceptionData));
				if (compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData) == (compiler_tree_nodes_Nova_Type*)nova_null)
				{
					compiler_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData, l3_Nova_type);
					this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_implicitType = 1;
				}
			}
		}
		return 1;
	}
	
	char compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parsePlaceholders(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return compiler_tree_nodes_functions_Nova_BodyFunction_Nova_parseInlineBody(this, exceptionData) & compiler_tree_nodes_Nova_Scope_Nova_parsePlaceholders(compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope(this, exceptionData), exceptionData) & compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parsePlaceholders(((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)this), exceptionData);
	}
	
	nova_Nova_String* compiler_tree_nodes_functions_Nova_BodyFunction_Nova_writeReturnType(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return (nova_Nova_String*)(this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_implicitType ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeReturnType(((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)this), exceptionData));
	}
	
	nova_Nova_String* compiler_tree_nodes_functions_Nova_BodyFunction_Nova_writeBody(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return (nova_Nova_String*)(this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody != (compiler_tree_nodes_Nova_Node*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("=> "))), exceptionData, compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody), exceptionData)) : compiler_tree_nodes_Nova_Scope_Nova_toNova(compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope(this, exceptionData), exceptionData));
	}
	
	nova_Nova_String* compiler_tree_nodes_functions_Nova_BodyFunction_Nova_toNova(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeHeader((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)(this), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, compiler_tree_nodes_functions_Nova_BodyFunction_Nova_writeBody(this, exceptionData)));
	}
	
	compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_functions_Nova_BodyFunction_Accessorfunc_Nova_scope(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_scope;
	}
	
	compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_functions_Nova_BodyFunction_Mutatorfunc_Nova_scope(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Scope* value)
	{
		this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_scope = value;
		return value;
	}
	
	void compiler_tree_nodes_functions_Nova_BodyFunction_Nova_super(compiler_tree_nodes_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_scope = (compiler_tree_nodes_Nova_Scope*)nova_null;
		this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_inlineBody = (compiler_tree_nodes_Nova_Node*)nova_null;
		this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_implicitType = 0;
		this->compiler_tree_nodes_functions_Nova_BodyFunction_Nova_implicitType = 0;
	}
	
		