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
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/time/nova_time_Nova_DateTime.h>
#include <nova/time/nova_time_Nova_DateTime.h>
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
#include <stabilitytest/stabilitytest_Nova_PrimitiveOverloadStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context133;
typedef struct
{
} Context134;
typedef struct
{
} Context135;
typedef struct
{
} Context136;
typedef struct
{
	/* var
	Byte m */ char* stabilitytest_Nova_TimeStability_Nova_m;
} Context137;
typedef struct
{
} Context138;
typedef struct
{
} Context139;
typedef struct
{
} Context140;
typedef struct
{
} Context141;
typedef struct
{
} Context142;
typedef struct
{
} Context143;
typedef struct
{
} Context144;
typedef struct
{
	/* let Int month */ int* stabilitytest_Nova_TimeStability_Nova_month;
	/* var
	Byte d */ char* stabilitytest_Nova_TimeStability_Nova_d;
} Context145;
typedef struct
{
	/* let Int month */ int* stabilitytest_Nova_TimeStability_Nova_month;
} Context146;
typedef struct
{
	/* let Int month */ int* stabilitytest_Nova_TimeStability_Nova_month;
} Context147;
typedef struct
{
	/* let Int month */ int* stabilitytest_Nova_TimeStability_Nova_month;
	/* let Byte days */ char* stabilitytest_Nova_TimeStability_Nova_days;
} Context148;
typedef struct
{
} Context222;


