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
#include <compiler/tree/compiler_tree_Nova_SyntaxTree.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>

typedef struct
{
	/* Bool require */ char* compiler_tree_nodes_functions_Nova_CallableFunction_Nova_require;
} Context1;


compiler_tree_nodes_functions_CallableFunction_Extension_VTable compiler_tree_nodes_functions_CallableFunction_Extension_VTable_val =
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
		(compiler_tree_nodes_functions_Nova_Parameter*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int))compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter,
		(compiler_tree_nodes_functions_Nova_ParameterList*(*)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameterList,
		0,
	},
};



char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_testLambda36(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);


void compiler_tree_nodes_functions_Nova_CallableFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_functions_Nova_Parameter* compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return compiler_tree_nodes_functions_Nova_Parameter_static_Nova_parse(0, exceptionData, parameter, (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData)), ((compiler_tree_nodes_Nova_Node*)this)->compiler_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null);
}

char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	compiler_tree_Nova_AnnotationSearchResult* l1_Nova_annotations = (compiler_tree_Nova_AnnotationSearchResult*)nova_null;
	compiler_tree_nodes_functions_Nova_Parameter* l1_Nova_param = (compiler_tree_nodes_functions_Nova_Parameter*)nova_null;
	
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_annotations = compiler_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(0, exceptionData, parameter);
	l1_Nova_param = (compiler_tree_nodes_functions_Nova_Parameter*)(compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, l1_Nova_annotations->compiler_tree_Nova_AnnotationSearchResult_Nova_remainingStatement, require));
	if (l1_Nova_param != (compiler_tree_nodes_functions_Nova_Parameter*)nova_null)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_param));
		compiler_tree_Nova_AnnotationSearchResult_0_Nova_addTo(l1_Nova_annotations, exceptionData, (compiler_tree_nodes_Nova_Node*)(l1_Nova_param));
	}
	else
	{
		compiler_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid parameter '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((parameter)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)this, require, (intptr_t)nova_null);
	}
	return l1_Nova_param != (compiler_tree_nodes_functions_Nova_Parameter*)nova_null;
}

char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, char require)
{
	Context1 contextArg36 = 
	{
		&require,
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(parameters, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_functions_Nova_CallableFunction_Nova_testLambda36, this, &contextArg36, 0);
}

char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments)
{
	return 1;
}

char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_testLambda36(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	return compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations(this, exceptionData, _1, (*context->compiler_tree_nodes_functions_Nova_CallableFunction_Nova_require));
}

compiler_tree_nodes_functions_Nova_ParameterList* compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameterList(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_nodes_functions_Nova_ParameterList*)(nova_Nova_Object*)nova_null;
}


nova_datastruct_list_Nova_Array* compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_functions_Nova_ParameterList_Accessor_Nova_parameters(compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData), exceptionData);
}


compiler_tree_nodes_functions_Nova_Parameter* compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require)
{
	return this->vtable->itable.compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData, parameter, require);
}

compiler_tree_nodes_functions_Nova_ParameterList* compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList((compiler_tree_nodes_functions_Nova_CallableFunction*)(this), exceptionData);
}

