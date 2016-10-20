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


example_Lab_Extension_VTable example_Lab_Extension_VTable_val =
{
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
				(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
				0,
				0,
				0,
				0,
		},
		nova_Nova_Object_Nova_equals,
		nova_Nova_Object_Nova_toString,
		nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova_s);
void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* example_Nova_Lab_Nova_list);
double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* example_Nova_Lab_Nova_p);
nova_datastruct_list_Nova_Array* generated12(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated13(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* generated14(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Lab_static_Nova_testLambda53(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, Context1* context);
nova_datastruct_list_Nova_Array* generated15(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated16(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda54(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova_x, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context2* context);
char example_Nova_Lab_static_Nova_testLambda55(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context3* context);
nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda56(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context4* context);
char example_Nova_Lab_static_Nova_testLambda57(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context5* context);
nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda58(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context6* context);
nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda59(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, int example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_IntArray* example_Nova_Lab_Nova__3, Context7* context);
nova_datastruct_list_Nova_Array* generated17(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda60(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_List* example_Nova_Lab_Nova__3, Context8* context);
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

void example_Nova_Lab_static_Nova_main(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova_args)
{
		nova_datastruct_Nova_BinaryTree* l1_Nova_tree = (nova_datastruct_Nova_BinaryTree*)nova_null;
		int l1_Nova_num1 = 0;
		int l1_Nova_num2 = 0;
		nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
		nova_Nova_Object* l1_Nova_str2 = (nova_Nova_Object*)nova_null;
		nova_Nova_String* l1_Nova_nova_local_0 = (nova_Nova_String*)nova_null;
		nova_Nova_Object* l1_Nova_nova_local_1 = (nova_Nova_Object*)nova_null;
		nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
		nova_datastruct_list_Nova_IntArray* l1_Nova_list2 = (nova_datastruct_list_Nova_IntArray*)nova_null;
		Context1 contextArg53 = 
		{
		};
		nova_datastruct_list_Nova_Array* l1_Nova_multi = (nova_datastruct_list_Nova_Array*)nova_null;
		Context2 contextArg54 = 
		{
		};
		Context3 contextArg55 = 
		{
		};
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
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("My nums: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num1))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num2))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" hey: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Nova_toString((nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree), exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!")))))))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Result from ternary: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_num1))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l1_Nova_num1 < 3 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">="))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" 3")))))));
		l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this isnt null"));
		l1_Nova_str2 = (nova_Nova_Object*)nova_null;
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Normal: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_Nova_String_Nova_surroundWith(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey ")), (intptr_t)nova_null))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Symmetrical: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_Nova_String_Nova_surroundWith(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hello")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey ")), 1))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Elvis not null: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)((l1_Nova_nova_local_0 = l1_Nova_str) != (nova_Nova_String*)nova_null ? l1_Nova_nova_local_0 : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("wtf"))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Elvis null: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((nova_Nova_Object*)((l1_Nova_nova_local_1 = l1_Nova_str2) != (nova_Nova_Object*)nova_null ? l1_Nova_nova_local_1 : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("this is null"))))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_Nova_String_Nova_substring(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test")), exceptionData, 0, (intptr_t)nova_null);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_IntRange_Nova_toString((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)2, (int)8)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_IntRange_Nova_join((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0, exceptionData, (int)2, (int)8)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
		l1_Nova_list = generated13(0, exceptionData);
		l1_Nova_list2 = generated14(0, exceptionData);
		nova_thread_async_Nova_Async_static_Nova_execute(0, exceptionData, (nova_thread_async_Nova_Async_closure3_Nova_func)&example_Nova_Lab_static_Nova_testLambda53, nova_null, &contextArg53);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Started async execution")));
		l1_Nova_multi = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, (nova_Nova_Object*)(generated15(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, (nova_Nova_Object*)(generated16(0, exceptionData)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Multi dimensional array: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Nova_toString((nova_datastruct_list_Nova_Array*)((l1_Nova_multi)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_Nova_capitalize(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, nova_datastruct_list_Nova_CharArray_Nova_contains((nova_datastruct_list_Nova_CharArray*)(((nova_Nova_String*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_multi), exceptionData, 0)), exceptionData, 0))->nova_Nova_String_Nova_chars), exceptionData, 'z')), exceptionData));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda54, nova_null, &contextArg54)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&example_Nova_Lab_static_Nova_testLambda55, nova_null, &contextArg55)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda56, nova_null, &contextArg56)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped backwards: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&example_Nova_Lab_static_Nova_testLambda57, nova_null, &contextArg57)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda58, nova_null, &contextArg58)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Mapped2: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_IntArray_Nova_map(l1_Nova_list2, exceptionData, (nova_datastruct_list_Nova_IntArray_closure3_Nova_mapFunc)(intptr_t)&example_Nova_Lab_static_Nova_testLambda59, nova_null, &contextArg59)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
		l1_Nova_linked = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
		nova_datastruct_list_Nova_LinkedList_Nova_addAll((nova_datastruct_list_Nova_LinkedList*)(l1_Nova_linked), exceptionData, (nova_datastruct_list_Nova_Array*)(generated17(0, exceptionData)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Linked list backwards: "))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_LinkedList_Nova_reverse((nova_datastruct_list_Nova_LinkedList*)(l1_Nova_linked), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))));
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
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Vector_Nova_toString((nova_math_Nova_Vector*)((l1_Nova_v1)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" X "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Vector_Nova_toString((nova_math_Nova_Vector*)((l1_Nova_v2)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" = "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Vector_Nova_toString((nova_math_Nova_Vector*)((nova_math_Nova_Vector3D_Nova_crossProduct(l1_Nova_v1, exceptionData, l1_Nova_v2))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))));
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
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((l1_Nova_matrix1), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix_Nova_transpose(l1_Nova_matrix1, exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((l1_Nova_matrix2), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix*)((nova_math_Nova_Matrix_Nova_multiply(l1_Nova_matrix1, exceptionData, l1_Nova_matrix2))), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix_Nova_transpose(l1_Nova_matrix1, exceptionData), exceptionData, l1_Nova_matrix2, (intptr_t)nova_null)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
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
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Determinant of\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((l1_Nova_matrix3), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nis "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Nova_determinant(l1_Nova_matrix3, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
		nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 4), exceptionData, 0), exceptionData, 0, 5);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("4x4 Identity:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 4)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("12x12 Identity:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 12)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("8x8 Identity:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, 8)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Inverse of 3x3 matrix:\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_math_Nova_Matrix_Nova_toString((nova_math_Nova_Matrix_Nova_inverse(l1_Nova_matrix3, exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
		l1_Nova_l = example_Nova_Lab_Nova_construct(0, exceptionData);
		example_Nova_Lab_Nova_chainable(example_Nova_Lab_Nova_chainable(l1_Nova_l, exceptionData), exceptionData);
		nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("in chainable")));
		return this;
}

void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova_s)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Received "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((example_Nova_Lab_Nova_s)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* example_Nova_Lab_Nova_list)
{
		Context8 contextArg60 = 
		{
		};
		
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(example_Nova_Lab_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&example_Nova_Lab_static_Nova_testLambda60, nova_null, &contextArg60)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_io_Nova_Console_2_static_Nova_writeLine, 0, nova_null);
}

double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, example_Nova_Polygon* example_Nova_Lab_Nova_p)
{
		return example_Nova_Polygon_virtual_Nova_calculateArea((example_Nova_Polygon*)(example_Nova_Lab_Nova_p), exceptionData);
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

nova_datastruct_list_Nova_IntArray* generated14(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		int* l1_Nova_temp = (int*)nova_null;
		
		l1_Nova_temp = (int*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Int) * 7);
		l1_Nova_temp[0] = (int)(1);
		l1_Nova_temp[1] = (int)(2);
		l1_Nova_temp[2] = (int)(3);
		l1_Nova_temp[3] = (int)(4);
		l1_Nova_temp[4] = (int)(5);
		l1_Nova_temp[5] = (int)(6);
		l1_Nova_temp[6] = (int)(7);
		return nova_datastruct_list_Nova_IntArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 7);
}

