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
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* Node parent */ spectra_tree_nodes_Nova_Node** spectra_tree_nodes_Nova_Type_Nova_parent;
	/* Location location */ spectra_util_Nova_Location** spectra_tree_nodes_Nova_Type_Nova_location;
} Context3;
typedef struct
{
} Context4;


spectra_tree_nodes_Type_Extension_VTable spectra_tree_nodes_Type_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
	},
	spectra_tree_nodes_Nova_Type_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_Type_Accessor_Nova_isGeneric,
};



spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent);
char spectra_tree_nodes_Nova_Type_Nova_parseGenericArguments(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
char spectra_tree_nodes_Nova_Type_Nova_parseArray(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, char require);
char spectra_tree_nodes_Nova_Type_Nova_lambda117(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context1* context);
char spectra_tree_nodes_Nova_Type_Nova_lambda118(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context2* context);
spectra_tree_nodes_generics_Nova_GenericArgument* spectra_tree_nodes_Nova_Type_Nova_lambda119(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
char spectra_tree_nodes_Nova_Type_Nova_lambda120(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericArgument* _1, Context4* context);

void spectra_tree_nodes_Nova_Type_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_Nova_construct(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Type, this,);
	this->vtable = &spectra_tree_nodes_Type_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Type_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Type_Nova_this(this, exceptionData, name);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Type_Nova_destroy(spectra_tree_nodes_Nova_Type** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData);
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Type_Nova_genericArguments, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Type_Nova_this(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	this->spectra_tree_nodes_Nova_Type_Nova_name = name;
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_static_Nova_parse(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_Nova_Type* l1_Nova_node = (spectra_tree_nodes_Nova_Type*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = spectra_tree_nodes_Nova_Type_Nova_construct(0, exceptionData, input);
	if (!spectra_tree_nodes_Nova_Type_Nova_parseGenericArguments(l1_Nova_node, exceptionData, input, parent, location))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse generic arguments for type '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent), 1);
	}
	else if (!spectra_tree_nodes_Nova_Type_Nova_parseArray(l1_Nova_node, exceptionData, parent, require))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse array dimensions for type '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent), 1);
	}
	else if (!spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l1_Nova_node->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid type '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent), 1);
	}
	else
	{
		if (parent != (spectra_tree_nodes_Nova_Node*)nova_null)
		{
			spectra_tree_nodes_generics_Nova_GenericParameter* l10_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
			
			l10_Nova_param = spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(l1_Nova_node, exceptionData, parent);
			if (l10_Nova_param != (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null)
			{
				l1_Nova_node = spectra_tree_nodes_Nova_Type_Nova_cloneTo(l1_Nova_node, exceptionData, (spectra_tree_nodes_Nova_Type*)(spectra_tree_nodes_generics_Nova_GenericType_Nova_construct(0, exceptionData, 0)));
			}
		}
		return l1_Nova_node;
	}
	return (spectra_tree_nodes_Nova_Type*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	if (spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(parent), exceptionData) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
	{
		spectra_tree_nodes_generics_Nova_GenericParameter* l1_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
		Context1 contextArg117 = 
		{
		};
		
		l1_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure24_Nova_func)&spectra_tree_nodes_Nova_Type_Nova_lambda117, this, &contextArg117));
		if (l1_Nova_param != (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null)
		{
			return l1_Nova_param;
		}
	}
	if (spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(parent), exceptionData) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null)
	{
		spectra_tree_nodes_generics_Nova_GenericParameter* l3_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
		Context2 contextArg118 = 
		{
		};
		
		l3_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure24_Nova_func)&spectra_tree_nodes_Nova_Type_Nova_lambda118, this, &contextArg118));
		if (l3_Nova_param != (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null)
		{
			return l3_Nova_param;
		}
	}
	return (spectra_tree_nodes_generics_Nova_GenericParameter*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_Nova_Type_Nova_parseGenericArguments(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	int l1_Nova_genericIndex = 0;
	
	l1_Nova_genericIndex = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '<', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_genericIndex > 0)
	{
		int l1_Nova_end = 0;
		
		this->spectra_tree_nodes_Nova_Type_Nova_name = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_genericIndex));
		l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_genericIndex, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l1_Nova_end > 0)
		{
			Context3 contextArg119 = 
			{
				&parent,
				&location,
			};
			Context4 contextArg120 = 
			{
			};
			
			this->spectra_tree_nodes_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_genericIndex + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&spectra_tree_nodes_Nova_Type_Nova_lambda119, this, &contextArg119));
			if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&spectra_tree_nodes_Nova_Type_Nova_lambda120, this, &contextArg120))
			{
				return 0;
			}
		}
	}
	return 1;
}

