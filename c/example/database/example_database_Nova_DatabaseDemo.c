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
#include <nova/database/nova_database_Nova_DBConnector.h>
#include <nova/database/nova_database_Nova_ResultSet.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_static_Nova_connect(example_database_Nova_DatabaseDemo* this);
void example_database_Nova_DatabaseDemo_static_Nova_close(example_database_Nova_DatabaseDemo* this, nova_database_Nova_DBConnector* connection);

nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_static_Nova_connect(example_database_Nova_DatabaseDemo* this);
void example_database_Nova_DatabaseDemo_static_Nova_close(example_database_Nova_DatabaseDemo* this, nova_database_Nova_DBConnector* connection);
char example_database_Nova_DatabaseDemo_Nova_init_static_inited = 0;
void example_database_Nova_DatabaseDemo_Nova_init_static()
{
	if (!example_database_Nova_DatabaseDemo_Nova_init_static_inited) {
		example_database_Nova_DatabaseDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_database_Nova_DatabaseDemo* example_database_Nova_DatabaseDemo_Nova_construct(example_database_Nova_DatabaseDemo* this)
{
	CCLASS_NEW(example_database_Nova_DatabaseDemo, this,);
	this->vtable = &example_database_Nova_DatabaseDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_database_Nova_DatabaseDemo_Nova_super(this);
	
	return example_database_Nova_DatabaseDemo_Nova_this((example_database_Nova_DatabaseDemo*)(this));
}

void example_database_Nova_DatabaseDemo_Nova_destroy(example_database_Nova_DatabaseDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_database_Nova_DatabaseDemo_static_Nova_main(example_database_Nova_DatabaseDemo* this, nova_datastruct_list_Nova_Array* args)
{
	nova_database_Nova_DBConnector* l1_Nova_connection = (nova_database_Nova_DBConnector*)nova_null;
	nova_database_Nova_ResultSet* l1_Nova_result = (nova_database_Nova_ResultSet*)nova_null;
	int l1_Nova_id = 0;
	
	l1_Nova_connection = example_database_Nova_DatabaseDemo_static_Nova_connect(0);
	l1_Nova_result = nova_database_Nova_DBConnector_Nova_query((nova_database_Nova_DBConnector*)(l1_Nova_connection),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("select * from market")));
	int l13_Nova_row;
	l13_Nova_row = (int)0;
	for (; l13_Nova_row < (int)nova_database_Nova_ResultSet_Accessorfunc_Nova_numRows((nova_database_Nova_ResultSet*)(l1_Nova_result)); l13_Nova_row++)
	{
		nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("Found ("))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										(l13_Nova_row))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)("): "))),
									(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_database_Nova_ResultSet_Nova_rows),
																l13_Nova_row)),
											0))))),
											(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
													(char*)(""))))))))))));
		int l42_Nova_col;
		l42_Nova_col = (int)1;
		for (; l42_Nova_col < (int)l1_Nova_result->nova_database_Nova_ResultSet_Nova_numCols; l42_Nova_col++)
		{
			nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
				(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(", "))),
						(nova_Nova_Object*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_database_Nova_ResultSet_Nova_rows),
										l13_Nova_row)),
			l42_Nova_col)))))));
		}
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("")));
	}
	l1_Nova_id = nova_primitive_number_Nova_Int_static_Nova_parseInt((nova_primitive_number_Nova_Int*)(0),
		(nova_Nova_String*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_database_Nova_ResultSet_Nova_rows),
						nova_database_Nova_ResultSet_Accessorfunc_Nova_numRows((nova_database_Nova_ResultSet*)(l1_Nova_result)) - 1)),
	0))) + 1;
	nova_database_Nova_DBConnector_Nova_query((nova_database_Nova_DBConnector*)(l1_Nova_connection),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("insert into market values("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l1_Nova_id))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(", 6, 634, 3);"))))))));
	example_database_Nova_DatabaseDemo_static_Nova_close(0,
	l1_Nova_connection);
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

nova_database_Nova_DBConnector* example_database_Nova_DatabaseDemo_static_Nova_connect(example_database_Nova_DatabaseDemo* this)
{
	nova_database_Nova_DBConnector* l1_Nova_connection = (nova_database_Nova_DBConnector*)nova_null;
	nova_Nova_String* l1_Nova_error = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Connecting...")));
	l1_Nova_connection = nova_database_Nova_DBConnector_Nova_construct(0);
	nova_database_Nova_DBConnector_1_Nova_connect((nova_database_Nova_DBConnector*)(l1_Nova_connection),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("localhost")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("root")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("server")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("test")));
	l1_Nova_error = l1_Nova_connection->nova_database_Nova_DBConnector_Nova_error;
	if (l1_Nova_error->nova_Nova_String_Nova_count > 0)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("Error: "))),
					(nova_Nova_Object*)(l1_Nova_error))));
	}
	else
	{
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Connected.")));
	}
	return l1_Nova_connection;
}

void example_database_Nova_DatabaseDemo_static_Nova_close(example_database_Nova_DatabaseDemo* this, nova_database_Nova_DBConnector* connection)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Closing...")));
	nova_database_Nova_DBConnector_Nova_close((nova_database_Nova_DBConnector*)(connection));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Closed")));
}

example_database_Nova_DatabaseDemo* example_database_Nova_DatabaseDemo_Nova_this(example_database_Nova_DatabaseDemo* this) {
	return this;
}
void example_database_Nova_DatabaseDemo_Nova_super(example_database_Nova_DatabaseDemo* this)
{
}

