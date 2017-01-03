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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/util/spectra_util_Nova_Location.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;



char spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimensions(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input);
nova_Nova_String* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_lambda59(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_arrays_Nova_ArrayAccess* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_arrays_Nova_ArrayAccess, this,);
	this->vtable = &spectra_tree_nodes_arrays_ArrayAccess_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_destroy(spectra_tree_nodes_arrays_Nova_ArrayAccess** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_this(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_arrays_Nova_ArrayAccess* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_arrays_Nova_ArrayAccess* l1_Nova_node = (spectra_tree_nodes_arrays_Nova_ArrayAccess*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct(0, exceptionData, parent, location);
	if (spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimensions(l1_Nova_node, exceptionData, input))
	{
		return l1_Nova_node;
	}
	return (spectra_tree_nodes_arrays_Nova_ArrayAccess*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimension)
{
	return (spectra_tree_nodes_Nova_Value*)nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_last((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions), exceptionData, (nova_Nova_Object*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, dimension, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null)))), exceptionData) != (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value*)nova_null;
}

char spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimensions(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(input), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension, this, nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_writeNova(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1* contextArg59 = NOVA_MALLOC(sizeof(Context1));
	
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_lambda59, this, contextArg59)), exceptionData, 0);
}

nova_Nova_String* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_lambda59(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))));
}

void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_super(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap* spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_construct(spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_arrays_ArrayAccess_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_destroy(spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_this(spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_super(spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

