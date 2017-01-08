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
#include <nova/math/nova_math_Nova_Vector3D.h>
#include <nova/math/nova_math_Nova_Matrix.h>
#include <nova/datastruct/nova_datastruct_Nova_BinaryTree.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
#include <example/example_Nova_Polygon.h>
#include <example/example_Nova_Square.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context147;
typedef struct
{
} Context148;
typedef struct
{
} Context149;
typedef struct
{
} Context150;
typedef struct
{
} Context151;
typedef struct
{
} Context152;
typedef struct
{
} Context153;
typedef struct
{
} Context154;
typedef struct
{
} Context155;
typedef struct
{
} Context156;
typedef struct
{
} Context157;
typedef struct
{
} Context158;



example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s);
void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* list);
double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* p);
nova_datastruct_list_Nova_Array* generated31(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated32(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated33(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated34(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda148(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context147* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda149(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context148* context);
void example_Nova_Lab_static_Nova_lambda150(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, Context149* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda151(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context150* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda152(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context151* context);
nova_datastruct_list_Nova_Array* generated35(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated36(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda153(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context152* context);
char example_Nova_Lab_static_Nova_lambda154(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context153* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda155(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context154* context);
char example_Nova_Lab_static_Nova_lambda156(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context155* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda157(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context156* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda158(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, int _2, nova_datastruct_list_Nova_Array* _3, Context157* context);
nova_datastruct_list_Nova_Array* generated37(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated38(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda159(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context158* context);
void example_Nova_Lab_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_Lab* example_Nova_Lab_Nova_construct(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_Lab, this,);
	this->vtable = &example_Lab_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_Lab_Nova_super(this, exceptionData);
	
	{
		example_Nova_Lab_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_Lab_Nova_destroy(example_Nova_Lab** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_Lab_static_Nova_main(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_list_Nova_Array* l1_Nova_strData = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_otherStrData = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_Nova_BinaryTree* l1_Nova_tree = (nova_datastruct_Nova_BinaryTree*)nova_null;
	int l1_Nova_num1 = 0;
	int l1_Nova_num2 = 0;
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	nova_Nova_Object* l1_Nova_str2 = (nova_Nova_Object*)nova_null;
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	nova_Nova_Object* nova_local_1 = (nova_Nova_Object*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)nova_null;
	Context147* contextArg148 = NOVA_MALLOC(sizeof(Context147));
	Context148* contextArg149 = NOVA_MALLOC(sizeof(Context148));
	Context149* contextArg150 = NOVA_MALLOC(sizeof(Context149));
	nova_datastruct_list_Nova_Array* l1_Nova_sss = (nova_datastruct_list_Nova_Array*)nova_null;
	Context150* contextArg152 = NOVA_MALLOC(sizeof(Context150));
	nova_datastruct_list_Nova_Array* l1_Nova_multi = (nova_datastruct_list_Nova_Array*)nova_null;
	Context152* contextArg153 = NOVA_MALLOC(sizeof(Context152));
	Context153* contextArg154 = NOVA_MALLOC(sizeof(Context153));
	Context154* contextArg155 = NOVA_MALLOC(sizeof(Context154));
	Context155* contextArg156 = NOVA_MALLOC(sizeof(Context155));
	Context156* contextArg157 = NOVA_MALLOC(sizeof(Context156));
	Context157* contextArg158 = NOVA_MALLOC(sizeof(Context157));
	nova_datastruct_list_Nova_LinkedList* l1_Nova_linked = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_Nova_String* l1_Nova_x = (nova_Nova_String*)nova_null;
	example_Nova_Square* l1_Nova_sq = (example_Nova_Square*)nova_null;
	nova_math_Nova_Vector3D* l1_Nova_v1 = (nova_math_Nova_Vector3D*)nova_null;
	nova_math_Nova_Vector3D* l1_Nova_v2 = (nova_math_Nova_Vector3D*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_matrix1 = (nova_math_Nova_Matrix*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_matrix2 = (nova_math_Nova_Matrix*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_matrix3 = (nova_math_Nova_Matrix*)nova_null;
	example_Nova_Lab* l1_Nova_l = (example_Nova_Lab*)nova_null;
	nova_datastruct_list_Nova_ImmutableArray* l1_Nova_myImmutableArray = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
	nova_datastruct_list_Nova_ImmutableArray* l1_Nova_outputArray = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
	
	l1_Nova_strData = generated31(0, exceptionData);
	l1_Nova_otherStrData = generated32(0, exceptionData);
	l1_Nova_tree = nova_datastruct_Nova_BinaryTree_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_strData));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Preorder: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_preorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inorder: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Postorder: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_postorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Levelorder: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_levelorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	l1_Nova_num1 = (int)(4);
	l1_Nova_num2 = (int)(l1_Nova_num1 = (int)(7));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("My nums: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num1)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num2)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" hey: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!")))))))))))))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("MergeSorted array: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_1_Nova_mergeSort((nova_datastruct_list_Nova_Array*)(l1_Nova_strData), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("QuickSorted array: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_1_Nova_quickSort((nova_datastruct_list_Nova_Array*)(l1_Nova_strData), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Concatted arrays: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_0_Nova_plus((nova_datastruct_list_Nova_Array*)(l1_Nova_strData), exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_otherStrData)))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Concatted sorted array: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_Nova_sort((nova_datastruct_list_Nova_Array*)((nova_datastruct_list_Nova_Array_0_Nova_plus((nova_datastruct_list_Nova_Array*)(l1_Nova_strData), exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_otherStrData)))), exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Multiplied string: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String*)((nova_Nova_String_Nova_multiply(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey")), exceptionData, 4))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Result from ternary: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num1)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(l1_Nova_num1 < 3 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">=")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" 3")))))))))));
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this isnt null"));
	l1_Nova_str2 = (nova_Nova_Object*)nova_null;
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Normal: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String_Nova_surroundWith(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey ")), (intptr_t)nova_null)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Symmetrical: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String_Nova_surroundWith(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey ")), 1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Elvis not null: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)((nova_local_0 = l1_Nova_str) != (nova_Nova_String*)nova_null ? nova_local_0 : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("wtf")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Elvis null: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((nova_Nova_Object*)((nova_local_1 = l1_Nova_str2) != (nova_Nova_Object*)nova_null ? nova_local_1 : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is null"))))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"))), exceptionData, 0, (intptr_t)nova_null);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)2, (int)8))), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_IntRange_Nova_join((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)2, (int)8)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
	l1_Nova_list = generated33(0, exceptionData);
	l1_Nova_list2 = generated34(0, exceptionData);
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_toEnglish((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda148, nova_null, contextArg148)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("and")), (intptr_t)nova_null)));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_toEnglish((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda149, nova_null, contextArg149)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("and")), 0)));
	nova_thread_async_Nova_Async_static_Nova_execute(0, exceptionData, (nova_thread_async_Nova_Async_closure341_Nova_func)&example_Nova_Lab_static_Nova_lambda150, nova_null, contextArg150);
	l1_Nova_sss = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 4, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda151, nova_null, contextArg152));
	nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(l1_Nova_sss));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Started async execution")));
	l1_Nova_multi = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, (nova_Nova_Object*)(generated35(0, exceptionData)));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, (nova_Nova_Object*)(generated36(0, exceptionData)));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Multi dimensional array: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_multi)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_Nova_capitalize(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, nova_datastruct_list_Nova_CharArray_Nova_contains((nova_datastruct_list_Nova_CharArray*)(((nova_Nova_String*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, 0)), exceptionData, 0))->nova_Nova_String_Nova_chars), exceptionData, 'z')), exceptionData));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda153, nova_null, contextArg153)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped: ")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&example_Nova_Lab_static_Nova_lambda154, nova_null, contextArg154)), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda155, nova_null, contextArg155)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped backwards: ")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&example_Nova_Lab_static_Nova_lambda156, nova_null, contextArg156)), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda157, nova_null, contextArg157)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped2: ")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list2), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda158, nova_null, contextArg158)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))));
	l1_Nova_linked = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	nova_datastruct_list_Nova_LinkedList_Nova_addAll(l1_Nova_linked, exceptionData, (nova_datastruct_list_Nova_Array*)(generated37(0, exceptionData)));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Linked list backwards: ")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_LinkedList_Nova_reverse(l1_Nova_linked, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Linked list forwards: ")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_linked), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))));
	l1_Nova_x = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Hey its a string"));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(l1_Nova_x));
	example_Nova_Lab_static_Nova_takesString(0, exceptionData, (nova_Nova_String*)(l1_Nova_x));
	if (1)
	{
		l1_Nova_x = (nova_Nova_String*)(nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_x), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey"))));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_x), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("its now an array"))));
	}
	nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(l1_Nova_x));
	l1_Nova_sq = example_Nova_Square_Nova_construct(0, exceptionData, 4);
	nova_io_Nova_Console_3_static_Nova_writeLine(0, exceptionData, example_Nova_Lab_static_Nova_getArea(0, exceptionData, (example_Nova_Polygon*)(l1_Nova_sq)));
	l1_Nova_v1 = nova_math_Nova_Vector3D_1_Nova_construct(0, exceptionData, 2, 1, 8);
	l1_Nova_v2 = nova_math_Nova_Vector3D_1_Nova_construct(0, exceptionData, 5, 3, 2);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_v1)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" X ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_v2)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" = ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Vector3D_Nova_crossProduct(l1_Nova_v1, exceptionData, l1_Nova_v2))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))));
	l1_Nova_matrix1 = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, 2, 3);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix1, exceptionData, 0), exceptionData, 0, 1);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix1, exceptionData, 0), exceptionData, 1, 2);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix1, exceptionData, 0), exceptionData, 2, 3);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix1, exceptionData, 1), exceptionData, 0, 4);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix1, exceptionData, 1), exceptionData, 1, 5);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix1, exceptionData, 1), exceptionData, 2, 6);
	l1_Nova_matrix2 = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, 3, 2);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix2, exceptionData, 0), exceptionData, 0, 7);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix2, exceptionData, 0), exceptionData, 1, 8);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix2, exceptionData, 1), exceptionData, 0, 9);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix2, exceptionData, 1), exceptionData, 1, 10);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix2, exceptionData, 2), exceptionData, 0, 11);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix2, exceptionData, 2), exceptionData, 1, 12);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_transpose(l1_Nova_matrix1, exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix2)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_0_Nova_multiply(l1_Nova_matrix1, exceptionData, l1_Nova_matrix2))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_0_Nova_plus(nova_math_Nova_Matrix_Nova_transpose(l1_Nova_matrix1, exceptionData), exceptionData, l1_Nova_matrix2))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	l1_Nova_matrix3 = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, 3, 3);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 0), exceptionData, 0, 6);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 0), exceptionData, 1, 1);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 0), exceptionData, 2, 1);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 1), exceptionData, 0, 4);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 1), exceptionData, 1, -2);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 1), exceptionData, 2, 5);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 2), exceptionData, 0, 2);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 2), exceptionData, 1, 8);
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_matrix3, exceptionData, 2), exceptionData, 2, 7);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Determinant of\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix3)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nis ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Nova_determinant(l1_Nova_matrix3, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))));
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 4), exceptionData, 0), exceptionData, 0, 5);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("4x4 Identity:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 4))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("12x12 Identity:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 12))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("8x8 Identity:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 8))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inverse of 3x3 matrix:\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_inverse(l1_Nova_matrix3, exceptionData))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	l1_Nova_l = example_Nova_Lab_Nova_construct(0, exceptionData);
	example_Nova_Lab_Nova_chainable(example_Nova_Lab_Nova_chainable(l1_Nova_l, exceptionData), exceptionData);
	l1_Nova_myImmutableArray = nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(generated38(0, exceptionData)), exceptionData);
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Immutable: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_myImmutableArray)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	l1_Nova_outputArray = nova_datastruct_list_Nova_ImmutableArray_0_Nova_add((nova_datastruct_list_Nova_ImmutableArray*)(l1_Nova_myImmutableArray), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("four"))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Modified(")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_datastruct_list_Nova_ImmutableArray_Accessorfunc_Nova_count((nova_datastruct_list_Nova_ImmutableArray*)(l1_Nova_myImmutableArray), exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("): ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_myImmutableArray)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))));
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Output(")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_datastruct_list_Nova_ImmutableArray_Accessorfunc_Nova_count((nova_datastruct_list_Nova_ImmutableArray*)(l1_Nova_outputArray), exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("): ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_outputArray)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("in chainable")));
	return this;
}

