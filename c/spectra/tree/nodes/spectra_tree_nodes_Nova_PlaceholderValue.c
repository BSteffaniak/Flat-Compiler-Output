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
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
} Context1;


spectra_tree_nodes_PlaceholderValue_Extension_VTable spectra_tree_nodes_PlaceholderValue_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_EqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	spectra_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_PlaceholderValue_Nova_addChild,
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_Nova_Value_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeNova,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scope,
	spectra_tree_nodes_Nova_Node_Mutator_Nova_scope,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_index,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_program,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_lambda51(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
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
	if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)))
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
	Context1* contextArg51 = NOVA_MALLOC(sizeof(Context1));
	
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes) != (spectra_tree_nodes_Nova_NodeList*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_PlaceholderValue_Nova_lambda51, this, contextArg51))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeNova(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeChildren(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))));
}

nova_Nova_String* spectra_tree_nodes_Nova_PlaceholderValue_Nova_lambda51(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

void spectra_tree_nodes_Nova_PlaceholderValue_Nova_super(spectra_tree_nodes_Nova_PlaceholderValue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes = (spectra_tree_nodes_Nova_NodeList*)nova_null;
}

