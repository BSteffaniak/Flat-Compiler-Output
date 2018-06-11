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
#include <nova/math/logic/nova_math_logic_Nova_WFF.h>
#include <nova/math/logic/nova_math_logic_Nova_InvalidFormulaException.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementLetter.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/math/nova_math_Nova_Vector3D.h>
#include <nova/math/nova_math_Nova_Matrix.h>
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <nova/star/nova_star_Nova_Window.h>
#include <nova/math/nova_math_Nova_NumericStatement.h>
#include <nova/datastruct/nova_datastruct_Nova_BinaryTree.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
#include <nova/io/nova_io_Nova_Curl.h>
#include <nova/meta/nova_meta_Nova_Library.h>
#include <nova/thread/nova_thread_Nova_ThreadLocal.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_ArrayDemo.h>
#include <example/example_Nova_BodyBuilder.h>
#include <example/example_Nova_ClosureDemo.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_ExceptionHandlingDemo.h>
#include <example/example_Nova_FileTest.h>
#include <example/example_Nova_GenericDemo.h>
#include <example/example_Nova_HashMapDemo.h>
#include <example/example_Nova_HashSetDemo.h>
#include <example/example_Nova_IntegerTest.h>
#include <example/example_Nova_MathDemo.h>
#include <example/example_Nova_NestTest.h>
#include <example/example_Nova_NonWholeDivisionException.h>
#include <example/example_Nova_Person.h>
#include <example/example_Nova_Polygon.h>
#include <example/example_Nova_PolymorphismDemo.h>
#include <example/example_Nova_QueueDemo.h>
#include <example/example_Nova_Spider.h>
#include <example/example_Nova_Square.h>
#include <example/example_Nova_SvgChart.h>
#include <example/example_Nova_SvgFractal.h>
#include <example/example_Nova_T1.h>
#include <example/example_Nova_T2.h>
#include <example/example_Nova_Test.h>
#include <example/example_Nova_ThreadDemo.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context51;
typedef struct
{
} Context52;
typedef struct
{
} Context53;
typedef struct
{
} Context54;
typedef struct
{
} Context55;
typedef struct
{
} Context56;
typedef struct
{
} Context57;
typedef struct
{
} Context58;
typedef struct
{
} Context59;
typedef struct
{
} Context60;
typedef struct
{
} Context61;
typedef struct
{
} Context62;
typedef struct
{
} Context63;
typedef struct
{
} Context64;


