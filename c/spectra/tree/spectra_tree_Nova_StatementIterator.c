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
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



CCLASS_PRIVATE
(
	spectra_tree_Nova_StatementIterator,
	nova_datastruct_list_Nova_Stack* spectra_tree_Nova_StatementIterator_Nova_parents;
	
)

void spectra_tree_Nova_StatementIterator_Nova_updateScopeProperties(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* generated16(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);


nova_datastruct_list_Nova_CharArray* spectra_tree_Nova_StatementIterator_Nova_NON_STATEMENT_CHARS;
void spectra_tree_Nova_StatementIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_Nova_StatementIterator_Nova_NON_STATEMENT_CHARS = generated16(0, exceptionData);
	}
}

spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIterator_Nova_construct(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, nova_datastruct_list_Nova_Stack* parents)
{
	CCLASS_NEW(spectra_tree_Nova_StatementIterator, this);
	this->vtable = &spectra_tree_StatementIterator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_Nova_StatementIterator_Nova_super(this, exceptionData);
	
	{
		spectra_tree_Nova_StatementIterator_Nova_this(this, exceptionData, source, parents);
	}
	
	return this;
}

void spectra_tree_Nova_StatementIterator_Nova_destroy(spectra_tree_Nova_StatementIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Stack_Nova_destroy(&(*this)->prv->spectra_tree_Nova_StatementIterator_Nova_parents, exceptionData);
	NOVA_FREE((*this)->prv);
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData);
	
	
	
	
	
	NOVA_FREE(*this);
}

void spectra_tree_Nova_StatementIterator_Nova_updateScopeProperties(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_nextIndex = 0;
	char l1_Nova_nextChar = 0;
	int l1_Nova_afterIndex = 0;
	char l1_Nova_charAfter = 0;
	
	l1_Nova_nextIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, this->spectra_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_nextChar = nova_Nova_String_Nova_get(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, l1_Nova_nextIndex);
	l1_Nova_afterIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, l1_Nova_nextIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_charAfter = nova_Nova_String_Nova_get(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, l1_Nova_afterIndex);
	this->spectra_tree_Nova_StatementIterator_Nova_beginsScope = this->spectra_tree_Nova_StatementIterator_Nova_position < this->spectra_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count && l1_Nova_nextChar == '{';
this->spectra_tree_Nova_StatementIterator_Nova_endsScope = this->spectra_tree_Nova_StatementIterator_Nova_position < this->spectra_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count && l1_Nova_nextChar == '}';
this->spectra_tree_Nova_StatementIterator_Nova_scopesEnded = (int)(0);
if (!this->spectra_tree_Nova_StatementIterator_Nova_endsScope && l1_Nova_charAfter == '}')
{
	this->spectra_tree_Nova_StatementIterator_Nova_endsScope = 1;
	this->spectra_tree_Nova_StatementIterator_Nova_position = l1_Nova_afterIndex;
}
if (this->spectra_tree_Nova_StatementIterator_Nova_endsScope)
{
	int l3_Nova_current = 0;
	
	l3_Nova_current = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, this->spectra_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null, (intptr_t)nova_null);
	while (l3_Nova_current > 0 && nova_Nova_String_Nova_get(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, l3_Nova_current) == '}')
{
	this->spectra_tree_Nova_StatementIterator_Nova_scopesEnded++;
	l3_Nova_current = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, l3_Nova_current + 1, (intptr_t)nova_null, (intptr_t)nova_null);
}
this->spectra_tree_Nova_StatementIterator_Nova_position = (int)(l3_Nova_current < 0 ? this->spectra_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count : l3_Nova_current);}
else
{
	this->spectra_tree_Nova_StatementIterator_Nova_position++;
}}

void spectra_tree_Nova_StatementIterator_Nova_this(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, nova_datastruct_list_Nova_Stack* parents)
{
	this->spectra_tree_Nova_StatementIterator_Nova_source = nova_Nova_String_Nova_trim(source, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	this->prv->spectra_tree_Nova_StatementIterator_Nova_parents = parents;
	spectra_tree_Nova_StatementIterator_Nova_reset(this, exceptionData);
}

spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIterator_Nova_reset(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_Nova_StatementIterator_Nova_position = (int)(0);
	return this;
}

nova_datastruct_list_Nova_CharArray* generated16(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 5);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\n';
	l1_Nova_temp[2] = '\t';
	l1_Nova_temp[3] = '\r';
l1_Nova_temp[4] = '}';
return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 5);}

