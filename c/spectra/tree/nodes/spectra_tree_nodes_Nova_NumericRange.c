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
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotationProperty.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void spectra_tree_nodes_Nova_NumericRange_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NumericRange* spectra_tree_nodes_Nova_NumericRange_Nova_construct(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NumericRange, this,);
	this->vtable = &spectra_tree_nodes_NumericRange_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_Variable_Nova_super((spectra_tree_nodes_variables_Nova_Variable*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCall*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_super((spectra_tree_nodes_functions_Nova_Instantiation*)this, exceptionData);
	spectra_tree_nodes_Nova_NumericRange_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NumericRange_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NumericRange_Nova_destroy(spectra_tree_nodes_Nova_NumericRange** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NumericRange_Nova_this(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_this((spectra_tree_nodes_functions_Nova_Instantiation*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_Nova_NumericRange* spectra_tree_nodes_Nova_NumericRange_static_Nova_parse(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_startIndex = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_startIndex = spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("..")), (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_startIndex > 0 && spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("..")), l1_Nova_startIndex))
	{
		nova_Nova_String* l2_Nova_start = (nova_Nova_String*)nova_null;
		nova_Nova_String* l2_Nova_end = (nova_Nova_String*)nova_null;
		spectra_tree_nodes_functions_Nova_Instantiation* l2_Nova_instantiation = (spectra_tree_nodes_functions_Nova_Instantiation*)nova_null;
		
		l2_Nova_start = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_startIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_end = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_startIndex + nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".."))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_instantiation = (spectra_tree_nodes_functions_Nova_Instantiation*)(spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new IntRange(")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_start), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_end), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))))))))), parent, location, require));
		if ((l2_Nova_instantiation) != (spectra_tree_nodes_functions_Nova_Instantiation*)nova_null)
		{
			return (spectra_tree_nodes_Nova_NumericRange*)spectra_tree_nodes_functions_Nova_FunctionCall_Nova_cloneTo((spectra_tree_nodes_functions_Nova_FunctionCall*)(l2_Nova_instantiation), exceptionData, (spectra_tree_nodes_functions_Nova_FunctionCall*)(spectra_tree_nodes_Nova_NumericRange_Nova_construct(0, exceptionData, parent, location)));
		}
	}
	return (spectra_tree_nodes_Nova_NumericRange*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_Nova_NumericRange_Nova_writeNova(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Value* nova_local_0 = (spectra_tree_nodes_Nova_Value*)nova_null;
	spectra_tree_nodes_Nova_Value* nova_local_1 = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(((nova_Nova_String*)((nova_local_0 = spectra_tree_nodes_Nova_NumericRange_Accessor_Nova_start(this, exceptionData)) != (spectra_tree_nodes_Nova_Value*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("..")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)((nova_local_1 = spectra_tree_nodes_Nova_NumericRange_Accessor_Nova_end(this, exceptionData)) != (spectra_tree_nodes_Nova_Value*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(nova_local_1), exceptionData)) : (nova_Nova_Object*)nova_null)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Accessor_Nova_start(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Value*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData)), exceptionData, 0);
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Mutator_Nova_start(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value)
{
	nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData)), exceptionData, 0, (nova_Nova_Object*)(value));
	return value;
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Accessor_Nova_end(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Value*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData)), exceptionData, 1);
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Mutator_Nova_end(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value)
{
	nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_arguments((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData)), exceptionData, 1, (nova_Nova_Object*)(value));
	return value;
}

void spectra_tree_nodes_Nova_NumericRange_Nova_super(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NumericRangeFunctionMap* spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NumericRangeFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_NumericRange_NumericRangeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NumericRangeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_this(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_super(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

