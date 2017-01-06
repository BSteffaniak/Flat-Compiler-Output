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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_FileTest_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_FileTest* example_Nova_FileTest_Nova_construct(example_Nova_FileTest* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_FileTest, this,);
	this->vtable = &example_FileTest_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_FileTest_Nova_super(this, exceptionData);
	
	{
		example_Nova_FileTest_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_FileTest_Nova_destroy(example_Nova_FileTest** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_FileTest_static_Nova_main(example_Nova_FileTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_io_Nova_File* l1_Nova_f = (nova_io_Nova_File*)nova_null;
	
	l1_Nova_f = nova_io_Nova_File_1_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("C:/Users/Braden Steffaniak/test3.txt")));
	if (nova_io_Nova_File_Accessorfunc_Nova_exists(l1_Nova_f, exceptionData))
	{
		nova_io_Nova_FileWriter* l2_Nova_writer = (nova_io_Nova_FileWriter*)nova_null;
		nova_io_Nova_FileReader* l2_Nova_reader = (nova_io_Nova_FileReader*)nova_null;
		nova_Nova_String* l2_Nova_data = (nova_Nova_String*)nova_null;
		
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Your file exists!")));
		l2_Nova_writer = nova_io_Nova_FileWriter_0_Nova_construct(0, exceptionData, l1_Nova_f);
		nova_io_Nova_FileWriter_Nova_writeLine(l2_Nova_writer, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Entering data..")));
		nova_io_Nova_FileWriter_Nova_writeLine(l2_Nova_writer, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("asdfasdf thing.")));
		nova_io_Nova_FileWriter_Nova_close(l2_Nova_writer, exceptionData);
		l2_Nova_reader = nova_io_Nova_FileReader_0_Nova_construct(0, exceptionData, l1_Nova_f);
		l2_Nova_data = nova_io_Nova_FileReader_Nova_readAllContents(l2_Nova_reader, exceptionData);
		nova_io_Nova_FileReader_Nova_close(l2_Nova_reader, exceptionData);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, l2_Nova_data);
	}
	else
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Your file does not exist..")));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Press enter to exit...")));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_FileTest_Nova_this(example_Nova_FileTest* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_FileTest_Nova_super(example_Nova_FileTest* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_FileTestFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_FileTestFunctionMap* example_Nova_FileTestFunctionMap_Nova_construct(example_Nova_FileTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_FileTestFunctionMap, this,);
	this->vtable = &example_FileTest_FileTestFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_FileTestFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_FileTestFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_FileTestFunctionMap_Nova_destroy(example_Nova_FileTestFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_FileTestFunctionMap_Nova_this(example_Nova_FileTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_FileTest* example_Nova_FileTestFunctionMap_functionMapFileTestFunctionMap_Nova_construct(example_Nova_FileTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_FileTest_Nova_construct(0, exceptionData);
}

void example_Nova_FileTestFunctionMap_functionMap_static_Nova_main(example_Nova_FileTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_FileTest_static_Nova_main(0, exceptionData, args);
}

void example_Nova_FileTestFunctionMap_Nova_super(example_Nova_FileTestFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