void example_Nova_Lab_static_Nova_benchmarkThreadLocals(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_setThreadLocalMutate(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_setThreadLocalAccess(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_setStatic(example_Nova_Lab* this);
example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_Nova_String* s);
void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_datastruct_list_Nova_List* list);
double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, example_Nova_Polygon* p);
nova_datastruct_list_Nova_Array* generated43(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated44(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated45(example_Nova_Lab* this);
nova_datastruct_list_Byte_Nova_Array1Byte* generated46(example_Nova_Lab* this);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda52(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context51* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda53(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context52* context);
void example_Nova_Lab_static_Nova_lambda54(example_Nova_Lab* this, Context53* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda55(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context54* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda56(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context55* context);
nova_datastruct_list_Nova_Array* generated47(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated48(example_Nova_Lab* this);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda57(example_Nova_Lab* this, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context56* context);
char example_Nova_Lab_static_Nova_lambda58(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context57* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda59(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context58* context);
char example_Nova_Lab_static_Nova_lambda60(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context59* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda61(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context60* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda62(example_Nova_Lab* this, char _1, int _2, nova_datastruct_list_Byte_Nova_Array1Byte* _3, Context61* context);
nova_datastruct_list_Nova_Array* generated49(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated50(example_Nova_Lab* this);
nova_datastruct_list_Byte_Nova_Array1Byte* generated51(example_Nova_Lab* this);
int example_Nova_Lab_static_Nova_lambda63(example_Nova_Lab* this, nova_Nova_String* _1, char _2, Context62* context);
void example_Nova_Lab_static_Nova_lambda64(example_Nova_Lab* this, int _1, int _2, nova_datastruct_list_Int_Nova_List1Int* _3, Context63* context);
nova_datastruct_list_Nova_Array* generated52(example_Nova_Lab* this);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda65(example_Nova_Lab* this, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context64* context);

void example_Nova_Lab_static_Nova_benchmarkThreadLocals(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_setThreadLocalMutate(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_setThreadLocalAccess(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_setStatic(example_Nova_Lab* this);
example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this);
void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_Nova_String* s);
void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_datastruct_list_Nova_List* list);
double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, example_Nova_Polygon* p);
nova_datastruct_list_Nova_Array* generated43(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated44(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated45(example_Nova_Lab* this);
nova_datastruct_list_Byte_Nova_Array1Byte* generated46(example_Nova_Lab* this);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda52(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context51* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda53(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context52* context);
void example_Nova_Lab_static_Nova_lambda54(example_Nova_Lab* this, Context53* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda55(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context54* context);
nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda56(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context55* context);
nova_datastruct_list_Nova_Array* generated47(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated48(example_Nova_Lab* this);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda57(example_Nova_Lab* this, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context56* context);
char example_Nova_Lab_static_Nova_lambda58(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context57* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda59(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context58* context);
char example_Nova_Lab_static_Nova_lambda60(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context59* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda61(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context60* context);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda62(example_Nova_Lab* this, char _1, int _2, nova_datastruct_list_Byte_Nova_Array1Byte* _3, Context61* context);
nova_datastruct_list_Nova_Array* generated49(example_Nova_Lab* this);
nova_datastruct_list_Nova_Array* generated50(example_Nova_Lab* this);
nova_datastruct_list_Byte_Nova_Array1Byte* generated51(example_Nova_Lab* this);
int example_Nova_Lab_static_Nova_lambda63(example_Nova_Lab* this, nova_Nova_String* _1, char _2, Context62* context);
void example_Nova_Lab_static_Nova_lambda64(example_Nova_Lab* this, int _1, int _2, nova_datastruct_list_Int_Nova_List1Int* _3, Context63* context);
nova_datastruct_list_Nova_Array* generated52(example_Nova_Lab* this);
nova_Nova_String* example_Nova_Lab_static_Nova_lambda65(example_Nova_Lab* this, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context64* context);
__thread int example_Nova_Lab_Nova_local;
__thread int example_Nova_Lab_Nova_bench1;
int example_Nova_Lab_Nova_bench2;
char example_Nova_Lab_Nova_init_static_inited = 0;
void example_Nova_Lab_Nova_init_static()
{
	if (!example_Nova_Lab_Nova_init_static_inited) {
		example_Nova_Lab_Nova_init_static_inited = 1;
		{
			example_Nova_Lab_Nova_local = (int)(122);
		}
	}
}

example_Nova_Lab* example_Nova_Lab_Nova_construct(example_Nova_Lab* this)
{
	CCLASS_NEW(example_Nova_Lab, this,);
	this->vtable = &example_Nova_Lab_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_Lab_Nova_super(this);
	
	return example_Nova_Lab_Nova_this((example_Nova_Lab*)(this));
}

void example_Nova_Lab_Nova_destroy(example_Nova_Lab** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_Lab_static_Nova_main(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* args)
{
	Context51* contextArg52 = NOVA_MALLOC(sizeof(Context51));
	Context52* contextArg53 = NOVA_MALLOC(sizeof(Context52));
	Context53* contextArg54 = NOVA_MALLOC(sizeof(Context53));
	Context54* contextArg55 = NOVA_MALLOC(sizeof(Context54));
	Context56* contextArg57 = NOVA_MALLOC(sizeof(Context56));
	Context57* contextArg58 = NOVA_MALLOC(sizeof(Context57));
	Context58* contextArg59 = NOVA_MALLOC(sizeof(Context58));
	Context59* contextArg60 = NOVA_MALLOC(sizeof(Context59));
	Context60* contextArg61 = NOVA_MALLOC(sizeof(Context60));
	Context61* contextArg62 = NOVA_MALLOC(sizeof(Context61));
	Context62* contextArg63 = NOVA_MALLOC(sizeof(Context62));
	Context63* contextArg64 = NOVA_MALLOC(sizeof(Context63));
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
	nova_datastruct_list_Byte_Nova_Array1Byte* l1_Nova_list2 = (nova_datastruct_list_Byte_Nova_Array1Byte*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_sss = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_multi = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_LinkedList* l1_Nova_linked = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_Nova_String* l1_Nova_x = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_aaa = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Byte_Nova_Array1Byte* l1_Nova_bbb = (nova_datastruct_list_Byte_Nova_Array1Byte*)nova_null;
	example_Nova_Square* l1_Nova_sq = (example_Nova_Square*)nova_null;
	nova_math_Nova_Vector3D* l1_Nova_v1 = (nova_math_Nova_Vector3D*)nova_null;
	nova_math_Nova_Vector3D* l1_Nova_v2 = (nova_math_Nova_Vector3D*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_matrix1 = (nova_math_Nova_Matrix*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_matrix2 = (nova_math_Nova_Matrix*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_matrix3 = (nova_math_Nova_Matrix*)nova_null;
	example_Nova_Lab* l1_Nova_l = (example_Nova_Lab*)nova_null;
	nova_datastruct_list_Nova_ImmutableArray* l1_Nova_myImmutableArray = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
	nova_datastruct_list_Nova_ImmutableArray* l1_Nova_outputArray = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
	nova_meta_Nova_Library* l1_Nova_lib = (nova_meta_Nova_Library*)nova_null;
	/*nova_meta_Nova_Library_closure13650_Nova_getFunction*/nova_funcStruct* l1_Nova_func = (/*nova_meta_Nova_Library_closure13650_Nova_getFunction*/nova_funcStruct*)nova_null;
	
	l1_Nova_strData = generated43(0);
	l1_Nova_otherStrData = generated44(0);
	l1_Nova_tree = nova_datastruct_Nova_BinaryTree_Nova_construct(0,
		(nova_datastruct_list_Nova_Array*)(l1_Nova_strData));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Preorder: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_preorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree))),
									nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Inorder: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree))),
									nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Postorder: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_postorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree))),
									nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Levelorder: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_Tree_Nova_levelorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree))),
									nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_num1 = (int)(4);
	l1_Nova_num2 = (int)(l1_Nova_num1 = (int)(7));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("My nums: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_num1))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_num2))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(" hey: "))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_Nova_Tree_Nova_inorder((nova_datastruct_Nova_Tree*)(l1_Nova_tree)))))),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)("!"))))))))))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("MergeSorted array: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_1_Nova_mergeSort((nova_datastruct_list_Nova_Array*)(l1_Nova_strData)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("QuickSorted array: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_1_Nova_quickSort((nova_datastruct_list_Nova_Array*)(l1_Nova_strData)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Concatted arrays: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(l1_Nova_strData),
											(nova_Nova_Object*)(l1_Nova_otherStrData)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Concatted sorted array: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_list_Nova_Array_0_Nova_sort((nova_datastruct_list_Nova_Array*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(l1_Nova_strData),
														(nova_Nova_Object*)(l1_Nova_otherStrData))))))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Multiplied string: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_operators_Nova_MultiplyOperator_virtual1_Nova_multiply((nova_operators_Nova_MultiplyOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)("hey"))),
									(nova_Nova_Object*)(nova_primitive_number_Nova_Int_Nova_construct(0,
						4))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Result from ternary: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_num1))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(((nova_Nova_String*)(l1_Nova_num1 < 3 ? nova_Nova_String_1_Nova_construct(0,
														(char*)("<")) : nova_Nova_String_1_Nova_construct(0,
														(char*)(">="))))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" 3"))))))))))));
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0,
		(char*)("this isnt null"));
	l1_Nova_str2 = (nova_Nova_Object*)nova_null;
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Normal: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_Nova_String_Nova_surroundWith((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0,
											(char*)("hello"))),
									nova_Nova_String_1_Nova_construct(0,
										(char*)("hey ")),
									(int)(intptr_t)nova_null))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Symmetrical: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_Nova_String_Nova_surroundWith((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0,
											(char*)("hello"))),
									nova_Nova_String_1_Nova_construct(0,
										(char*)("hey ")),
						1))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Elvis not null: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(((nova_Nova_String*)((nova_local_0 = l1_Nova_str) != (nova_Nova_String*)nova_null ? nova_local_0 : nova_Nova_String_1_Nova_construct(0,
										(char*)("wtf"))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Elvis null: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(((nova_Nova_Object*)((nova_local_1 = l1_Nova_str2) != (nova_Nova_Object*)nova_null ? (nova_Nova_Object*)nova_local_1 : (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0,
												(char*)("this is null"))))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test"))),
		0,
		(int)(intptr_t)nova_null);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_datastruct_list_Nova_IntRange_Nova_toString((nova_datastruct_list_Nova_IntRange*)((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0,
									(int)2,
									(int)8))))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(": "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((nova_datastruct_list_Nova_List_Nova_join((nova_datastruct_list_Nova_List*)((nova_datastruct_list_Nova_IntRange_1_Nova_construct(0,
														(int)2,
														(int)8))),
											nova_Nova_String_1_Nova_construct(0,
												(char*)(", "))))),
								(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(""))))))))));
	l1_Nova_list = generated45(0);
	l1_Nova_list2 = generated46(0);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("List2 "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_list2)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_datastruct_list_Byte_Nova_Array1Byte_char_Array1Byte0_Nova_add((nova_datastruct_list_Byte_Nova_Array1Byte*)(nova_datastruct_list_Byte_Nova_Array1Byte_char_Array1Byte0_Nova_add((nova_datastruct_list_Byte_Nova_Array1Byte*)(l1_Nova_list2),
		9)),
	2);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_toEnglish((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list),
						(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda52, nova_null, contextArg52)),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("and")),
				(int)(intptr_t)nova_null)));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_toEnglish((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list),
						(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda53, nova_null, contextArg53)),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("and")),
	0)));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Main local unset: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(example_Nova_Lab_Nova_local))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	example_Nova_Lab_Nova_local = (int)(10);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Main local set: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(example_Nova_Lab_Nova_local))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_thread_async_Nova_Async_static_Nova_execute((nova_thread_async_Nova_Async*)(0),
		(nova_thread_async_Nova_Async_closure1415_Nova_func)&example_Nova_Lab_static_Nova_lambda54, nova_null, contextArg54);
	l1_Nova_sss = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0,
					4,
					(int)(intptr_t)nova_null)),
			(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda55, nova_null, contextArg55));
	nova_io_Nova_Console_2_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(l1_Nova_sss));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Started async execution")));
	l1_Nova_multi = nova_datastruct_list_Nova_Array_0_Nova_construct(0);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi),
		(nova_Nova_Object*)(generated47(0)));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_multi),
		(nova_Nova_Object*)(generated48(0)));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Multi dimensional array: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_multi)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_Nova_capitalize((nova_Nova_String*)(nova_primitive_Nova_Bool_static_Nova_toString((nova_primitive_Nova_Bool*)(0),
					nova_datastruct_list_Char_Nova_List1Char_char_char_Nova_contains((nova_datastruct_list_Char_Nova_List1Char*)(nova_datastruct_list_Nova_StringCharArray_Nova_toCharArray((nova_datastruct_list_Nova_StringCharArray*)(((nova_Nova_String*)nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_multi),
											0)),
						0))->nova_Nova_String_Nova_chars))),
	'z')))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(l1_Nova_list),
					(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda57, nova_null, contextArg57)),
			nova_Nova_String_1_Nova_construct(0,
				(char*)(", "))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Mapped: "))),
				(nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list),
										(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&example_Nova_Lab_static_Nova_lambda58, nova_null, contextArg58)),
								(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda59, nova_null, contextArg59)),
						nova_Nova_String_1_Nova_construct(0,
							(char*)(", ")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Mapped backwards: "))),
				(nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list),
												(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&example_Nova_Lab_static_Nova_lambda60, nova_null, contextArg60)),
										(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda61, nova_null, contextArg61)))),
						nova_Nova_String_1_Nova_construct(0,
							(char*)(", ")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Mapped2: "))),
				(nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Byte_Nova_List1Byte_virtual_Out_List2_Nova_map((nova_datastruct_list_Byte_Nova_List1Byte*)(l1_Nova_list2),
								(nova_datastruct_list_Byte_Nova_List1Byte_closure147_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda62, nova_null, contextArg62)),
						nova_Nova_String_1_Nova_construct(0,
							(char*)(", ")))))));
	l1_Nova_linked = nova_datastruct_list_Nova_LinkedList_Nova_construct(0);
	nova_datastruct_list_Nova_LinkedList_Nova_addAll((nova_datastruct_list_Nova_LinkedList*)(l1_Nova_linked),
		(nova_datastruct_list_Nova_Array*)(generated49(0)));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Linked list backwards: "))),
				(nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(l1_Nova_linked))),
						nova_Nova_String_1_Nova_construct(0,
							(char*)(", ")))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Linked list forwards: "))),
				(nova_Nova_Object*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_linked),
						nova_Nova_String_1_Nova_construct(0,
							(char*)(", ")))))));
	l1_Nova_x = nova_Nova_String_1_Nova_construct(0,
		(char*)("Hey its a string"));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
	l1_Nova_x);
	example_Nova_Lab_static_Nova_takesString(0,
	l1_Nova_x);
	if (1)
	{
		l1_Nova_x = (nova_Nova_String*)(nova_datastruct_list_Nova_Array_0_Nova_construct(0));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_x),
			(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("hey"))));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_x),
			(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
					(char*)("its now an array"))));
	}
	l1_Nova_aaa = generated50(0);
	l1_Nova_bbb = generated51(0);
	nova_datastruct_list_Int_Nova_List1Int_virtual_null_List1Int2_Nova_forEach((nova_datastruct_list_Int_Nova_List1Int*)(nova_datastruct_list_Nova_List_Array1Byte_int_List1Int1_Nova_zip((nova_datastruct_list_Nova_List*)(l1_Nova_aaa),
				l1_Nova_bbb,
				(nova_datastruct_list_Nova_List_closure344_Nova_zipper)&example_Nova_Lab_static_Nova_lambda63, nova_null, contextArg63)),
		(nova_datastruct_list_Int_Nova_List1Int_closure97_Nova_func)&example_Nova_Lab_static_Nova_lambda64, nova_null, contextArg64);
	nova_io_Nova_Console_2_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(l1_Nova_x));
	l1_Nova_sq = example_Nova_Square_Nova_construct(0,
	4);
	nova_io_Nova_Console_3_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		example_Nova_Lab_static_Nova_getArea(0,
			(example_Nova_Polygon*)(l1_Nova_sq)));
	l1_Nova_v1 = nova_math_Nova_Vector3D_1_Nova_construct(0,
		2,
		1,
	8);
	l1_Nova_v2 = nova_math_Nova_Vector3D_1_Nova_construct(0,
		5,
		3,
	2);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_v1)))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" X "))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_v2)))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(" = "))),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Vector3D_Nova_crossProduct((nova_math_Nova_Vector3D*)(l1_Nova_v1),
												l1_Nova_v2))))),
												(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
														(char*)(""))))))))))))));
	l1_Nova_matrix1 = nova_math_Nova_Matrix_1_Nova_construct(0,
		2,
	3);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix1),
		0)),
		0,
	1);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix1),
		0)),
		1,
	2);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix1),
		0)),
		2,
	3);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix1),
		1)),
		0,
	4);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix1),
		1)),
		1,
	5);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix1),
		1)),
		2,
	6);
	l1_Nova_matrix2 = nova_math_Nova_Matrix_1_Nova_construct(0,
		3,
	2);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix2),
		0)),
		0,
	7);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix2),
		0)),
		1,
	8);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix2),
		1)),
		0,
	9);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix2),
		1)),
		1,
	10);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix2),
		2)),
		0,
	11);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix2),
		2)),
		1,
	12);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Matrix:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix1)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Matrix:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_transpose((nova_math_Nova_Matrix*)(l1_Nova_matrix1)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Matrix:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix2)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Matrix:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_MultiplyOperator_virtual1_Nova_multiply((nova_operators_Nova_MultiplyOperator*)(l1_Nova_matrix1),
											(nova_Nova_Object*)(l1_Nova_matrix2)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Matrix:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_math_Nova_Matrix_Nova_transpose((nova_math_Nova_Matrix*)(l1_Nova_matrix1))),
											(nova_Nova_Object*)(l1_Nova_matrix2)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_matrix3 = nova_math_Nova_Matrix_1_Nova_construct(0,
		3,
	3);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		0)),
		0,
	6);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		0)),
		1,
	1);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		0)),
		2,
	1);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		1)),
		0,
	4);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		1)),
		1,
	-2);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		1)),
		2,
	5);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		2)),
		0,
	2);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		2)),
		1,
	8);
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(l1_Nova_matrix3),
		2)),
		2,
	7);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Determinant of\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_matrix3)))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)("\nis "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Double_static_Nova_toString((nova_primitive_number_Nova_Double*)(0),
												(nova_math_Nova_Matrix_Nova_determinant((nova_math_Nova_Matrix*)(l1_Nova_matrix3))))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	nova_datastruct_list_Double_Nova_Array1Double_int_double_double_Nova_set((nova_datastruct_list_Double_Nova_Array1Double*)(nova_math_Nova_Matrix_Nova_get((nova_math_Nova_Matrix*)(nova_math_Nova_Matrix_static_Nova_identity((nova_math_Nova_Matrix*)(0),
				4)),
		0)),
		0,
	5);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("4x4 Identity:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity((nova_math_Nova_Matrix*)(0),
						4))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("12x12 Identity:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity((nova_math_Nova_Matrix*)(0),
						12))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("8x8 Identity:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_static_Nova_identity((nova_math_Nova_Matrix*)(0),
						8))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Inverse of 3x3 matrix:\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_math_Nova_Matrix_Nova_inverse((nova_math_Nova_Matrix*)(l1_Nova_matrix3)))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_l = example_Nova_Lab_Nova_construct(0);
	example_Nova_Lab_Nova_chainable((example_Nova_Lab*)(example_Nova_Lab_Nova_chainable((example_Nova_Lab*)(l1_Nova_l))));
	l1_Nova_myImmutableArray = nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(generated52(0)));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Immutable: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_myImmutableArray)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	l1_Nova_outputArray = nova_datastruct_list_Nova_ImmutableArray_0_Nova_add((nova_datastruct_list_Nova_ImmutableArray*)(l1_Nova_myImmutableArray),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("four"))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Modified("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_myImmutableArray))))),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)("): "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_myImmutableArray)))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Output("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_outputArray))))),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)("): "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l1_Nova_outputArray)))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("Loading library... "))));
	l1_Nova_lib = nova_meta_Nova_Library_Nova_load((nova_meta_Nova_Library*)(nova_meta_Nova_Library_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("C:/Users/Braden/GitHub/NovaWorkspace/testlib")))));
	l1_Nova_func = nova_meta_Nova_Library_0_Nova_getFunction((nova_meta_Nova_Library*)(l1_Nova_lib),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("staticFunc")),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("nova/test/Test")));
	((l1_closure515_Nova_func)l1_Nova_func->func)(l1_Nova_func->ref,
	l1_Nova_func->context);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Main local at end: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(example_Nova_Lab_Nova_local))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	example_Nova_Lab_static_Nova_benchmarkThreadLocals(0);
	example_Nova_Lab_static_Nova_benchmarkThreadLocals(0);
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

