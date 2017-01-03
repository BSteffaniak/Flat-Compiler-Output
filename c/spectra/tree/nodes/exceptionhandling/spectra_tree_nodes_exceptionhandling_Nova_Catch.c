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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/util/spectra_util_Nova_Location.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




char spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_parseException(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
void spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_exceptionhandling_Nova_Catch* spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_construct(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_exceptionhandling_Nova_Catch, this,);
	this->vtable = &spectra_tree_nodes_exceptionhandling_Catch_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_destroy(spectra_tree_nodes_exceptionhandling_Nova_Catch** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	spectra_tree_nodes_Nova_Type_Nova_destroy(&(*this)->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable, exceptionData);
	spectra_tree_nodes_Nova_Scope_Nova_destroy(&(*this)->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_this(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	spectra_tree_nodes_exceptionhandling_Nova_Catch_Mutatorfunc_Nova_scope(this, exceptionData, spectra_tree_nodes_Nova_Scope_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), location));
}

spectra_tree_nodes_exceptionhandling_Nova_Catch* spectra_tree_nodes_exceptionhandling_Nova_Catch_static_Nova_parse(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("catch"))))
	{
		spectra_tree_nodes_exceptionhandling_Nova_Catch* l2_Nova_node = (spectra_tree_nodes_exceptionhandling_Nova_Catch*)nova_null;
		nova_Nova_String* l2_Nova_contents = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("catch"))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(l2_Nova_contents, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("all"))))
		{
			l2_Nova_node->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft = 1;
			l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_contents), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("all"))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		}
		if (l2_Nova_contents->nova_Nova_String_Nova_count > 0)
		{
			if (nova_Nova_String_Accessor_Nova_first(l2_Nova_contents, exceptionData) == '(')
			{
				if (nova_Nova_String_Accessor_Nova_last(l2_Nova_contents, exceptionData) == ')')
			{
				l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_contents), exceptionData, 1, l2_Nova_contents->nova_Nova_String_Nova_count - 1), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			}
			else
			{
				return (spectra_tree_nodes_exceptionhandling_Nova_Catch*)(nova_Nova_Object*)nova_null;
			}
		}
		if (!spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_parseException(l2_Nova_node, exceptionData, l2_Nova_contents))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse exception '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_contents), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else
		{
			return l2_Nova_node;
		}
	}
}
return (spectra_tree_nodes_exceptionhandling_Nova_Catch*)(nova_Nova_Object*)nova_null;}

char spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_parseException(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_datastruct_list_Nova_Array* l1_Nova_values = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_values = spectra_util_Nova_CompilerStringFunctions_Nova_splitValues(input, exceptionData);
	switch ((nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_values), exceptionData)))
	{
		case 2:
		this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable = (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_values), exceptionData, 1));
		case 1:
		return (this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception = spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_values), exceptionData, 0)), 0, 0, (intptr_t)nova_null)) != (spectra_tree_nodes_Nova_Type*)nova_null;
		default:
		return 0;
	}
	return 1;
}

nova_Nova_String* spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeException(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Type_Nova_toNova(this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception, exceptionData), exceptionData, ((nova_Nova_String*)((this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

nova_Nova_String* spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeNova(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_Nova_trim((nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("catch ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("all")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" (")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeException(this, exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(") ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_exceptionhandling_Nova_Catch_Accessorfunc_Nova_scope(this, exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))));
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_exceptionhandling_Nova_Catch_Accessorfunc_Nova_scope(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope;
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_exceptionhandling_Nova_Catch_Mutatorfunc_Nova_scope(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value)
{
	this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope = value;
	return value;
}

void spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_super(spectra_tree_nodes_exceptionhandling_Nova_Catch* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft = 0;
	this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_exception = (spectra_tree_nodes_Nova_Type*)nova_null;
	this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_variable = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_scope = (spectra_tree_nodes_Nova_Scope*)nova_null;
	this->spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_soft = 0;
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap* spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_construct(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_exceptionhandling_Catch_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_destroy(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_this(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_super(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

