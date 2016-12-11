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
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



spectra_SyntaxMessage_Extension_VTable spectra_SyntaxMessage_Extension_VTable_val =
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
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


nova_Nova_String* spectra_Nova_SyntaxMessage_Nova_latestErrorMessage;
void spectra_Nova_SyntaxMessage_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_SyntaxMessage* spectra_Nova_SyntaxMessage_Nova_construct(spectra_Nova_SyntaxMessage* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_SyntaxMessage, this,);
	this->vtable = &spectra_SyntaxMessage_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_Nova_SyntaxMessage_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_SyntaxMessage_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_SyntaxMessage_Nova_destroy(spectra_Nova_SyntaxMessage** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_SyntaxMessage_static_Nova_errorIf(spectra_Nova_SyntaxMessage* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, char condition, int throwException)
{
	throwException = (int)(throwException == (intptr_t)nova_null ? 1 : throwException);
	if (condition)
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, message, node, throwException);
	}
}

void spectra_Nova_SyntaxMessage_static_Nova_error(spectra_Nova_SyntaxMessage* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, int throwException)
{
	throwException = (int)(throwException == (intptr_t)nova_null ? 1 : throwException);
	if (node != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		message = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(message), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" - "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Node_Accessor_Nova_locationInfo(node, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	}
	if (throwException)
	{
		THROW(spectra_Nova_SyntaxErrorException_1_Nova_construct(0, exceptionData, message, node, 0), 0);
	}
	else
	{
		nova_datastruct_list_Nova_Array_virtual0_Nova_add((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_compiler(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((spectra_tree_nodes_Nova_Node*)(node), exceptionData), exceptionData)->spectra_Nova_Spectra_Nova_errors), exceptionData, (nova_Nova_Object*)(message));
	}
}

void spectra_Nova_SyntaxMessage_Nova_this(spectra_Nova_SyntaxMessage* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_SyntaxMessage_Nova_super(spectra_Nova_SyntaxMessage* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

