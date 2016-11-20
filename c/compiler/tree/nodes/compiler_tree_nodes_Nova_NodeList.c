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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Bool clone = false */ int* compiler_tree_nodes_Nova_NodeList_Nova_clone;
} Context1;
typedef struct
{
} Context2;


compiler_tree_nodes_NodeList_Extension_VTable compiler_tree_nodes_NodeList_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
};



void compiler_tree_nodes_Nova_NodeList_Nova_testLambda25(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_tree_nodes_Nova_NodeList_Nova_testLambda26(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* head, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);

void compiler_tree_nodes_Nova_NodeList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_NodeList* compiler_tree_nodes_Nova_NodeList_Nova_construct(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_NodeList, this,);
	this->vtable = &compiler_tree_nodes_NodeList_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_NodeList_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_NodeList_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_NodeList_Nova_destroy(compiler_tree_nodes_Nova_NodeList** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NodeList_Nova_children, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_NodeList_Nova_this(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Node_Nova_this((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->compiler_tree_nodes_Nova_NodeList_Nova_children = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void compiler_tree_nodes_Nova_NodeList_Nova_replace(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* old, compiler_tree_nodes_Nova_Node* replacement, int detach)
{
	int l1_Nova_index = 0;
	
	detach = (int)(detach == (intptr_t)nova_null ? 1 : detach);
	l1_Nova_index = nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(old));
	if (detach)
	{
		compiler_tree_nodes_Nova_Node_0_Nova_detach(old, exceptionData);
	}
	if (replacement != (compiler_tree_nodes_Nova_Node*)nova_null)
	{
		compiler_tree_nodes_Nova_NodeList_Nova_addChild(this, exceptionData, replacement, l1_Nova_index, detach);
	}
	compiler_tree_nodes_Nova_Node_Nova_onChildReplaced((compiler_tree_nodes_Nova_Node*)(this), exceptionData, old, replacement);
	compiler_tree_nodes_Nova_Node_Nova_onReplaced(old, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), replacement);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NodeList_Nova_addChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node, int index, int detach)
{
	index = (int)(index == (intptr_t)nova_null ? (nova_Nova_Object*)this->compiler_tree_nodes_Nova_NodeList_Nova_children->nova_datastruct_list_Nova_Array_Nova_count : (nova_Nova_Object*)index);
	detach = (int)(detach == (intptr_t)nova_null ? 1 : detach);
	if (detach)
	{
		compiler_tree_nodes_Nova_Node_0_Nova_detach(node, exceptionData);
		node->compiler_tree_nodes_Nova_Node_Nova_parent = (compiler_tree_nodes_Nova_Node*)(this);
		nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, index, (nova_Nova_Object*)(node));
	}
	else
	{
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, index, (nova_Nova_Object*)(node));
	}
	compiler_tree_nodes_Nova_Node_Nova_onAdded(node, exceptionData, (compiler_tree_nodes_Nova_Node*)(this));
	compiler_tree_nodes_Nova_Node_Nova_addChild((compiler_tree_nodes_Nova_Node*)(((compiler_tree_nodes_Nova_Node*)this)), exceptionData, node);
	return node;
}

char compiler_tree_nodes_Nova_NodeList_Nova_containsChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int recursive)
{
	recursive = (int)(recursive == (intptr_t)nova_null ? 0 : recursive);
	return nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(child));
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NodeList_Nova_inheritChildren(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NodeList* oldParent, int clone)
{
	Context1 contextArg25 = 
	{
		&clone,
	};
	
	clone = (int)(clone == (intptr_t)nova_null ? 0 : clone);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(oldParent->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_nodes_Nova_NodeList_Nova_testLambda25, this, &contextArg25);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NodeList_0_Nova_removeChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node)
{
	return compiler_tree_nodes_Nova_NodeList_1_Nova_removeChild(this, exceptionData, nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(node)));
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NodeList_1_Nova_removeChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	if (index < 0)
	{
		return (compiler_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, index));
	compiler_tree_nodes_Nova_Node_0_Nova_detach(l1_Nova_node, exceptionData);
	return l1_Nova_node;
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NodeList_Nova_slaughterChildren(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg26 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_nodes_Nova_NodeList_Nova_testLambda26, this, &contextArg26);
}

void compiler_tree_nodes_Nova_NodeList_Nova_testLambda25(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	compiler_tree_nodes_Nova_NodeList_Nova_addChild(this, exceptionData, (compiler_tree_nodes_Nova_Node*)((*context->compiler_tree_nodes_Nova_NodeList_Nova_clone) ? compiler_tree_nodes_Nova_Node_Nova_clone(child, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), child->compiler_tree_nodes_Nova_Node_Nova_location, 1) : child), (intptr_t)nova_null, (intptr_t)nova_null);
}

void compiler_tree_nodes_Nova_NodeList_Nova_testLambda26(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* head, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	compiler_tree_nodes_Nova_Node_0_Nova_detach(head, exceptionData);
}

char compiler_tree_nodes_Nova_NodeList_Accessor_Nova_isEmpty(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NodeList_Nova_children), exceptionData) == 0;
}


void compiler_tree_nodes_Nova_NodeList_Nova_super(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_NodeList_Nova_children = (nova_datastruct_list_Nova_Array*)nova_null;
}

