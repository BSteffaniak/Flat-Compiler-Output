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
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_ArrayDemo.h>
#include <example/example_Nova_BodyBuilder.h>
#include <example/example_Nova_ClosureDemo.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_ExceptionHandlingDemo.h>
#include <example/example_Nova_FileTest.h>
#include <example/example_Nova_GenericDemo.h>
#include <example/example_Nova_HashSetDemo.h>
#include <example/example_Nova_IntegerTest.h>
#include <example/example_Nova_Lab.h>
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
#include <nova/NativeObject.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context46;
typedef struct
{
} Context47;
typedef struct
{
} Context48;
typedef struct
{
} Context49;
typedef struct
{
} Context50;


void example_Nova_HashMapDemo_static_Nova_lambda47(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context46* context);
void example_Nova_HashMapDemo_static_Nova_lambda48(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context47* context);
char example_Nova_HashMapDemo_static_Nova_lambda49(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context48* context);
nova_Nova_String* example_Nova_HashMapDemo_static_Nova_lambda50(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context49* context);
void example_Nova_HashMapDemo_static_Nova_lambda51(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context50* context);

void example_Nova_HashMapDemo_static_Nova_lambda47(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context46* context);
void example_Nova_HashMapDemo_static_Nova_lambda48(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context47* context);
char example_Nova_HashMapDemo_static_Nova_lambda49(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context48* context);
nova_Nova_String* example_Nova_HashMapDemo_static_Nova_lambda50(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context49* context);
void example_Nova_HashMapDemo_static_Nova_lambda51(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context50* context);
char example_Nova_HashMapDemo_Nova_init_static_inited = 0;
void example_Nova_HashMapDemo_Nova_init_static()
{
	if (!example_Nova_HashMapDemo_Nova_init_static_inited) {
		example_Nova_HashMapDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_HashMapDemo* example_Nova_HashMapDemo_Nova_construct(example_Nova_HashMapDemo* this)
{
	CCLASS_NEW(example_Nova_HashMapDemo, this,);
	this->vtable = &example_Nova_HashMapDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_HashMapDemo_Nova_super(this);
	
	return example_Nova_HashMapDemo_Nova_this((example_Nova_HashMapDemo*)(this));
}

void example_Nova_HashMapDemo_Nova_destroy(example_Nova_HashMapDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_HashMapDemo_static_Nova_main(example_Nova_HashMapDemo* this, nova_datastruct_list_Nova_Array* args)
{
	Context46* contextArg47 = NOVA_MALLOC(sizeof(Context46));
	Context47* contextArg48 = NOVA_MALLOC(sizeof(Context47));
	Context48* contextArg49 = NOVA_MALLOC(sizeof(Context48));
	Context49* contextArg50 = NOVA_MALLOC(sizeof(Context49));
	Context50* contextArg51 = NOVA_MALLOC(sizeof(Context50));
	nova_datastruct_Nova_HashMap* l1_Nova_words = (nova_datastruct_Nova_HashMap*)nova_null;
	
	l1_Nova_words = nova_datastruct_Nova_HashMap_0_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test"))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("is test"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test2"))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("is test2"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test3hey"))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("is test3hey"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test4hey"))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("is test4hey"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test5"))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("is test5"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
		(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("Whoah"))),
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("it works"))));
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_words),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda47, nova_null, contextArg47);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("\nRemoving test2: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_Nova_HashMap_Nova_remove((nova_datastruct_Nova_HashMap*)(l1_Nova_words),
											(nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0,
													(char*)("test2")))))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("\n"))))))));
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_words),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda48, nova_null, contextArg48);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("\n"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual1_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_words),
												(nova_datastruct_list_Nova_List_closure1340_Nova_filterFunc)&example_Nova_HashMapDemo_static_Nova_lambda49, nova_null, contextArg49)),
										(nova_datastruct_list_Nova_List_closure1337_Nova_mapFunc)&example_Nova_HashMapDemo_static_Nova_lambda50, nova_null, contextArg50)),
								nova_Nova_String_1_Nova_construct(0,
									(char*)(", ")))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("\n"))))))));
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_words),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda51, nova_null, contextArg51);
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

example_Nova_HashMapDemo* example_Nova_HashMapDemo_Nova_this(example_Nova_HashMapDemo* this) {
	return this;
}
void example_Nova_HashMapDemo_static_Nova_lambda47(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context46* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Contains: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void example_Nova_HashMapDemo_static_Nova_lambda48(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context47* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Contains: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

char example_Nova_HashMapDemo_static_Nova_lambda49(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context48* context)
{
	return nova_Nova_String_1_Nova_contains((nova_Nova_String*)(_1->nova_datastruct_Nova_Pair_Nova_key),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("hey")));
}

nova_Nova_String* example_Nova_HashMapDemo_static_Nova_lambda50(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context49* context)
{
	return (nova_Nova_String*)_1->nova_datastruct_Nova_Pair_Nova_value;
}

void example_Nova_HashMapDemo_static_Nova_lambda51(example_Nova_HashMapDemo* this, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context50* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Contains: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void example_Nova_HashMapDemo_Nova_super(example_Nova_HashMapDemo* this)
{
}

