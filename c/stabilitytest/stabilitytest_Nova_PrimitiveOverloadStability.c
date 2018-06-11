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
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundlessIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_CastStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClientThread.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FancyOutputStreamTests.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_FirstClassFunctionStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_IntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_LibraryLoadingStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_Node.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSuperClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
	/* var
	Byte sum */ char* stabilitytest_Nova_PrimitiveOverloadStability_Nova_sum;
	/* var
	Byte counter */ char* stabilitytest_Nova_PrimitiveOverloadStability_Nova_counter;
} Context125;
typedef struct
{
	/* var
	Byte sum */ char* stabilitytest_Nova_PrimitiveOverloadStability_Nova_sum;
	/* var
	Byte counter */ char* stabilitytest_Nova_PrimitiveOverloadStability_Nova_counter;
} Context126;
typedef struct
{
} Context216;


void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testPrimitiveKeyAndValue(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKey(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKeyAndValue(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated23(stabilitytest_Nova_PrimitiveOverloadStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda104(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_datastruct_Int_Value_Nova_Pair1Int* entry, int _2, nova_datastruct_Int_V_Nova_HashMap1Int* _3, Context125* context);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda105(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_datastruct_Int_Int_Nova_Pair1Int2Int* entry, int _2, nova_datastruct_Int_Int_Nova_HashMap1Int2Int* _3, Context126* context);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda195(stabilitytest_Nova_PrimitiveOverloadStability* this, novex_nest_Nova_TestResult* _1, Context216* context);


void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testPrimitiveKeyAndValue(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKey(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKeyAndValue(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated23(stabilitytest_Nova_PrimitiveOverloadStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda104(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_datastruct_Int_Value_Nova_Pair1Int* entry, int _2, nova_datastruct_Int_V_Nova_HashMap1Int* _3, Context125* context);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda105(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_datastruct_Int_Int_Nova_Pair1Int2Int* entry, int _2, nova_datastruct_Int_Int_Nova_HashMap1Int2Int* _3, Context126* context);
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda195(stabilitytest_Nova_PrimitiveOverloadStability* this, novex_nest_Nova_TestResult* _1, Context216* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_PrimitiveOverloadStability_Nova__testTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_PrimitiveOverloadStability_Nova__testPrimitiveKeyAndValueTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyAndValueTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_PrimitiveOverloadStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static()
{
	if (!stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static_inited) {
		stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("test")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing primitive key for HashMap<Int, String>")));
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testPrimitiveKeyAndValueTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testPrimitiveKeyAndValue")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing primitive key and value for HashMap<Int, Int>")));
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testFunctionalPrimitiveKey")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing functional primitive key for HashMap<Int, String>")));
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyAndValueTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("testFunctionalPrimitiveKeyAndValue")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing functional primitive key and value for HashMap<Int, Int>")));
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated23(0,
					stabilitytest_Nova_PrimitiveOverloadStability_Nova__testTestCase,
					stabilitytest_Nova_PrimitiveOverloadStability_Nova__testPrimitiveKeyAndValueTestCase,
					stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyTestCase,
				stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyAndValueTestCase),
			0);
		}
	}
}

stabilitytest_Nova_PrimitiveOverloadStability* stabilitytest_Nova_PrimitiveOverloadStability_Nova_construct(stabilitytest_Nova_PrimitiveOverloadStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_PrimitiveOverloadStability, this,);
	this->vtable = &stabilitytest_Nova_PrimitiveOverloadStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_PrimitiveOverloadStability_Nova_super(this);
	
	return stabilitytest_Nova_PrimitiveOverloadStability_Nova_this((stabilitytest_Nova_PrimitiveOverloadStability*)(this));
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_destroy(stabilitytest_Nova_PrimitiveOverloadStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_PrimitiveOverloadStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_test(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_Int_V_Nova_HashMap1Int* l1_Nova_map1 = (nova_datastruct_Int_V_Nova_HashMap1Int*)nova_null;
	char l1_Nova_sum = 0;
	char l1_Nova_counter = 0;
	nova_datastruct_Int_V_Nova_HashMapIterator1Int* nova_local_0 = (nova_datastruct_Int_V_Nova_HashMapIterator1Int*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing primitive key for HashMap<Int, String> ")));
	l1_Nova_map1 = nova_datastruct_Int_V_Nova_HashMap1Int_int_int_HashMap1Int0_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	nova_datastruct_Int_V_Nova_HashMap1Int_int_V_V_Nova_set((nova_datastruct_Int_V_Nova_HashMap1Int*)(l1_Nova_map1),
		5,
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test"))));
	nova_datastruct_Int_V_Nova_HashMap1Int_int_V_V_Nova_set((nova_datastruct_Int_V_Nova_HashMap1Int*)(l1_Nova_map1),
		10,
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test2"))));
	l1_Nova_sum = 0;
	l1_Nova_counter = 0;
	nova_local_0 = (nova_datastruct_Int_V_Nova_HashMapIterator1Int*)(nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_map1))));
	nova_datastruct_Int_Value_Nova_Pair1Int* l10_Nova_entry;
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessorfunc_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0)))
	{
		l10_Nova_entry = (nova_datastruct_Int_Value_Nova_Pair1Int*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0)));
		l1_Nova_sum += l10_Nova_entry->nova_datastruct_Int_Value_Nova_Pair1Int_Nova_key;
		l1_Nova_counter++;
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool213_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_counter == 2)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to iterator over map values. Expected counter value of 2, but got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_counter))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool214_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_sum == 15)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to get valid key values. Expected a sum of 15, but got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_sum))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testPrimitiveKeyAndValue(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out)
{
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int* l1_Nova_map2 = (nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)nova_null;
	char l1_Nova_sum = 0;
	char l1_Nova_counter = 0;
	nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int* nova_local_0 = (nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing primitive key and value for HashMap<Int, Int> ")));
	l1_Nova_map2 = nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_HashMap1Int2Int0_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	l1_Nova_sum = 0;
	l1_Nova_counter = 0;
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_int_Nova_set((nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)(l1_Nova_map2),
		1,
	49);
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_int_Nova_set((nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)(l1_Nova_map2),
		3,
	2);
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_int_Nova_set((nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)(l1_Nova_map2),
		-2,
	11);
	nova_local_0 = (nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int*)(nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_map2))));
	nova_datastruct_Int_Int_Nova_Pair1Int2Int* l14_Nova_entry;
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessorfunc_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0)))
	{
		l14_Nova_entry = (nova_datastruct_Int_Int_Nova_Pair1Int2Int*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0)));
		l1_Nova_sum += l14_Nova_entry->nova_datastruct_Int_Int_Nova_Pair1Int2Int_Nova_key * l14_Nova_entry->nova_datastruct_Int_Int_Nova_Pair1Int2Int_Nova_value;
		l1_Nova_counter++;
	}
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool215_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_counter == 3)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to iterator over map values. Expected counter value of 2, but got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_counter))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool216_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_sum == 49 + 6 - 22)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to get valid key values. Expected a sum of "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
								(49 + 6 - 22))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but got "))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										(l1_Nova_sum))))))))));
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKey(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out)
{
	Context125* contextArg104 = NOVA_MALLOC(sizeof(Context125));
	nova_datastruct_Int_V_Nova_HashMap1Int* l1_Nova_map1 = (nova_datastruct_Int_V_Nova_HashMap1Int*)nova_null;
	char l1_Nova_sum = 0;
	char* heap125_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap125_0 = l1_Nova_sum;
	contextArg104->stabilitytest_Nova_PrimitiveOverloadStability_Nova_sum = heap125_0;
	char l1_Nova_counter = 0;
	char* heap125_1 = (char*)NOVA_MALLOC(sizeof(char));
	*heap125_1 = l1_Nova_counter;
	contextArg104->stabilitytest_Nova_PrimitiveOverloadStability_Nova_counter = heap125_1;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing functional primitive key for HashMap<Int, String> ")));
	l1_Nova_map1 = nova_datastruct_Int_V_Nova_HashMap1Int_int_int_HashMap1Int0_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	nova_datastruct_Int_V_Nova_HashMap1Int_int_V_V_Nova_set((nova_datastruct_Int_V_Nova_HashMap1Int*)(l1_Nova_map1),
		5,
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test"))));
	nova_datastruct_Int_V_Nova_HashMap1Int_int_V_V_Nova_set((nova_datastruct_Int_V_Nova_HashMap1Int*)(l1_Nova_map1),
		10,
		(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
				(char*)("test2"))));
	(*heap125_0) = 0;
	(*heap125_1) = 0;
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_map1),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda104, this, contextArg104);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool217_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap125_1) == 2)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to iterator over map values. Expected counter value of 2, but got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								((*heap125_1)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool218_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap125_0) == 15)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to get valid key values. Expected a sum of 15, but got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								((*heap125_0)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKeyAndValue(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_io_Nova_OutputStream* out)
{
	Context126* contextArg105 = NOVA_MALLOC(sizeof(Context126));
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int* l1_Nova_map2 = (nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)nova_null;
	char l1_Nova_sum = 0;
	char* heap126_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap126_0 = l1_Nova_sum;
	contextArg105->stabilitytest_Nova_PrimitiveOverloadStability_Nova_sum = heap126_0;
	char l1_Nova_counter = 0;
	char* heap126_1 = (char*)NOVA_MALLOC(sizeof(char));
	*heap126_1 = l1_Nova_counter;
	contextArg105->stabilitytest_Nova_PrimitiveOverloadStability_Nova_counter = heap126_1;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing functional primitive key and value for HashMap<Int, Int> ")));
	l1_Nova_map2 = nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_HashMap1Int2Int0_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
	(*heap126_0) = 0;
	(*heap126_1) = 0;
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_int_Nova_set((nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)(l1_Nova_map2),
		1,
	49);
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_int_Nova_set((nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)(l1_Nova_map2),
		3,
	2);
	nova_datastruct_Int_Int_Nova_HashMap1Int2Int_int_int_int_Nova_set((nova_datastruct_Int_Int_Nova_HashMap1Int2Int*)(l1_Nova_map2),
		-2,
	11);
	nova_datastruct_list_Nova_List_virtual1_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_map2),
		(nova_datastruct_list_Nova_List_closure1336_Nova_func)&stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda105, this, contextArg105);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool219_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap126_1) == 3)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to iterator over map values. Expected counter value of 2, but got "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								((*heap126_1)))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool220_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(*heap126_0) == 49 + 6 - 22)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed to get valid key values. Expected a sum of "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
								(49 + 6 - 22))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(", but got "))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
										((*heap126_0)))))))))));
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_runTests(stabilitytest_Nova_PrimitiveOverloadStability* this, stabilitytest_Nova_PrimitiveOverloadStability_closure894_Nova_onResult stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult, void* stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult, void* stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context216* contextArg195 = NOVA_MALLOC(sizeof(Context216));
	nova_time_Nova_Timer* l1_Nova_testTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testPrimitiveKeyAndValueTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testFunctionalPrimitiveKeyTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_testFunctionalPrimitiveKeyAndValueTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult = (stabilitytest_Nova_PrimitiveOverloadStability_closure894_Nova_onResult)(stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult == 0 ? (stabilitytest_Nova_PrimitiveOverloadStability_closure894_Nova_onResult)&stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda195 : stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult);
	stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult);
	stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult = (void*)(stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult == 0 ? (void*)contextArg195 : stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing PrimitiveOverloadStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_test((stabilitytest_Nova_PrimitiveOverloadStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testTimer,
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testTestCase);
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testTimer,
		stabilitytest_Nova_PrimitiveOverloadStability_Nova__testTestCase);
		stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testPrimitiveKeyAndValueTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_testPrimitiveKeyAndValue((stabilitytest_Nova_PrimitiveOverloadStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testPrimitiveKeyAndValueTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testPrimitiveKeyAndValueTimer,
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testPrimitiveKeyAndValueTestCase);
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testPrimitiveKeyAndValueTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testPrimitiveKeyAndValueTimer,
		stabilitytest_Nova_PrimitiveOverloadStability_Nova__testPrimitiveKeyAndValueTestCase);
		stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testFunctionalPrimitiveKeyTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKey((stabilitytest_Nova_PrimitiveOverloadStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionalPrimitiveKeyTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testFunctionalPrimitiveKeyTimer,
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyTestCase);
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionalPrimitiveKeyTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testFunctionalPrimitiveKeyTimer,
		stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyTestCase);
		stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_testFunctionalPrimitiveKeyAndValueTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l108_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_testFunctionalPrimitiveKeyAndValue((stabilitytest_Nova_PrimitiveOverloadStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionalPrimitiveKeyAndValueTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l108_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testFunctionalPrimitiveKeyAndValueTimer,
			stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyAndValueTestCase);
			stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
				l108_Nova_testResult,
			stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l113_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l113_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l113_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testFunctionalPrimitiveKeyAndValueTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l113_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l113_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testFunctionalPrimitiveKeyAndValueTimer,
		stabilitytest_Nova_PrimitiveOverloadStability_Nova__testFunctionalPrimitiveKeyAndValueTestCase);
		stabilitytest_Nova_PrimitiveOverloadStability_Nova_onResult(stabilitytest_Nova_PrimitiveOverloadStability_ref_Nova_onResult,
			l113_Nova_testResult,
		stabilitytest_Nova_PrimitiveOverloadStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_PrimitiveOverloadStability* stabilitytest_Nova_PrimitiveOverloadStability_Nova_this(stabilitytest_Nova_PrimitiveOverloadStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated23(stabilitytest_Nova_PrimitiveOverloadStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 4);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	4);
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda104(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_datastruct_Int_Value_Nova_Pair1Int* entry, int _2, nova_datastruct_Int_V_Nova_HashMap1Int* _3, Context125* context)
{
	(*context->stabilitytest_Nova_PrimitiveOverloadStability_Nova_sum) += entry->nova_datastruct_Int_Value_Nova_Pair1Int_Nova_key;
	(*context->stabilitytest_Nova_PrimitiveOverloadStability_Nova_counter)++;
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda105(stabilitytest_Nova_PrimitiveOverloadStability* this, nova_datastruct_Int_Int_Nova_Pair1Int2Int* entry, int _2, nova_datastruct_Int_Int_Nova_HashMap1Int2Int* _3, Context126* context)
{
	(*context->stabilitytest_Nova_PrimitiveOverloadStability_Nova_sum) += entry->nova_datastruct_Int_Int_Nova_Pair1Int2Int_Nova_key * entry->nova_datastruct_Int_Int_Nova_Pair1Int2Int_Nova_value;
	(*context->stabilitytest_Nova_PrimitiveOverloadStability_Nova_counter)++;
}

void stabilitytest_Nova_PrimitiveOverloadStability_Nova_lambda195(stabilitytest_Nova_PrimitiveOverloadStability* this, novex_nest_Nova_TestResult* _1, Context216* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_PrimitiveOverloadStability_Accessorfunc_Nova_model(stabilitytest_Nova_PrimitiveOverloadStability* this)
{
	return stabilitytest_Nova_PrimitiveOverloadStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_PrimitiveOverloadStability_Nova_super(stabilitytest_Nova_PrimitiveOverloadStability* this)
{
	this->stabilitytest_Nova_PrimitiveOverloadStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