void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Received ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((s), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* list)
{
	Context158* contextArg159 = NOVA_MALLOC(sizeof(Context158));
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(list), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda159, nova_null, contextArg159)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_io_Nova_Console_1_static_Nova_writeLine, nova_io_Nova_Console_1_static_Nova_writeLine, nova_null);
}

double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* p)
{
	return example_Nova_Polygon_virtual_Nova_calculateArea((example_Nova_Polygon*)(p), exceptionData);
}

void example_Nova_Lab_Nova_this(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* generated31(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 9);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("F"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("B"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("A"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("D"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("C"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("E"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("G"));
	l1_Nova_temp[7] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("I"));
	l1_Nova_temp[8] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("H"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 9);
}

nova_datastruct_list_Nova_Array* generated32(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("F"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("B"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("A"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("D"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 4);
}

nova_datastruct_list_Nova_Array* generated33(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 7);
}

nova_datastruct_list_Nova_Array* generated34(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Byte) * 7);
	l1_Nova_temp[0] = 1;
	l1_Nova_temp[1] = 2;
	l1_Nova_temp[2] = 3;
	l1_Nova_temp[3] = 4;
	l1_Nova_temp[4] = 5;
	l1_Nova_temp[5] = 6;
	l1_Nova_temp[6] = 7;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)&(l1_Nova_temp), 7);
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda148(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context147* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))));
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda149(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context148* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))));
}