void example_Nova_Lab_static_Nova_benchmarkThreadLocals(example_Nova_Lab* this)
{
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	
	l1_Nova_timer = nova_time_Nova_Timer_Nova_construct(0);
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Running local mutate... ")));
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(l1_Nova_timer));
	example_Nova_Lab_static_Nova_setThreadLocalMutate(0);
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Running static mutate... ")));
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(l1_Nova_timer));
	example_Nova_Lab_static_Nova_setStatic(0);
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Running local access... ")));
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(l1_Nova_timer));
	example_Nova_Lab_static_Nova_setThreadLocalAccess(0);
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Took "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void example_Nova_Lab_static_Nova_setThreadLocalMutate(example_Nova_Lab* this)
{
	int l7_Nova_i;
	l7_Nova_i = (int)0;
	for (; l7_Nova_i < (int)1000000; l7_Nova_i++)
	{
		example_Nova_Lab_Nova_bench1 = (int)(10);
	}
}

void example_Nova_Lab_static_Nova_setThreadLocalAccess(example_Nova_Lab* this)
{
	int l7_Nova_i;
	l7_Nova_i = (int)0;
	for (; l7_Nova_i < (int)1000000; l7_Nova_i++)
	{
		int l7_Nova_x = 0;
		
		l7_Nova_x = example_Nova_Lab_Nova_bench1;
	}
}

