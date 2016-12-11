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
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>


typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef void (*nova_thread_Nova_Thread_closure1_Nova_run)(void*, nova_exception_Nova_ExceptionData*, void*);

nova_thread_Thread_Extension_VTable nova_thread_Thread_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_EqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_thread_Nova_Thread_Nova_run,
};


CCLASS_PRIVATE
(
	void (*nova_thread_Nova_Thread_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
	void* nova_thread_Nova_Thread_context_Nova_action;
	void* nova_thread_Nova_Thread_reference_Nova_action;
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	char nova_thread_Nova_Thread_Nova_useAction;
	
)

void nova_thread_Nova_Thread_Nova_action(void* this, nova_exception_Nova_ExceptionData* exceptionData, void*);
void nova_thread_Nova_Thread_Nova_startRun(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ImmutableArray* nova_thread_Nova_Thread_Nova_ACTIVE_THREADS;
void nova_thread_Nova_Thread_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_thread_Nova_Thread_Nova_ACTIVE_THREADS = (nova_datastruct_list_Nova_ImmutableArray*)(nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
	}
}

nova_thread_Nova_Thread* nova_thread_Nova_Thread_0_Nova_construct(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_thread_Nova_Thread, this);
	this->vtable = &nova_thread_Thread_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super(this, exceptionData);
	
	{
		nova_thread_Nova_Thread_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_thread_Nova_Thread* nova_thread_Nova_Thread_1_Nova_construct(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread_closure4_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* action_context)
{
	CCLASS_NEW(nova_thread_Nova_Thread, this);
	this->vtable = &nova_thread_Thread_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super(this, exceptionData);
	
	{
		nova_thread_Nova_Thread_0_Nova_this(this, exceptionData, (nova_thread_Nova_Thread_closure5_Nova_action)nova_thread_Nova_Thread_Nova_action, nova_thread_Nova_Thread_ref_Nova_action, action_context);
	}
	
	return this;
}

void nova_thread_Nova_Thread_Nova_destroy(nova_thread_Nova_Thread** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}


void nova_thread_Nova_Thread_Nova_this(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_Nova_Thread_0_Nova_this(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread_closure5_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* action_context)
{
	this->prv->nova_thread_Nova_Thread_Nova_action = nova_thread_Nova_Thread_Nova_action;
	this->prv->nova_thread_Nova_Thread_reference_Nova_action = nova_thread_Nova_Thread_ref_Nova_action;
	this->prv->nova_thread_Nova_Thread_context_Nova_action = action_context;
	this->prv->nova_thread_Nova_Thread_Nova_useAction = 1;
}

NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_start(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_thread_Nova_Thread_Nova_handle = create_thread(this, (nova_thread_Nova_Thread_closure1_Nova_run)&nova_thread_Nova_Thread_Nova_startRun, this, nova_null);
}

void nova_thread_Nova_Thread_Nova_join(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	lib_nova_thread_join(*this->prv->nova_thread_Nova_Thread_Nova_handle);
}

void nova_thread_Nova_Thread_Nova_kill(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	lib_nova_thread_cancel(*this->prv->nova_thread_Nova_Thread_Nova_handle);
}

void nova_thread_Nova_Thread_static_Nova_sleep(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData, long_long millis)
{
	lib_nova_thread_sleep(millis);
}

void nova_thread_Nova_Thread_Nova_run(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_Nova_Thread_Nova_startRun(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_thread_Nova_Thread_Nova_active = 1;
	nova_thread_Nova_Thread_Nova_ACTIVE_THREADS = (nova_datastruct_list_Nova_ImmutableArray*)(nova_datastruct_list_Nova_ImmutableArray_0_Nova_add((nova_datastruct_list_Nova_ImmutableArray*)(nova_thread_Nova_Thread_Nova_ACTIVE_THREADS), exceptionData, (nova_Nova_Object*)(this)));
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, nova_exception_Exception_Extension_VTable_val.classInstance, 0);
		
		{
			if (this->prv->nova_thread_Nova_Thread_Nova_useAction)
			{
				this->prv->nova_thread_Nova_Thread_Nova_action(this->prv->nova_thread_Nova_Thread_reference_Nova_action, exceptionData, this->prv->nova_thread_Nova_Thread_context_Nova_action);
			}
			else
			{
				nova_thread_Nova_Thread_virtual_Nova_run((nova_thread_Nova_Thread*)(this), exceptionData);
			}
		}
	}
	CATCH (nova_exception_Exception_Extension_VTable_val.classInstance)
	{
		nova_exception_Nova_Exception* l4_Nova_e = (nova_exception_Nova_Exception*)nova_null;
		
		l4_Nova_e = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("An error has occurred...")));
	}
	FINALLY
	{
	}
	END_TRY;
	this->nova_thread_Nova_Thread_Nova_active = 0;
	nova_thread_Nova_Thread_Nova_ACTIVE_THREADS = nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ImmutableArray_1_Nova_remove((nova_datastruct_list_Nova_ImmutableArray*)(nova_thread_Nova_Thread_Nova_ACTIVE_THREADS), exceptionData, (nova_Nova_Object*)(this))), exceptionData);
}

void nova_thread_Nova_Thread_Nova_super(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_thread_Nova_Thread_Nova_active = 0;
	this->prv->nova_thread_Nova_Thread_Nova_useAction = 0;
	this->prv->nova_thread_Nova_Thread_Nova_useAction = 0;
}

void nova_thread_Nova_Thread_virtual_Nova_run(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->vtable->nova_thread_Nova_Thread_virtual_Nova_run((nova_thread_Nova_Thread*)(this), exceptionData);
}