void stabilitytest_Nova_TimeStability_Nova_leapYear(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeYear(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeMonth(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeDay(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_basicEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_newYearEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_newYearEveEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_leapYearEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated31(stabilitytest_Nova_TimeStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8);
void stabilitytest_Nova_TimeStability_Nova_lambda112(stabilitytest_Nova_TimeStability* this, Context133* context);
void stabilitytest_Nova_TimeStability_Nova_lambda113(stabilitytest_Nova_TimeStability* this, Context134* context);
void stabilitytest_Nova_TimeStability_Nova_lambda114(stabilitytest_Nova_TimeStability* this, Context135* context);
void stabilitytest_Nova_TimeStability_Nova_lambda115(stabilitytest_Nova_TimeStability* this, Context136* context);
void stabilitytest_Nova_TimeStability_Nova_lambda116(stabilitytest_Nova_TimeStability* this, Context137* context);
void stabilitytest_Nova_TimeStability_Nova_lambda117(stabilitytest_Nova_TimeStability* this, Context138* context);
void stabilitytest_Nova_TimeStability_Nova_lambda118(stabilitytest_Nova_TimeStability* this, Context139* context);
void stabilitytest_Nova_TimeStability_Nova_lambda119(stabilitytest_Nova_TimeStability* this, Context140* context);
void stabilitytest_Nova_TimeStability_Nova_lambda120(stabilitytest_Nova_TimeStability* this, Context141* context);
void stabilitytest_Nova_TimeStability_Nova_lambda121(stabilitytest_Nova_TimeStability* this, Context142* context);
void stabilitytest_Nova_TimeStability_Nova_lambda122(stabilitytest_Nova_TimeStability* this, Context143* context);
void stabilitytest_Nova_TimeStability_Nova_lambda123(stabilitytest_Nova_TimeStability* this, char days, int month, nova_datastruct_list_Byte_Nova_Array1Byte* _3, Context144* context);
void stabilitytest_Nova_TimeStability_Nova_lambda124(stabilitytest_Nova_TimeStability* this, Context145* context);
void stabilitytest_Nova_TimeStability_Nova_lambda125(stabilitytest_Nova_TimeStability* this, Context146* context);
void stabilitytest_Nova_TimeStability_Nova_lambda126(stabilitytest_Nova_TimeStability* this, Context147* context);
void stabilitytest_Nova_TimeStability_Nova_lambda127(stabilitytest_Nova_TimeStability* this, Context148* context);
void stabilitytest_Nova_TimeStability_Nova_lambda201(stabilitytest_Nova_TimeStability* this, novex_nest_Nova_TestResult* _1, Context222* context);


void stabilitytest_Nova_TimeStability_Nova_leapYear(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeYear(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeMonth(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeDay(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_basicEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_newYearEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_newYearEveEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_TimeStability_Nova_leapYearEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated31(stabilitytest_Nova_TimeStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8);
void stabilitytest_Nova_TimeStability_Nova_lambda112(stabilitytest_Nova_TimeStability* this, Context133* context);
void stabilitytest_Nova_TimeStability_Nova_lambda113(stabilitytest_Nova_TimeStability* this, Context134* context);
void stabilitytest_Nova_TimeStability_Nova_lambda114(stabilitytest_Nova_TimeStability* this, Context135* context);
void stabilitytest_Nova_TimeStability_Nova_lambda115(stabilitytest_Nova_TimeStability* this, Context136* context);
void stabilitytest_Nova_TimeStability_Nova_lambda116(stabilitytest_Nova_TimeStability* this, Context137* context);
void stabilitytest_Nova_TimeStability_Nova_lambda117(stabilitytest_Nova_TimeStability* this, Context138* context);
void stabilitytest_Nova_TimeStability_Nova_lambda118(stabilitytest_Nova_TimeStability* this, Context139* context);
void stabilitytest_Nova_TimeStability_Nova_lambda119(stabilitytest_Nova_TimeStability* this, Context140* context);
void stabilitytest_Nova_TimeStability_Nova_lambda120(stabilitytest_Nova_TimeStability* this, Context141* context);
void stabilitytest_Nova_TimeStability_Nova_lambda121(stabilitytest_Nova_TimeStability* this, Context142* context);
void stabilitytest_Nova_TimeStability_Nova_lambda122(stabilitytest_Nova_TimeStability* this, Context143* context);
void stabilitytest_Nova_TimeStability_Nova_lambda123(stabilitytest_Nova_TimeStability* this, char days, int month, nova_datastruct_list_Byte_Nova_Array1Byte* _3, Context144* context);
void stabilitytest_Nova_TimeStability_Nova_lambda124(stabilitytest_Nova_TimeStability* this, Context145* context);
void stabilitytest_Nova_TimeStability_Nova_lambda125(stabilitytest_Nova_TimeStability* this, Context146* context);
void stabilitytest_Nova_TimeStability_Nova_lambda126(stabilitytest_Nova_TimeStability* this, Context147* context);
void stabilitytest_Nova_TimeStability_Nova_lambda127(stabilitytest_Nova_TimeStability* this, Context148* context);
void stabilitytest_Nova_TimeStability_Nova_lambda201(stabilitytest_Nova_TimeStability* this, novex_nest_Nova_TestResult* _1, Context222* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__testTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__leapYearTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__invalidDateTimeYearTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__invalidDateTimeMonthTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__invalidDateTimeDayTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__basicEpochTimeTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__newYearEpochTimeTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__newYearEveEpochTimeTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_TimeStability_Nova__leapYearEpochTimeTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_TimeStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_TimeStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_TimeStability_Nova_init_static()
{
	if (!stabilitytest_Nova_TimeStability_Nova_init_static_inited) {
		stabilitytest_Nova_TimeStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_TimeStability_Nova__testTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("test")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing Time.nova")));
			stabilitytest_Nova_TimeStability_Nova__leapYearTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("leapYear")),
			0);
			stabilitytest_Nova_TimeStability_Nova__invalidDateTimeYearTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidDateTimeYear")),
			0);
			stabilitytest_Nova_TimeStability_Nova__invalidDateTimeMonthTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidDateTimeMonth")),
			0);
			stabilitytest_Nova_TimeStability_Nova__invalidDateTimeDayTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidDateTimeDay")),
			0);
			stabilitytest_Nova_TimeStability_Nova__basicEpochTimeTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("basicEpochTime")),
			0);
			stabilitytest_Nova_TimeStability_Nova__newYearEpochTimeTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("newYearEpochTime")),
			0);
			stabilitytest_Nova_TimeStability_Nova__newYearEveEpochTimeTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("newYearEveEpochTime")),
			0);
			stabilitytest_Nova_TimeStability_Nova__leapYearEpochTimeTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("leapYearEpochTime")),
			0);
			stabilitytest_Nova_TimeStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated31(0,
					stabilitytest_Nova_TimeStability_Nova__testTestCase,
					stabilitytest_Nova_TimeStability_Nova__leapYearTestCase,
					stabilitytest_Nova_TimeStability_Nova__invalidDateTimeYearTestCase,
					stabilitytest_Nova_TimeStability_Nova__invalidDateTimeMonthTestCase,
					stabilitytest_Nova_TimeStability_Nova__invalidDateTimeDayTestCase,
					stabilitytest_Nova_TimeStability_Nova__basicEpochTimeTestCase,
					stabilitytest_Nova_TimeStability_Nova__newYearEpochTimeTestCase,
					stabilitytest_Nova_TimeStability_Nova__newYearEveEpochTimeTestCase,
				stabilitytest_Nova_TimeStability_Nova__leapYearEpochTimeTestCase),
			0);
		}
	}
}

