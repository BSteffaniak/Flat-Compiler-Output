#ifndef FILE_nova_io_Nova_File_NOVA
#define FILE_nova_io_Nova_File_NOVA

typedef struct nova_io_Nova_File nova_io_Nova_File;
typedef struct nova_io_Nova_FileFunctionMap nova_io_Nova_FileFunctionMap;


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
#include <nova/io/NativeFile.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <tinydir.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_io_Nova_File, 
	
	nova_io_File_Extension_VTable* vtable;
	nova_meta_Nova_Class* nova_io_Nova_File_Nova_class;
	nova_Nova_String* nova_io_Nova_File_Nova_location;
	nova_Nova_String* nova_io_Nova_File_Nova_name;
	nova_Nova_String* nova_io_Nova_File_Nova_extension;
	nova_Nova_String* nova_io_Nova_File_Nova_rootName;
	char nova_io_Nova_File_Nova_isHidden;
	char nova_io_Nova_File_Nova_isDirectory;
	char nova_io_Nova_File_Nova_exists;
	nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_files;
	int nova_io_Nova_File_Nova_maxOpenFiles;
	struct Private_nova_io_Nova_File* prv;
)

void nova_io_Nova_File_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_File* nova_io_Nova_File_1_Nova_construct(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
void nova_io_Nova_File_Nova_destroy(nova_io_Nova_File** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_File_0_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, tinydir_file* file);
void nova_io_Nova_File_1_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_getChildFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, int recursive, int includeHidden);
nova_Nova_String* nova_io_Nova_File_Nova_toString(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_directoryContents(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_listFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
char nova_io_Nova_File_Accessorfunc_Nova_isDirectory(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_io_Nova_File_Accessorfunc_Nova_files(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_io_Nova_File_Mutatorfunc_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
nova_Nova_String* nova_io_Nova_File_Accessorfunc_Nova_name(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_io_Nova_File_Accessorfunc_Nova_extension(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_io_Nova_File_Accessorfunc_Nova_rootName(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_File_Accessorfunc_Nova_isHidden(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_File_Accessorfunc_Nova_exists(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_io_Nova_File_Accessorfunc_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_File_Nova_super(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_io_Nova_FileFunctionMap, 
	
	nova_io_File_FileFunctionMap_Extension_VTable* vtable;
	nova_meta_Nova_Class* nova_io_Nova_FileFunctionMap_Nova_class;
)

void nova_io_Nova_FileFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_FileFunctionMap* nova_io_Nova_FileFunctionMap_Nova_construct(nova_io_Nova_FileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileFunctionMap_Nova_destroy(nova_io_Nova_FileFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileFunctionMap_Nova_this(nova_io_Nova_FileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_File* nova_io_Nova_FileFunctionMap_functionMapFileFunctionMap_Nova_construct(nova_io_Nova_FileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
nova_datastruct_list_Nova_Array* nova_io_Nova_FileFunctionMap_functionMap_Nova_getChildFiles(nova_io_Nova_FileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* reference, char recursive, char includeHidden);
nova_Nova_String* nova_io_Nova_FileFunctionMap_functionMap_Nova_toString(nova_io_Nova_FileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* reference);
void nova_io_Nova_FileFunctionMap_Nova_super(nova_io_Nova_FileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