void example_Nova_Lab_static_Nova_testLambda53(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, Context1* context)
{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Wait a half a second!")));
		nova_thread_Nova_Thread_static_Nova_sleep(0, exceptionData, 500);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ok, now what")));
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

nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda54(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova_x, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context2* context)
{
		int l1_Nova_something = 0;
		
		l1_Nova_something = 5 * example_Nova_Lab_Nova_x->nova_Nova_String_Nova_count;
		return (nova_Nova_Object*)nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_something))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((example_Nova_Lab_Nova_x)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

char example_Nova_Lab_static_Nova_testLambda55(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context3* context)
{
		return (char)example_Nova_Lab_Nova__1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda56(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context4* context)
{
		return (nova_Nova_Object*)nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (example_Nova_Lab_Nova__2))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((example_Nova_Lab_Nova__1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")))));
}

char example_Nova_Lab_static_Nova_testLambda57(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context5* context)
{
		return (char)example_Nova_Lab_Nova__1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda58(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_Array* example_Nova_Lab_Nova__3, Context6* context)
{
		return (nova_Nova_Object*)nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((example_Nova_Lab_Nova__1)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?")));
}

nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda59(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, int example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_IntArray* example_Nova_Lab_Nova__3, Context7* context)
{
		return (nova_Nova_Object*)nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (example_Nova_Lab_Nova__1))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!")));
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

nova_Nova_Object* example_Nova_Lab_static_Nova_testLambda60(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* example_Nova_Lab_Nova__1, int example_Nova_Lab_Nova__2, nova_datastruct_list_Nova_List* example_Nova_Lab_Nova__3, Context8* context)
{
		return (nova_Nova_Object*)nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((example_Nova_Lab_Nova__1)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!!!")));
}

void example_Nova_Lab_Nova_super(example_Nova_Lab* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}



nova_primitive_Nova_Null* nova_null;
void* nova_garbageData;

int main(int argc, char** argvs)
{
		nova_Nova_String** args;
		int      i;
		
		nova_exception_Nova_ExceptionData* exceptionData = 0;
		srand(currentTimeMillis());
		nova_garbageData = malloc(sizeof(void*));
		nova_gc_Nova_GC_static_Nova_init(0, exceptionData);
		
		nova_null = nova_primitive_Nova_Null_Nova_construct(0, exceptionData);
		novaEnv.nova_Object.equals = nova_Object_Extension_VTable_val.nova_operators_Nova_Equals_virtual_Nova_equals;
		novaEnv.nova_Object.toString = nova_Object_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_String.concat = nova_String_Extension_VTable_val.nova_Nova_String_virtual_Nova_concat;
		novaEnv.nova_String.toString = nova_String_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Comparable_Extension_VTable_val.itable.nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo;
		novaEnv.nova_datastruct_list_Array.map__nova_Object = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_Array.forEach__void = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_Array.filter__nova_primitive_Bool = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_Array.take = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual_Nova_take;
		novaEnv.nova_datastruct_list_Array.skip = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual_Nova_skip;
		novaEnv.nova_datastruct_list_Array.reverse = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
		novaEnv.nova_datastruct_list_Array.get = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_get;
		novaEnv.nova_datastruct_list_Array.set = nova_datastruct_list_Array_Extension_VTable_val.nova_datastruct_list_Nova_Array_virtual_Nova_set;
		novaEnv.nova_datastruct_list_Iterator.reset = nova_datastruct_list_Iterator_Extension_VTable_val.itable.nova_datastruct_list_Nova_Iterator_virtual_Nova_reset;
		novaEnv.nova_datastruct_list_List.toArray = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray;
		novaEnv.nova_datastruct_list_List.contains__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains;
		novaEnv.nova_datastruct_list_List.forEach__void = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_List.map__nova_Object = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_List.any__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_any;
		novaEnv.nova_datastruct_list_List.all__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_all;
		novaEnv.nova_datastruct_list_List.filter__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_List.take = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_take;
		novaEnv.nova_datastruct_list_List.skip = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_skip;
		novaEnv.nova_datastruct_list_List.firstWhere__nova_primitive_Bool = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere;
		novaEnv.nova_datastruct_list_List.reverse = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
		novaEnv.nova_datastruct_list_List.join = nova_datastruct_list_List_Extension_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_join;
		novaEnv.nova_io_InputStream.readString = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readString;
		novaEnv.nova_io_InputStream.readBytes = nova_io_InputStream_Extension_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readBytes;
		novaEnv.nova_io_OutputStream.write__nova_String = nova_io_OutputStream_Extension_VTable_val.nova_io_Nova_OutputStream_virtual0_Nova_write;
		novaEnv.nova_io_OutputStream.write__nova_Object = nova_io_OutputStream_Extension_VTable_val.nova_io_Nova_OutputStream_virtual1_Nova_write;
		novaEnv.nova_math_NumericOperand.toString = nova_math_NumericOperand_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.nova_math_Vector.dotProduct = nova_math_Vector_Extension_VTable_val.nova_math_Nova_Vector_virtual_Nova_dotProduct;
		novaEnv.nova_operators_Equals.equals = nova_operators_Equals_Extension_VTable_val.itable.nova_operators_Nova_Equals_virtual_Nova_equals;
		novaEnv.nova_operators_Multiply.multiply__nova_Object = nova_operators_Multiply_Extension_VTable_val.itable.nova_operators_Nova_Multiply_virtual0_Nova_multiply;
		novaEnv.nova_svg_SvgComponent.generateOutput = nova_svg_SvgComponent_Extension_VTable_val.nova_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_svg_no3_No3Node.toJs = nova_svg_no3_No3Node_Extension_VTable_val.nova_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.nova_thread_Thread.run = nova_thread_Thread_Extension_VTable_val.nova_thread_Nova_Thread_virtual_Nova_run;
		novaEnv.nova_thread_UncaughtExceptionHandler.uncaughtException = nova_thread_UncaughtExceptionHandler_Extension_VTable_val.nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException;
		novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_SvgComponent_Extension_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_No3Node_Extension_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.compiler_tree_node_Node.clone = compiler_tree_node_Node_Extension_VTable_val.compiler_tree_node_Nova_Node_virtual_Nova_clone;
		novaEnv.compiler_tree_node_annotation_Annotatable.addAnnotation = compiler_tree_node_annotation_Annotatable_Extension_VTable_val.itable.compiler_tree_node_annotation_Nova_Annotatable_virtual_Nova_addAnnotation;
		novaEnv.example_Animal.getNumLegs = example_Animal_Extension_VTable_val.example_Nova_Animal_virtual_Nova_getNumLegs;
		novaEnv.example_Animal.getNumEyes = example_Animal_Extension_VTable_val.example_Nova_Animal_virtual_Nova_getNumEyes;
		novaEnv.example_Animal.getDescription = example_Animal_Extension_VTable_val.example_Nova_Animal_virtual_Nova_getDescription;
		novaEnv.example_Person.sayHello = example_Person_Extension_VTable_val.example_Nova_Person_virtual_Nova_sayHello;
		novaEnv.example_Polygon.numberSides = example_Polygon_Extension_VTable_val.itable.example_Nova_Polygon_virtual_Nova_numberSides;
		novaEnv.example_Polygon.calculateArea = example_Polygon_Extension_VTable_val.itable.example_Nova_Polygon_virtual_Nova_calculateArea;
		novaEnv.stabilitytest_PolymorphicSuperClass.toString = stabilitytest_PolymorphicSuperClass_Extension_VTable_val.nova_Nova_Object_virtual_Nova_toString;
		novaEnv.stabilitytest_StabilityTestCase.test = stabilitytest_StabilityTestCase_Extension_VTable_val.stabilitytest_Nova_StabilityTestCase_virtual_Nova_test;
		
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
		nova_exception_Nova_DivideByZeroException_Nova_init_static(exceptionData);
		nova_exception_Nova_Exception_Nova_init_static(exceptionData);
		nova_exception_Nova_ExceptionData_Nova_init_static(exceptionData);
		nova_exception_Nova_InvalidArgumentException_Nova_init_static(exceptionData);
		nova_exception_Nova_InvalidOperationException_Nova_init_static(exceptionData);
		nova_exception_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		nova_gc_Nova_GC_Nova_init_static(exceptionData);
		nova_io_Nova_Console_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_FileNotFoundException_Nova_init_static(exceptionData);
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
		nova_security_Nova_MD5_Nova_init_static(exceptionData);
		nova_star_Nova_Frame_Nova_init_static(exceptionData);
		nova_star_Nova_Window_Nova_init_static(exceptionData);
		nova_star_Nova_WindowThread_Nova_init_static(exceptionData);
		nova_svg_Nova_Svg_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgCircle_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponent_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponentList_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponentNode_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgMainComponent_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3Node_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3Selection_Nova_init_static(exceptionData);
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
		compiler_Nova_Compiler_Nova_init_static(exceptionData);
		compiler_Nova_SyntaxErrorException_Nova_init_static(exceptionData);
		compiler_error_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		compiler_tree_Nova_SyntaxTree_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Import_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_ImportList_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Listener_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Node_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_NodeList_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_NovaClass_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_NovaFile_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Package_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Program_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Scope_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_ValidationResult_Nova_init_static(exceptionData);
		compiler_tree_node_annotation_Nova_Annotatable_Nova_init_static(exceptionData);
		compiler_tree_node_annotation_Nova_Annotation_Nova_init_static(exceptionData);
		compiler_tree_node_closures_Nova_ClosureContext_Nova_init_static(exceptionData);
		compiler_tree_node_closures_Nova_ClosureDeclaration_Nova_init_static(exceptionData);
		compiler_tree_node_exceptionhandling_Nova_ExceptionHandler_Nova_init_static(exceptionData);
		compiler_tree_node_exceptionhandling_Nova_Try_Nova_init_static(exceptionData);
		compiler_tree_node_functions_Nova_NovaFunction_Nova_init_static(exceptionData);
		compiler_util_Nova_FileUtils_Nova_init_static(exceptionData);
		compiler_util_Nova_Location_Nova_init_static(exceptionData);
		compiler_util_Nova_OS_Nova_init_static(exceptionData);
		compiler_util_Nova_OS_Nova_init_static(exceptionData);
		compiler_util_Nova_StringUtils_Nova_init_static(exceptionData);
		compiler_util_Nova_SyntaxUtils_Nova_init_static(exceptionData);
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
		stabilitytest_Nova_AssignmentStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ClassWithProperties_Nova_init_static(exceptionData);
		stabilitytest_Nova_ClientThread_Nova_init_static(exceptionData);
		stabilitytest_Nova_ClosureStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ExceptionStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_FileStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_LambdaStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_NetworkStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_Node_Nova_init_static(exceptionData);
		stabilitytest_Nova_PolymorphicSubClass_Nova_init_static(exceptionData);
		stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static(exceptionData);
		stabilitytest_Nova_PolymorphismStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityExceptionHandler_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityTest_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityTestCase_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityTestException_Nova_init_static(exceptionData);
		stabilitytest_Nova_SyntaxStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ThreadImplementation_Nova_init_static(exceptionData);
		stabilitytest_Nova_ThreadStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_TimeStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ToStringStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_UnstableException_Nova_init_static(exceptionData);
		
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
		CATCH (1)
		{
				nova_exception_Nova_Exception* base = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				printf("Exception in Thread 'main': %s", base->nova_exception_Nova_Exception_Nova_message->nova_Nova_String_Nova_chars);
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