void example_Nova_Lab_static_Nova_setStatic(example_Nova_Lab* this)
{
	int l7_Nova_i;
	l7_Nova_i = (int)0;
	for (; l7_Nova_i < (int)1000000; l7_Nova_i++)
	{
		example_Nova_Lab_Nova_bench2 = (int)(10);
	}
}

example_Nova_Lab* example_Nova_Lab_Nova_chainable(example_Nova_Lab* this)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("in chainable")));
	return this;
}

void example_Nova_Lab_static_Nova_takesString(example_Nova_Lab* this, nova_Nova_String* s)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((s)),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void example_Nova_Lab_static_Nova_doSomething(example_Nova_Lab* this, nova_datastruct_list_Nova_List* list)
{
	Context64* contextArg65 = NOVA_MALLOC(sizeof(Context64));
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(list),
				(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda65, nova_null, contextArg65)),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&nova_io_Nova_Console_1_static_Nova_writeLine, nova_io_Nova_Console_1_static_Nova_writeLine, nova_null);
}

double example_Nova_Lab_static_Nova_getArea(example_Nova_Lab* this, example_Nova_Polygon* p)
{
	return example_Nova_Polygon_virtual_Nova_calculateArea((example_Nova_Polygon*)(p));
}

example_Nova_Lab* example_Nova_Lab_Nova_this(example_Nova_Lab* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated43(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 9);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("F"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("B"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("A"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("D"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("C"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0,
		(char*)("E"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0,
		(char*)("G"));
	l1_Nova_temp[7] = nova_Nova_String_1_Nova_construct(0,
		(char*)("I"));
	l1_Nova_temp[8] = nova_Nova_String_1_Nova_construct(0,
		(char*)("H"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	9);
}

nova_datastruct_list_Nova_Array* generated44(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 4);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("F"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("B"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("A"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("D"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	4);
}

nova_datastruct_list_Nova_Array* generated45(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 7);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("this"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("is"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("a"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0,
		(char*)("to"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0,
		(char*)("see"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0,
		(char*)("what shows up"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	7);
}

nova_datastruct_list_Byte_Nova_Array1Byte* generated46(example_Nova_Lab* this)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(char) * 7);
	l1_Nova_temp[0] = 1;
	l1_Nova_temp[1] = 2;
	l1_Nova_temp[2] = 3;
	l1_Nova_temp[3] = 4;
	l1_Nova_temp[4] = 5;
	l1_Nova_temp[5] = 6;
	l1_Nova_temp[6] = 7;
	return nova_datastruct_list_Byte_Nova_Array1Byte_Byte_int_Array1Byte2_Nova_construct(0,
		l1_Nova_temp,
	7);
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda52(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context51* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("'"))),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((_1)),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("'"))))));
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda53(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context52* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("'"))),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((_1)),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("'"))))));
}

