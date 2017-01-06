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
#include <nova/math/logic/nova_math_logic_Nova_LogicalStatement.h>
#include <nova/math/logic/nova_math_logic_Nova_LogicalStatement.h>
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



CCLASS_PRIVATE
(
	nova_math_logic_Nova_Conclusion,
	nova_datastruct_list_Nova_Array* nova_math_logic_Nova_LogicalStatement_Nova_components;
	nova_Nova_String* nova_math_logic_Nova_LogicalStatement_Nova_statement;
	
)
void nova_math_logic_Nova_Conclusion_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_Conclusion* nova_math_logic_Nova_Conclusion_Nova_construct(nova_math_logic_Nova_Conclusion* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	CCLASS_NEW(nova_math_logic_Nova_Conclusion, this);
	this->vtable = &nova_math_logic_Conclusion_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Statement_Nova_super((nova_math_Nova_Statement*)this, exceptionData);
	nova_math_logic_Nova_LogicalStatement_Nova_super((nova_math_logic_Nova_LogicalStatement*)this, exceptionData);
	nova_math_logic_Nova_Conclusion_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_Conclusion_Nova_this(this, exceptionData, statement);
	}
	
	return this;
}

void nova_math_logic_Nova_Conclusion_Nova_destroy(nova_math_logic_Nova_Conclusion** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_Conclusion_Nova_this(nova_math_logic_Nova_Conclusion* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	nova_math_logic_Nova_LogicalStatement_Nova_this((nova_math_logic_Nova_LogicalStatement*)(this), exceptionData, statement);
}

void nova_math_logic_Nova_Conclusion_Nova_super(nova_math_logic_Nova_Conclusion* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_ConclusionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_ConclusionFunctionMap* nova_math_logic_Nova_ConclusionFunctionMap_Nova_construct(nova_math_logic_Nova_ConclusionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_ConclusionFunctionMap, this,);
	this->vtable = &nova_math_logic_Conclusion_ConclusionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_StatementFunctionMap_Nova_super((nova_math_Nova_StatementFunctionMap*)this, exceptionData);
	nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_super((nova_math_logic_Nova_LogicalStatementFunctionMap*)this, exceptionData);
	nova_math_logic_Nova_ConclusionFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_ConclusionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_ConclusionFunctionMap_Nova_destroy(nova_math_logic_Nova_ConclusionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_ConclusionFunctionMap_Nova_this(nova_math_logic_Nova_ConclusionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_logic_Nova_Conclusion* nova_math_logic_Nova_ConclusionFunctionMap_functionMapConclusionFunctionMap_Nova_construct(nova_math_logic_Nova_ConclusionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	return nova_math_logic_Nova_Conclusion_Nova_construct(0, exceptionData, statement);
}

void nova_math_logic_Nova_ConclusionFunctionMap_Nova_super(nova_math_logic_Nova_ConclusionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

