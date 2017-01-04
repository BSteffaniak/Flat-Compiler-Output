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
#include <spectra/spectra_Nova_Spectra.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void spectra_engines_Nova_CodeGeneratorEngine_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_engines_Nova_CodeGeneratorEngine* spectra_engines_Nova_CodeGeneratorEngine_Nova_construct(spectra_engines_Nova_CodeGeneratorEngine* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_engines_Nova_CodeGeneratorEngine, this,);
	this->vtable = &spectra_engines_CodeGeneratorEngine_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_engines_Nova_CodeGeneratorEngine_Nova_super(this, exceptionData);
	
	{
		spectra_engines_Nova_CodeGeneratorEngine_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_engines_Nova_CodeGeneratorEngine_Nova_destroy(spectra_engines_Nova_CodeGeneratorEngine** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_Nova_Spectra_Nova_destroy(&(*this)->spectra_engines_Nova_CodeGeneratorEngine_Nova_controller, exceptionData);
	
	NOVA_FREE(*this);
}



void spectra_engines_Nova_CodeGeneratorEngine_Nova_this(spectra_engines_Nova_CodeGeneratorEngine* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_engines_Nova_CodeGeneratorEngine_Nova_super(spectra_engines_Nova_CodeGeneratorEngine* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_engines_Nova_CodeGeneratorEngine_Nova_controller = (spectra_Nova_Spectra*)nova_null;
}

void spectra_engines_Nova_CodeGeneratorEngine_virtual_Nova_writeFiles(spectra_engines_Nova_CodeGeneratorEngine* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->vtable->spectra_engines_Nova_CodeGeneratorEngine_virtual_Nova_writeFiles(this, exceptionData);
}

void spectra_engines_Nova_CodeGeneratorEngine_virtual_Nova_insertMainMethod(spectra_engines_Nova_CodeGeneratorEngine* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->vtable->spectra_engines_Nova_CodeGeneratorEngine_virtual_Nova_insertMainMethod(this, exceptionData);
}

void spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_engines_Nova_CodeGeneratorEngineFunctionMap* spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_construct(spectra_engines_Nova_CodeGeneratorEngineFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_engines_Nova_CodeGeneratorEngineFunctionMap, this,);
	this->vtable = &spectra_engines_CodeGeneratorEngine_CodeGeneratorEngineFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_destroy(spectra_engines_Nova_CodeGeneratorEngineFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_this(spectra_engines_Nova_CodeGeneratorEngineFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_super(spectra_engines_Nova_CodeGeneratorEngineFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

