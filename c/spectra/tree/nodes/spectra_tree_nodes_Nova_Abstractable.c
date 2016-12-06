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



spectra_tree_nodes_Abstractable_Extension_VTable spectra_tree_nodes_Abstractable_Extension_VTable_val =
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
		0,
		0,
		(char(*)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, char))spectra_tree_nodes_Nova_Abstractable_Mutator_Nova_isAbstract,
		(char(*)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_Nova_Abstractable_Accessor_Nova_isAbstract,
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
};


void spectra_tree_nodes_Nova_Abstractable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_String* spectra_tree_nodes_Nova_Abstractable_Nova_writeAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(spectra_tree_nodes_Nova_Abstractable_virtual_Accessor1_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData) ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

spectra_tree_nodes_Nova_Abstractable* spectra_tree_nodes_Nova_Abstractable_0_Nova_cloneTo(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Abstractable* other)
{
	spectra_tree_nodes_Nova_Abstractable_virtual_Mutator0_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(other), exceptionData, spectra_tree_nodes_Nova_Abstractable_virtual_Accessor1_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData));
	return other;
}

char spectra_tree_nodes_Nova_Abstractable_Mutator_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return value;
}

char spectra_tree_nodes_Nova_Abstractable_Accessor_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}

char spectra_tree_nodes_Nova_Abstractable_virtual_Mutator0_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Abstractable_virtual_Mutator0_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData, value);
}

char spectra_tree_nodes_Nova_Abstractable_virtual_Accessor1_Nova_isAbstract(spectra_tree_nodes_Nova_Abstractable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_Nova_Abstractable_virtual_Accessor1_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData);
}
