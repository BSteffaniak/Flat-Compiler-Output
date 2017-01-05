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
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_ImmutableHashMap.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArrayIterator.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AbstractAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AutoPureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_FinalAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_ImmutableAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_ImpureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_NativeAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_OverrideAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PrivateAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PublicAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_StaticAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_TargetAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VarAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibleAnnotation.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
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



char spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_lambda130(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
nova_datastruct_Nova_ImmutableHashMap* spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS;
void spectra_tree_nodes_annotations_Nova_Modifier_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
		nova_datastruct_Nova_HashMap* l1_Nova_modifiers = (nova_datastruct_Nova_HashMap*)nova_null;
		Context1* contextArg130 = NOVA_MALLOC(sizeof(Context1));
		nova_datastruct_list_Nova_ImmutableArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ImmutableArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_class = (nova_Nova_Object*)nova_null;
		
		l1_Nova_modifiers = nova_datastruct_Nova_HashMap_0_Nova_construct(0, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		nova_local_0 = (nova_datastruct_list_Nova_ImmutableArrayIterator*)(nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_iterator((nova_datastruct_list_Nova_ImmutableArray*)((nova_datastruct_list_Nova_ImmutableArray_Nova_filter((nova_datastruct_list_Nova_ImmutableArray*)(nova_meta_Nova_Class_Nova_ALL), exceptionData, (nova_datastruct_list_Nova_ImmutableArray_closure12_Nova_filterFunc)&spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_lambda130, nova_null, contextArg130))), exceptionData));
		while (nova_datastruct_list_Nova_ImmutableArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
		{
			nova_Nova_String* l2_Nova_alias = (nova_Nova_String*)nova_null;
			
			l2_Nova_class = (nova_Nova_Object*)(nova_datastruct_list_Nova_ImmutableArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
			l2_Nova_alias = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x"));
			nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_modifiers), exceptionData, (nova_Nova_Object*)(l2_Nova_alias), (nova_Nova_Object*)(l2_Nova_class));
		}
		spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS = nova_datastruct_Nova_HashMap_Nova_toImmutable((nova_datastruct_Nova_HashMap*)(l1_Nova_modifiers), exceptionData);
	}
}

char spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* to, nova_Nova_String* alias)
{
	if (to != ((spectra_tree_nodes_Nova_Node*)this)->spectra_tree_nodes_Nova_Node_Nova_parent)
	{
		if (spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier(this, exceptionData, to, 0))
		{
			spectra_tree_nodes_Nova_Node_Nova_addAnnotation(to, exceptionData, (spectra_tree_nodes_annotations_Nova_Annotation*)(this));
			spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator0_Nova_aliasUsed((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData, alias);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

char spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toNode, int throwError)
{
	throwError = (int)(throwError == (intptr_t)nova_null ? 1 : throwError);
	return spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied((spectra_tree_nodes_annotations_Nova_Annotation*)(this), exceptionData, toNode, throwError);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Nova_writeNova(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	
	return (nova_Nova_String*)((nova_local_0 = (nova_Nova_String*)(spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor1_Nova_aliasUsed((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData))) != (nova_Nova_String*)nova_null ? nova_local_0 : spectra_tree_nodes_annotations_Nova_Annotation_Nova_writeNova(((spectra_tree_nodes_annotations_Nova_Annotation*)this), exceptionData));
}

char spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_lambda130(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_meta_Nova_Class_Nova_isOfType(_1, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance));
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Accessor_Nova_aliasUsed(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Mutator_Nova_aliasUsed(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value)
{
	return value;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor1_Nova_aliasUsed(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor1_Nova_aliasUsed((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator0_Nova_aliasUsed(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator0_Nova_aliasUsed((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData, value);
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Modifier_ModifierFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_this(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_super(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