char spectra_tree_Nova_StatementIterator_Accessor_Nova_hasNext(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (this->spectra_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count > this->spectra_tree_Nova_StatementIterator_Nova_position)
	{
		int l4_Nova_i = 0;
		
		l4_Nova_i = (int)this->spectra_tree_Nova_StatementIterator_Nova_position;
		for (; l4_Nova_i < (int)this->spectra_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count; l4_Nova_i++)
		{
			if (!nova_datastruct_list_Nova_CharArray_Nova_contains(spectra_tree_Nova_StatementIterator_Nova_NON_STATEMENT_CHARS, exceptionData, nova_Nova_String_Nova_get(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, l4_Nova_i)))
			{
				return 1;
			}
		}
	}
	return 0;
}


nova_Nova_String* spectra_tree_Nova_StatementIterator_Accessor_Nova_next(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (spectra_tree_Nova_StatementIterator_Accessor_Nova_hasNext(this, exceptionData))
	{
		int l2_Nova_prev = 0;
		int l2_Nova_end = 0;
		
		l2_Nova_prev = this->spectra_tree_Nova_StatementIterator_Nova_position;
		this->spectra_tree_Nova_StatementIterator_Nova_position = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, this->spectra_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null, (intptr_t)nova_null);
		this->spectra_tree_Nova_StatementIterator_Nova_position = spectra_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(this->spectra_tree_Nova_StatementIterator_Nova_source, exceptionData, this->spectra_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null);
		this->spectra_tree_Nova_StatementIterator_Nova_position = (int)(this->spectra_tree_Nova_StatementIterator_Nova_position < 0 ? this->spectra_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count : this->spectra_tree_Nova_StatementIterator_Nova_position);
		l2_Nova_end = this->spectra_tree_Nova_StatementIterator_Nova_position;
		spectra_tree_Nova_StatementIterator_Nova_updateScopeProperties(this, exceptionData);
		return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->spectra_tree_Nova_StatementIterator_Nova_source), exceptionData, l2_Nova_prev, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	THROW(nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, 0), 0);
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}


void spectra_tree_Nova_StatementIterator_Nova_super(spectra_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_Nova_StatementIterator_Nova_source = (nova_Nova_String*)nova_null;
	this->spectra_tree_Nova_StatementIterator_Nova_beginsScope = 0;
	this->spectra_tree_Nova_StatementIterator_Nova_endsScope = 0;
	this->spectra_tree_Nova_StatementIterator_Nova_scopesEnded = 0;
	this->spectra_tree_Nova_StatementIterator_Nova_position = 0;
	this->prv->spectra_tree_Nova_StatementIterator_Nova_parents = (nova_datastruct_list_Nova_Stack*)nova_null;
}

void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_Nova_StatementIteratorFunctionMap* spectra_tree_Nova_StatementIteratorFunctionMap_Nova_construct(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_Nova_StatementIteratorFunctionMap, this,);
	this->vtable = &spectra_tree_StatementIterator_StatementIteratorFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_Nova_StatementIteratorFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_Nova_StatementIteratorFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_destroy(spectra_tree_Nova_StatementIteratorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_this(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIteratorFunctionMap_functionMapStatementIteratorFunctionMap_static_Nova_construct(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, nova_datastruct_list_Nova_Stack* parents)
{
	return spectra_tree_Nova_StatementIterator_Nova_construct(0, exceptionData, source, parents);
}

void spectra_tree_Nova_StatementIteratorFunctionMap_functionMap_Nova_updateScopeProperties(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_StatementIterator* reference)
{
	spectra_tree_Nova_StatementIterator_Nova_updateScopeProperties(reference, exceptionData);
}

spectra_tree_Nova_StatementIterator* spectra_tree_Nova_StatementIteratorFunctionMap_functionMap_Nova_reset(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_StatementIterator* reference)
{
	return spectra_tree_Nova_StatementIterator_Nova_reset(reference, exceptionData);
}

void spectra_tree_Nova_StatementIteratorFunctionMap_Nova_super(spectra_tree_Nova_StatementIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

