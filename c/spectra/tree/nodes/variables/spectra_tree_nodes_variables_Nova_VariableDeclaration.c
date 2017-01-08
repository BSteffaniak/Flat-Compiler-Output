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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
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
#include <nova/NativeObject.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;



char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda70(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda71(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
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
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l1_Nova_words), exceptionData) == 2)
	{
		spectra_tree_nodes_variables_Nova_VariableDeclaration* l2_Nova_node = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name = (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData));
		if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l2_Nova_node->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData) && spectra_tree_nodes_Nova_Value_virtual_Nova_parseType((spectra_tree_nodes_Nova_Value*)(l2_Nova_node), exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(l1_Nova_words), exceptionData))))
		{
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	nova_meta_Nova_Class* l2_Nova_c = (nova_meta_Nova_Class*)nova_null;
	
	if ((l2_Nova_c = (nova_meta_Nova_Class*)(nova_datastruct_Nova_ImmutableHashMap_Nova_get((nova_datastruct_Nova_ImmutableHashMap*)(spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS), exceptionData, (nova_operators_Nova_EqualsOperator*)(modifier)))) != (nova_meta_Nova_Class*)nova_null)
	{
		spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* l2_Nova_map = (spectra_tree_nodes_annotations_Nova_ModifierFunctionMap*)nova_null;
		spectra_tree_nodes_annotations_Nova_Modifier* l2_Nova_mod = (spectra_tree_nodes_annotations_Nova_Modifier*)nova_null;
		nova_Nova_String* l2_Nova_m = (nova_Nova_String*)nova_null;
		
		l2_Nova_map = ((spectra_tree_nodes_annotations_Nova_ModifierFunctionMap*)l2_Nova_c->nova_meta_Nova_Class_Nova_functionMap);
		l2_Nova_mod = (spectra_tree_nodes_annotations_Nova_Modifier*)(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_functionMap_static_Nova_default(l2_Nova_map, exceptionData));
		spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply(l2_Nova_mod, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), modifier);
		l2_Nova_m = (nova_Nova_String*)(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_functionMap_Nova_writeNova(l2_Nova_map, exceptionData, l2_Nova_mod));
		nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Wrote ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_m), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	}
	return 0;
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_0_Nova_parseModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers(this, exceptionData, nova_Nova_String_Nova_split(modifiers, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+")))));
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* modifiers)
{
	Context1* contextArg70 = NOVA_MALLOC(sizeof(Context1));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(modifiers), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda70, this, contextArg70, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	Context2* contextArg71 = NOVA_MALLOC(sizeof(Context2));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(modifiers, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))))), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda71, this, contextArg71);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace((nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Value_virtual_Nova_writeType((spectra_tree_nodes_Nova_Value*)(this), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Identifier_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* other)
{
	spectra_tree_nodes_Nova_Identifier_Nova_cloneTo(((spectra_tree_nodes_Nova_Identifier*)this), exceptionData, (spectra_tree_nodes_Nova_Identifier*)(other));
	return other;
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda70(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	return x->nova_Nova_String_Nova_count == 0 || spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, x);
}

char spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_lambda71(spectra_tree_nodes_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
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

void spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_construct(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_variables_VariableDeclaration_VariableDeclarationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_destroy(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_this(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMapVariableDeclarationFunctionMap_Nova_construct(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap_Nova_parseModifier(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference, nova_Nova_String* modifier)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier(reference, exceptionData, modifier);
}

char spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap0_Nova_parseModifiers(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference, nova_Nova_String* modifiers)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_0_Nova_parseModifiers(reference, exceptionData, modifiers);
}

char spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap1_Nova_parseModifiers(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference, nova_datastruct_list_Nova_Array* modifiers)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers(reference, exceptionData, modifiers);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap_Nova_getInvalidModifiers(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference, nova_Nova_String* modifiers)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers(reference, exceptionData, modifiers);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeModifiers(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova(reference, exceptionData);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference, spectra_tree_nodes_variables_Nova_VariableDeclaration* other)
{
	return spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_super(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_virtualfunctionMap_Nova_parseModifier(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference, nova_Nova_String* modifier)
{
	return this->vtable->spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_virtualfunctionMap_Nova_parseModifier(this, exceptionData, reference, modifier);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_virtualfunctionMap_Nova_writeModifiers(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* reference)
{
	return this->vtable->spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_virtualfunctionMap_Nova_writeModifiers(this, exceptionData, reference);
}