stabilitytest_Nova_TimeStability* stabilitytest_Nova_TimeStability_Nova_construct(stabilitytest_Nova_TimeStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_TimeStability, this,);
	this->vtable = &stabilitytest_Nova_TimeStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_TimeStability_Nova_super(this);
	
	return stabilitytest_Nova_TimeStability_Nova_this((stabilitytest_Nova_TimeStability*)(this));
}

void stabilitytest_Nova_TimeStability_Nova_destroy(stabilitytest_Nova_TimeStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_TimeStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_TimeStability_Nova_test(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing Time.nova ")));
	l1_Nova_timer = nova_time_Nova_Timer_Nova_construct(0);
	nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(l1_Nova_timer));
	nova_thread_Nova_Thread_static_Nova_sleep((nova_thread_Nova_Thread*)(0),
	100);
	nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_timer));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool255_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer)) >= 99 && nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer)) < 130)),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Failed; expected 100ms, found "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l1_Nova_timer))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("ms"))))))));
}

void stabilitytest_Nova_TimeStability_Nova_leapYear(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	Context133* contextArg112 = NOVA_MALLOC(sizeof(Context133));
	Context134* contextArg113 = NOVA_MALLOC(sizeof(Context134));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing leapYear ")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool256_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_DateTime_Accessorfunc_Nova_isLeapYear((nova_time_Nova_DateTime*)(nova_time_Nova_DateTime_2_Nova_construct(0,
							1900,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null))))),
		0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("1900 is not a leap year")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool257_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_DateTime_Accessorfunc_Nova_isLeapYear((nova_time_Nova_DateTime*)(nova_time_Nova_DateTime_2_Nova_construct(0,
							2016,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null))))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("2016 is a leap year")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool258_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_DateTime_Accessorfunc_Nova_isLeapYear((nova_time_Nova_DateTime*)(nova_time_Nova_DateTime_2_Nova_construct(0,
							2017,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null))))),
		0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("2017 is not a leap year")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool259_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_DateTime_Accessorfunc_Nova_isLeapYear((nova_time_Nova_DateTime*)(nova_time_Nova_DateTime_2_Nova_construct(0,
							2018,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null))))),
		0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("2018 is not a leap year")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool260_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_DateTime_Accessorfunc_Nova_isLeapYear((nova_time_Nova_DateTime*)(nova_time_Nova_DateTime_2_Nova_construct(0,
							2019,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null))))),
		0,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("2019 is not a leap year")));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool261_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_DateTime_Accessorfunc_Nova_isLeapYear((nova_time_Nova_DateTime*)(nova_time_Nova_DateTime_2_Nova_construct(0,
							2020,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null,
							(int)(intptr_t)nova_null))))),
		1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("2020 is a leap year")));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda112, this, contextArg112)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda113, this, contextArg113)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeYear(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	Context135* contextArg114 = NOVA_MALLOC(sizeof(Context135));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidDateTimeYear ")));
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda114, this, contextArg114)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeMonth(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	Context136* contextArg115 = NOVA_MALLOC(sizeof(Context136));
	Context137* contextArg116 = NOVA_MALLOC(sizeof(Context137));
	Context138* contextArg117 = NOVA_MALLOC(sizeof(Context138));
	Context139* contextArg118 = NOVA_MALLOC(sizeof(Context139));
	char l1_Nova_m = 0;
	char* heap137_0 = (char*)NOVA_MALLOC(sizeof(char));
	*heap137_0 = l1_Nova_m;
	contextArg116->stabilitytest_Nova_TimeStability_Nova_m = heap137_0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidDateTimeMonth ")));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda115, this, contextArg115)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	(*heap137_0) = 1;
	int l15_Nova_i;
	l15_Nova_i = (int)0;
	for (; l15_Nova_i < (int)12; l15_Nova_i++)
	{
		novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda116, this, contextArg116)),
			(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
			0,
			(int)(intptr_t)nova_null);
	}
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda117, this, contextArg117)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda118, this, contextArg118)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_invalidDateTimeDay(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	Context140* contextArg119 = NOVA_MALLOC(sizeof(Context140));
	Context141* contextArg120 = NOVA_MALLOC(sizeof(Context141));
	Context142* contextArg121 = NOVA_MALLOC(sizeof(Context142));
	Context143* contextArg122 = NOVA_MALLOC(sizeof(Context143));
	Context144* contextArg123 = NOVA_MALLOC(sizeof(Context144));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidDateTimeDay ")));
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda119, this, contextArg119)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda120, this, contextArg120)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda121, this, contextArg121)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda122, this, contextArg122)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	nova_datastruct_list_Byte_Nova_List1Byte_virtual_null_List1Byte2_Nova_forEach((nova_datastruct_list_Byte_Nova_List1Byte*)(nova_time_Nova_DateTime_Nova_MONTH_DAYS),
		(nova_datastruct_list_Byte_Nova_List1Byte_closure145_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda123, this, contextArg123);
}

