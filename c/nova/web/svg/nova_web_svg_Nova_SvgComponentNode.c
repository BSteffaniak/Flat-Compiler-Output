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
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/NativeObject.h>



void nova_web_svg_Nova_SvgComponentNode_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgComponentNode* nova_web_svg_Nova_SvgComponentNode_Nova_construct(nova_web_svg_Nova_SvgComponentNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponent* component, nova_web_svg_Nova_SvgComponentNode* next)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgComponentNode, this,);
	this->vtable = &nova_web_svg_SvgComponentNode_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentNode_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgComponentNode_Nova_this(this, exceptionData, component, next);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgComponentNode_Nova_destroy(nova_web_svg_Nova_SvgComponentNode** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_web_svg_Nova_SvgComponent_Nova_destroy(&(*this)->nova_web_svg_Nova_SvgComponentNode_Nova_component, exceptionData);
	nova_web_svg_Nova_SvgComponentNode_Nova_destroy(&(*this)->nova_web_svg_Nova_SvgComponentNode_Nova_next, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgComponentNode_Nova_this(nova_web_svg_Nova_SvgComponentNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponent* component, nova_web_svg_Nova_SvgComponentNode* next)
{
	next = (nova_web_svg_Nova_SvgComponentNode*)(next == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)next);
	this->nova_web_svg_Nova_SvgComponentNode_Nova_component = component;
	this->nova_web_svg_Nova_SvgComponentNode_Nova_next = next;
}

void nova_web_svg_Nova_SvgComponentNode_Nova_super(nova_web_svg_Nova_SvgComponentNode* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_web_svg_Nova_SvgComponentNode_Nova_component = (nova_web_svg_Nova_SvgComponent*)nova_null;
	this->nova_web_svg_Nova_SvgComponentNode_Nova_next = (nova_web_svg_Nova_SvgComponentNode*)nova_null;
}

void nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgComponentNodeFunctionMap* nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_construct(nova_web_svg_Nova_SvgComponentNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgComponentNodeFunctionMap, this,);
	this->vtable = &nova_web_svg_SvgComponentNode_SvgComponentNodeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_destroy(nova_web_svg_Nova_SvgComponentNodeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_this(nova_web_svg_Nova_SvgComponentNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_svg_Nova_SvgComponentNode* nova_web_svg_Nova_SvgComponentNodeFunctionMap_functionMapSvgComponentNodeFunctionMap_Nova_construct(nova_web_svg_Nova_SvgComponentNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponent* component, nova_web_svg_Nova_SvgComponentNode* next)
{
	return nova_web_svg_Nova_SvgComponentNode_Nova_construct(0, exceptionData, component, next);
}

void nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_super(nova_web_svg_Nova_SvgComponentNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgComponentNodePropertyMap* nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_construct(nova_web_svg_Nova_SvgComponentNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgComponentNodePropertyMap, this,);
	this->vtable = &nova_web_svg_SvgComponentNode_SvgComponentNodePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_destroy(nova_web_svg_Nova_SvgComponentNodePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_this(nova_web_svg_Nova_SvgComponentNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_svg_Nova_SvgComponent* nova_web_svg_Nova_SvgComponentNodePropertyMap_functionMap_Nova_component(nova_web_svg_Nova_SvgComponentNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponentNode* reference)
{
	return reference->nova_web_svg_Nova_SvgComponentNode_Nova_component;
}

nova_web_svg_Nova_SvgComponentNode* nova_web_svg_Nova_SvgComponentNodePropertyMap_functionMap_Nova_next(nova_web_svg_Nova_SvgComponentNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponentNode* reference)
{
	return reference->nova_web_svg_Nova_SvgComponentNode_Nova_next;
}

void nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_super(nova_web_svg_Nova_SvgComponentNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

