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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericArgument.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Node parent = null */ compiler_tree_nodes_Nova_Node** compiler_tree_nodes_Nova_Type_Nova_parent;
	/* Location location = Location.INVALID */ compiler_util_Nova_Location** compiler_tree_nodes_Nova_Type_Nova_location;
} Context1;


compiler_tree_nodes_Type_Extension_VTable compiler_tree_nodes_Type_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	compiler_tree_nodes_Nova_Type_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



compiler_tree_nodes_generics_Nova_GenericArgument* compiler_tree_nodes_Nova_Type_Nova_testLambda96(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_tree_nodes_Nova_Type_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_Type* compiler_tree_nodes_Nova_Type_Nova_construct(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Type, this,);
	this->vtable = &compiler_tree_nodes_Type_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Type_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Type_Nova_this(this, exceptionData, name, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Type_Nova_destroy(compiler_tree_nodes_Nova_Type** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Type_Nova_name, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Type_Nova_genericArguments, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_Type_Nova_this(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	int l1_Nova_genericIndex = 0;
	
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	this->compiler_tree_nodes_Nova_Type_Nova_name = name;
	l1_Nova_genericIndex = nova_Nova_String_1_Nova_indexOf(name, exceptionData, '<', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_genericIndex > 0)
	{
		int l1_Nova_end = 0;
		
		this->compiler_tree_nodes_Nova_Type_Nova_name = nova_Nova_String_Nova_substring(name, exceptionData, (intptr_t)nova_null, l1_Nova_genericIndex);
		l1_Nova_end = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(name, exceptionData, l1_Nova_genericIndex, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_end > 0)
		{
			Context1 contextArg96 = 
			{
				&parent,
				&location,
			};
			
			this->compiler_tree_nodes_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_Nova_substring(name, exceptionData, l1_Nova_genericIndex + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_Type_Nova_testLambda96, this, &contextArg96));
		}
	}
}

nova_Nova_String* compiler_tree_nodes_Nova_Type_Nova_toString(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Type_Nova_toNova(this, exceptionData);
}

nova_Nova_String* compiler_tree_nodes_Nova_Type_Nova_toNova(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Type_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, ((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData) > 0 ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

compiler_tree_nodes_generics_Nova_GenericArgument* compiler_tree_nodes_Nova_Type_Nova_testLambda96(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return compiler_tree_nodes_generics_Nova_GenericArgument_Nova_construct(0, exceptionData, (*context->compiler_tree_nodes_Nova_Type_Nova_parent), (*context->compiler_tree_nodes_Nova_Type_Nova_location), _1);
}

void compiler_tree_nodes_Nova_Type_Nova_super(compiler_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Type_Nova_name = (nova_Nova_String*)nova_null;
	this->compiler_tree_nodes_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_Type_Nova_genericArguments = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
}

