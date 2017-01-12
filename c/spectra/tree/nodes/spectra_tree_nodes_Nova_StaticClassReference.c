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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* String input */ nova_Nova_String** spectra_tree_nodes_Nova_StaticClassReference_Nova_input;
} Context60;



char spectra_tree_nodes_Nova_StaticClassReference_static_Nova_lambda61(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context60* context);
void spectra_tree_nodes_Nova_StaticClassReference_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_StaticClassReference* spectra_tree_nodes_Nova_StaticClassReference_Nova_construct(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* name)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_StaticClassReference, this,);
	this->vtable = &spectra_tree_nodes_StaticClassReference_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_Nova_StaticClassReference_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_StaticClassReference_Nova_this(this, exceptionData, parent, location, name);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_StaticClassReference_Nova_destroy(spectra_tree_nodes_Nova_StaticClassReference** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_StaticClassReference_Nova_this(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* name)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	name = (nova_Nova_String*)(name == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)name);
	spectra_tree_nodes_Nova_Identifier_Nova_this((spectra_tree_nodes_Nova_Identifier*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_Nova_Identifier_Nova_name = name;
	spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData, spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, name, 0, 0, (intptr_t)nova_null));
}

spectra_tree_nodes_Nova_StaticClassReference* spectra_tree_nodes_Nova_StaticClassReference_static_Nova_parse(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	Context60* contextArg61 = NOVA_MALLOC(sizeof(Context60));
	contextArg61->spectra_tree_nodes_Nova_StaticClassReference_Nova_input = &input;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (spectra_tree_nodes_Nova_StaticClassReference*)(nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure296_Nova_anyFunc)&spectra_tree_nodes_Nova_StaticClassReference_static_Nova_lambda61, nova_null, contextArg61) ? (nova_Nova_Object*)spectra_tree_nodes_Nova_StaticClassReference_Nova_construct(0, exceptionData, parent, location, input) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* spectra_tree_nodes_Nova_StaticClassReference_Nova_writeNova(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Identifier_Nova_writeNova(((spectra_tree_nodes_Nova_Identifier*)this), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData, spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))));
}

char spectra_tree_nodes_Nova_StaticClassReference_static_Nova_lambda61(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context60* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, (*context->spectra_tree_nodes_Nova_StaticClassReference_Nova_input));
}

char spectra_tree_nodes_Nova_StaticClassReference_Accessorfunc1_Nova_safeNavigation(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_StaticClassReference_Nova_safeNavigation;
}

char spectra_tree_nodes_Nova_StaticClassReference_Mutatorfunc0_Nova_safeNavigation(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->spectra_tree_nodes_Nova_StaticClassReference_Nova_safeNavigation = value;
	return value;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_StaticClassReference_Accessorfunc1_Nova_accessedNode(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_StaticClassReference_Nova_accessedNode;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_StaticClassReference_Mutatorfunc0_Nova_accessedNode(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value)
{
	this->spectra_tree_nodes_Nova_StaticClassReference_Nova_accessedNode = value;
	return value;
}

void spectra_tree_nodes_Nova_StaticClassReference_Nova_super(spectra_tree_nodes_Nova_StaticClassReference* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_StaticClassReference_Nova_safeNavigation = 0;
	this->spectra_tree_nodes_Nova_StaticClassReference_Nova_accessedNode = (spectra_tree_nodes_Nova_Accessible*)nova_null;
}

void spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_construct(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_StaticClassReference_StaticClassReferenceFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_this(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_StaticClassReference* spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_functionMapStaticClassReferenceFunctionMap_Nova_construct(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, nova_Nova_String* name)
{
	return spectra_tree_nodes_Nova_StaticClassReference_Nova_construct(0, exceptionData, parent, location, name);
}

spectra_tree_nodes_Nova_StaticClassReference* spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_StaticClassReference_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_StaticClassReference* reference)
{
	return spectra_tree_nodes_Nova_StaticClassReference_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_super(spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_StaticClassReferencePropertyMap* spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_construct(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_StaticClassReference_StaticClassReferencePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierPropertyMap_Nova_super((spectra_tree_nodes_Nova_IdentifierPropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_this(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_functionMap0_Nova_safeNavigation(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_StaticClassReference* reference)
{
	return spectra_tree_nodes_Nova_StaticClassReference_Accessorfunc1_Nova_safeNavigation(reference, exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_functionMap0_Nova_accessedNode(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_StaticClassReference* reference)
{
	return spectra_tree_nodes_Nova_StaticClassReference_Accessorfunc1_Nova_accessedNode(reference, exceptionData);
}

void spectra_tree_nodes_Nova_StaticClassReferencePropertyMap_Nova_super(spectra_tree_nodes_Nova_StaticClassReferencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