void example_Nova_Lab_static_Nova_lambda150(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, Context149* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Wait a half a second!")));
	nova_thread_Nova_Thread_static_Nova_sleep(0, exceptionData, 500);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ok, now what")));
}

nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda151(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context150* context)
{
	Context151* contextArg151 = NOVA_MALLOC(sizeof(Context151));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 2, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda152, nova_null, contextArg151);
}

nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda152(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context151* context)
{
	return nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 1, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* generated35(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 2);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("This is a test"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("index 2"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

nova_datastruct_list_Nova_Array* generated36(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 2);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Second dimension yo"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("waddup"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda153(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context152* context)
{
	int l1_Nova_something = 0;
	
	l1_Nova_something = 5 * x->nova_Nova_String_Nova_count;
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_something)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((x), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

char example_Nova_Lab_static_Nova_lambda154(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context153* context)
{
	return _1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda155(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context154* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (_2)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")))))));
}

char example_Nova_Lab_static_Nova_lambda156(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context155* context)
{
	return _1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda157(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context156* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")));
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda158(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, int _2, nova_datastruct_list_Nova_Array* _3, Context157* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, (_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!")));
}

nova_datastruct_list_Nova_Array* generated37(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 3);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test2"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test3"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 3);
}

nova_datastruct_list_Nova_Array* generated38(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 3);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("one"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("two"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("three"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 3);
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda159(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context158* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!!!")));
}

void example_Nova_Lab_Nova_super(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


example_Nova_Lab* example_Nova_LabFunctionMap_functionMap_Nova_chainable(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Lab* reference);
void example_Nova_LabFunctionMap_functionMap_static_Nova_takesString(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s);
void example_Nova_LabFunctionMap_functionMap_static_Nova_doSomething(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* list);
double example_Nova_LabFunctionMap_functionMap_static_Nova_getArea(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* p);
void example_Nova_LabFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_LabFunctionMap* example_Nova_LabFunctionMap_Nova_construct(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_LabFunctionMap, this,);
	this->vtable = &example_Lab_LabFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_LabFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_LabFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_LabFunctionMap_Nova_destroy(example_Nova_LabFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_LabFunctionMap_Nova_this(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_Lab* example_Nova_LabFunctionMap_functionMapLabFunctionMap_Nova_construct(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_Lab_Nova_construct(0, exceptionData);
}

void example_Nova_LabFunctionMap_functionMap_static_Nova_main(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_Lab_static_Nova_main(0, exceptionData, args);
}

example_Nova_Lab* example_Nova_LabFunctionMap_functionMap_Nova_chainable(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Lab* reference)
{
	return example_Nova_Lab_Nova_chainable(reference, exceptionData);
}

void example_Nova_LabFunctionMap_functionMap_static_Nova_takesString(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s)
{
	example_Nova_Lab_static_Nova_takesString(0, exceptionData, s);
}

void example_Nova_LabFunctionMap_functionMap_static_Nova_doSomething(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* list)
{
	example_Nova_Lab_static_Nova_doSomething(0, exceptionData, list);
}

double example_Nova_LabFunctionMap_functionMap_static_Nova_getArea(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* p)
{
	return example_Nova_Lab_static_Nova_getArea(0, exceptionData, p);
}

void example_Nova_LabFunctionMap_Nova_super(example_Nova_LabFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

