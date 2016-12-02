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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Node node */ compiler_tree_nodes_Nova_Node** compiler_tree_Nova_AnnotationSearchResult_Nova_node;
} Context1;
typedef struct
{
	/* Stack<Annotation> stack */ nova_datastruct_list_Nova_Stack** compiler_tree_Nova_AnnotationSearchResult_Nova_stack;
} Context2;


compiler_tree_AnnotationSearchResult_Extension_VTable compiler_tree_AnnotationSearchResult_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



void compiler_tree_Nova_AnnotationSearchResult_Nova_lambda15(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_tree_Nova_AnnotationSearchResult_Nova_lambda16(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void compiler_tree_Nova_AnnotationSearchResult_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_Nova_AnnotationSearchResult* compiler_tree_Nova_AnnotationSearchResult_Nova_construct(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* remainingStatement)
{
	CCLASS_NEW(compiler_tree_Nova_AnnotationSearchResult, this,);
	this->vtable = &compiler_tree_AnnotationSearchResult_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_Nova_AnnotationSearchResult_Nova_super(this, exceptionData);
	
	{
		compiler_tree_Nova_AnnotationSearchResult_Nova_this(this, exceptionData, remainingStatement);
	}
	
	return this;
}

void compiler_tree_Nova_AnnotationSearchResult_Nova_destroy(compiler_tree_Nova_AnnotationSearchResult** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_Nova_AnnotationSearchResult_Nova_annotations, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_Nova_AnnotationSearchResult_Nova_remainingStatement, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_Nova_AnnotationSearchResult_Nova_this(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* remainingStatement)
{
	this->compiler_tree_Nova_AnnotationSearchResult_Nova_remainingStatement = remainingStatement;
}

nova_datastruct_list_Nova_Array* compiler_tree_Nova_AnnotationSearchResult_0_Nova_addTo(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node)
{
	Context1 contextArg15 = 
	{
		&node,
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_tree_Nova_AnnotationSearchResult_Nova_annotations), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_Nova_AnnotationSearchResult_Nova_lambda15, this, &contextArg15);
}

nova_datastruct_list_Nova_Array* compiler_tree_Nova_AnnotationSearchResult_1_Nova_addTo(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Stack* stack)
{
	Context2 contextArg16 = 
	{
		&stack,
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_tree_Nova_AnnotationSearchResult_Nova_annotations), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_Nova_AnnotationSearchResult_Nova_lambda16, this, &contextArg16);
}

void compiler_tree_Nova_AnnotationSearchResult_Nova_lambda15(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	compiler_tree_nodes_Nova_Node_Nova_addAnnotation((*context->compiler_tree_Nova_AnnotationSearchResult_Nova_node), exceptionData, _1);
}

void compiler_tree_Nova_AnnotationSearchResult_Nova_lambda16(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)((*context->compiler_tree_Nova_AnnotationSearchResult_Nova_stack)), exceptionData, (nova_Nova_Object*)(_1));
}

void compiler_tree_Nova_AnnotationSearchResult_Nova_super(compiler_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_Nova_AnnotationSearchResult_Nova_annotations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_Nova_AnnotationSearchResult_Nova_remainingStatement = (nova_Nova_String*)nova_null;
	this->compiler_tree_Nova_AnnotationSearchResult_Nova_annotations = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
}

