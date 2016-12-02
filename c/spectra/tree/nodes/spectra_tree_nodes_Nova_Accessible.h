#pragma once
#ifndef FILE_spectra_tree_nodes_Nova_Accessible_NOVA
#define FILE_spectra_tree_nodes_Nova_Accessible_NOVA

typedef struct spectra_tree_nodes_Nova_Accessible spectra_tree_nodes_Nova_Accessible;


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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_SyntaxUtils.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>


typedef struct spectra_tree_nodes_Accessible_Extension_VTable spectra_tree_nodes_Accessible_Extension_VTable;
struct spectra_tree_nodes_Accessible_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern spectra_tree_nodes_Accessible_Extension_VTable spectra_tree_nodes_Accessible_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_nodes_Nova_Accessible, 
	
	spectra_tree_nodes_Accessible_Extension_VTable* vtable;
	char spectra_tree_nodes_Nova_Accessible_Nova_safeNavigation;
)

void spectra_tree_nodes_Nova_Accessible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite, int inclusive);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite, int inclusive);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getLastAccessed(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int inclusive);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int requireAccessingNode, int skipPriority);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_static_Nova_parse(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, int require);
spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, int require);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* other);
nova_Nova_String* spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Mutator_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_returnedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessingNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_referenceClass(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_Accessor_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_isAccessed(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_doesAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Accessible_Accessor_Nova_canAccess(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_virtual_Mutator0_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value);
spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode(spectra_tree_nodes_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
