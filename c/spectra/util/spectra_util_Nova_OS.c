#include <precompiled.h>
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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



spectra_util_OS_Extension_VTable spectra_util_OS_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};






char spectra_util_Nova_OS_static_Nova_OS;
char spectra_util_Nova_OS_Nova_WINDOWS;
char spectra_util_Nova_OS_Nova_MACOSX;
char spectra_util_Nova_OS_Nova_LINUX;
nova_Nova_String* spectra_util_Nova_OS_Nova_OUTPUT_EXTENSION;
nova_Nova_String* spectra_util_Nova_OS_Nova_DYNAMIC_LIB_EXT;
void spectra_util_Nova_OS_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_util_Nova_OS_Nova_WINDOWS = 1;
		spectra_util_Nova_OS_Nova_MACOSX = 2;
		spectra_util_Nova_OS_Nova_LINUX = 3;
	}
	{
		nova_Nova_String* l1_Nova_osName = (nova_Nova_String*)nova_null;
		
		l1_Nova_osName = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("windows"));
		if (nova_Nova_String_1_Nova_startsWith(l1_Nova_osName, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("win"))))
		{
			spectra_util_Nova_OS_static_Nova_OS = spectra_util_Nova_OS_Nova_WINDOWS;
			spectra_util_Nova_OS_Nova_OUTPUT_EXTENSION = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".exe"));
			spectra_util_Nova_OS_Nova_DYNAMIC_LIB_EXT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".dll"));
		}
		else if (nova_Nova_String_1_Nova_startsWith(l1_Nova_osName, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("mac"))))
		{
			spectra_util_Nova_OS_static_Nova_OS = spectra_util_Nova_OS_Nova_MACOSX;
			spectra_util_Nova_OS_Nova_OUTPUT_EXTENSION = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
			spectra_util_Nova_OS_Nova_DYNAMIC_LIB_EXT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".dylib"));
		}
		else if (nova_Nova_String_1_Nova_startsWith(l1_Nova_osName, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("lin"))))
		{
			spectra_util_Nova_OS_static_Nova_OS = spectra_util_Nova_OS_Nova_LINUX;
			spectra_util_Nova_OS_Nova_OUTPUT_EXTENSION = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
			spectra_util_Nova_OS_Nova_DYNAMIC_LIB_EXT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".so"));
		}
		else
		{
			spectra_util_Nova_OS_static_Nova_OS = 0;
			spectra_util_Nova_OS_Nova_OUTPUT_EXTENSION = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
			spectra_util_Nova_OS_Nova_DYNAMIC_LIB_EXT = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
		}
	}
}

spectra_util_Nova_OS* spectra_util_Nova_OS_func_Nova_construct(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_util_Nova_OS, this,);
	this->vtable = &spectra_util_OS_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_util_Nova_OS_Nova_super(this, exceptionData);
	
	{
		spectra_util_Nova_OS_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_util_Nova_OS_Nova_destroy(spectra_util_Nova_OS** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_util_Nova_OS_Nova_this(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_util_Nova_OS_Accessor_static_Nova_isWindows(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_util_Nova_OS_static_Nova_OS == spectra_util_Nova_OS_Nova_WINDOWS;
}


char spectra_util_Nova_OS_Accessor_static_Nova_isMacOsx(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_util_Nova_OS_static_Nova_OS == spectra_util_Nova_OS_Nova_MACOSX;
}


char spectra_util_Nova_OS_Accessor_static_Nova_isLinux(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_util_Nova_OS_static_Nova_OS == spectra_util_Nova_OS_Nova_LINUX;
}


void spectra_util_Nova_OS_Nova_super(spectra_util_Nova_OS* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

