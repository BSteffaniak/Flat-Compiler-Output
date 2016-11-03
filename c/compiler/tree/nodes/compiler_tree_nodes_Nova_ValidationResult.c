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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_ValidationResult_Extension_VTable compiler_tree_nodes_ValidationResult_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};




void compiler_tree_nodes_Nova_ValidationResult_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_ValidationResult* compiler_tree_nodes_Nova_ValidationResult_Nova_construct(compiler_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_ValidationResult, this,);
	this->vtable = &compiler_tree_nodes_ValidationResult_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_ValidationResult_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_ValidationResult_Nova_this(this, exceptionData, node);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_ValidationResult_Nova_destroy(compiler_tree_nodes_Nova_ValidationResult** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_nodes_Nova_Node_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_ValidationResult_Nova_node, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_ValidationResult_Nova_this(compiler_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node)
{
	this->compiler_tree_nodes_Nova_ValidationResult_Nova_node = node;
}

char compiler_tree_nodes_Nova_ValidationResult_Accessor_Nova_skipValidation(compiler_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


void compiler_tree_nodes_Nova_ValidationResult_Nova_super(compiler_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_ValidationResult_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
}

