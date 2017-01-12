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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Queue.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context81;
typedef struct
{
	/* let Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context82;
typedef struct
{
} Context83;
typedef struct
{
	/* let Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context84;
typedef struct
{
} Context85;
typedef struct
{
	/* let Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context86;
typedef struct
{
} Context87;
typedef struct
{
	/* let Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context88;
typedef struct
{
} Context89;
typedef struct
{
	/* let
	Queue<Node<E>, Node<E>, Node<E>> queue */ nova_datastruct_list_Nova_Queue** nova_datastruct_Nova_Node_Nova_queue;
} Context90;



nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
char nova_datastruct_Nova_Node_Nova_lambda82(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context81* context);
void nova_datastruct_Nova_Node_Nova_lambda83(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context82* context);
char nova_datastruct_Nova_Node_Nova_lambda84(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context83* context);
void nova_datastruct_Nova_Node_Nova_lambda85(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context84* context);
char nova_datastruct_Nova_Node_Nova_lambda86(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context85* context);
void nova_datastruct_Nova_Node_Nova_lambda87(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context86* context);
char nova_datastruct_Nova_Node_Nova_lambda88(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context87* context);
void nova_datastruct_Nova_Node_Nova_lambda89(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context88* context);
nova_datastruct_list_Nova_Array* generated39(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_Nova_Node_Nova_lambda90(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context89* context);
void nova_datastruct_Nova_Node_Nova_lambda91(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context90* context);
void nova_datastruct_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_construct(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int numChildren)
{
	CCLASS_NEW(nova_datastruct_Nova_Node, this,);
	this->vtable = &nova_datastruct_Node_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Node_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Node_Nova_this(this, exceptionData, data, numChildren);
	}
	
	return this;
}

