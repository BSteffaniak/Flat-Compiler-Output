#pragma once
#ifndef FILE_compiler_tree_nodes_Nova_Accessible_NOVA
#define FILE_compiler_tree_nodes_Nova_Accessible_NOVA

typedef struct compiler_tree_nodes_Nova_Accessible compiler_tree_nodes_Nova_Accessible;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <compiler/util/compiler_util_Nova_SyntaxUtils.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>


typedef struct compiler_tree_nodes_Accessible_Extension_VTable compiler_tree_nodes_Accessible_Extension_VTable;
struct compiler_tree_nodes_Accessible_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern compiler_tree_nodes_Accessible_Extension_VTable compiler_tree_nodes_Accessible_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_tree_nodes_Nova_Accessible, 
	
	compiler_tree_nodes_Accessible_Extension_VTable* vtable;
	char compiler_tree_nodes_Nova_Accessible_Nova_safeNavigation;
)

void compiler_tree_nodes_Nova_Accessible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite, int inclusive);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite, int inclusive);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Nova_getLastAccessed(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int inclusive);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Nova_getReferenceNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int requireAccessingNode, int skipPriority);
nova_Nova_String* compiler_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Accessible* value);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Accessible_Accessor_Nova_canAccess(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_virtual_Mutator0_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Accessible* value);
compiler_tree_nodes_Nova_Accessible* compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode(compiler_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