void stabilitytest_Nova_TimeStability_Nova_basicEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	long_long l1_Nova_millis = 0;
	nova_time_Nova_DateTime* l1_Nova_fromEpoch = (nova_time_Nova_DateTime*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing basicEpochTime ")));
	l1_Nova_millis = 1490227200000LL;
	l1_Nova_fromEpoch = nova_time_Nova_DateTime_1_Nova_construct(0,
	l1_Nova_millis);
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long262_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_fromEpoch->nova_time_Nova_DateTime_Nova_millis)),
		l1_Nova_millis,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int263_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_fromEpoch->nova_time_Nova_DateTime_Nova_year)),
		2017,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int264_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_fromEpoch->nova_time_Nova_DateTime_Nova_month)),
		3,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int265_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_fromEpoch->nova_time_Nova_DateTime_Nova_dayOfMonth)),
		23,
	0);
}

void stabilitytest_Nova_TimeStability_Nova_newYearEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	long_long l1_Nova_newYearMillis = 0;
	nova_time_Nova_DateTime* l1_Nova_newYear = (nova_time_Nova_DateTime*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing newYearEpochTime ")));
	l1_Nova_newYearMillis = 1483228800000LL;
	l1_Nova_newYear = nova_time_Nova_DateTime_1_Nova_construct(0,
	l1_Nova_newYearMillis);
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long266_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYear->nova_time_Nova_DateTime_Nova_millis)),
		l1_Nova_newYearMillis,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int267_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYear->nova_time_Nova_DateTime_Nova_year)),
		2017,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int268_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYear->nova_time_Nova_DateTime_Nova_month)),
		1,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int269_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYear->nova_time_Nova_DateTime_Nova_dayOfMonth)),
		1,
	0);
}

