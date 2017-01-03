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
#include <spectra/util/spectra_util_Nova_OS.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void spectra_util_Nova_FileUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_util_Nova_FileUtils* spectra_util_Nova_FileUtils_Nova_construct(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_util_Nova_FileUtils, this,);
	this->vtable = &spectra_util_FileUtils_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_util_Nova_FileUtils_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_FileUtils_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_util_Nova_FileUtils_Nova_destroy(spectra_util_Nova_FileUtils** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_Nova_String* spectra_util_Nova_FileUtils_static_Nova_formatPath(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* path)
{
	path = nova_Nova_String_1_Nova_replace(path, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")));
	path = spectra_util_Nova_FileUtils_static_Nova_formAbsolutePath(0, exceptionData, path);
	if (spectra_util_Nova_OS_Accessor_static_Nova_isWindows(0, exceptionData))
	{
		path = spectra_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes(path, exceptionData);
		return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((path), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))));
	}
	else
	{
		return spectra_util_Nova_FileUtils_static_Nova_escapeSpaces(0, exceptionData, path);
	}
}

nova_Nova_String* spectra_util_Nova_FileUtils_static_Nova_formAbsolutePath(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* path)
{
	return path;
}

nova_Nova_String* spectra_util_Nova_FileUtils_static_Nova_escapeSpaces(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return input;
}

nova_Nova_String* spectra_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

void spectra_util_Nova_FileUtils_Nova_this(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_util_Nova_FileUtils_Nova_super(spectra_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_util_Nova_spectra_util_FileUtilsFunctionMap* spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_construct(spectra_util_Nova_spectra_util_FileUtilsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_util_Nova_spectra_util_FileUtilsFunctionMap, this,);
	this->vtable = &spectra_util_FileUtils_spectra_util_FileUtilsFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_destroy(spectra_util_Nova_spectra_util_FileUtilsFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_this(spectra_util_Nova_spectra_util_FileUtilsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_super(spectra_util_Nova_spectra_util_FileUtilsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

