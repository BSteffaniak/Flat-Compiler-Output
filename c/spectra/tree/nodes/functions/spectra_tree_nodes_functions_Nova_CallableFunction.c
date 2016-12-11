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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/spectra_tree_Nova_SyntaxTree.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Parameter.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>

typedef struct
{
	/* Bool require = true */ int* spectra_tree_nodes_functions_Nova_CallableFunction_Nova_require;
} Context1;


spectra_tree_nodes_functions_CallableFunction_Extension_VTable spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(spectra_tree_nodes_functions_Nova_Parameter*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter,
		(char(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters,
		(spectra_tree_nodes_functions_Nova_ParameterList*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameterList,
		(spectra_tree_nodes_functions_Nova_ParameterList*(*)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_ParameterList*))spectra_tree_nodes_functions_Nova_CallableFunction_Mutator_Nova_parameterList,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))spectra_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters,
		0,
	},
};



char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_lambda57(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);

void spectra_tree_nodes_functions_Nova_CallableFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_Nova_Parameter_static_Nova_parse(0, exceptionData, parameter, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor1_Nova_parameterList((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), ((spectra_tree_nodes_Nova_Node*)this)->spectra_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null);
}

char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	spectra_tree_Nova_AnnotationSearchResult* l1_Nova_annotations = (spectra_tree_Nova_AnnotationSearchResult*)nova_null;
	spectra_tree_nodes_functions_Nova_Parameter* l1_Nova_param = (spectra_tree_nodes_functions_Nova_Parameter*)nova_null;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_annotations = spectra_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(0, exceptionData, parameter);
	l1_Nova_param = (spectra_tree_nodes_functions_Nova_Parameter*)(spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, l1_Nova_annotations->spectra_tree_Nova_AnnotationSearchResult_Nova_remainingStatement, require));
	if (l1_Nova_param != (spectra_tree_nodes_functions_Nova_Parameter*)nova_null)
	{
		nova_datastruct_list_Nova_Array_virtual0_Nova_add((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_param));
		spectra_tree_Nova_AnnotationSearchResult_0_Nova_addTo(l1_Nova_annotations, exceptionData, (spectra_tree_nodes_Nova_Node*)(l1_Nova_param));
		return 1;
	}
	spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((parameter)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (spectra_tree_nodes_Nova_Node*)this, require, (intptr_t)nova_null);
	return 0;
}

char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, int require)
{
	Context1* contextArg57 = NOVA_MALLOC(sizeof(Context1));
	contextArg57->spectra_tree_nodes_functions_Nova_CallableFunction_Nova_require = &require;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(parameters, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_lambda57, this, contextArg57, 0);
}

char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments)
{
	return 1;
}

char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseName(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	if (!spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, name, (intptr_t)nova_null))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse generic parameters for class '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (spectra_tree_nodes_Nova_Node*)this), 1);
	}
	else
	{
		if (nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_count((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData) > 0)
		{
			name = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(name), exceptionData, (intptr_t)nova_null, nova_Nova_String_1_Nova_indexOf(name, exceptionData, '<', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		}
		((spectra_tree_nodes_Nova_Identifier*)this)->spectra_tree_nodes_Nova_Identifier_Nova_name = name;
		return spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(name, exceptionData);
	}
	return 0;
}

char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_lambda57(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	return spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations(this, exceptionData, _1, (*context->spectra_tree_nodes_functions_Nova_CallableFunction_Nova_require));
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameterList(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_functions_Nova_ParameterList*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_CallableFunction_Mutator_Nova_parameterList(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ParameterList* value)
{
	return value;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_functions_Nova_ParameterList_Accessor_Nova_parameters(spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor1_Nova_parameterList((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData), exceptionData);
}


spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	return this->vtable->itable.spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, parameter, require);
}

char spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, int require)
{
	return this->vtable->itable.spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, parameters, require);
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor1_Nova_parameterList(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor1_Nova_parameterList((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData);
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Mutator0_Nova_parameterList(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ParameterList* value)
{
	return this->vtable->itable.spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Mutator0_Nova_parameterList((spectra_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, value);
}

