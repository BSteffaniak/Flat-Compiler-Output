#ifndef FILE_spectra_util_Nova_SyntaxUtils_NOVA
#define FILE_spectra_util_Nova_SyntaxUtils_NOVA

typedef struct spectra_util_Nova_SyntaxUtils spectra_util_Nova_SyntaxUtils;


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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	spectra_util_Nova_SyntaxUtils, 
	
	spectra_util_SyntaxUtils_Extension_VTable* vtable;
)

void spectra_util_Nova_SyntaxUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_SyntaxUtils* spectra_util_Nova_SyntaxUtils_Nova_construct(spectra_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_SyntaxUtils_Nova_destroy(spectra_util_Nova_SyntaxUtils** this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_SyntaxUtils_static_Nova_checkTypes(spectra_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, nova_Nova_Class* clazz);
void spectra_util_Nova_SyntaxUtils_Nova_this(spectra_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_SyntaxUtils_Nova_super(spectra_util_Nova_SyntaxUtils* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
