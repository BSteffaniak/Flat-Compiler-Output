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
#include <nova/time/nova_time_Nova_Interval.h>
#include <nova/time/nova_time_Nova_Interval.h>
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
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
	/* let
	Interval interval1 */ nova_time_Nova_Interval** stabilitytest_Nova_IntervalStability_Nova_interval1;
	/* let
	Interval interval2 */ nova_time_Nova_Interval** stabilitytest_Nova_IntervalStability_Nova_interval2;
} Context98;
typedef struct
{
	/* let
	Interval interval1 */ nova_time_Nova_Interval** stabilitytest_Nova_IntervalStability_Nova_interval1;
	/* let
	Interval interval2 */ nova_time_Nova_Interval** stabilitytest_Nova_IntervalStability_Nova_interval2;
} Context99;
typedef struct
{
} Context211;


void stabilitytest_Nova_IntervalStability_Nova_threeHourInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_oneDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoMonthInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_oneYearInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfYearInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_invalidIntervalGap(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_validIntervalGap(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated19(stabilitytest_Nova_IntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11);
void stabilitytest_Nova_IntervalStability_Nova_lambda99(stabilitytest_Nova_IntervalStability* this, Context98* context);
void stabilitytest_Nova_IntervalStability_Nova_lambda100(stabilitytest_Nova_IntervalStability* this, Context99* context);
void stabilitytest_Nova_IntervalStability_Nova_lambda190(stabilitytest_Nova_IntervalStability* this, novex_nest_Nova_TestResult* _1, Context211* context);


void stabilitytest_Nova_IntervalStability_Nova_threeHourInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_oneDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoMonthInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_oneYearInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfYearInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_invalidIntervalGap(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_IntervalStability_Nova_validIntervalGap(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated19(stabilitytest_Nova_IntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11);
void stabilitytest_Nova_IntervalStability_Nova_lambda99(stabilitytest_Nova_IntervalStability* this, Context98* context);
void stabilitytest_Nova_IntervalStability_Nova_lambda100(stabilitytest_Nova_IntervalStability* this, Context99* context);
void stabilitytest_Nova_IntervalStability_Nova_lambda190(stabilitytest_Nova_IntervalStability* this, novex_nest_Nova_TestResult* _1, Context211* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__threeHourIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__oneDayIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__twoDayIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfDayIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__twoMonthIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__oneYearIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfYearIntervalTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__invalidIntervalGapTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_IntervalStability_Nova__validIntervalGapTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_IntervalStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_IntervalStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_IntervalStability_Nova_init_static()
{
	if (!stabilitytest_Nova_IntervalStability_Nova_init_static_inited) {
		stabilitytest_Nova_IntervalStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_IntervalStability_Nova__threeHourIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("threeHourInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("threeHourTwentyMinuteInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("threeHourTwentyMinuteFifteenSecondInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__oneDayIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("oneDayInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__twoDayIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("twoDayInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfDayIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("twoAndAHalfDayInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__twoMonthIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("twoMonthInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__oneYearIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("oneYearInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfYearIntervalTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("twoAndAHalfYearInterval")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__invalidIntervalGapTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidIntervalGap")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__validIntervalGapTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("validIntervalGap")),
			0);
			stabilitytest_Nova_IntervalStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated19(0,
					stabilitytest_Nova_IntervalStability_Nova__threeHourIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__oneDayIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__twoDayIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfDayIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__twoMonthIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__oneYearIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfYearIntervalTestCase,
					stabilitytest_Nova_IntervalStability_Nova__invalidIntervalGapTestCase,
				stabilitytest_Nova_IntervalStability_Nova__validIntervalGapTestCase),
			0);
		}
	}
}

stabilitytest_Nova_IntervalStability* stabilitytest_Nova_IntervalStability_Nova_construct(stabilitytest_Nova_IntervalStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_IntervalStability, this,);
	this->vtable = &stabilitytest_Nova_IntervalStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_IntervalStability_Nova_super(this);
	
	return stabilitytest_Nova_IntervalStability_Nova_this((stabilitytest_Nova_IntervalStability*)(this));
}

void stabilitytest_Nova_IntervalStability_Nova_destroy(stabilitytest_Nova_IntervalStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_IntervalStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_IntervalStability_Nova_threeHourInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing threeHourInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			8,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long107_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long108_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid hours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int109_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingHours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long110_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3600 * 3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												(3600 * 3))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int111_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long112_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3600 * 3 * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												(3600 * 3 * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int113_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int114_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int115_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int116_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing threeHourTwentyMinuteInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			5,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			8,
			30,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long117_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long118_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid hours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int119_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingHours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long120_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_minutes((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		20 + 60 * 3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid minutes: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_minutes((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
												(20 + 60 * 3))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int121_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingMinutes((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		20,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMinutes: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingMinutes((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 20"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long122_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3600 * 3 + 20 * 60,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												(3600 * 3 + 20 * 60))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int123_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long124_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(3600 * 3 + 20 * 60) * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												((3600 * 3 + 20 * 60) * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int125_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int126_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int127_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int128_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing threeHourTwentyMinuteFifteenSecondInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			5,
			10,
			5,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			8,
			30,
			20,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long129_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long130_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid hours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int131_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingHours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long132_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_minutes((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		20 + 60 * 3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid minutes: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_minutes((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
												(20 + 60 * 3))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int133_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingMinutes((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		20,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMinutes: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingMinutes((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 20"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long134_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3600 * 3 + 20 * 60 + 15,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												(3600 * 3 + 20 * 60 + 15))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int135_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		15,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 15"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long136_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(3600 * 3 + 20 * 60 + 15) * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												((3600 * 3 + 20 * 60 + 15) * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int137_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int138_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int139_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int140_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			5,
			10,
			5,
		79),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			8,
			30,
			20,
	200));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long141_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long142_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid hours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_hours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int143_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingHours: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingHours((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 3"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long144_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessorfunc_Nova_minutes((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		20 + 60 * 3,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid minutes: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_Accessorfunc_Nova_minutes((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Byte_static_Nova_toString((nova_primitive_number_Nova_Byte*)(0),
												(20 + 60 * 3))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int145_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_Accessor_Nova_remainingMinutes((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		20,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMinutes: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_Accessor_Nova_remainingMinutes((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 20"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long146_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		3600 * 3 + 20 * 60 + 15,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												(3600 * 3 + 20 * 60 + 15))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int147_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		15,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 15"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long148_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(3600 * 3 + 20 * 60 + 15) * 1000 + 121,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Short_static_Nova_toString((nova_primitive_number_Nova_Short*)(0),
												((3600 * 3 + 20 * 60 + 15) * 1000 + 121))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int149_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		121,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 121"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int150_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int151_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int152_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_oneDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_oneDay = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing oneDayInterval ")));
	l1_Nova_oneDay = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			27,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long153_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 1"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long154_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		86400,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 86400"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int155_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long156_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		86400 * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(86400 * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int157_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int158_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int159_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int160_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_oneDay)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_oneDay))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_twoDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_twoDays = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing twoDayInterval ")));
	l1_Nova_twoDays = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			28,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long161_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 2"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long162_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		86400 * 2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(86400 * 2))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int163_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long164_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		86400 * 2 * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(86400 * 2 * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int165_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int166_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int167_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int168_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_twoDays)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_twoDays))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfDayInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing twoAndAHalfDayInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			28,
			12,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long169_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 2"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long170_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(int)(86400 * 2.5),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
												((int)(86400 * 2.5)))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int171_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long172_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(int)(86400 * 2.5 * 1000),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Float_static_Nova_toString((nova_primitive_number_Nova_Float*)(0),
												((int)(86400 * 2.5 * 1000)))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int173_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int174_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int175_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int176_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_twoMonthInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing twoMonthInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			5,
			28,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long177_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		63,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 63"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long178_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		86400 * 63,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(86400 * 63))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int179_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long180_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(long_long)86400 * 63 * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
												((long_long)86400 * 63 * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int181_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int182_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 2"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int183_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 2"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int184_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_oneYearInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing oneYearInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2016,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long185_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		365,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 365"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long186_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		86400 * 365,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(86400 * 365))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int187_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long188_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(long_long)86400 * 365 * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
												((long_long)86400 * 365 * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int189_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int190_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		12,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 12"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int191_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int192_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 1"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfYearInterval(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	nova_time_Nova_Interval* l1_Nova_interval = (nova_time_Nova_Interval*)nova_null;
	int l1_Nova_days = 0;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing twoAndAHalfYearInterval ")));
	l1_Nova_interval = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2015,
			3,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			9,
			26,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	l1_Nova_days = (int)(6 + 275 + 366 + 273 - 5);
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long193_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		l1_Nova_days,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid days: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_days((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(l1_Nova_days))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long194_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		86400 * l1_Nova_days,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_seconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
												(86400 * l1_Nova_days))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int195_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remaining seconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingSeconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long196_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		(long_long)86400 * l1_Nova_days * 1000,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid milliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_milliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(" != "))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Long_static_Nova_toString((nova_primitive_number_Nova_Long*)(0),
												((long_long)86400 * l1_Nova_days * 1000))),
										(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
												(char*)(""))))))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int197_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		0,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMilliseconds: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMilliseconds((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 0"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int198_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		30,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid months: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_months((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 30"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int199_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		6,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid remainingMonths: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessor_Nova_remainingMonths((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 6"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int200_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval)))),
		2,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Invalid years: "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_time_Nova_Interval_virtual_Accessorfunc_Nova_years((nova_time_Nova_Interval*)(l1_Nova_interval))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(" != 2"))))))));
}

void stabilitytest_Nova_IntervalStability_Nova_invalidIntervalGap(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context98* contextArg99 = NOVA_MALLOC(sizeof(Context98));
	nova_time_Nova_Interval* l1_Nova_interval1 = (nova_time_Nova_Interval*)nova_null;
	nova_time_Nova_Interval** heap98_0 = (nova_time_Nova_Interval**)NOVA_MALLOC(sizeof(nova_time_Nova_Interval*));
	*heap98_0 = l1_Nova_interval1;
	contextArg99->stabilitytest_Nova_IntervalStability_Nova_interval1 = heap98_0;
	nova_time_Nova_Interval* l1_Nova_interval2 = (nova_time_Nova_Interval*)nova_null;
	nova_time_Nova_Interval** heap98_1 = (nova_time_Nova_Interval**)NOVA_MALLOC(sizeof(nova_time_Nova_Interval*));
	*heap98_1 = l1_Nova_interval2;
	contextArg99->stabilitytest_Nova_IntervalStability_Nova_interval2 = heap98_1;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidIntervalGap ")));
	(*heap98_0) = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2018,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	(*heap98_1) = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2015,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2019,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_IntervalStability_Nova_lambda99, this, contextArg99)),
		(nova_meta_Nova_Class*)(nova_time_Nova_NoGapException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_IntervalStability_Nova_validIntervalGap(stabilitytest_Nova_IntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context99* contextArg100 = NOVA_MALLOC(sizeof(Context99));
	nova_time_Nova_Interval* l1_Nova_interval1 = (nova_time_Nova_Interval*)nova_null;
	nova_time_Nova_Interval** heap99_0 = (nova_time_Nova_Interval**)NOVA_MALLOC(sizeof(nova_time_Nova_Interval*));
	*heap99_0 = l1_Nova_interval1;
	contextArg100->stabilitytest_Nova_IntervalStability_Nova_interval1 = heap99_0;
	nova_time_Nova_Interval* l1_Nova_interval2 = (nova_time_Nova_Interval*)nova_null;
	nova_time_Nova_Interval** heap99_1 = (nova_time_Nova_Interval**)NOVA_MALLOC(sizeof(nova_time_Nova_Interval*));
	*heap99_1 = l1_Nova_interval2;
	contextArg100->stabilitytest_Nova_IntervalStability_Nova_interval2 = heap99_1;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing validIntervalGap ")));
	(*heap99_0) = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2018,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	(*heap99_1) = nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2015,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2016,
			4,
			10,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_IntervalStability_Nova_lambda100, this, contextArg100)),
		(nova_meta_Nova_Class*)(nova_time_Nova_NoGapException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_IntervalStability_Nova_runTests(stabilitytest_Nova_IntervalStability* this, stabilitytest_Nova_IntervalStability_closure888_Nova_onResult stabilitytest_Nova_IntervalStability_Nova_onResult, void* stabilitytest_Nova_IntervalStability_ref_Nova_onResult, void* stabilitytest_Nova_IntervalStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context211* contextArg190 = NOVA_MALLOC(sizeof(Context211));
	nova_time_Nova_Timer* l1_Nova_threeHourIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_threeHourTwentyMinuteIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_threeHourTwentyMinuteFifteenSecondIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_oneDayIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_twoDayIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_twoAndAHalfDayIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_twoMonthIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_oneYearIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_twoAndAHalfYearIntervalTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_invalidIntervalGapTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_validIntervalGapTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_IntervalStability_Nova_onResult = (stabilitytest_Nova_IntervalStability_closure888_Nova_onResult)(stabilitytest_Nova_IntervalStability_Nova_onResult == 0 ? (stabilitytest_Nova_IntervalStability_closure888_Nova_onResult)&stabilitytest_Nova_IntervalStability_Nova_lambda190 : stabilitytest_Nova_IntervalStability_Nova_onResult);
	stabilitytest_Nova_IntervalStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_IntervalStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_IntervalStability_ref_Nova_onResult);
	stabilitytest_Nova_IntervalStability_context_Nova_onResult = (void*)(stabilitytest_Nova_IntervalStability_context_Nova_onResult == 0 ? (void*)contextArg190 : stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing IntervalStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_threeHourIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_threeHourInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_threeHourIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__threeHourIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_threeHourIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__threeHourIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_threeHourTwentyMinuteIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourTwentyMinuteIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_threeHourTwentyMinuteIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourTwentyMinuteIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_threeHourTwentyMinuteIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_threeHourTwentyMinuteFifteenSecondIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourTwentyMinuteFifteenSecondIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_threeHourTwentyMinuteFifteenSecondIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourTwentyMinuteFifteenSecondIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_threeHourTwentyMinuteFifteenSecondIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l108_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l108_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l108_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l113_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l113_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l113_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l113_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l113_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__threeHourTwentyMinuteFifteenSecondOneHundredTwentyOneMillisecondIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l113_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_oneDayIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l141_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_oneDayInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_oneDayIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l141_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_oneDayIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__oneDayIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l141_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l146_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l146_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l146_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_oneDayIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l146_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l146_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_oneDayIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__oneDayIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l146_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_twoDayIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l174_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_twoDayInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoDayIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l174_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_twoDayIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__twoDayIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l174_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l179_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l179_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l179_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoDayIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l179_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l179_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_twoDayIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__twoDayIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l179_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_twoAndAHalfDayIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l207_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfDayInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoAndAHalfDayIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l207_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_twoAndAHalfDayIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfDayIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l207_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l212_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l212_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l212_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoAndAHalfDayIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l212_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l212_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_twoAndAHalfDayIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfDayIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l212_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_twoMonthIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l240_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_twoMonthInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoMonthIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l240_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_twoMonthIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__twoMonthIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l240_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l245_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l245_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l245_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoMonthIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l245_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l245_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_twoMonthIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__twoMonthIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l245_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_oneYearIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l273_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_oneYearInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_oneYearIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l273_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_oneYearIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__oneYearIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l273_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l278_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l278_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l278_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_oneYearIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l278_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l278_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_oneYearIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__oneYearIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l278_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_twoAndAHalfYearIntervalTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l306_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_twoAndAHalfYearInterval((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoAndAHalfYearIntervalTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l306_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_twoAndAHalfYearIntervalTimer,
			stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfYearIntervalTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l306_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l311_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l311_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l311_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_twoAndAHalfYearIntervalTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l311_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l311_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_twoAndAHalfYearIntervalTimer,
		stabilitytest_Nova_IntervalStability_Nova__twoAndAHalfYearIntervalTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l311_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_invalidIntervalGapTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l339_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_invalidIntervalGap((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidIntervalGapTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l339_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidIntervalGapTimer,
			stabilitytest_Nova_IntervalStability_Nova__invalidIntervalGapTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l339_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l344_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l344_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l344_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidIntervalGapTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l344_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l344_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidIntervalGapTimer,
		stabilitytest_Nova_IntervalStability_Nova__invalidIntervalGapTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l344_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_validIntervalGapTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l372_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_IntervalStability_Nova_validIntervalGap((stabilitytest_Nova_IntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validIntervalGapTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l372_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_validIntervalGapTimer,
			stabilitytest_Nova_IntervalStability_Nova__validIntervalGapTestCase);
			stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
				l372_Nova_testResult,
			stabilitytest_Nova_IntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l377_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l377_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l377_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validIntervalGapTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l377_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l377_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_validIntervalGapTimer,
		stabilitytest_Nova_IntervalStability_Nova__validIntervalGapTestCase);
		stabilitytest_Nova_IntervalStability_Nova_onResult(stabilitytest_Nova_IntervalStability_ref_Nova_onResult,
			l377_Nova_testResult,
		stabilitytest_Nova_IntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_IntervalStability* stabilitytest_Nova_IntervalStability_Nova_this(stabilitytest_Nova_IntervalStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated19(stabilitytest_Nova_IntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2, novex_nest_Nova_TestCase* value3, novex_nest_Nova_TestCase* value4, novex_nest_Nova_TestCase* value5, novex_nest_Nova_TestCase* value6, novex_nest_Nova_TestCase* value7, novex_nest_Nova_TestCase* value8, novex_nest_Nova_TestCase* value9, novex_nest_Nova_TestCase* value10, novex_nest_Nova_TestCase* value11)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 12);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	l1_Nova_temp[3] = value3;
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = value5;
	l1_Nova_temp[6] = value6;
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = value8;
	l1_Nova_temp[9] = value9;
	l1_Nova_temp[10] = value10;
	l1_Nova_temp[11] = value11;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	12);
}

void stabilitytest_Nova_IntervalStability_Nova_lambda99(stabilitytest_Nova_IntervalStability* this, Context98* context)
{
	nova_time_Nova_Interval_Nova_getGap((nova_time_Nova_Interval*)((*context->stabilitytest_Nova_IntervalStability_Nova_interval1)),
		(*context->stabilitytest_Nova_IntervalStability_Nova_interval2));
}

void stabilitytest_Nova_IntervalStability_Nova_lambda100(stabilitytest_Nova_IntervalStability* this, Context99* context)
{
	nova_time_Nova_Interval_Nova_getGap((nova_time_Nova_Interval*)((*context->stabilitytest_Nova_IntervalStability_Nova_interval1)),
		(*context->stabilitytest_Nova_IntervalStability_Nova_interval2));
}

void stabilitytest_Nova_IntervalStability_Nova_lambda190(stabilitytest_Nova_IntervalStability* this, novex_nest_Nova_TestResult* _1, Context211* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_IntervalStability_Accessorfunc_Nova_model(stabilitytest_Nova_IntervalStability* this)
{
	return stabilitytest_Nova_IntervalStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_IntervalStability_Nova_super(stabilitytest_Nova_IntervalStability* this)
{
	this->stabilitytest_Nova_IntervalStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