void example_Nova_Lab_static_Nova_lambda54(example_Nova_Lab* this, Context53* context)
{
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Async local unset: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(example_Nova_Lab_Nova_local))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	example_Nova_Lab_Nova_local = (int)(5);
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Async local set: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(example_Nova_Lab_Nova_local))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Wait a second!")));
	nova_thread_Nova_Thread_static_Nova_sleep((nova_thread_Nova_Thread*)(0),
	1000);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("ok, now what")));
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Async local at end: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(example_Nova_Lab_Nova_local))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda55(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context54* context)
{
	Context55* contextArg56 = NOVA_MALLOC(sizeof(Context55));
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0,
				2,
				(int)(intptr_t)nova_null)),
		(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_Lab_static_Nova_lambda56, nova_null, contextArg56);
}

nova_datastruct_list_Nova_Array* example_Nova_Lab_static_Nova_lambda56(example_Nova_Lab* this, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context55* context)
{
	return nova_datastruct_list_Nova_Array_1_Nova_construct(0,
		1,
		(int)(intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* generated47(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 2);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("This is a test"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("index 2"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	2);
}

nova_datastruct_list_Nova_Array* generated48(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 2);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("Second dimension yo"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("waddup"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	2);
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda57(example_Nova_Lab* this, nova_Nova_String* x, int _2, nova_datastruct_list_Nova_Array* _3, Context56* context)
{
	int l1_Nova_something = 0;
	
	l1_Nova_something = 5 * x->nova_Nova_String_Nova_count;
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
				(l1_Nova_something))),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(" "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((x)),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

char example_Nova_Lab_static_Nova_lambda58(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context57* context)
{
	return _1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda59(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context58* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
				(_2))),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)(": "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((_1)),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("?"))))))));
}

