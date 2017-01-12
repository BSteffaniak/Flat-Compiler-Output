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
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_String.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context2;



long_long nova_Nova_Substring_Nova_lambda3(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, long_long v, char c, int _3, nova_datastruct_list_Nova_CharArray* _4, Context2* context);


void nova_Nova_Substring_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_Substring* nova_Nova_Substring_Nova_construct(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	CCLASS_NEW(nova_Nova_Substring, this,);
	this->vtable = &nova_Substring_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super((nova_Nova_String*)this, exceptionData);
	nova_Nova_Substring_Nova_super(this, exceptionData);
	
	{
		nova_Nova_Substring_Nova_this(this, exceptionData, source, start, end);
	}
	
	return this;
}

void nova_Nova_Substring_Nova_destroy(nova_Nova_Substring** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_Nova_Substring_Nova_source, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_Nova_Substring_Nova_this(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	char* l1_Nova_buf = (char*)nova_null;
	
	this->nova_Nova_Substring_Nova_source = source;
	this->nova_Nova_Substring_Nova_start = start;
	this->nova_Nova_String_Nova_count = end - start;
	l1_Nova_buf = &((char*)source->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)[start];
	this->nova_Nova_String_Nova_chars = nova_datastruct_list_Nova_StringCharArray_1_Nova_construct(0, exceptionData, l1_Nova_buf, this->nova_Nova_String_Nova_count);
}

nova_Nova_String* nova_Nova_Substring_Nova_substring(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count : end);
	if (!nova_Nova_String_Nova_validateSubstringBounds((nova_Nova_String*)(this), exceptionData, start, end, 1))
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	else if (start == end)
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	}
	else if (start == 0 && end == this->nova_Nova_String_Nova_count)
	{
		return (nova_Nova_String*)this;
	}
	return (nova_Nova_String*)nova_Nova_Substring_Nova_construct(0, exceptionData, this->nova_Nova_Substring_Nova_source, this->nova_Nova_Substring_Nova_start + start, this->nova_Nova_Substring_Nova_start + end);
}

long_long nova_Nova_Substring_Nova_lambda3(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, long_long v, char c, int _3, nova_datastruct_list_Nova_CharArray* _4, Context2* context)
{
	return 31 * v + (int)c;
}

int nova_Nova_Substring_Accessor_Nova_end(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_Substring_Nova_start + this->nova_Nova_String_Nova_count;
}


long_long nova_Nova_Substring_Accessor_Nova_hashCodeLong(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2* contextArg3 = NOVA_MALLOC(sizeof(Context2));
	
	return nova_datastruct_list_Nova_CharArray_Nova_reduce((nova_datastruct_list_Nova_CharArray*)(nova_datastruct_list_Nova_CharArray_Nova_take((nova_datastruct_list_Nova_CharArray*)(nova_datastruct_list_Nova_CharArray_Nova_skip((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, this->nova_Nova_Substring_Nova_start)), exceptionData, this->nova_Nova_String_Nova_count)), exceptionData, (nova_datastruct_list_Nova_CharArray_closure136_Nova_func)&nova_Nova_Substring_Nova_lambda3, this, contextArg3, 0);
}


void nova_Nova_Substring_Nova_super(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_Nova_Substring_Nova_source = (nova_Nova_String*)nova_null;
	this->nova_Nova_Substring_Nova_start = 0;
}

void nova_Nova_SubstringFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_SubstringFunctionMap* nova_Nova_SubstringFunctionMap_Nova_construct(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_Nova_SubstringFunctionMap, this,);
	this->vtable = &nova_Substring_SubstringFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_Nova_StringFunctionMap_Nova_super((nova_Nova_StringFunctionMap*)this, exceptionData);
	nova_Nova_SubstringFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_Nova_SubstringFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_Nova_SubstringFunctionMap_Nova_destroy(nova_Nova_SubstringFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_Nova_SubstringFunctionMap_Nova_this(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_Substring* nova_Nova_SubstringFunctionMap_functionMapSubstringFunctionMap_Nova_construct(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	return nova_Nova_Substring_Nova_construct(0, exceptionData, source, start, end);
}

nova_Nova_String* nova_Nova_SubstringFunctionMap_functionMap_Nova_substring(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference, int start, int end)
{
	return nova_Nova_Substring_Nova_substring(reference, exceptionData, start, end);
}

void nova_Nova_SubstringFunctionMap_Nova_super(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_Nova_SubstringPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_SubstringPropertyMap* nova_Nova_SubstringPropertyMap_Nova_construct(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_Nova_SubstringPropertyMap, this,);
	this->vtable = &nova_Substring_SubstringPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_Nova_StringPropertyMap_Nova_super((nova_Nova_StringPropertyMap*)this, exceptionData);
	nova_Nova_SubstringPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_Nova_SubstringPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_Nova_SubstringPropertyMap_Nova_destroy(nova_Nova_SubstringPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_Nova_SubstringPropertyMap_Nova_this(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_Nova_SubstringPropertyMap_functionMap_Nova_source(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference)
{
	return reference->nova_Nova_Substring_Nova_source;
}

int nova_Nova_SubstringPropertyMap_functionMap_Nova_start(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference)
{
	return reference->nova_Nova_Substring_Nova_start;
}

int nova_Nova_SubstringPropertyMap_functionMap_Nova_end(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference)
{
	return nova_Nova_Substring_Accessor_Nova_end(reference, exceptionData);
}

long_long nova_Nova_SubstringPropertyMap_functionMap_Nova_hashCodeLong(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference)
{
	return nova_Nova_Substring_Accessor_Nova_hashCodeLong(reference, exceptionData);
}

void nova_Nova_SubstringPropertyMap_Nova_super(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

