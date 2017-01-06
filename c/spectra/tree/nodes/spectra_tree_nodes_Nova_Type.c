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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ArrayType.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;
typedef struct
{
} Context5;
typedef struct
{
	/* let Node parent */ spectra_tree_nodes_Nova_Node** spectra_tree_nodes_Nova_Type_Nova_parent;
	/* let Location location */ spectra_util_Nova_Location** spectra_tree_nodes_Nova_Type_Nova_location;
} Context6;
typedef struct
{
} Context7;



spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent);
char spectra_tree_nodes_Nova_Type_Nova_parseGenericArguments(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
char spectra_tree_nodes_Nova_Type_Nova_lambda31(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context1* context);
char spectra_tree_nodes_Nova_Type_Nova_lambda57(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context2* context);
char spectra_tree_nodes_Nova_Type_Nova_lambda58(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context3* context);
nova_datastruct_list_Nova_Array* generated19(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Type_Nova_lambda124(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context4* context);
char spectra_tree_nodes_Nova_Type_Nova_lambda125(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context5* context);
spectra_tree_nodes_generics_Nova_GenericArgument* spectra_tree_nodes_Nova_Type_Nova_lambda126(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
char spectra_tree_nodes_Nova_Type_Nova_lambda127(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericArgument* _1, Context7* context);


nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Type_Nova_PRIMITIVE_TYPES;
void spectra_tree_nodes_Nova_Type_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_Nova_Type_Nova_PRIMITIVE_TYPES = generated19(0, exceptionData);
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
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Type_Nova_genericArguments, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData);
	
	NOVA_FREE(*this);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Type_Nova_getClass(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file)
{
	Context2* contextArg57 = NOVA_MALLOC(sizeof(Context2));
	spectra_tree_nodes_Nova_Import* nova_local_0 = (spectra_tree_nodes_Nova_Import*)nova_null;
	
	return (spectra_tree_nodes_Nova_ClassDeclaration*)((nova_local_0 = (spectra_tree_nodes_Nova_Import*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(file, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_Type_Nova_lambda57, this, contextArg57))) != (spectra_tree_nodes_Nova_Import*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null);
}

void spectra_tree_nodes_Nova_Type_Nova_this(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	this->spectra_tree_nodes_Nova_Type_Nova_name = name;
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_static_Nova_parse(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_Nova_ArrayType* l2_Nova_array = (spectra_tree_nodes_Nova_ArrayType*)nova_null;
	spectra_tree_nodes_Nova_Type* l1_Nova_node = (spectra_tree_nodes_Nova_Type*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if ((l2_Nova_array = (spectra_tree_nodes_Nova_ArrayType*)(spectra_tree_nodes_Nova_ArrayType_static_Nova_parse(0, exceptionData, input, parent, location, require))) != (spectra_tree_nodes_Nova_ArrayType*)nova_null)
	{
		return (spectra_tree_nodes_Nova_Type*)l2_Nova_array;
	}
	l1_Nova_node = spectra_tree_nodes_Nova_Type_Nova_construct(0, exceptionData, input);
	if (!spectra_tree_nodes_Nova_Type_Nova_parseGenericArguments(l1_Nova_node, exceptionData, input, parent, location))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse generic arguments for type '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), parent), 1);
	}
	else if (!spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l1_Nova_node->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData))
	{
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid type '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), parent), 1);
	}
	else
	{
		if ((parent) != (spectra_tree_nodes_Nova_Node*)nova_null)
		{
			spectra_tree_nodes_generics_Nova_GenericParameter* l9_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
			
			l9_Nova_param = spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(l1_Nova_node, exceptionData, parent);
			if ((l9_Nova_param) != (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null)
			{
				l1_Nova_node = (spectra_tree_nodes_Nova_Type*)(spectra_tree_nodes_generics_Nova_GenericType_1_Nova_construct(0, exceptionData, l1_Nova_node, l9_Nova_param));
			}
		}
		return l1_Nova_node;
	}
	return (spectra_tree_nodes_Nova_Type*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	if ((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(parent), exceptionData)) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
	{
		spectra_tree_nodes_generics_Nova_GenericParameter* l2_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
		Context4* contextArg124 = NOVA_MALLOC(sizeof(Context4));
		
		l2_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_functions_Nova_FunctionDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_Type_Nova_lambda124, this, contextArg124));
		if ((l2_Nova_param) != (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null)
		{
			return l2_Nova_param;
		}
	}
	if ((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(parent), exceptionData)) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null)
	{
		spectra_tree_nodes_generics_Nova_GenericParameter* l4_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null;
		Context5* contextArg125 = NOVA_MALLOC(sizeof(Context5));
		
		l4_Nova_param = (spectra_tree_nodes_generics_Nova_GenericParameter*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_Type_Nova_lambda125, this, contextArg125));
		if ((l4_Nova_param) != (spectra_tree_nodes_generics_Nova_GenericParameter*)nova_null)
		{
			return l4_Nova_param;
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
		int l2_Nova_end = 0;
		
		this->spectra_tree_nodes_Nova_Type_Nova_name = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_genericIndex));
		l2_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_genericIndex, '<', '>', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_end > 0)
		{
			Context6* contextArg126 = NOVA_MALLOC(sizeof(Context6));
			contextArg126->spectra_tree_nodes_Nova_Type_Nova_parent = &parent;
			contextArg126->spectra_tree_nodes_Nova_Type_Nova_location = &location;
			Context7* contextArg127 = NOVA_MALLOC(sizeof(Context7));
			
			this->spectra_tree_nodes_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_genericIndex + 1, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_Type_Nova_lambda126, this, contextArg126));
			if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&spectra_tree_nodes_Nova_Type_Nova_lambda127, this, contextArg127))
			{
				return 0;
			}
		}
	}
	return 1;
}

