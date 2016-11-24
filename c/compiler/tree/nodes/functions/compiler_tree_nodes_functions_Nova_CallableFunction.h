#pragma once
#ifndef FILE_compiler_tree_nodes_functions_Nova_CallableFunction_NOVA
#define FILE_compiler_tree_nodes_functions_Nova_CallableFunction_NOVA

typedef struct compiler_tree_nodes_functions_Nova_CallableFunction compiler_tree_nodes_functions_Nova_CallableFunction;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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


typedef struct compiler_tree_nodes_functions_CallableFunction_Extension_VTable compiler_tree_nodes_functions_CallableFunction_Extension_VTable;
struct compiler_tree_nodes_functions_CallableFunction_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern compiler_tree_nodes_functions_CallableFunction_Extension_VTable compiler_tree_nodes_functions_CallableFunction_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_tree_nodes_functions_Nova_CallableFunction, 
	
	compiler_tree_nodes_functions_CallableFunction_Extension_VTable* vtable;
)

void compiler_tree_nodes_functions_Nova_CallableFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_Parameter* compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require);
char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require);
char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, char require);
char compiler_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments);
compiler_tree_nodes_functions_Nova_ParameterList* compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameterList(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* compiler_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_Parameter* compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require);
compiler_tree_nodes_functions_Nova_ParameterList* compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList(compiler_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