char example_Nova_Lab_static_Nova_lambda60(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context59* context)
{
	return _1->nova_Nova_String_Nova_count >= 4;
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda61(example_Nova_Lab* this, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context60* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((_1)),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("?"))));
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda62(example_Nova_Lab* this, char _1, int _2, nova_datastruct_list_Byte_Nova_Array1Byte* _3, Context61* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
				(_1))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("!"))));
}

nova_datastruct_list_Nova_Array* generated49(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 3);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test2"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("test3"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	3);
}

nova_datastruct_list_Nova_Array* generated50(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 3);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("one"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("two"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("three"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	3);
}

nova_datastruct_list_Byte_Nova_Array1Byte* generated51(example_Nova_Lab* this)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(char) * 5);
	l1_Nova_temp[0] = 1;
	l1_Nova_temp[1] = 2;
	l1_Nova_temp[2] = 3;
	l1_Nova_temp[3] = 4;
	l1_Nova_temp[4] = 5;
	return nova_datastruct_list_Byte_Nova_Array1Byte_Byte_int_Array1Byte2_Nova_construct(0,
		l1_Nova_temp,
	5);
}

int example_Nova_Lab_static_Nova_lambda63(example_Nova_Lab* this, nova_Nova_String* _1, char _2, Context62* context)
{
	return _1->nova_Nova_String_Nova_count * _2;
}

void example_Nova_Lab_static_Nova_lambda64(example_Nova_Lab* this, int _1, int _2, nova_datastruct_list_Int_Nova_List1Int* _3, Context63* context)
{
	nova_io_Nova_Console_static_Nova_log((nova_io_Nova_Console*)(0),
		(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(_1))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

nova_datastruct_list_Nova_Array* generated52(example_Nova_Lab* this)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 3);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0,
		(char*)("one"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0,
		(char*)("two"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0,
		(char*)("three"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	3);
}

nova_Nova_String* example_Nova_Lab_static_Nova_lambda65(example_Nova_Lab* this, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_List* _3, Context64* context)
{
	return (nova_Nova_String*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("!!!"))));
}

void example_Nova_Lab_Nova_super(example_Nova_Lab* this)
{
}