char spectra_tree_nodes_Nova_Type_Nova_isValid(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	Context1* contextArg31 = NOVA_MALLOC(sizeof(Context1));
	
	return spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isPrimitiveType((spectra_tree_nodes_Nova_Type*)(this), exceptionData) || nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&spectra_tree_nodes_Nova_Type_Nova_lambda31, this, contextArg31);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData) > 0 ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Type_Nova_genericArguments), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_toString(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_virtual_Nova_writeNova((spectra_tree_nodes_Nova_Type*)(this), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_toNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_virtual_Nova_writeNova((spectra_tree_nodes_Nova_Type*)(this), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_Nova_writeNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Type_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters(this, exceptionData));
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_Nova_cloneTo(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* other)
{
	other->spectra_tree_nodes_Nova_Type_Nova_name = this->spectra_tree_nodes_Nova_Type_Nova_name;
	other->spectra_tree_nodes_Nova_Type_Nova_genericArguments = this->spectra_tree_nodes_Nova_Type_Nova_genericArguments;
	return other;
}

char spectra_tree_nodes_Nova_Type_Nova_lambda31(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda57(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda58(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context3* context)
{
	return nova_Nova_String_Nova_equals(_1, exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

nova_datastruct_list_Nova_Array* generated19(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 8);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Bool"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Byte"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Short"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Int"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Long"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Float"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Double"));
	l1_Nova_temp[7] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Char"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 8);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda124(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context4* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(_1), exceptionData)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda125(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericParameter* _1, Context5* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(_1), exceptionData)->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData, this->spectra_tree_nodes_Nova_Type_Nova_name);
}

spectra_tree_nodes_generics_Nova_GenericArgument* spectra_tree_nodes_Nova_Type_Nova_lambda126(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	return spectra_tree_nodes_generics_Nova_GenericArgument_Nova_construct(0, exceptionData, (*context->spectra_tree_nodes_Nova_Type_Nova_parent), (*context->spectra_tree_nodes_Nova_Type_Nova_location), _1);
}

char spectra_tree_nodes_Nova_Type_Nova_lambda127(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericArgument* _1, Context7* context)
{
	return (_1) == (spectra_tree_nodes_generics_Nova_GenericArgument*)nova_null;
}

char spectra_tree_nodes_Nova_Type_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


char spectra_tree_nodes_Nova_Type_Accessor_Nova_isPrimitiveType(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context3* contextArg58 = NOVA_MALLOC(sizeof(Context3));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Type_Nova_PRIMITIVE_TYPES), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&spectra_tree_nodes_Nova_Type_Nova_lambda58, this, contextArg58);
}


void spectra_tree_nodes_Nova_Type_Nova_super(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Type_Nova_genericArguments = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_Type_Nova_name = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_Type_Nova_genericArguments = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_virtual_static_Nova_parse(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_Nova_Type_virtual_Nova_isValid(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_Nova_isValid((spectra_tree_nodes_Nova_Type*)(this), exceptionData, parent);
}

nova_Nova_String* spectra_tree_nodes_Nova_Type_virtual_Nova_writeNova(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_Nova_writeNova((spectra_tree_nodes_Nova_Type*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Type_virtual_Nova_cloneTo(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* other)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Type*)(this), exceptionData, other);
}

char spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric((spectra_tree_nodes_Nova_Type*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isPrimitiveType(spectra_tree_nodes_Nova_Type* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isPrimitiveType((spectra_tree_nodes_Nova_Type*)(this), exceptionData);
}

void spectra_tree_nodes_Nova_TypeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_TypeFunctionMap* spectra_tree_nodes_Nova_TypeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_TypeFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Type_TypeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_TypeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_TypeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_TypeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_TypeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_TypeFunctionMap_Nova_this(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_TypeFunctionMap_functionMapTypeFunctionMap_static_Nova_construct(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	return spectra_tree_nodes_Nova_Type_Nova_construct(0, exceptionData, name);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_getClass(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, spectra_tree_nodes_Nova_NovaFile* file)
{
	return spectra_tree_nodes_Nova_Type_Nova_getClass(reference, exceptionData, file);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_generics_Nova_GenericParameter* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_getGenericParameter(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, spectra_tree_nodes_Nova_Node* parent)
{
	return spectra_tree_nodes_Nova_Type_Nova_getGenericParameter(reference, exceptionData, parent);
}

char spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_parseGenericArguments(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_Nova_Type_Nova_parseGenericArguments(reference, exceptionData, input, parent, location);
}

char spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_isValid(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, spectra_tree_nodes_Nova_Node* parent)
{
	return spectra_tree_nodes_Nova_Type_Nova_isValid(reference, exceptionData, parent);
}

nova_Nova_String* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_writeGenericParameters(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference)
{
	return spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference)
{
	return spectra_tree_nodes_Nova_Type_Nova_toString(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_toNova(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference)
{
	return spectra_tree_nodes_Nova_Type_Nova_toNova(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference)
{
	return spectra_tree_nodes_Nova_Type_Nova_writeNova(reference, exceptionData);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_TypeFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, spectra_tree_nodes_Nova_Type* other)
{
	return spectra_tree_nodes_Nova_Type_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_Nova_TypeFunctionMap_Nova_super(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMapType_static_Nova_construct(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name)
{
	return this->vtable->spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMapType_static_Nova_construct(0, exceptionData, name);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_static_Nova_parse(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	return this->vtable->spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_isValid(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, spectra_tree_nodes_Nova_Node* parent)
{
	return this->vtable->spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_isValid(this, exceptionData, reference, parent);
}

nova_Nova_String* spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_writeNova(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_writeNova(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_cloneTo(spectra_tree_nodes_Nova_TypeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* reference, spectra_tree_nodes_Nova_Type* other)
{
	return this->vtable->spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_cloneTo(this, exceptionData, reference, other);
}

