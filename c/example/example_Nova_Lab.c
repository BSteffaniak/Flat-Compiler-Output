#include <precompiled.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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
#include <nova/math/nova_math_Nova_Vector3D.h>
#include <nova/math/nova_math_Nova_Matrix.h>
#include <nova/datastruct/nova_datastruct_Nova_BinaryTree.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <example/example_Nova_Polygon.h>
#include <example/example_Nova_Square.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;
typedef struct
{
} Context5;
typedef struct
{
} Context6;
typedef struct
{
} Context7;
typedef struct
{
} Context8;
typedef struct
{
} Context9;
typedef struct
{
} Context10;


example_Lab_Extension_VTable example_Lab_Extension_VTable_val =
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
		},
		nova_Nova_Object_Nova_toString,
		nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s);
void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* list);
double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* p);
nova_datastruct_list_Nova_Array* generated12(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated13(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated14(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Lab_static_Nova_testLambda53(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, Context1* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_testLambda54(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_testLambda55(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
nova_datastruct_list_Nova_Array* generated15(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated16(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* example_Nova_Lab_static_Nova_testLambda56(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
char example_Nova_Lab_static_Nova_testLambda57(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
nova_Nova_String* example_Nova_Lab_static_Nova_testLambda58(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
char example_Nova_Lab_static_Nova_testLambda59(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
nova_Nova_String* example_Nova_Lab_static_Nova_testLambda60(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
nova_Nova_String* example_Nova_Lab_static_Nova_testLambda61(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, int _2, nova_datastruct_list_Nova_Array* _3, Context9* context);
nova_datastruct_list_Nova_Array* generated17(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* example_Nova_Lab_static_Nova_testLambda62(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context10* context);
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
		nova_datastruct_Nova_BinaryTree* l1_Nova_tree = (nova_datastruct_Nova_BinaryTree*)nova_null;
		int l1_Nova_num1 = 0;
		int l1_Nova_num2 = 0;
		nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
		nova_Nova_Object* l1_Nova_str2 = (nova_Nova_Object*)nova_null;
		nova_Nova_String* l1_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		nova_Nova_Object* l1_Nova_nova_local_1 = (nova_Nova_Object*)nova_null;
		nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
		nova_datastruct_list_Nova_Array* l1_Nova_list2 = (nova_datastruct_list_Nova_Array*)nova_null;
		Context1 contextArg53 = 
		{
		};
		nova_datastruct_list_Nova_Array* l1_Nova_sss = (nova_datastruct_list_Nova_Array*)nova_null;
		Context2 contextArg55 = 
		{
		};
		nova_datastruct_list_Nova_Array* l1_Nova_multi = (nova_datastruct_list_Nova_Array*)nova_null;
		Context4 contextArg56 = 
		{
		};
		Context5 contextArg57 = 
		{
		};
		Context6 contextArg58 = 
		{
		};
		Context7 contextArg59 = 
		{
		};
		Context8 contextArg60 = 
		{
		};
		Context9 contextArg61 = 
		{
		};
		nova_datastruct_list_Nova_LinkedList* l1_Nova_linked = (nova_datastruct_list_Nova_LinkedList*)nova_null;
		nova_Nova_String* l1_Nova_x = (nova_Nova_String*)nova_null;
		example_Nova_Square* l1_Nova_sq = (example_Nova_Square*)nova_null;
		nova_math_Nova_Vector3D* l1_Nova_v1 = (nova_math_Nova_Vector3D*)nova_null;
		nova_math_Nova_Vector3D* l1_Nova_v2 = (nova_math_Nova_Vector3D*)nova_null;
		nova_math_Nova_Matrix* l1_Nova_matrix1 = (nova_math_Nova_Matrix*)nova_null;
		nova_math_Nova_Matrix* l1_Nova_matrix2 = (nova_math_Nova_Matrix*)nova_null;
		nova_math_Nova_Matrix* l1_Nova_matrix3 = (nova_math_Nova_Matrix*)nova_null;
		example_Nova_Lab* l1_Nova_l = (example_Nova_Lab*)nova_null;
		
		l1_Nova_tree = nova_datastruct_Nova_BinaryTree_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(generated12(0, exceptionData)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Preorder: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_preorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inorder: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Postorder: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_postorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Levelorder: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_levelorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		l1_Nova_num1 = (int)(4);
		l1_Nova_num2 = (int)(l1_Nova_num1 = (int)(7));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("My nums: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num1))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num2))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" hey: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!")))))))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Result from ternary: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num1))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l1_Nova_num1 < 3 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">="))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" 3")))))));
		l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this isnt null"));
		l1_Nova_str2 = (nova_Nova_Object*)nova_null;
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Normal: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_Nova_String_Nova_surroundWith(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey ")), (intptr_t)nova_null))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Symmetrical: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_Nova_String_Nova_surroundWith(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey ")), 1))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Elvis not null: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)((l1_Nova_nova_local_0 = l1_Nova_str) != (nova_Nova_String*)nova_null ? l1_Nova_nova_local_0 : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("wtf"))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Elvis null: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((nova_Nova_Object*)((l1_Nova_nova_local_1 = l1_Nova_str2) != (nova_Nova_Object*)nova_null ? l1_Nova_nova_local_1 : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is null"))))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_Nova_String_Nova_substring(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test")), exceptionData, 0, (intptr_t)nova_null);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)2, (int)8))), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_IntRange_Nova_join((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)2, (int)8)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
		l1_Nova_list = generated13(0, exceptionData);
		l1_Nova_list2 = generated14(0, exceptionData);
		nova_thread_async_Nova_Async_static_Nova_execute(0, exceptionData, (nova_thread_async_Nova_Async_closure3_Nova_func)&example_Nova_Lab_static_Nova_testLambda53, nova_null, &contextArg53);
		l1_Nova_sss = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 4, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda54, nova_null, &contextArg55));
		nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(l1_Nova_sss));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Started async execution")));
		l1_Nova_multi = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, (nova_Nova_Object*)(generated15(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, (nova_Nova_Object*)(generated16(0, exceptionData)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Multi dimensional array: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_multi)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_Nova_capitalize(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, nova_datastruct_list_Nova_CharArray_Nova_contains((nova_datastruct_list_Nova_CharArray*)(((nova_Nova_String*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, 0)), exceptionData, 0))->nova_Nova_String_Nova_chars), exceptionData, 'z')), exceptionData));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda56, nova_null, &contextArg56)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&example_Nova_Lab_static_Nova_testLambda57, nova_null, &contextArg57)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda58, nova_null, &contextArg58)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped backwards: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&example_Nova_Lab_static_Nova_testLambda59, nova_null, &contextArg59)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda60, nova_null, &contextArg60)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped2: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list2), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda61, nova_null, &contextArg61)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		l1_Nova_linked = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
		nova_datastruct_list_Nova_LinkedList_Nova_addAll(l1_Nova_linked, exceptionData, (nova_datastruct_list_Nova_Array*)(generated17(0, exceptionData)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Linked list backwards: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_LinkedList_Nova_reverse(l1_Nova_linked, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Linked list forwards: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_linked), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
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
		nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(nova_primitive_number_Nova_Double_Nova_construct(0, exceptionData, example_Nova_Lab_static_Nova_getArea(0, exceptionData, (example_Nova_Polygon*)(l1_Nova_sq)))));
		l1_Nova_v1 = nova_math_Nova_Vector3D_1_Nova_construct(0, exceptionData, 2, 1, 8);
		l1_Nova_v2 = nova_math_Nova_Vector3D_1_Nova_construct(0, exceptionData, 5, 3, 2);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_v1)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" X "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_v2)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" = "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Vector3D_Nova_crossProduct(l1_Nova_v1, exceptionData, l1_Nova_v2))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))));
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
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix1)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_transpose(l1_Nova_matrix1, exceptionData))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix2)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_multiply(l1_Nova_matrix1, exceptionData, l1_Nova_matrix2))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix_Nova_transpose(l1_Nova_matrix1, exceptionData), exceptionData, l1_Nova_matrix2, (intptr_t)nova_null))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
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
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Determinant of\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix3)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nis "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Nova_determinant(l1_Nova_matrix3, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
		nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 4), exceptionData, 0), exceptionData, 0, 5);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("4x4 Identity:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 4))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("12x12 Identity:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 12))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("8x8 Identity:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 8))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inverse of 3x3 matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_inverse(l1_Nova_matrix3, exceptionData))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		l1_Nova_l = example_Nova_Lab_Nova_construct(0, exceptionData);
		example_Nova_Lab_Nova_chainable(example_Nova_Lab_Nova_chainable(l1_Nova_l, exceptionData), exceptionData);
		nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("in chainable")));
		return this;
}

