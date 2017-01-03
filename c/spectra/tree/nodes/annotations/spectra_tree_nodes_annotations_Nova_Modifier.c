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
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_ImmutableHashMap.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>



nova_datastruct_Nova_ImmutableHashMap* spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS;
void spectra_tree_nodes_annotations_Nova_Modifier_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
	}
}

char spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* to, nova_Nova_String* alias)
{
	if (to != ((spectra_tree_nodes_annotations_Nova_Annotation*)this)->spectra_tree_nodes_Nova_Node_Nova_parent)
	{
		if (spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier(this, exceptionData, to, 0))
		{
			spectra_tree_nodes_Nova_Node_Nova_addAnnotation(to, exceptionData, (spectra_tree_nodes_annotations_Nova_Annotation*)this);
			spectra_tree_nodes_annotations_Nova_Modifier_Mutator_Nova_aliasUsed(this, exceptionData, alias);
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
	return spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied(((spectra_tree_nodes_annotations_Nova_Annotation*)this), exceptionData, toNode, throwError);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Accessor_Nova_aliasUsed(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Mutator_Nova_aliasUsed(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value)
{
	return value;
}

