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
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context58;



nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_lambda59(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context58* context);
void spectra_tree_nodes_Nova_PlaceholderValue_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_PlaceholderValue* spectra_tree_nodes_Nova_PlaceholderValue_Nova_construct(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* value)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_PlaceholderValue, this,);
	this->vtable = &spectra_tree_nodes_PlaceholderValue_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_PlaceholderValue_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_PlaceholderValue_Nova_this(this, exceptionData, parent, location, value);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_PlaceholderValue_Nova_destroy(spectra_tree_nodes_Nova_PlaceholderValue** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value, exceptionData);
	spectra_tree_nodes_Nova_NodeList_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_PlaceholderValue_Nova_this(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* value)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	value = (nova_Nova_String*)(value == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)value);
	spectra_tree_nodes_Nova_Value_Nova_this((spectra_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
	this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value = value;
}

void spectra_tree_nodes_Nova_PlaceholderValue_Nova_addChild(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(child->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)))
	{
		spectra_tree_nodes_Nova_NodeList* nova_local_0 = (spectra_tree_nodes_Nova_NodeList*)nova_null;
		
		this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes = (spectra_tree_nodes_Nova_NodeList*)((nova_local_0 = this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes) != (spectra_tree_nodes_Nova_NodeList*)nova_null ? nova_local_0 : spectra_tree_nodes_Nova_NodeList_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), this->spectra_tree_nodes_Nova_Node_Nova_location));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_Nova_PlaceholderValue*)child));
		spectra_tree_nodes_Nova_Node_Nova_addChild((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_Nova_Value*)this)), exceptionData, child);
	}
	else
	{
		THROW(nova_exception_Nova_Exception_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid child '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' added to placeholder value"))))))), 0);
	}
}

spectra_tree_nodes_Nova_PlaceholderValue* spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_PlaceholderValue_Nova_construct(0, exceptionData, parent, location, input);
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeChildren(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context58* contextArg59 = NOVA_MALLOC(sizeof(Context58));
	
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes) != (spectra_tree_nodes_Nova_NodeList*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_PlaceholderValue_Nova_lambda59, this, contextArg59))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeNova(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeChildren(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))));
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_lambda59(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context58* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

void spectra_tree_nodes_Nova_PlaceholderValue_Nova_super(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes = (spectra_tree_nodes_Nova_NodeList*)nova_null;
}

void spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_construct(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_PlaceholderValue_PlaceholderValueFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_this(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_PlaceholderValue* spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_functionMapPlaceholderValueFunctionMap_Nova_construct(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* value)
{
	return spectra_tree_nodes_Nova_PlaceholderValue_Nova_construct(0, exceptionData, parent, location, value);
}

void spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* reference, spectra_tree_nodes_Nova_Node* child)
{
	spectra_tree_nodes_Nova_PlaceholderValue_Nova_addChild(reference, exceptionData, child);
}

spectra_tree_nodes_Nova_PlaceholderValue* spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_functionMap_Nova_writeChildren(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* reference)
{
	return spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeChildren(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* reference)
{
	return spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_super(spectra_tree_nodes_Nova_PlaceholderValueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_PlaceholderValuePropertyMap* spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_construct(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_PlaceholderValue_PlaceholderValuePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_this(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_functionMap_Nova_value(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* reference)
{
	return reference->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value;
}

spectra_tree_nodes_Nova_NodeList* spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_functionMap_Nova_nodes(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* reference)
{
	return reference->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes;
}

void spectra_tree_nodes_Nova_PlaceholderValuePropertyMap_Nova_super(spectra_tree_nodes_Nova_PlaceholderValuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