void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((s)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* list)
{
		Context10 contextArg62 = 
		{
		};
		
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(list), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda62, nova_null, &contextArg62)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_io_Nova_Console_1_static_Nova_writeLine, nova_io_Nova_Console_1_static_Nova_writeLine, nova_null);
}

double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* p)
{
		return example_Nova_Polygon_virtual_Nova_calculateArea((example_Nova_Polygon*)(p), exceptionData);
}

void example_Nova_Lab_Nova_this(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* generated12(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
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

nova_datastruct_list_Nova_Array* generated13(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
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

nova_datastruct_list_Nova_Array* generated14(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
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

void example_Nova_Lab_static_Nova_testLambda53(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, Context1* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Wait a half a second!")));
		nova_thread_Nova_Thread_static_Nova_sleep(0, exceptionData, 500);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ok, now what")));
}

nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_testLambda54(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
		Context3 contextArg54 = 
		{
		};
		
		return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 2, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda55, nova_null, &contextArg54);
}

nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_testLambda55(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
		return nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 1, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* generated15(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
		
		l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 2);
		l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("This is a test"));
		l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("index 2"));
		return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

nova_datastruct_list_Nova_Array* generated16(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
		
		l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 2);
		l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Second dimension yo"));
		l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("waddup"));
		return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

nova_Nova_String* example_Nova_Lab_static_Nova_testLambda56(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
		int l1_Nova_something = 0;
		
		l1_Nova_something = 5 * x->nova_Nova_String_Nova_count;
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_something))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((x)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

char example_Nova_Lab_static_Nova_testLambda57(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
		return _1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* example_Nova_Lab_static_Nova_testLambda58(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (_2))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")))));
}

char example_Nova_Lab_static_Nova_testLambda59(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
		return _1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* example_Nova_Lab_static_Nova_testLambda60(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((_1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")));
}

nova_Nova_String* example_Nova_Lab_static_Nova_testLambda61(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, int _2, nova_datastruct_list_Nova_Array* _3, Context9* context)
{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, (_1))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!")));
}

nova_datastruct_list_Nova_Array* generated17(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
		
		l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 3);
		l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"));
		l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test2"));
		l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test3"));
		return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 3);
}

nova_Nova_String* example_Nova_Lab_static_Nova_testLambda62(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context10* context)
{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!!!")));
}

void example_Nova_Lab_Nova_super(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}



nova_primitive_Nova_Null* nova_null;
void* nova_garbageData;

int main(int argc, char** argvs)
{
		#ifdef _WIN32
		setProgramName(argvs[0]);
		//signal(SIGSEGV, nova_signal_handler);
		SetUnhandledExceptionFilter(nova_exception_handler);
		#endif
		nova_Nova_String** args;
		int      i;
		
		nova_exception_Nova_ExceptionData* exceptionData = 0;
		srand(currentTimeMillis());
		nova_garbageData = malloc(sizeof(void*));
		nova_gc_Nova_GC_static_Nova_init(0, exceptionData);
		
		nova_null = nova_primitive_Nova_Null_Nova_construct(0, exceptionData);
		novaEnv.nova_Object.toString = nova_Object_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_String.concat = nova_String_Extension_VTable_val.nova_Nova_String_virtual_Nova_concat;
		novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Comparable_Extension_VTable_val.itable.nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo;
		novaEnv.nova_datastruct_list_Array.addUnique = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_addUnique;
		novaEnv.nova_datastruct_list_Array.get = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_get;
		novaEnv.nova_datastruct_list_Array.set = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_set;
		novaEnv.nova_datastruct_list_Iterator.reset = nova_datastruct_list_Iterator_Extension_VTable_val.itable.nova_datastruct_list_Nova_Iterator_virtual_Nova_reset;
		novaEnv.nova_datastruct_list_List.toArray = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray;
		novaEnv.nova_datastruct_list_List.contains__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains;
		novaEnv.nova_datastruct_list_List.forEach__void = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_List.map__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_List.any__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_any;
		novaEnv.nova_datastruct_list_List.all__nova_primitive_Bool__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_all;
		novaEnv.nova_datastruct_list_List.filter__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_List.take = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_take;
		novaEnv.nova_datastruct_list_List.skip = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_skip;
		novaEnv.nova_datastruct_list_List.firstWhere__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere;
		novaEnv.nova_datastruct_list_List.reverse = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
		novaEnv.nova_datastruct_list_List.join = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_join;
		novaEnv.nova_io_InputStream.readString = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readString;
		novaEnv.nova_io_InputStream.readBytes = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readBytes;
		novaEnv.nova_io_OutputStream.write = nova_io_OutputStream_Extension_VTable_val.nova_io_Nova_OutputStream_virtual_Nova_write;
		novaEnv.nova_math_Vector.dotProduct = nova_math_Vector_Extension_VTable_val.nova_math_Nova_Vector_virtual_Nova_dotProduct;
		novaEnv.nova_operators_Equals.equals__nova_Object = nova_operators_Equals_Extension_VTable_val.itable.nova_operators_Nova_Equals_virtual1_Nova_equals;
		novaEnv.nova_operators_Multiply.multiply__nova_Object = nova_operators_Multiply_Extension_VTable_val.itable.nova_operators_Nova_Multiply_virtual0_Nova_multiply;
		novaEnv.nova_thread_Thread.run = nova_thread_Thread_Extension_VTable_val.nova_thread_Nova_Thread_virtual_Nova_run;
		novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_SvgComponent_Extension_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_No3Node_Extension_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.example_Animal.getNumLegs = example_Animal_Extension_VTable_val.example_Nova_Animal_virtual_Nova_getNumLegs;
		novaEnv.example_Animal.getNumEyes = example_Animal_Extension_VTable_val.example_Nova_Animal_virtual_Nova_getNumEyes;
		novaEnv.example_Animal.getDescription = example_Animal_Extension_VTable_val.example_Nova_Animal_virtual_Nova_getDescription;
		novaEnv.example_Person.sayHello = example_Person_Extension_VTable_val.example_Nova_Person_virtual_Nova_sayHello;
		novaEnv.example_Polygon.numberSides = example_Polygon_Extension_VTable_val.itable.example_Nova_Polygon_virtual_Nova_numberSides;
		novaEnv.example_Polygon.calculateArea = example_Polygon_Extension_VTable_val.itable.example_Nova_Polygon_virtual_Nova_calculateArea;
		
		nova_Class_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Class")), 0);
		nova_Object_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Object")), 0);
		nova_String_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/String")), 0);
		nova_System_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/System")), 0);
		nova_ar_ImageTracker_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/ar/ImageTracker")), 0);
		nova_ar_TrackPoint_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/ar/TrackPoint")), 0);
		nova_database_DBConnector_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/database/DBConnector")), 0);
		nova_database_ResultSet_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/database/ResultSet")), 0);
		nova_datastruct_BinaryNode_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/BinaryNode")), 0);
		nova_datastruct_BinaryTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/BinaryTree")), 0);
		nova_datastruct_Bounds_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Bounds")), 0);
		nova_datastruct_Comparable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Comparable")), 1);
		nova_datastruct_HashMap_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/HashMap")), 0);
		nova_datastruct_HashSet_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/HashSet")), 0);
		nova_datastruct_Node_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Node")), 0);
		nova_datastruct_Pair_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Pair")), 0);
		nova_datastruct_ReversibleHashMap_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/ReversibleHashMap")), 0);
		nova_datastruct_Tree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Tree")), 0);
		nova_datastruct_Tuple_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/Tuple")), 0);
		nova_datastruct_list_Array_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Array")), 0);
		nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ArrayIterator")), 0);
		nova_datastruct_list_CharArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CharArray")), 0);
		nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CharArrayIterator")), 0);
		nova_datastruct_list_CompiledList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CompiledList")), 0);
		nova_datastruct_list_DoubleArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/DoubleArray")), 0);
		nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/DoubleArrayIterator")), 0);
		nova_datastruct_list_EmptyStackException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/EmptyStackException")), 0);
		nova_datastruct_list_IntArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntArray")), 0);
		nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntArrayIterator")), 0);
		nova_datastruct_list_IntRange_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntRange")), 0);
		nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntRangeIterator")), 0);
		nova_datastruct_list_Iterable_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Iterable")), 1);
		nova_datastruct_list_Iterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Iterator")), 1);
		nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/LinkedList")), 0);
		nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/LinkedListIterator")), 0);
		nova_datastruct_list_List_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/List")), 1);
		nova_datastruct_list_ListNode_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/ListNode")), 0);
		nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/NoSuchElementException")), 0);
		nova_datastruct_list_Queue_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Queue")), 0);
		nova_datastruct_list_Stack_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Stack")), 0);
		nova_datastruct_list_StringCharArray_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/StringCharArray")), 0);
		nova_exception_Backtraces_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Backtraces")), 0);
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/DivideByZeroException")), 0);
		nova_exception_Exception_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Exception")), 0);
		nova_exception_ExceptionData_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/ExceptionData")), 0);
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/InvalidArgumentException")), 0);
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/InvalidOperationException")), 0);
		nova_exception_SoftException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/SoftException")), 0);
		nova_exception_UnimplementedOperationException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/UnimplementedOperationException")), 0);
		nova_gc_GC_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/gc/GC")), 0);
		nova_io_Console_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/Console")), 0);
		nova_io_File_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/File")), 0);
		nova_io_FileNotFoundException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/FileNotFoundException")), 0);
		nova_io_FileReader_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/FileReader")), 0);
		nova_io_FileWriter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/FileWriter")), 0);
		nova_io_InputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/InputStream")), 1);
		nova_io_OutputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/OutputStream")), 0);
		nova_io_StreamReader_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/StreamReader")), 0);
		nova_math_ArithmeticSequence_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/ArithmeticSequence")), 0);
		nova_math_Diekstra_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Diekstra")), 0);
		nova_math_GeometricSequence_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/GeometricSequence")), 0);
		nova_math_Graph_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Graph")), 0);
		nova_math_InvalidNumericStatementException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/InvalidNumericStatementException")), 0);
		nova_math_Math_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Math")), 0);
		nova_math_Matrix_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Matrix")), 0);
		nova_math_NumericOperand_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericOperand")), 0);
		nova_math_NumericOperation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericOperation")), 0);
		nova_math_NumericStatement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericStatement")), 0);
		nova_math_NumericTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/NumericTree")), 0);
		nova_math_Polynomial_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Polynomial")), 0);
		nova_math_Sequence_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Sequence")), 0);
		nova_math_Statement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Statement")), 0);
		nova_math_StatementComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/StatementComponent")), 0);
		nova_math_VariableOperand_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/VariableOperand")), 0);
		nova_math_Vector_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector")), 0);
		nova_math_Vector2D_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector2D")), 0);
		nova_math_Vector3D_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector3D")), 0);
		nova_math_Vector4D_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Vector4D")), 0);
		nova_math_calculus_Calculus_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/calculus/Calculus")), 0);
		nova_math_huffman_HuffmanTree_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/huffman/HuffmanTree")), 0);
		nova_math_logic_Conclusion_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/Conclusion")), 0);
		nova_math_logic_Hypothesis_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/Hypothesis")), 0);
		nova_math_logic_InvalidFormulaException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/InvalidFormulaException")), 0);
		nova_math_logic_LogicalConnective_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/LogicalConnective")), 0);
		nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/LogicalStatement")), 0);
		nova_math_logic_StatementComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/StatementComponent")), 0);
		nova_math_logic_StatementGroup_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/StatementGroup")), 0);
		nova_math_logic_StatementLetter_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/StatementLetter")), 0);
		nova_math_logic_WFF_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/logic/WFF")), 0);
		nova_network_ClientSocket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/ClientSocket")), 0);
		nova_network_ConnectionSocket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/ConnectionSocket")), 0);
		nova_network_NetworkInputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/NetworkInputStream")), 0);
		nova_network_NetworkOutputStream_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/NetworkOutputStream")), 0);
		nova_network_ServerSocket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/ServerSocket")), 0);
		nova_network_Socket_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/network/Socket")), 0);
		nova_operators_Equals_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/operators/Equals")), 1);
		nova_operators_Multiply_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/operators/Multiply")), 1);
		nova_primitive_Bool_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Bool")), 0);
		nova_primitive_Null_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Null")), 0);
		nova_primitive_Primitive_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Primitive")), 0);
		nova_primitive_number_Byte_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Byte")), 0);
		nova_primitive_number_Char_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Char")), 0);
		nova_primitive_number_Double_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Double")), 0);
		nova_primitive_number_Float_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Float")), 0);
		nova_primitive_number_Int_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Int")), 0);
		nova_primitive_number_Integer_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Integer")), 1);
		nova_primitive_number_Long_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Long")), 0);
		nova_primitive_number_Number_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Number")), 0);
		nova_primitive_number_RealNumber_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/RealNumber")), 1);
		nova_primitive_number_Short_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Short")), 0);
		nova_process_Process_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/process/Process")), 0);
		nova_regex_Match_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/regex/Match")), 0);
		nova_regex_Pattern_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/regex/Pattern")), 0);
		nova_regex_Regex_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/regex/Regex")), 0);
		nova_security_MD5_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/security/MD5")), 0);
		nova_security_Sha256_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/security/Sha256")), 0);
		nova_star_Frame_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/star/Frame")), 0);
		nova_star_Window_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/star/Window")), 0);
		nova_star_WindowThread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/star/WindowThread")), 0);
		nova_thread_Thread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/Thread")), 0);
		nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/UncaughtExceptionHandler")), 0);
		nova_thread_async_Async_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/async/Async")), 0);
		nova_thread_async_AsyncResult_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/async/AsyncResult")), 0);
		nova_time_Date_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/Date")), 0);
		nova_time_Time_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/Time")), 0);
		nova_time_Timer_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/time/Timer")), 0);
		nova_web_js_json_Json_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/js/json/Json")), 0);
		nova_web_svg_Svg_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/Svg")), 0);
		nova_web_svg_SvgCircle_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgCircle")), 0);
		nova_web_svg_SvgComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgComponent")), 0);
		nova_web_svg_SvgComponentList_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgComponentList")), 0);
		nova_web_svg_SvgComponentNode_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgComponentNode")), 0);
		nova_web_svg_SvgMainComponent_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/SvgMainComponent")), 0);
		nova_web_svg_no3_No3_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3")), 0);
		nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3Node")), 0);
		nova_web_svg_no3_No3Select_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3Select")), 0);
		nova_web_svg_no3_No3SelectAll_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/web/svg/no3/No3SelectAll")), 0);
		example_Animal_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Animal")), 0);
		example_ArrayDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/ArrayDemo")), 0);
		example_BodyBuilder_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/BodyBuilder")), 0);
		example_ClosureDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/ClosureDemo")), 0);
		example_Dog_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Dog")), 0);
		example_ExceptionHandlingDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/ExceptionHandlingDemo")), 0);
		example_FileTest_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/FileTest")), 0);
		example_GenericDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/GenericDemo")), 0);
		example_HashMapDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/HashMapDemo")), 0);
		example_HashSetDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/HashSetDemo")), 0);
		example_IntegerTest_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/IntegerTest")), 0);
		example_Lab_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Lab")), 0);
		example_MathDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/MathDemo")), 0);
		example_NonWholeDivisionException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/NonWholeDivisionException")), 0);
		example_Person_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Person")), 0);
		example_Polygon_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Polygon")), 1);
		example_PolymorphismDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/PolymorphismDemo")), 0);
		example_QueueDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/QueueDemo")), 0);
		example_Spider_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Spider")), 0);
		example_Square_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Square")), 0);
		example_SvgChart_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/SvgChart")), 0);
		example_SvgFractal_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/SvgFractal")), 0);
		example_T1_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/T1")), 0);
		example_T2_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/T2")), 0);
		example_Test_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/Test")), 0);
		example_ThreadDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/ThreadDemo")), 0);
		example_ThreadDemoImplementation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/ThreadDemoImplementation")), 0);
		example_ackermann_Ackermann_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/ackermann/Ackermann")), 0);
		example_copy_Dog_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/copy/Dog")), 0);
		example_database_DatabaseDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/database/DatabaseDemo")), 0);
		example_network_ClientDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/network/ClientDemo")), 0);
		example_network_ConnectionThread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/network/ConnectionThread")), 0);
		example_network_OutputThread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/network/OutputThread")), 0);
		example_network_ServerDemo_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("example/network/ServerDemo")), 0);
		
		
		nova_Class_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_Object_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_operators_Equals_Extension_VTable_val.classInstance);
		nova_String_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_String_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_System_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_ar_ImageTracker_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_ar_TrackPoint_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_database_DBConnector_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_database_ResultSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_BinaryNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Node_Extension_VTable_val.classInstance;
		nova_datastruct_BinaryTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Tree_Extension_VTable_val.classInstance;
		nova_datastruct_Bounds_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_HashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_HashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_HashSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_HashSet_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_Pair_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_ReversibleHashMap_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_HashMap_Extension_VTable_val.classInstance;
		nova_datastruct_Tree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_Tuple_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_Tuple_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_list_Array_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_Array_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_ArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance);
		nova_datastruct_list_CharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_CharArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance);
		nova_datastruct_list_CompiledList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_DoubleArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_DoubleArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance);
		nova_datastruct_list_EmptyStackException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance;
		nova_datastruct_list_IntArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_Array_Extension_VTable_val.classInstance;
		nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_IntArrayIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance);
		nova_datastruct_list_IntRange_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_IntRange_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_IntRangeIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance);
		nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_LinkedList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_LinkedListIterator_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterator_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_List_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_Iterable_Extension_VTable_val.classInstance);
		nova_datastruct_list_ListNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_NoSuchElementException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_datastruct_list_Queue_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_Queue_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_list_List_Extension_VTable_val.classInstance);
		nova_datastruct_list_Stack_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_StringCharArray_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_list_CharArray_Extension_VTable_val.classInstance;
		nova_exception_Backtraces_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_exception_Exception_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_exception_ExceptionData_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_exception_SoftException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_exception_UnimplementedOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_gc_GC_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_io_Console_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_io_File_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_io_FileNotFoundException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_io_FileReader_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_InputStream_Extension_VTable_val.classInstance;
		nova_io_FileWriter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_OutputStream_Extension_VTable_val.classInstance;
		nova_io_OutputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_io_StreamReader_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_ArithmeticSequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Sequence_Extension_VTable_val.classInstance;
		nova_math_Diekstra_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_GeometricSequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Graph_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_InvalidNumericStatementException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_math_Math_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Matrix_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_math_Matrix_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_operators_Multiply_Extension_VTable_val.classInstance);
		nova_math_NumericOperand_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_NumericOperation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_NumericOperand_Extension_VTable_val.classInstance;
		nova_math_NumericStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Statement_Extension_VTable_val.classInstance;
		nova_math_NumericTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Polynomial_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Sequence_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Statement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_StatementComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_VariableOperand_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Vector_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_Vector2D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_math_Vector3D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_math_Vector4D_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Vector_Extension_VTable_val.classInstance;
		nova_math_calculus_Calculus_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_huffman_HuffmanTree_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_Tree_Extension_VTable_val.classInstance;
		nova_math_logic_Conclusion_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance;
		nova_math_logic_Hypothesis_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance;
		nova_math_logic_InvalidFormulaException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_math_logic_LogicalConnective_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_StatementComponent_Extension_VTable_val.classInstance;
		nova_math_logic_LogicalStatement_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_Statement_Extension_VTable_val.classInstance;
		nova_math_logic_StatementComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_logic_StatementGroup_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_math_logic_StatementLetter_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_math_logic_StatementComponent_Extension_VTable_val.classInstance;
		nova_math_logic_WFF_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_network_ClientSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_network_ConnectionSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_network_NetworkInputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_InputStream_Extension_VTable_val.classInstance;
		nova_network_NetworkOutputStream_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_io_OutputStream_Extension_VTable_val.classInstance;
		nova_network_ServerSocket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_network_Socket_Extension_VTable_val.classInstance;
		nova_network_Socket_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_primitive_Bool_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_Primitive_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_Bool_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_primitive_Null_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_String_Extension_VTable_val.classInstance;
		nova_primitive_Primitive_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_primitive_number_Byte_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Byte_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Byte_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance);
		nova_primitive_number_Char_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Char_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Char_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance);
		nova_primitive_number_Double_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Double_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Double_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_RealNumber_Extension_VTable_val.classInstance);
		nova_primitive_number_Float_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Float_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Float_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_RealNumber_Extension_VTable_val.classInstance);
		nova_primitive_number_Int_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Int_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Int_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance);
		nova_primitive_number_Long_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Long_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Long_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance);
		nova_primitive_number_Number_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_Primitive_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Number_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_operators_Multiply_Extension_VTable_val.classInstance);
		nova_primitive_number_Short_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_primitive_number_Number_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Short_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_datastruct_Comparable_Extension_VTable_val.classInstance);
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_primitive_number_Short_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)nova_primitive_number_Integer_Extension_VTable_val.classInstance);
		nova_process_Process_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_regex_Match_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_regex_Pattern_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_regex_Regex_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_security_MD5_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_security_Sha256_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_star_Frame_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_star_Window_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_star_WindowThread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		nova_thread_Thread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_thread_async_Async_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_thread_async_AsyncResult_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_time_Date_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_time_Time_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_time_Timer_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_js_json_Json_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_datastruct_HashMap_Extension_VTable_val.classInstance;
		nova_web_svg_Svg_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_svg_SvgCircle_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_SvgComponent_Extension_VTable_val.classInstance;
		nova_web_svg_SvgComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_svg_SvgComponentList_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_svg_SvgComponentNode_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_svg_SvgMainComponent_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_SvgComponent_Extension_VTable_val.classInstance;
		nova_web_svg_no3_No3_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_web_svg_no3_No3Select_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance;
		nova_web_svg_no3_No3SelectAll_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_web_svg_no3_No3Node_Extension_VTable_val.classInstance;
		example_Animal_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_ArrayDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_BodyBuilder_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = example_Person_Extension_VTable_val.classInstance;
		example_ClosureDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_Dog_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = example_Animal_Extension_VTable_val.classInstance;
		example_ExceptionHandlingDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_FileTest_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_GenericDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_HashMapDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_HashSetDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_IntegerTest_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_Lab_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_MathDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_NonWholeDivisionException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		example_Person_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_PolymorphismDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_QueueDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_Spider_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = example_Animal_Extension_VTable_val.classInstance;
		example_Square_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_datastruct_list_Nova_Array_0_Nova_add(example_Square_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_interfaces, exceptionData, (nova_Nova_Object*)example_Polygon_Extension_VTable_val.classInstance);
		example_SvgChart_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_SvgFractal_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_T1_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_T2_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = example_T1_Extension_VTable_val.classInstance;
		example_Test_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_ThreadDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_ThreadDemoImplementation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		example_ackermann_Ackermann_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_copy_Dog_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_database_DatabaseDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_network_ClientDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		example_network_ConnectionThread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		example_network_OutputThread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		example_network_ServerDemo_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		
		
		nova_Nova_Class_Nova_init_static(exceptionData);
		nova_Nova_Object_Nova_init_static(exceptionData);
		nova_Nova_String_Nova_init_static(exceptionData);
		nova_Nova_System_Nova_init_static(exceptionData);
		nova_ar_Nova_ImageTracker_Nova_init_static(exceptionData);
		nova_ar_Nova_TrackPoint_Nova_init_static(exceptionData);
		nova_database_Nova_DBConnector_Nova_init_static(exceptionData);
		nova_database_Nova_ResultSet_Nova_init_static(exceptionData);
		nova_datastruct_Nova_BinaryNode_Nova_init_static(exceptionData);
		nova_datastruct_Nova_BinaryTree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Bounds_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Comparable_Nova_init_static(exceptionData);
		nova_datastruct_Nova_HashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_HashSet_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Node_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Pair_Nova_init_static(exceptionData);
		nova_datastruct_Nova_ReversibleHashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tuple_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Array_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CompiledList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_EmptyStackException_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntRange_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntRangeIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Iterable_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Iterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_LinkedList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_LinkedListIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_List_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ListNode_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_NoSuchElementException_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Queue_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Stack_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_StringCharArray_Nova_init_static(exceptionData);
		nova_exception_Nova_Backtraces_Nova_init_static(exceptionData);
		nova_exception_Nova_DivideByZeroException_Nova_init_static(exceptionData);
		nova_exception_Nova_Exception_Nova_init_static(exceptionData);
		nova_exception_Nova_ExceptionData_Nova_init_static(exceptionData);
		nova_exception_Nova_InvalidArgumentException_Nova_init_static(exceptionData);
		nova_exception_Nova_InvalidOperationException_Nova_init_static(exceptionData);
		nova_exception_Nova_SoftException_Nova_init_static(exceptionData);
		nova_exception_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		nova_gc_Nova_GC_Nova_init_static(exceptionData);
		nova_io_Nova_Console_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_FileNotFoundException_Nova_init_static(exceptionData);
		nova_io_Nova_FileReader_Nova_init_static(exceptionData);
		nova_io_Nova_FileWriter_Nova_init_static(exceptionData);
		nova_io_Nova_InputStream_Nova_init_static(exceptionData);
		nova_io_Nova_OutputStream_Nova_init_static(exceptionData);
		nova_io_Nova_StreamReader_Nova_init_static(exceptionData);
		nova_math_Nova_ArithmeticSequence_Nova_init_static(exceptionData);
		nova_math_Nova_Diekstra_Nova_init_static(exceptionData);
		nova_math_Nova_GeometricSequence_Nova_init_static(exceptionData);
		nova_math_Nova_Graph_Nova_init_static(exceptionData);
		nova_math_Nova_InvalidNumericStatementException_Nova_init_static(exceptionData);
		nova_math_Nova_Math_Nova_init_static(exceptionData);
		nova_math_Nova_Matrix_Nova_init_static(exceptionData);
		nova_math_Nova_NumericOperand_Nova_init_static(exceptionData);
		nova_math_Nova_NumericOperation_Nova_init_static(exceptionData);
		nova_math_Nova_NumericStatement_Nova_init_static(exceptionData);
		nova_math_Nova_NumericTree_Nova_init_static(exceptionData);
		nova_math_Nova_Polynomial_Nova_init_static(exceptionData);
		nova_math_Nova_Sequence_Nova_init_static(exceptionData);
		nova_math_Nova_Statement_Nova_init_static(exceptionData);
		nova_math_Nova_StatementComponent_Nova_init_static(exceptionData);
		nova_math_Nova_VariableOperand_Nova_init_static(exceptionData);
		nova_math_Nova_Vector_Nova_init_static(exceptionData);
		nova_math_Nova_Vector2D_Nova_init_static(exceptionData);
		nova_math_Nova_Vector3D_Nova_init_static(exceptionData);
		nova_math_Nova_Vector4D_Nova_init_static(exceptionData);
		nova_math_calculus_Nova_Calculus_Nova_init_static(exceptionData);
		nova_math_huffman_Nova_HuffmanTree_Nova_init_static(exceptionData);
		nova_math_logic_Nova_Conclusion_Nova_init_static(exceptionData);
		nova_math_logic_Nova_Hypothesis_Nova_init_static(exceptionData);
		nova_math_logic_Nova_InvalidFormulaException_Nova_init_static(exceptionData);
		nova_math_logic_Nova_LogicalConnective_Nova_init_static(exceptionData);
		nova_math_logic_Nova_LogicalStatement_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementComponent_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementGroup_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementLetter_Nova_init_static(exceptionData);
		nova_math_logic_Nova_WFF_Nova_init_static(exceptionData);
		nova_network_Nova_ClientSocket_Nova_init_static(exceptionData);
		nova_network_Nova_ConnectionSocket_Nova_init_static(exceptionData);
		nova_network_Nova_NetworkInputStream_Nova_init_static(exceptionData);
		nova_network_Nova_NetworkOutputStream_Nova_init_static(exceptionData);
		nova_network_Nova_ServerSocket_Nova_init_static(exceptionData);
		nova_network_Nova_Socket_Nova_init_static(exceptionData);
		nova_operators_Nova_Equals_Nova_init_static(exceptionData);
		nova_operators_Nova_Multiply_Nova_init_static(exceptionData);
		nova_primitive_Nova_Bool_Nova_init_static(exceptionData);
		nova_primitive_Nova_Null_Nova_init_static(exceptionData);
		nova_primitive_Nova_Primitive_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Byte_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Char_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Double_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Float_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Int_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Integer_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Long_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Number_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_RealNumber_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Short_Nova_init_static(exceptionData);
		nova_process_Nova_Process_Nova_init_static(exceptionData);
		nova_regex_Nova_Match_Nova_init_static(exceptionData);
		nova_regex_Nova_Pattern_Nova_init_static(exceptionData);
		nova_regex_Nova_Regex_Nova_init_static(exceptionData);
		nova_security_Nova_MD5_Nova_init_static(exceptionData);
		nova_security_Nova_Sha256_Nova_init_static(exceptionData);
		nova_star_Nova_Frame_Nova_init_static(exceptionData);
		nova_star_Nova_Window_Nova_init_static(exceptionData);
		nova_star_Nova_WindowThread_Nova_init_static(exceptionData);
		nova_thread_Nova_Thread_Nova_init_static(exceptionData);
		nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static(exceptionData);
		nova_thread_async_Nova_Async_Nova_init_static(exceptionData);
		nova_thread_async_Nova_AsyncResult_Nova_init_static(exceptionData);
		nova_time_Nova_Date_Nova_init_static(exceptionData);
		nova_time_Nova_Time_Nova_init_static(exceptionData);
		nova_time_Nova_Timer_Nova_init_static(exceptionData);
		nova_web_js_json_Nova_Json_Nova_init_static(exceptionData);
		nova_web_svg_Nova_Svg_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgCircle_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponent_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponentList_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponentNode_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgMainComponent_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3Node_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3Select_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3SelectAll_Nova_init_static(exceptionData);
		example_Nova_Animal_Nova_init_static(exceptionData);
		example_Nova_ArrayDemo_Nova_init_static(exceptionData);
		example_Nova_BodyBuilder_Nova_init_static(exceptionData);
		example_Nova_ClosureDemo_Nova_init_static(exceptionData);
		example_Nova_Dog_Nova_init_static(exceptionData);
		example_Nova_ExceptionHandlingDemo_Nova_init_static(exceptionData);
		example_Nova_FileTest_Nova_init_static(exceptionData);
		example_Nova_GenericDemo_Nova_init_static(exceptionData);
		example_Nova_HashMapDemo_Nova_init_static(exceptionData);
		example_Nova_HashSetDemo_Nova_init_static(exceptionData);
		example_Nova_IntegerTest_Nova_init_static(exceptionData);
		example_Nova_Lab_Nova_init_static(exceptionData);
		example_Nova_MathDemo_Nova_init_static(exceptionData);
		example_Nova_NonWholeDivisionException_Nova_init_static(exceptionData);
		example_Nova_Person_Nova_init_static(exceptionData);
		example_Nova_Polygon_Nova_init_static(exceptionData);
		example_Nova_PolymorphismDemo_Nova_init_static(exceptionData);
		example_Nova_QueueDemo_Nova_init_static(exceptionData);
		example_Nova_Spider_Nova_init_static(exceptionData);
		example_Nova_Square_Nova_init_static(exceptionData);
		example_Nova_SvgChart_Nova_init_static(exceptionData);
		example_Nova_SvgFractal_Nova_init_static(exceptionData);
		example_Nova_T1_Nova_init_static(exceptionData);
		example_Nova_T2_Nova_init_static(exceptionData);
		example_Nova_Test_Nova_init_static(exceptionData);
		example_Nova_ThreadDemo_Nova_init_static(exceptionData);
		example_Nova_ThreadDemoImplementation_Nova_init_static(exceptionData);
		example_ackermann_Nova_Ackermann_Nova_init_static(exceptionData);
		example_copy_Nova_Dog_Nova_init_static(exceptionData);
		example_database_Nova_DatabaseDemo_Nova_init_static(exceptionData);
		example_network_Nova_ClientDemo_Nova_init_static(exceptionData);
		example_network_Nova_ConnectionThread_Nova_init_static(exceptionData);
		example_network_Nova_OutputThread_Nova_init_static(exceptionData);
		example_network_Nova_ServerDemo_Nova_init_static(exceptionData);
		
		args = (nova_Nova_String**)NOVA_MALLOC(argc * sizeof(nova_Nova_String));
		
		for (i = 0; i < argc; i++)
		{
				char* str = (char*)NOVA_MALLOC(sizeof(char) * strlen(argvs[i]) + 1);
				copy_string(str, argvs[i]);
				args[i] = nova_Nova_String_1_Nova_construct(0, 0, str);
		}
		nova_datastruct_list_Nova_Array* argsArray = nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)args, argc);
		TRY
		{
				example_Nova_Lab_static_Nova_main(0, exceptionData, argsArray);
		}
		CATCH (nova_exception_Exception_Extension_VTable_val.classInstance)
		{
				char* message = "Exception in Thread 'main'";
				nova_exception_Nova_Exception* base = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				if (base != 0 && base->nova_exception_Nova_Exception_Nova_message != 0 && base->nova_exception_Nova_Exception_Nova_message != (nova_Nova_String*)nova_null) {
						printf("%s: %s", message, base->nova_exception_Nova_Exception_Nova_message->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
				} else {
						puts(message);
				}
				nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
				
		}
		FINALLY
		{
				
		}
		END_TRY;
		FreeConsole();
		NOVA_FREE(args);
		nova_gc_Nova_GC_static_Nova_collect(0, exceptionData);
		
		
		return 0;
}