void stabilitytest_Nova_TimeStability_Nova_newYearEveEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	long_long l1_Nova_newYearEveMillis = 0;
	nova_time_Nova_DateTime* l1_Nova_newYearEve = (nova_time_Nova_DateTime*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing newYearEveEpochTime ")));
	l1_Nova_newYearEveMillis = 1483142400000LL;
	l1_Nova_newYearEve = nova_time_Nova_DateTime_1_Nova_construct(0,
	l1_Nova_newYearEveMillis);
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long270_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYearEve->nova_time_Nova_DateTime_Nova_millis)),
		l1_Nova_newYearEveMillis,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int271_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYearEve->nova_time_Nova_DateTime_Nova_year)),
		2016,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int272_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYearEve->nova_time_Nova_DateTime_Nova_month)),
		12,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int273_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_newYearEve->nova_time_Nova_DateTime_Nova_dayOfMonth)),
		31,
	0);
}

void stabilitytest_Nova_TimeStability_Nova_leapYearEpochTime(stabilitytest_Nova_TimeStability* this, nova_io_Nova_OutputStream* out)
{
	long_long l1_Nova_leapYear2016Millis = 0;
	nova_time_Nova_DateTime* l1_Nova_leapYear2016 = (nova_time_Nova_DateTime*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing leapYearEpochTime ")));
	l1_Nova_leapYear2016Millis = 1456722000000LL;
	l1_Nova_leapYear2016 = nova_time_Nova_DateTime_1_Nova_construct(0,
	l1_Nova_leapYear2016Millis);
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long274_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_leapYear2016->nova_time_Nova_DateTime_Nova_millis)),
		l1_Nova_leapYear2016Millis,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int275_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_leapYear2016->nova_time_Nova_DateTime_Nova_year)),
		2016,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int276_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_leapYear2016->nova_time_Nova_DateTime_Nova_month)),
		2,
	0);
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int277_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_leapYear2016->nova_time_Nova_DateTime_Nova_dayOfMonth)),
		29,
	0);
}

