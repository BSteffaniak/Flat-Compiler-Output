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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;


spectra_tree_nodes_generics_GenericCompatible_Extension_VTable spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))spectra_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters,
		0,
	},
};



nova_Nova_String* spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda29(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda129(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
char spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda130(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context3* context);
void spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

char spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int requireWholeString)
{
	int l1_Nova_genericIndex = 0;
	
	requireWholeString = (int)(requireWholeString == (intptr_t)nova_null ? 0 : requireWholeString);
	l1_Nova_genericIndex = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '<', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_genericIndex >= 0 && (!requireWholeString || l1_Nova_genericIndex == 0))
	{
		int l2_Nova_end = 0;
		
		l2_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_genericIndex, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_end > 0 && (!requireWholeString || l2_Nova_end == input->nova_Nova_String_Nova_count - 1))
		{
			nova_Nova_String* l3_Nova_contents = (nova_Nova_String*)nova_null;
			nova_datastruct_list_Nova_Array* l3_Nova_params = (nova_datastruct_list_Nova_Array*)nova_null;
			Context2 contextArg129 = 
			{
			};
			Context3 contextArg130 = 
			{
			};
			
			l3_Nova_contents = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_genericIndex + 1, l2_Nova_end));
			l3_Nova_params = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(l3_Nova_contents, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda129, this, &contextArg129));
			spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, (nova_datastruct_list_Nova_Array*)(l3_Nova_params));
			if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda130, this, &contextArg130))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to parse all generic parameters '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l3_Nova_contents)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (spectra_tree_nodes_Nova_Node*)this), 1);
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null));
	return 1;
}

nova_Nova_String* spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg29 = 
	{
	};
	
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData) > 0 ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda29, this, &contextArg29)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

spectra_tree_nodes_generics_Nova_GenericCompatible* spectra_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericCompatible* other)
{
	spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(other), exceptionData, spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData));
	return other;
}

nova_Nova_String* spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda29(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda129(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return spectra_tree_nodes_generics_Nova_GenericParameter_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)this, ((spectra_tree_nodes_Nova_Node*)this)->spectra_tree_nodes_Nova_Node_Nova_location, _1);
}

char spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda130(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context3* context)
{
	return _1 == (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	return (nova_datastruct_list_Nova_Array*)value;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	return this->vtable->itable.spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, value);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData);
}

