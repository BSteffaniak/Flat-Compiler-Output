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
#include <nova/NativeObject.h>



void nova_network_Nova_Socket_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_Socket* nova_network_Nova_Socket_Nova_construct(nova_network_Nova_Socket* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* ip, int port)
{
	CCLASS_NEW(nova_network_Nova_Socket, this,);
	this->vtable = &nova_network_Socket_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_network_Nova_Socket_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_Socket_Nova_this(this, exceptionData, ip, port);
	}
	
	return this;
}

void nova_network_Nova_Socket_Nova_destroy(nova_network_Nova_Socket** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_network_Nova_Socket_Nova_ip, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_network_Nova_Socket_Nova_this(nova_network_Nova_Socket* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* ip, int port)
{
	this->nova_network_Nova_Socket_Nova_ip = ip;
	this->nova_network_Nova_Socket_Nova_port = port;
}

void nova_network_Nova_Socket_Nova_super(nova_network_Nova_Socket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_network_Nova_Socket_Nova_ip = (nova_Nova_String*)nova_null;
	this->nova_network_Nova_Socket_Nova_port = 0;
}

void nova_network_Nova_SocketFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_SocketFunctionMap* nova_network_Nova_SocketFunctionMap_Nova_construct(nova_network_Nova_SocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_network_Nova_SocketFunctionMap, this,);
	this->vtable = &nova_network_Socket_SocketFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_network_Nova_SocketFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_SocketFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_network_Nova_SocketFunctionMap_Nova_destroy(nova_network_Nova_SocketFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_network_Nova_SocketFunctionMap_Nova_this(nova_network_Nova_SocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_network_Nova_Socket* nova_network_Nova_SocketFunctionMap_functionMapSocketFunctionMap_Nova_construct(nova_network_Nova_SocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* ip, int port)
{
	return nova_network_Nova_Socket_Nova_construct(0, exceptionData, ip, port);
}

void nova_network_Nova_SocketFunctionMap_Nova_super(nova_network_Nova_SocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_network_Nova_SocketPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_SocketPropertyMap* nova_network_Nova_SocketPropertyMap_Nova_construct(nova_network_Nova_SocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_network_Nova_SocketPropertyMap, this,);
	this->vtable = &nova_network_Socket_SocketPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_network_Nova_SocketPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_SocketPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_network_Nova_SocketPropertyMap_Nova_destroy(nova_network_Nova_SocketPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_network_Nova_SocketPropertyMap_Nova_this(nova_network_Nova_SocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_network_Nova_SocketPropertyMap_functionMap_Nova_ip(nova_network_Nova_SocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_Socket* reference)
{
	return reference->nova_network_Nova_Socket_Nova_ip;
}

int nova_network_Nova_SocketPropertyMap_functionMap_Nova_port(nova_network_Nova_SocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_Socket* reference)
{
	return reference->nova_network_Nova_Socket_Nova_port;
}

void nova_network_Nova_SocketPropertyMap_Nova_super(nova_network_Nova_SocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

