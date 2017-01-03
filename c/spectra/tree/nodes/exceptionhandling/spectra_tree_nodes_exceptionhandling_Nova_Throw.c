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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




char spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_parseException(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
void spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_exceptionhandling_Nova_Throw* spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_construct(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_exceptionhandling_Nova_Throw, this,);
	this->vtable = &spectra_tree_nodes_exceptionhandling_Throw_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_Nova_super((spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler*)this, exceptionData);
	spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_destroy(spectra_tree_nodes_exceptionhandling_Nova_Throw** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_exception, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_this(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_exceptionhandling_Nova_Throw* spectra_tree_nodes_exceptionhandling_Nova_Throw_static_Nova_parse(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	char l1_Nova_soft = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_soft = 0;
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("softly"))))
	{
		l1_Nova_soft = 1;
		input = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("softly "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("throw"))))
	{
		spectra_tree_nodes_exceptionhandling_Nova_Throw* l3_Nova_node = (spectra_tree_nodes_exceptionhandling_Nova_Throw*)nova_null;
		nova_Nova_String* l3_Nova_exception = (nova_Nova_String*)nova_null;
		
		l3_Nova_node = spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_construct(0, exceptionData, parent, location);
		l3_Nova_node->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_soft = l1_Nova_soft;
		l3_Nova_exception = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("throw "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (!spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_parseException(l3_Nova_node, exceptionData, l3_Nova_exception))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse thrown exception '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l3_Nova_exception), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), 0), 1);
		}
		else
		{
			return l3_Nova_node;
		}
	}
	return (spectra_tree_nodes_exceptionhandling_Nova_Throw*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_parseException(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return (this->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_exception = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null))) != (spectra_tree_nodes_Nova_Value*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_writeNova(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim((nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(this->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_soft ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("softly")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" throw ")), exceptionData, (spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_exception), exceptionData)))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

void spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_super(spectra_tree_nodes_exceptionhandling_Nova_Throw* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_soft = 0;
	this->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_exception = (spectra_tree_nodes_Nova_Value*)nova_null;
	this->spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_soft = 0;
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap* spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_construct(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_exceptionhandling_Throw_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_destroy(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_this(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_super(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

