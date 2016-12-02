#pragma once
#ifndef FILE_spectra_tree_nodes_functions_Nova_CallableFunction_NOVA
#define FILE_spectra_tree_nodes_functions_Nova_CallableFunction_NOVA

typedef struct spectra_tree_nodes_functions_Nova_CallableFunction spectra_tree_nodes_functions_Nova_CallableFunction;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
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


typedef struct spectra_tree_nodes_functions_CallableFunction_Extension_VTable spectra_tree_nodes_functions_CallableFunction_Extension_VTable;
struct spectra_tree_nodes_functions_CallableFunction_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern spectra_tree_nodes_functions_CallableFunction_Extension_VTable spectra_tree_nodes_functions_CallableFunction_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_nodes_functions_Nova_CallableFunction, 
	
	spectra_tree_nodes_functions_CallableFunction_Extension_VTable* vtable;
)

void spectra_tree_nodes_functions_Nova_CallableFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameter(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require);
char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require);
char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameters(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, int require);
char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments);
char spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseName(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name);
spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameterList(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_functions_Nova_CallableFunction_Accessor_Nova_parameters(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameter, int require);
char spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* parameters, int require);
spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList(spectra_tree_nodes_functions_Nova_CallableFunction* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
