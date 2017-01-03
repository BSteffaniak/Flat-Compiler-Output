#ifndef FILE_spectra_tree_nodes_Nova_ValidationResult_NOVA
#define FILE_spectra_tree_nodes_Nova_ValidationResult_NOVA

typedef struct spectra_tree_nodes_Nova_ValidationResult spectra_tree_nodes_Nova_ValidationResult;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_ValidationResult, 
	
	spectra_tree_nodes_ValidationResult_Extension_VTable* vtable;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ValidationResult_Nova_node;
)

void spectra_tree_nodes_Nova_ValidationResult_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_ValidationResult_Nova_construct(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node);
void spectra_tree_nodes_Nova_ValidationResult_Nova_destroy(spectra_tree_nodes_Nova_ValidationResult** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ValidationResult_Nova_this(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node);
char spectra_tree_nodes_Nova_ValidationResult_Accessor_Nova_skipValidation(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ValidationResult_Nova_super(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
