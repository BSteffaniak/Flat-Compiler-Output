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
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericParameter.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;


compiler_tree_nodes_generics_GenericCompatible_Extension_VTable compiler_tree_nodes_generics_GenericCompatible_Extension_VTable_val =
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
		(nova_datastruct_list_Nova_Array*(*)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))compiler_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters,
		0,
	},
};



nova_Nova_String* compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda24(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_generics_Nova_GenericParameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
compiler_tree_nodes_generics_Nova_GenericParameter* compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda120(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
char compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda121(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_generics_Nova_GenericParameter* _1, Context3* context);
void compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

char compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int requireWholeString)
{
	int l1_Nova_genericIndex = 0;
	
	requireWholeString = (int)(requireWholeString == (intptr_t)nova_null ? 0 : requireWholeString);
	l1_Nova_genericIndex = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '<', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_genericIndex >= 0 && (!requireWholeString || l1_Nova_genericIndex == 0))
	{
		int l2_Nova_end = 0;
		
		l2_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_genericIndex, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_end > 0 && (!requireWholeString || l2_Nova_end == input->nova_Nova_String_Nova_count - 1))
		{
			nova_Nova_String* l3_Nova_contents = (nova_Nova_String*)nova_null;
			nova_datastruct_list_Nova_Array* l3_Nova_params = (nova_datastruct_list_Nova_Array*)nova_null;
			Context2 contextArg120 = 
			{
			};
			Context3 contextArg121 = 
			{
			};
			
			l3_Nova_contents = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_genericIndex + 1, l2_Nova_end));
			l3_Nova_params = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(l3_Nova_contents, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda120, this, &contextArg120));
			compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, (nova_datastruct_list_Nova_Array*)(l3_Nova_params));
			if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda121, this, &contextArg121))
			{
				THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to parse all generic parameters '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l3_Nova_contents)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)this), 1);
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null));
	return 1;
}

nova_Nova_String* compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg24 = 
	{
	};
	
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData) > 0 ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda24, this, &contextArg24)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

compiler_tree_nodes_generics_Nova_GenericCompatible* compiler_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_generics_Nova_GenericCompatible* other)
{
	compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(other), exceptionData, compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData));
	return other;
}

nova_Nova_String* compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda24(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_generics_Nova_GenericParameter* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

compiler_tree_nodes_generics_Nova_GenericParameter* compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda120(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return compiler_tree_nodes_generics_Nova_GenericParameter_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)this, ((compiler_tree_nodes_Nova_Node*)this)->compiler_tree_nodes_Nova_Node_Nova_location, _1);
}

char compiler_tree_nodes_generics_Nova_GenericCompatible_Nova_lambda121(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_generics_Nova_GenericParameter* _1, Context3* context)
{
	return _1 == (compiler_tree_nodes_generics_Nova_GenericParameter*)nova_null;
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	return (nova_datastruct_list_Nova_Array*)value;
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	return this->vtable->itable.compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, value);
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters(compiler_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((compiler_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData);
}

