#pragma once
#ifndef FILE_spectra_tree_nodes_operations_Nova_Assignable_NOVA
#define FILE_spectra_tree_nodes_operations_Nova_Assignable_NOVA

typedef struct spectra_tree_nodes_operations_Nova_Assignable spectra_tree_nodes_operations_Nova_Assignable;


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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>


typedef struct spectra_tree_nodes_operations_Assignable_Extension_VTable spectra_tree_nodes_operations_Assignable_Extension_VTable;
struct spectra_tree_nodes_operations_Assignable_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern spectra_tree_nodes_operations_Assignable_Extension_VTable spectra_tree_nodes_operations_Assignable_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_nodes_operations_Nova_Assignable, 
	
	spectra_tree_nodes_operations_Assignable_Extension_VTable* vtable;
)

void spectra_tree_nodes_operations_Nova_Assignable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssigned(spectra_tree_nodes_operations_Nova_Assignable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value);
void spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssignedTo(spectra_tree_nodes_operations_Nova_Assignable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* declaration);
void spectra_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned(spectra_tree_nodes_operations_Nova_Assignable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value);

#endif