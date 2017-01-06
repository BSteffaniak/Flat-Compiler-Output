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
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;



char spectra_tree_nodes_Nova_Import_Nova_lambda44(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context);




nova_Nova_String* spectra_tree_nodes_Nova_Import_Nova_IDENTIFIER;
nova_Nova_String* spectra_tree_nodes_Nova_Import_Nova_ALIAS_IDENTIFIER;
void spectra_tree_nodes_Nova_Import_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_Nova_Import_Nova_IDENTIFIER = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("import"));
		spectra_tree_nodes_Nova_Import_Nova_ALIAS_IDENTIFIER = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("as"));
	}
}

spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_Import_Nova_construct(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Import, this,);
	this->vtable = &spectra_tree_nodes_Import_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Import_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Import_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Import_Nova_destroy(spectra_tree_nodes_Nova_Import** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Import_Nova_alias, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Import_Nova_importLocation, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Import_Nova_this(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_Nova_Import_Nova_userAdded = 1;
}

nova_Nova_String* spectra_tree_nodes_Nova_Import_Nova_getClassLocation(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, int aliased)
{
	aliased = (int)(aliased == (intptr_t)nova_null ? 0 : aliased);
	return (nova_Nova_String*)(aliased && (this->spectra_tree_nodes_Nova_Import_Nova_alias) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Import_Accessor_Nova_parentLocation(this, exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Import_Nova_alias), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))) : this->spectra_tree_nodes_Nova_Import_Nova_importLocation);
}

spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_Import_static_Nova_parse(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, spectra_tree_nodes_Nova_Import_Nova_IDENTIFIER, (intptr_t)nova_null, (intptr_t)nova_null) == 0)
	{
		spectra_tree_nodes_Nova_Import* l2_Nova_node = (spectra_tree_nodes_Nova_Import*)nova_null;
		int l2_Nova_quoteStart = 0;
		int l2_Nova_quoteEnd = 0;
		nova_Nova_String* l2_Nova_importLocation = (nova_Nova_String*)nova_null;
		nova_Nova_String* l2_Nova_alias = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_Nova_Import_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_quoteStart = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, spectra_tree_nodes_Nova_Import_Nova_IDENTIFIER->nova_Nova_String_Nova_count, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_quoteStart < 0 || nova_Nova_String_Nova_get(input, exceptionData, l2_Nova_quoteStart) != '"')
		{
			return (spectra_tree_nodes_Nova_Import*)(nova_Nova_Object*)nova_null;
		}
		l2_Nova_quoteEnd = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(input, exceptionData, '"', l2_Nova_quoteStart, (intptr_t)nova_null, 0, 0, 0, (intptr_t)nova_null);
		if (l2_Nova_quoteEnd < 0)
		{
			spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing ending quotation for import statement")), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node), (intptr_t)nova_null);
		}
		l2_Nova_importLocation = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_quoteStart + 1, l2_Nova_quoteEnd));
		l2_Nova_alias = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_quoteEnd + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_node->spectra_tree_nodes_Nova_Import_Nova_importLocation = l2_Nova_importLocation;
		l2_Nova_node->spectra_tree_nodes_Nova_Import_Nova_alias = (nova_Nova_String*)(l2_Nova_alias->nova_Nova_String_Nova_count > 0 ? (nova_Nova_Object*)l2_Nova_alias : (nova_Nova_Object*)nova_null);
		if (1)
		{
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_Nova_Import*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_Nova_Import_Nova_writeNova(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("import \"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Import_Nova_importLocation), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))));
}

char spectra_tree_nodes_Nova_Import_Nova_lambda44(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(_1, exceptionData, this->spectra_tree_nodes_Nova_Import_Nova_importLocation);
}

nova_Nova_String* spectra_tree_nodes_Nova_Import_Accessor_Nova_parentLocation(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->spectra_tree_nodes_Nova_Import_Nova_importLocation), exceptionData, 0, nova_Nova_String_1_Nova_lastIndexOf(this->spectra_tree_nodes_Nova_Import_Nova_importLocation, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, 0));
}


nova_Nova_String* spectra_tree_nodes_Nova_Import_Accessor_Nova_className(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->spectra_tree_nodes_Nova_Import_Nova_importLocation), exceptionData, nova_Nova_String_1_Nova_lastIndexOf(this->spectra_tree_nodes_Nova_Import_Nova_importLocation, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, (intptr_t)nova_null) + 1, (intptr_t)nova_null);
}


char spectra_tree_nodes_Nova_Import_Accessor_Nova_isDefault(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1* contextArg44 = NOVA_MALLOC(sizeof(Context1));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&spectra_tree_nodes_Nova_Import_Nova_lambda44, this, contextArg44);
}


spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Program_Nova_getClassDeclaration(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData, this->spectra_tree_nodes_Nova_Import_Nova_importLocation);
}


void spectra_tree_nodes_Nova_Import_Nova_super(spectra_tree_nodes_Nova_Import* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Import_Nova_used = 0;
	this->spectra_tree_nodes_Nova_Import_Nova_userAdded = 0;
	this->spectra_tree_nodes_Nova_Import_Nova_alias = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_Import_Nova_importLocation = (nova_Nova_String*)nova_null;
}

void spectra_tree_nodes_Nova_ImportFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ImportFunctionMap* spectra_tree_nodes_Nova_ImportFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ImportFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Import_ImportFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ImportFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ImportFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ImportFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ImportFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ImportFunctionMap_Nova_this(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_ImportFunctionMap_functionMapImportFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_Nova_Import_Nova_construct(0, exceptionData, parent, location);
}

nova_Nova_String* spectra_tree_nodes_Nova_ImportFunctionMap_functionMap_Nova_getClassLocation(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* reference, int aliased)
{
	aliased = (int)(aliased == (intptr_t)nova_null ? 0 : aliased);
	return spectra_tree_nodes_Nova_Import_Nova_getClassLocation(reference, exceptionData, aliased);
}

spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_ImportFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_Import_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_Nova_ImportFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* reference)
{
	return spectra_tree_nodes_Nova_Import_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_Nova_ImportFunctionMap_Nova_super(spectra_tree_nodes_Nova_ImportFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

