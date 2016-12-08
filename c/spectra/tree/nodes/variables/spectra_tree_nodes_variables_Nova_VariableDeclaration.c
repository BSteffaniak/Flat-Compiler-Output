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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;


spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
	spectra_tree_nodes_Nova_Node_Nova_addChild,
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova,
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
	spectra_tree_nodes_variables_Nova_VariableDeclaration_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers,
};



char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda57(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda58(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_VariableDeclaration, this,);
	this->vtable = &spectra_tree_nodes_variables_VariableDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_destroy(spectra_tree_nodes_variables_Nova_VariableDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_this(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Identifier_Nova_this((spectra_tree_nodes_Nova_Identifier*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclaration_static_Nova_parse(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_datastruct_list_Nova_Array* l1_Nova_words = (nova_datastruct_list_Nova_Array*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_words = spectra_util_Nova_CompilerStringFunctions_Nova_splitValues(input, exceptionData);
	if (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData) == 2)
	{
		spectra_tree_nodes_variables_Nova_VariableDeclaration* l1_Nova_node = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
		
		l1_Nova_node = spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name = (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_last((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData));
		if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l1_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData) && spectra_tree_nodes_Nova_Value_virtual_Nova_parseType((spectra_tree_nodes_Nova_Value*)(l1_Nova_node), exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_first((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData))))
		{
			return l1_Nova_node;
		}
	}
	return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	return 0;
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_0_Nova_parseModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers(this, exceptionData, nova_Nova_String_Nova_split(modifiers, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+")))));
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* modifiers)
{
	Context1 contextArg57 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(modifiers), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda57, this, &contextArg57, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	Context2 contextArg58 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(modifiers, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))))), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda58, this, &contextArg58);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_Nova_Value_virtual_Nova_writeType((spectra_tree_nodes_Nova_Value*)(this), exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->spectra_tree_nodes_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* other)
{
	spectra_tree_nodes_Nova_Identifier_Nova_cloneTo(((spectra_tree_nodes_Nova_Identifier*)this), exceptionData, (spectra_tree_nodes_Nova_Identifier*)(other));
	return other;
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda57(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	return x->nova_Nova_String_Nova_count == 0 || spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, x);
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda58(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return x->nova_Nova_String_Nova_count > 0 && !spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, x);
}

void spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	return this->vtable->spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, modifier);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData);
}

