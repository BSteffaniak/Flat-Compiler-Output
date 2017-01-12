#ifndef FILE_spectra_util_Nova_OS_NOVA
#define FILE_spectra_util_Nova_OS_NOVA

typedef struct spectra_util_Nova_OS spectra_util_Nova_OS;
typedef struct spectra_util_Nova_OSFunctionMap spectra_util_Nova_OSFunctionMap;
typedef struct spectra_util_Nova_OSPropertyMap spectra_util_Nova_OSPropertyMap;


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
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_util_Nova_OS, 
	
	spectra_util_OS_Extension_VTable* vtable;
)
extern char spectra_util_Nova_OS_static_Nova_OS;
extern char spectra_util_Nova_OS_Nova_WINDOWS;
extern char spectra_util_Nova_OS_Nova_MACOSX;
extern char spectra_util_Nova_OS_Nova_LINUX;
extern nova_Nova_String* spectra_util_Nova_OS_Nova_OUTPUT_EXTENSION;
extern nova_Nova_String* spectra_util_Nova_OS_Nova_DYNAMIC_LIB_EXT;

void spectra_util_Nova_OS_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_OS* spectra_util_Nova_OS_func_Nova_construct(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OS_Nova_destroy(spectra_util_Nova_OS** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OS_Nova_this(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OS_Accessor_static_Nova_isWindows(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OS_Accessor_static_Nova_isMacOsx(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OS_Accessor_static_Nova_isLinux(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OS_Nova_super(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_util_Nova_OSFunctionMap, 
	
	spectra_util_OS_OSFunctionMap_Extension_VTable* vtable;
)

void spectra_util_Nova_OSFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_OSFunctionMap* spectra_util_Nova_OSFunctionMap_Nova_construct(spectra_util_Nova_OSFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OSFunctionMap_Nova_destroy(spectra_util_Nova_OSFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OSFunctionMap_Nova_this(spectra_util_Nova_OSFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_OS* spectra_util_Nova_OSFunctionMap_functionMapOSFunctionMap_Nova_construct(spectra_util_Nova_OSFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OSFunctionMap_Nova_super(spectra_util_Nova_OSFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_util_Nova_OSPropertyMap, 
	
	spectra_util_OS_OSPropertyMap_Extension_VTable* vtable;
)

void spectra_util_Nova_OSPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_OSPropertyMap* spectra_util_Nova_OSPropertyMap_Nova_construct(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OSPropertyMap_Nova_destroy(spectra_util_Nova_OSPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OSPropertyMap_Nova_this(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_OS(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_WINDOWS(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_MACOSX(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_LINUX(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_OUTPUT_EXTENSION(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_DYNAMIC_LIB_EXT(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_isWindows(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_isMacOsx(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_OSPropertyMap_functionMap_static_Nova_isLinux(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_OSPropertyMap_Nova_super(spectra_util_Nova_OSPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