void stabilitytest_Nova_TimeStability_Nova_runTests(stabilitytest_Nova_TimeStability* this, stabilitytest_Nova_TimeStability_closure947_Nova_onResult stabilitytest_Nova_TimeStability_Nova_onResult, void* stabilitytest_Nova_TimeStability_ref_Nova_onResult, void* stabilitytest_Nova_TimeStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context222* contextArg201 = NOVA_MALLOC(sizeof(Context222));
	nova_time_Nova_Timer* l1_Nova_testTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_leapYearTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_invalidDateTimeYearTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_invalidDateTimeMonthTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_invalidDateTimeDayTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_basicEpochTimeTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_newYearEpochTimeTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_newYearEveEpochTimeTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_leapYearEpochTimeTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_TimeStability_Nova_onResult = (stabilitytest_Nova_TimeStability_closure947_Nova_onResult)(stabilitytest_Nova_TimeStability_Nova_onResult == 0 ? (stabilitytest_Nova_TimeStability_closure947_Nova_onResult)&stabilitytest_Nova_TimeStability_Nova_lambda201 : stabilitytest_Nova_TimeStability_Nova_onResult);
	stabilitytest_Nova_TimeStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_TimeStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_TimeStability_ref_Nova_onResult);
	stabilitytest_Nova_TimeStability_context_Nova_onResult = (void*)(stabilitytest_Nova_TimeStability_context_Nova_onResult == 0 ? (void*)contextArg201 : stabilitytest_Nova_TimeStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing TimeStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_test((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testTimer,
			stabilitytest_Nova_TimeStability_Nova__testTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
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
		stabilitytest_Nova_TimeStability_Nova__testTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_leapYearTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_leapYear((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_leapYearTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_leapYearTimer,
			stabilitytest_Nova_TimeStability_Nova__leapYearTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_leapYearTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_leapYearTimer,
		stabilitytest_Nova_TimeStability_Nova__leapYearTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_invalidDateTimeYearTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_invalidDateTimeYear((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidDateTimeYearTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidDateTimeYearTimer,
			stabilitytest_Nova_TimeStability_Nova__invalidDateTimeYearTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidDateTimeYearTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidDateTimeYearTimer,
		stabilitytest_Nova_TimeStability_Nova__invalidDateTimeYearTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_invalidDateTimeMonthTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l108_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_invalidDateTimeMonth((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidDateTimeMonthTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l108_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidDateTimeMonthTimer,
			stabilitytest_Nova_TimeStability_Nova__invalidDateTimeMonthTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l108_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l113_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l113_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l113_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidDateTimeMonthTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l113_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l113_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidDateTimeMonthTimer,
		stabilitytest_Nova_TimeStability_Nova__invalidDateTimeMonthTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l113_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_invalidDateTimeDayTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l141_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_invalidDateTimeDay((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidDateTimeDayTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l141_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidDateTimeDayTimer,
			stabilitytest_Nova_TimeStability_Nova__invalidDateTimeDayTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l141_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l146_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l146_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l146_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidDateTimeDayTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l146_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l146_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidDateTimeDayTimer,
		stabilitytest_Nova_TimeStability_Nova__invalidDateTimeDayTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l146_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_basicEpochTimeTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l174_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_basicEpochTime((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_basicEpochTimeTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l174_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_basicEpochTimeTimer,
			stabilitytest_Nova_TimeStability_Nova__basicEpochTimeTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l174_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l179_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l179_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l179_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_basicEpochTimeTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l179_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l179_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_basicEpochTimeTimer,
		stabilitytest_Nova_TimeStability_Nova__basicEpochTimeTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l179_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_newYearEpochTimeTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l207_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_newYearEpochTime((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_newYearEpochTimeTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l207_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_newYearEpochTimeTimer,
			stabilitytest_Nova_TimeStability_Nova__newYearEpochTimeTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l207_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l212_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l212_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l212_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_newYearEpochTimeTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l212_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l212_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_newYearEpochTimeTimer,
		stabilitytest_Nova_TimeStability_Nova__newYearEpochTimeTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l212_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_newYearEveEpochTimeTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l240_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_newYearEveEpochTime((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_newYearEveEpochTimeTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l240_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_newYearEveEpochTimeTimer,
			stabilitytest_Nova_TimeStability_Nova__newYearEveEpochTimeTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l240_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l245_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l245_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l245_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_newYearEveEpochTimeTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l245_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l245_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_newYearEveEpochTimeTimer,
		stabilitytest_Nova_TimeStability_Nova__newYearEveEpochTimeTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l245_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_leapYearEpochTimeTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l273_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_TimeStability_Nova_leapYearEpochTime((stabilitytest_Nova_TimeStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_leapYearEpochTimeTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l273_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_leapYearEpochTimeTimer,
			stabilitytest_Nova_TimeStability_Nova__leapYearEpochTimeTestCase);
			stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
				l273_Nova_testResult,
			stabilitytest_Nova_TimeStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l278_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l278_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l278_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_leapYearEpochTimeTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l278_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l278_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_leapYearEpochTimeTimer,
		stabilitytest_Nova_TimeStability_Nova__leapYearEpochTimeTestCase);
		stabilitytest_Nova_TimeStability_Nova_onResult(stabilitytest_Nova_TimeStability_ref_Nova_onResult,
			l278_Nova_testResult,
		stabilitytest_Nova_TimeStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_TimeStability* stabilitytest_Nova_TimeStability_Nova_this(stabilitytest_Nova_TimeStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated31(stabilitytest_Nova_TimeStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 9);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	9);
}

void stabilitytest_Nova_TimeStability_Nova_lambda112(stabilitytest_Nova_TimeStability* this, Context133* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2017,
		2,
		29,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda113(stabilitytest_Nova_TimeStability* this, Context134* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2016,
		2,
		29,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda114(stabilitytest_Nova_TimeStability* this, Context135* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda115(stabilitytest_Nova_TimeStability* this, Context136* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		(int)(intptr_t)nova_null,
		0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda116(stabilitytest_Nova_TimeStability* this, Context137* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		(int)(intptr_t)nova_null,
		(*context->stabilitytest_Nova_TimeStability_Nova_m)++,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda117(stabilitytest_Nova_TimeStability* this, Context138* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		(int)(intptr_t)nova_null,
		13,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda118(stabilitytest_Nova_TimeStability* this, Context139* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		(int)(intptr_t)nova_null,
		-1,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda119(stabilitytest_Nova_TimeStability* this, Context140* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		(int)(intptr_t)nova_null,
		12,
		31,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda120(stabilitytest_Nova_TimeStability* this, Context141* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		(int)(intptr_t)nova_null,
		11,
		31,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda121(stabilitytest_Nova_TimeStability* this, Context142* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2020,
		2,
		29,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda122(stabilitytest_Nova_TimeStability* this, Context143* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2021,
		2,
		29,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda123(stabilitytest_Nova_TimeStability* this, char days, int month, nova_datastruct_list_Byte_Nova_Array1Byte* _3, Context144* context)
{
	Context145* contextArg124 = NOVA_MALLOC(sizeof(Context145));
	Context146* contextArg125 = NOVA_MALLOC(sizeof(Context146));
	Context147* contextArg126 = NOVA_MALLOC(sizeof(Context147));
	Context148* contextArg127 = NOVA_MALLOC(sizeof(Context148));
	char* heap148_1 = (char*)NOVA_MALLOC(sizeof(char));
	*heap148_1 = days;
	contextArg127->stabilitytest_Nova_TimeStability_Nova_days = heap148_1;
	int* heap145_0 = (int*)NOVA_MALLOC(sizeof(int));
	*heap145_0 = month;
	contextArg124->stabilitytest_Nova_TimeStability_Nova_month = heap145_0;
	int* heap146_0 = heap145_0;
	contextArg125->stabilitytest_Nova_TimeStability_Nova_month = heap145_0;
	int* heap147_0 = heap145_0;
	contextArg126->stabilitytest_Nova_TimeStability_Nova_month = heap145_0;
	int* heap148_0 = heap145_0;
	contextArg127->stabilitytest_Nova_TimeStability_Nova_month = heap145_0;
	char l1_Nova_d = 0;
	char* heap145_1 = (char*)NOVA_MALLOC(sizeof(char));
	*heap145_1 = l1_Nova_d;
	contextArg124->stabilitytest_Nova_TimeStability_Nova_d = heap145_1;
	
	(*heap145_1) = 1;
	int l8_Nova_i;
	l8_Nova_i = (int)0;
	for (; l8_Nova_i < (int)days; l8_Nova_i++)
	{
		novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
					(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda124, this, contextArg124)),
			(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
			0,
			(int)(intptr_t)nova_null);
	}
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda125, this, contextArg125)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda126, this, contextArg126)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_TimeStability_Nova_lambda127, this, contextArg127)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidDateException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda124(stabilitytest_Nova_TimeStability* this, Context145* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2020,
		(*context->stabilitytest_Nova_TimeStability_Nova_month) + 1,
		(*context->stabilitytest_Nova_TimeStability_Nova_d)++,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda125(stabilitytest_Nova_TimeStability* this, Context146* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2020,
		(*context->stabilitytest_Nova_TimeStability_Nova_month) + 1,
		-1,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda126(stabilitytest_Nova_TimeStability* this, Context147* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2020,
		(*context->stabilitytest_Nova_TimeStability_Nova_month) + 1,
		0,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda127(stabilitytest_Nova_TimeStability* this, Context148* context)
{
	nova_time_Nova_DateTime_2_Nova_construct(0,
		2020,
		(*context->stabilitytest_Nova_TimeStability_Nova_month) + 1,
		(*context->stabilitytest_Nova_TimeStability_Nova_days) + 1,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_TimeStability_Nova_lambda201(stabilitytest_Nova_TimeStability* this, novex_nest_Nova_TestResult* _1, Context222* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_TimeStability_Accessorfunc_Nova_model(stabilitytest_Nova_TimeStability* this)
{
	return stabilitytest_Nova_TimeStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_TimeStability_Nova_super(stabilitytest_Nova_TimeStability* this)
{
	this->stabilitytest_Nova_TimeStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

