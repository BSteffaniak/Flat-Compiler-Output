#ifndef FILE_spectra_Nova_Spectra_NOVA
#define FILE_spectra_Nova_Spectra_NOVA

typedef struct spectra_Nova_Spectra spectra_Nova_Spectra;
typedef struct spectra_Nova_spectra_SpectraFunctionMap spectra_Nova_spectra_SpectraFunctionMap;


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
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <spectra/util/spectra_util_Nova_FileUtils.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/spectra_tree_Nova_SyntaxTree.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	spectra_Nova_Spectra, 
	
	spectra_Spectra_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Array* spectra_Nova_Spectra_Nova_errors;
	nova_datastruct_list_Nova_Array* spectra_Nova_Spectra_Nova_warnings;
	nova_datastruct_list_Nova_Array* spectra_Nova_Spectra_Nova_info;
	struct Private_spectra_Nova_Spectra* prv;
)
extern char spectra_Nova_Spectra_Nova_DEBUG;
extern char spectra_Nova_Spectra_Nova_testClasses;

void spectra_Nova_Spectra_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_Spectra* spectra_Nova_Spectra_Nova_construct(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_Spectra_Nova_destroy(spectra_Nova_Spectra** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_Spectra_static_Nova_main(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void spectra_Nova_Spectra_Nova_this(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_Spectra_Nova_compile(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void spectra_Nova_Spectra_Nova_super(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_Nova_spectra_SpectraFunctionMap, 
	
	spectra_Spectra_spectra_SpectraFunctionMap_Extension_VTable* vtable;
)

void spectra_Nova_spectra_SpectraFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_spectra_SpectraFunctionMap* spectra_Nova_spectra_SpectraFunctionMap_Nova_construct(spectra_Nova_spectra_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_spectra_SpectraFunctionMap_Nova_destroy(spectra_Nova_spectra_SpectraFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_spectra_SpectraFunctionMap_Nova_this(spectra_Nova_spectra_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_spectra_SpectraFunctionMap_Nova_super(spectra_Nova_spectra_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
