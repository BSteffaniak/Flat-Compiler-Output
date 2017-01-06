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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotationProperty.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;



char spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimension(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimension);
char spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimensions(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* dimensions);
nova_Nova_String* spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_lambda61(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_ArrayInstantiation* spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_construct(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_ArrayInstantiation, this,);
	this->vtable = &spectra_tree_nodes_functions_ArrayInstantiation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_Variable_Nova_super((spectra_tree_nodes_variables_Nova_Variable*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCall*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_super((spectra_tree_nodes_functions_Nova_Instantiation*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_destroy(spectra_tree_nodes_functions_Nova_ArrayInstantiation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_dimensions, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_this(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_this((spectra_tree_nodes_functions_Nova_Instantiation*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_functions_Nova_ArrayInstantiation* spectra_tree_nodes_functions_Nova_ArrayInstantiation_static_Nova_parse(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new"))))
	{
		spectra_tree_nodes_functions_Nova_ArrayInstantiation* l2_Nova_node = (spectra_tree_nodes_functions_Nova_ArrayInstantiation*)nova_null;
		nova_Nova_String* l2_Nova_arrayString = (nova_Nova_String*)nova_null;
		nova_datastruct_Nova_Tuple2* l2_Nova_arrayData = (nova_datastruct_Nova_Tuple2*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_arrayString = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new"))->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_arrayData = spectra_util_Nova_CompilerStringFunctions_Nova_getArrayAccesses(l2_Nova_arrayString, exceptionData);
		if ((nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l2_Nova_arrayData), exceptionData)) != (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array*)nova_null)
		{
			nova_Nova_String* l3_Nova_type = (nova_Nova_String*)nova_null;
			
			l3_Nova_type = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_arrayString), exceptionData, (intptr_t)nova_null, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get((nova_datastruct_list_Nova_IntArray*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item2((nova_datastruct_Nova_Tuple2*)(l2_Nova_arrayData), exceptionData)), exceptionData, 0))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			if (!spectra_tree_nodes_Nova_Value_virtual_Nova_parseType((spectra_tree_nodes_Nova_Value*)(l2_Nova_node), exceptionData, l3_Nova_type))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse array type '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l3_Nova_type), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else if (!spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimensions(l2_Nova_node, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l2_Nova_arrayData), exceptionData))))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse array dimensions '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_arrayString), exceptionData, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get((nova_datastruct_list_Nova_IntArray*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item2((nova_datastruct_Nova_Tuple2*)(l2_Nova_arrayData), exceptionData)), exceptionData, 0)), (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), 0), 1);
			}
			else
			{
				l2_Nova_node->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(0, exceptionData, parent, location);
				l2_Nova_node->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration->spectra_tree_nodes_Nova_Identifier_Nova_name = l3_Nova_type;
				spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(l2_Nova_node->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration), exceptionData, spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, l3_Nova_type, (spectra_tree_nodes_Nova_Node*)(l2_Nova_node), 0, (intptr_t)nova_null));
				return l2_Nova_node;
			}
		}
	}
	return (spectra_tree_nodes_functions_Nova_ArrayInstantiation*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimension(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimension)
{
	if (dimension->nova_Nova_String_Nova_count > 0)
	{
		spectra_tree_nodes_Nova_Value* l2_Nova_value = (spectra_tree_nodes_Nova_Value*)nova_null;
		
		l2_Nova_value = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, dimension, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null));
		if ((l2_Nova_value) != (spectra_tree_nodes_Nova_Value*)nova_null)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_dimensions), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

char spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimensions(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* dimensions)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(dimensions), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimension, this, nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeDimensions(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1* contextArg61 = NOVA_MALLOC(sizeof(Context1));
	
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_dimensions), exceptionData) > 0 ? nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_dimensions), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_lambda61, this, contextArg61)), exceptionData, 0) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[]")));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeNova(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Value_virtual_Nova_writeType((spectra_tree_nodes_Nova_Value*)(this), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))), exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeDimensions(this, exceptionData));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_lambda61(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))));
}

void spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_super(spectra_tree_nodes_functions_Nova_ArrayInstantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_dimensions = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_dimensions = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}


char spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_Nova_parseDimension(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation* reference, nova_Nova_String* dimension);
char spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_Nova_parseDimensions(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation* reference, nova_datastruct_list_Nova_Array* dimensions);
void spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_functions_ArrayInstantiation_ArrayInstantiationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_super((spectra_tree_nodes_functions_Nova_InstantiationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_destroy(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_this(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_functions_Nova_ArrayInstantiation* spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMapArrayInstantiationFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_functions_Nova_ArrayInstantiation* spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_functions_Nova_ArrayInstantiation_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_Nova_parseDimension(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation* reference, nova_Nova_String* dimension)
{
	return spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimension(reference, exceptionData, dimension);
}

char spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_Nova_parseDimensions(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation* reference, nova_datastruct_list_Nova_Array* dimensions)
{
	return spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_parseDimensions(reference, exceptionData, dimensions);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_Nova_writeDimensions(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation* reference)
{
	return spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeDimensions(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_ArrayInstantiation* reference)
{
	return spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_super(spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

