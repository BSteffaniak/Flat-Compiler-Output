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
#include <nova/database/nova_database_Nova_DBConnector.h>
#include <nova/database/nova_database_Nova_ResultSet.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



example_database_DatabaseDemo_Extension_VTable example_database_DatabaseDemo_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_static_Nova_connect(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_database_Nova_DatabaseDemo_static_Nova_close(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_Nova_connection);
void example_database_Nova_DatabaseDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_database_Nova_DatabaseDemo* example_database_Nova_DatabaseDemo_Nova_construct(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_database_Nova_DatabaseDemo, this,);
	this->vtable = &example_database_DatabaseDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_database_Nova_DatabaseDemo_Nova_super(this, exceptionData);
	
	{
		example_database_Nova_DatabaseDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_database_Nova_DatabaseDemo_Nova_destroy(example_database_Nova_DatabaseDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_database_Nova_DatabaseDemo_static_Nova_main(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* example_database_Nova_DatabaseDemo_Nova_args)
{
	nova_database_Nova_DBConnector* l1_Nova_connection = (nova_database_Nova_DBConnector*)nova_null;
	nova_database_Nova_ResultSet* l1_Nova_result = (nova_database_Nova_ResultSet*)nova_null;
	int l1_Nova_id = 0;
	int l2_Nova_row = 0;
	
	l1_Nova_connection = example_database_Nova_DatabaseDemo_static_Nova_connect(0, exceptionData);
	l1_Nova_result = nova_database_Nova_DBConnector_Nova_query(l1_Nova_connection, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("select * from market")));
	l2_Nova_row = (int)0;
	for (; l2_Nova_row < (int)nova_database_Nova_ResultSet_Accessor_Nova_numRows(l1_Nova_result, exceptionData); l2_Nova_row++)
	{
		int l4_Nova_col = 0;
		
		nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Found ("))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l2_Nova_row))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("): "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_database_Nova_ResultSet_Nova_rows), exceptionData, l2_Nova_row)), exceptionData, 0))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
		l4_Nova_col = (int)1;
		for (; l4_Nova_col < (int)l1_Nova_result->nova_database_Nova_ResultSet_Nova_numCols; l4_Nova_col++)
		{
			nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l1_Nova_result), exceptionData)));
		}
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
	}
	l1_Nova_id = nova_primitive_number_Nova_Int_static_Nova_parseInt(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_database_Nova_ResultSet_Nova_rows), exceptionData, nova_database_Nova_ResultSet_Accessor_Nova_numRows(l1_Nova_result, exceptionData) - 1)), exceptionData, 0))) + 1;
	nova_database_Nova_DBConnector_Nova_query(l1_Nova_connection, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("insert into market values("))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_id))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", 6, 634, 3);")))));
	example_database_Nova_DatabaseDemo_static_Nova_close(0, exceptionData, l1_Nova_connection);
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_static_Nova_connect(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_database_Nova_DBConnector* l1_Nova_connection = (nova_database_Nova_DBConnector*)nova_null;
	nova_Nova_String* l1_Nova_error = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Connecting...")));
	l1_Nova_connection = nova_database_Nova_DBConnector_Nova_construct(0, exceptionData);
	nova_database_Nova_DBConnector_1_Nova_connect(l1_Nova_connection, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("localhost")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("root")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("server")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test")));
	l1_Nova_error = l1_Nova_connection->nova_database_Nova_DBConnector_Nova_error;
	if (l1_Nova_error->nova_Nova_String_Nova_count > 0)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: "))), exceptionData, l1_Nova_error));
	}
	else
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Connected.")));
	}
	return l1_Nova_connection;
}

void example_database_Nova_DatabaseDemo_static_Nova_close(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_Nova_connection)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Closing...")));
	nova_database_Nova_DBConnector_Nova_close(example_database_Nova_DatabaseDemo_Nova_connection, exceptionData);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Closed")));
}

void example_database_Nova_DatabaseDemo_Nova_this(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_database_Nova_DatabaseDemo_Nova_super(example_database_Nova_DatabaseDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