char spectra_tree_nodes_Nova_Type_Nova_parseArray(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, char require)
{
	int l1_Nova_start = 0;
	
	l1_Nova_start = nova_Nova_String_1_Nova_indexOf(this->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, '[', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_start > 0)
	{
		int l1_Nova_first = 0;
		int l1_Nova_end = 0;
		int l1_Nova_last = 0;
		
		l1_Nova_first = l1_Nova_start;
		l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, l1_Nova_start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null);
		l1_Nova_last = l1_Nova_end;
		while (l1_Nova_end > l1_Nova_start)
		{
			l1_Nova_last = l1_Nova_end;
			this->spectra_tree_nodes_Nova_Type_Nova_arrayDimensions++;
			if (nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->spectra_tree_nodes_Nova_Type_Nova_name), exceptionData, l1_Nova_start + 1, l1_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)->nova_Nova_String_Nova_count > 0)
			{
				spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Type declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->spectra_tree_nodes_Nova_Type_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' cannot have contents within the array brackets")))), parent, require, (intptr_t)nova_null);
				return 0;
			}
			l1_Nova_start = nova_Nova_String_1_Nova_indexOf(this->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, '[', l1_Nova_end + 1, (intptr_t)nova_null, (intptr_t)nova_null);
			if (l1_Nova_start < 0)
			{
				break;
			}
			l1_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(this->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, l1_Nova_start, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null);
		}
		if (l1_Nova_last > l1_Nova_first)
		{
			this->spectra_tree_nodes_Nova_Type_Nova_name = nova_Nova_String_Nova_trim((nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->spectra_tree_nodes_Nova_Type_Nova_name), exceptionData, 0, l1_Nova_first)), exceptionData, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->spectra_tree_nodes_Nova_Type_Nova_name), exceptionData, l1_Nova_last + 1, (intptr_t)nova_null))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		}
	}
	return 1;
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeArray(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_repeat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[]")), exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_arrayDimensions);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData) > 0 ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_toString(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_Nova_writeNova(this, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_toNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_Nova_writeNova(this, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->spectra_tree_nodes_Nova_Type_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_tree_nodes_Nova_Type_Nova_writeArray(this, exceptionData)), exceptionData, spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters(this, exceptionData)));
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_Nova_cloneTo(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* other)
{
	other->spectra_tree_nodes_Nova_Type_Nova_name = this->spectra_tree_nodes_Nova_Type_Nova_name;
	other->spectra_tree_nodes_Nova_Type_Nova_arrayDimensions = this->spectra_tree_nodes_Nova_Type_Nova_arrayDimensions;
	other->spectra_tree_nodes_Nova_Type_Nova_genericArguments = this->spectra_tree_nodes_Nova_Type_Nova_genericArguments;
	return other;
}

char spectra_tree_nodes_Nova_Type_Nova_lambda117(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(_1), exceptionData)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda118(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(_1), exceptionData)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

spectra_tree_nodes_generics_Nova_GenericArgument* spectra_tree_nodes_Nova_Type_Nova_lambda119(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return spectra_tree_nodes_generics_Nova_GenericArgument_Nova_construct(0, exceptionData, (*context->spectra_tree_nodes_Nova_Type_Nova_parent), (*context->spectra_tree_nodes_Nova_Type_Nova_location), _1);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda120(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericArgument* _1, Context4* context)
{
	return _1 == (spectra_tree_nodes_generics_Nova_GenericArgument*)nova_null;
}

char spectra_tree_nodes_Nova_Type_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


void spectra_tree_nodes_Nova_Type_Nova_super(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Type_Nova_name = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_Type_Nova_arrayDimensions = 0;
	this->spectra_tree_nodes_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_Type_Nova_arrayDimensions = (int)(0);
	this->spectra_tree_nodes_Nova_Type_Nova_genericArguments = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
}

char spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric((spectra_tree_nodes_Nova_Type*)(this), exceptionData);
}

