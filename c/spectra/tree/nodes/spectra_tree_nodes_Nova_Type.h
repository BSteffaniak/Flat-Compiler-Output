#pragma once
#ifndef FILE_spectra_tree_nodes_Nova_Type_NOVA
#define FILE_spectra_tree_nodes_Nova_Type_NOVA

typedef struct spectra_tree_nodes_Nova_Type spectra_tree_nodes_Nova_Type;


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
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct spectra_tree_nodes_Type_Extension_VTable spectra_tree_nodes_Type_Extension_VTable;
struct spectra_tree_nodes_Type_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	char (*spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
};

extern spectra_tree_nodes_Type_Extension_VTable spectra_tree_nodes_Type_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_nodes_Nova_Type, 
	
	spectra_tree_nodes_Type_Extension_VTable* vtable;
	int spectra_tree_nodes_Nova_Type_Nova_arrayDimensions;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Type_Nova_genericArguments;
	nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_name;
)

void spectra_tree_nodes_Nova_Type_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_Nova_construct(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name);
void spectra_tree_nodes_Nova_Type_Nova_destroy(spectra_tree_nodes_Nova_Type** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Type_Nova_this(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name);
spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_static_Nova_parse(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeArray(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_toString(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_toNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_Nova_cloneTo(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* other);
char spectra_tree_nodes_Nova_Type_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Type_Nova_super(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