void nova_datastruct_Nova_Node_Nova_destroy(nova_datastruct_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_datastruct_Nova_Node_Nova_children, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Node_Nova_this(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int numChildren)
{
	data = (nova_Nova_Object*)(data == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)data);
	numChildren = (int)(numChildren == (intptr_t)nova_null ? 5 : numChildren);
	this->nova_datastruct_Nova_Node_Nova_data = data;
	this->nova_datastruct_Nova_Node_Nova_children = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, numChildren, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_preorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_inorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_postorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_levelorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	Context81* contextArg82 = NOVA_MALLOC(sizeof(Context81));
	Context82* contextArg83 = NOVA_MALLOC(sizeof(Context82));
	contextArg83->nova_datastruct_Nova_Node_Nova_array = &array;
	
	nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_lambda82, this, contextArg82)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_datastruct_Nova_Node_Nova_lambda83, this, contextArg83);
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	int l1_Nova_half = 0;
	Context83* contextArg84 = NOVA_MALLOC(sizeof(Context83));
	Context84* contextArg85 = NOVA_MALLOC(sizeof(Context84));
	contextArg85->nova_datastruct_Nova_Node_Nova_array = &array;
	Context85* contextArg86 = NOVA_MALLOC(sizeof(Context85));
	Context86* contextArg87 = NOVA_MALLOC(sizeof(Context86));
	contextArg87->nova_datastruct_Nova_Node_Nova_array = &array;
	
	l1_Nova_half = nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData) - nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData) / 2;
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, l1_Nova_half)), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_lambda84, this, contextArg84)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_datastruct_Nova_Node_Nova_lambda85, this, contextArg85);
	nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, l1_Nova_half)), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_lambda86, this, contextArg86)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_datastruct_Nova_Node_Nova_lambda87, this, contextArg87);
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	Context87* contextArg88 = NOVA_MALLOC(sizeof(Context87));
	Context88* contextArg89 = NOVA_MALLOC(sizeof(Context88));
	contextArg89->nova_datastruct_Nova_Node_Nova_array = &array;
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_lambda88, this, contextArg88)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_datastruct_Nova_Node_Nova_lambda89, this, contextArg89);
	nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	nova_datastruct_list_Nova_Queue* l1_Nova_queue = (nova_datastruct_list_Nova_Queue*)nova_null;
	
	l1_Nova_queue = nova_datastruct_list_Nova_Queue_1_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(generated39(this, exceptionData)));
	while (!nova_datastruct_list_Nova_Queue_Accessor_Nova_empty((nova_datastruct_list_Nova_Queue*)(l1_Nova_queue), exceptionData))
	{
		nova_datastruct_Nova_Node* l2_Nova_current = (nova_datastruct_Nova_Node*)nova_null;
		Context89* contextArg90 = NOVA_MALLOC(sizeof(Context89));
		Context90* contextArg91 = NOVA_MALLOC(sizeof(Context90));
		contextArg91->nova_datastruct_Nova_Node_Nova_queue = &l1_Nova_queue;
		
		l2_Nova_current = (nova_datastruct_Nova_Node*)(nova_datastruct_list_Nova_Queue_Nova_dequeue((nova_datastruct_list_Nova_Queue*)(l1_Nova_queue), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, l2_Nova_current->nova_datastruct_Nova_Node_Nova_data);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l2_Nova_current->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_lambda90, this, contextArg90)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_datastruct_Nova_Node_Nova_lambda91, this, contextArg91);
	}
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_Nova_String* nova_datastruct_Nova_Node_Nova_toString(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->nova_datastruct_Nova_Node_Nova_data)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_get(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return (nova_datastruct_Nova_Node*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, index);
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_set(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_datastruct_Nova_Node* value)
{
	nova_datastruct_list_Nova_Array_Nova_set((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, index, (nova_Nova_Object*)(value));
	return value;
}

char nova_datastruct_Nova_Node_Nova_lambda82(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context81* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_lambda83(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context82* context)
{
	nova_datastruct_Nova_Node_1_Nova_preorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

char nova_datastruct_Nova_Node_Nova_lambda84(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context83* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_lambda85(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context84* context)
{
	nova_datastruct_Nova_Node_1_Nova_inorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

char nova_datastruct_Nova_Node_Nova_lambda86(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context85* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_lambda87(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context86* context)
{
	nova_datastruct_Nova_Node_1_Nova_inorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

char nova_datastruct_Nova_Node_Nova_lambda88(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context87* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_lambda89(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context88* context)
{
	nova_datastruct_Nova_Node_1_Nova_postorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

nova_datastruct_list_Nova_Array* generated39(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_Nova_Node** l1_Nova_temp = (nova_datastruct_Nova_Node**)nova_null;
	
	l1_Nova_temp = (nova_datastruct_Nova_Node**)NOVA_MALLOC(sizeof(nova_datastruct_Nova_Node) * 1);
	l1_Nova_temp[0] = this;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

char nova_datastruct_Nova_Node_Nova_lambda90(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context89* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_lambda91(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context90* context)
{
	nova_datastruct_list_Nova_Queue_Nova_enqueue((nova_datastruct_list_Nova_Queue*)((*context->nova_datastruct_Nova_Node_Nova_queue)), exceptionData, (nova_Nova_Object*)(_1));
}

void nova_datastruct_Nova_Node_Nova_super(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Node_Nova_children = (nova_datastruct_list_Nova_Array*)nova_null;
	this->nova_datastruct_Nova_Node_Nova_data = (nova_Nova_Object*)nova_null;
}


nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_preorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_inorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_postorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_levelorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array);
void nova_datastruct_Nova_NodeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_NodeFunctionMap* nova_datastruct_Nova_NodeFunctionMap_Nova_construct(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_NodeFunctionMap, this,);
	this->vtable = &nova_datastruct_Node_NodeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_NodeFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_NodeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_NodeFunctionMap_Nova_destroy(nova_datastruct_Nova_NodeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_NodeFunctionMap_Nova_this(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_NodeFunctionMap_functionMapNodeFunctionMap_Nova_construct(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int numChildren)
{
	return nova_datastruct_Nova_Node_Nova_construct(0, exceptionData, data, numChildren);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap0_Nova_preorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_preorder(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap0_Nova_inorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_inorder(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap0_Nova_postorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_postorder(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap0_Nova_levelorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_levelorder(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_preorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_preorder(reference, exceptionData, array);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_inorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_inorder(reference, exceptionData, array);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_postorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_postorder(reference, exceptionData, array);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodeFunctionMap_functionMap1_Nova_levelorder(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, nova_datastruct_list_Nova_Array* array)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_levelorder(reference, exceptionData, array);
}

nova_Nova_String* nova_datastruct_Nova_NodeFunctionMap_functionMap_Nova_toString(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return nova_datastruct_Nova_Node_Nova_toString(reference, exceptionData);
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_NodeFunctionMap_functionMap_Nova_get(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, int index)
{
	return nova_datastruct_Nova_Node_Nova_get(reference, exceptionData, index);
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_NodeFunctionMap_functionMap_Nova_set(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference, int index, nova_datastruct_Nova_Node* value)
{
	return nova_datastruct_Nova_Node_Nova_set(reference, exceptionData, index, value);
}

void nova_datastruct_Nova_NodeFunctionMap_Nova_super(nova_datastruct_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_NodePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_NodePropertyMap* nova_datastruct_Nova_NodePropertyMap_Nova_construct(nova_datastruct_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_NodePropertyMap, this,);
	this->vtable = &nova_datastruct_Node_NodePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_Nova_NodePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_NodePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_NodePropertyMap_Nova_destroy(nova_datastruct_Nova_NodePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_NodePropertyMap_Nova_this(nova_datastruct_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_NodePropertyMap_functionMap_Nova_children(nova_datastruct_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return reference->nova_datastruct_Nova_Node_Nova_children;
}

nova_Nova_Object* nova_datastruct_Nova_NodePropertyMap_functionMap_Nova_data(nova_datastruct_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* reference)
{
	return (nova_Nova_Object*)reference->nova_datastruct_Nova_Node_Nova_data;
}

void nova_datastruct_Nova_NodePropertyMap_Nova_super(nova_datastruct_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

