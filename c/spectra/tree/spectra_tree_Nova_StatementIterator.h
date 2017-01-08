#ifndef FILE_spectra_tree_Nova_StatementIterator_NOVA
#define FILE_spectra_tree_Nova_StatementIterator_NOVA

typedef struct spectra_tree_Nova_StatementIterator spectra_tree_Nova_StatementIterator;
typedef struct spectra_tree_Nova_StatementIteratorFunctionMap spectra_tree_Nova_StatementIteratorFunctionMap;


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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
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
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_tree_Nova_StatementIterator, 
	
	spectra_tree_StatementIterator_Extension_VTable* vtable;
	nova_Nova_String* spectra_tree_Nova_StatementIterator_Nova_source;
	char spectra_tree_Nova_StatementIterator_Nova_beginsScope;
	char spectra_tree_Nova_StatementIterator_Nova_endsScope;
	int spectra_tree_Nova_StatementIterator_Nova_scopesEnded;
	int spectra_tree_Nova_StatementIterator_Nova_position;
	struct Private_spectra_tree_Nova_StatementIterator* prv;
)

void spectra_tree_Nova_StatementIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIterator_Nova_construct(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, nova_datastruct_list_Nova_Stack* parents);
void spectra_tree_Nova_StatementIterator_Nova_destroy(spectra_tree_Nova_StatementIterator** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_StatementIterator_Nova_this(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, nova_datastruct_list_Nova_Stack* parents);
spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIterator_Nova_reset(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_Nova_StatementIterator_Accessor_Nova_hasNext(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_tree_Nova_StatementIterator_Accessor_Nova_next(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_StatementIterator_Nova_super(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_Nova_StatementIteratorFunctionMap, 
	
	spectra_tree_StatementIterator_StatementIteratorFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_StatementIteratorFunctionMap* spectra_tree_Nova_StatementIteratorFunctionMap_Nova_construct(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_destroy(spectra_tree_Nova_StatementIteratorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_this(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIteratorFunctionMap_functionMapStatementIteratorFunctionMap_Nova_construct(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, nova_datastruct_list_Nova_Stack* parents);
spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIteratorFunctionMap_functionMap_Nova_reset(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_StatementIterator* reference);
void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_super(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
