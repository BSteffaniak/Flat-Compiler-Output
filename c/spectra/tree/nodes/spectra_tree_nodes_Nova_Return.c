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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
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



void spectra_tree_nodes_Nova_Return_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Return* spectra_tree_nodes_Nova_Return_Nova_construct(spectra_tree_nodes_Nova_Return* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_Nova_Value* value)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Return, this,);
	this->vtable = &spectra_tree_nodes_Return_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Return_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Return_Nova_this(this, exceptionData, parent, location, value);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Return_Nova_destroy(spectra_tree_nodes_Nova_Return** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Return_Nova_value, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Return_Nova_this(spectra_tree_nodes_Nova_Return* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_Nova_Value* value)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	value = (spectra_tree_nodes_Nova_Value*)(value == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)value);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_Nova_Return_Nova_value = value;
}

spectra_tree_nodes_Nova_Return* spectra_tree_nodes_Nova_Return_static_Nova_parse(spectra_tree_nodes_Nova_Return* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("return"))))
	{
		spectra_tree_nodes_Nova_Return* l2_Nova_node = (spectra_tree_nodes_Nova_Return*)nova_null;
		nova_Nova_String* l2_Nova_contents = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_Nova_Return_Nova_construct(0, exceptionData, parent, location, 0);
		l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, 7, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (l2_Nova_contents->nova_Nova_String_Nova_count > 0)
		{
			l2_Nova_node->spectra_tree_nodes_Nova_Return_Nova_value = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, l2_Nova_contents, (spectra_tree_nodes_Nova_Node*)(l2_Nova_node), 0, (intptr_t)nova_null));
			if ((l2_Nova_node->spectra_tree_nodes_Nova_Return_Nova_value) == (spectra_tree_nodes_Nova_Value*)nova_null)
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid return value '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_contents), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
				return (spectra_tree_nodes_Nova_Return*)(nova_Nova_Object*)nova_null;
			}
		}
		return l2_Nova_node;
	}
	return (spectra_tree_nodes_Nova_Return*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_Nova_Return_Nova_writeValue(spectra_tree_nodes_Nova_Return* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_Return_Nova_value) != (spectra_tree_nodes_Nova_Value*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_Return_Nova_value), exceptionData) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_Return_Nova_writeNova(spectra_tree_nodes_Nova_Return* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim((nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("return ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Return_Nova_writeValue(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

void spectra_tree_nodes_Nova_Return_Nova_super(spectra_tree_nodes_Nova_Return* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Return_Nova_value = (spectra_tree_nodes_Nova_Value*)nova_null;
}

