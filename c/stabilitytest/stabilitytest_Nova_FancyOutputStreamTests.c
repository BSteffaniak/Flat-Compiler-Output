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
#include <nova/io/nova_io_Nova_FancyOutputStream.h>
#include <nova/io/nova_io_Nova_StringBuilder.h>
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
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context207;


CCLASS_PRIVATE
(
	stabilitytest_Nova_FancyOutputStreamTests,
	nova_io_Nova_FancyOutputStream* stabilitytest_Nova_FancyOutputStreamTests_Nova_stream;
	nova_io_Nova_StringBuilder* stabilitytest_Nova_FancyOutputStreamTests_Nova_builder;
	
)
void stabilitytest_Nova_FancyOutputStreamTests_Nova_init(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_clean(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_oddHeader(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_evenHeader(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_headerPattern(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated15(stabilitytest_Nova_FancyOutputStreamTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_lambda186(stabilitytest_Nova_FancyOutputStreamTests* this, novex_nest_Nova_TestResult* _1, Context207* context);


void stabilitytest_Nova_FancyOutputStreamTests_Nova_init(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_clean(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_oddHeader(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_evenHeader(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_headerPattern(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated15(stabilitytest_Nova_FancyOutputStreamTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_FancyOutputStreamTests_Nova_lambda186(stabilitytest_Nova_FancyOutputStreamTests* this, novex_nest_Nova_TestResult* _1, Context207* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_FancyOutputStreamTests_Nova__oddHeaderTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FancyOutputStreamTests_Nova__evenHeaderTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_FancyOutputStreamTests_Nova__headerPatternTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FancyOutputStreamTests_Nova__runTestsTestRunner;
char stabilitytest_Nova_FancyOutputStreamTests_Nova_init_static_inited = 0;
void stabilitytest_Nova_FancyOutputStreamTests_Nova_init_static()
{
	if (!stabilitytest_Nova_FancyOutputStreamTests_Nova_init_static_inited) {
		stabilitytest_Nova_FancyOutputStreamTests_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_FancyOutputStreamTests_Nova__oddHeaderTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("oddHeader")),
			0);
			stabilitytest_Nova_FancyOutputStreamTests_Nova__evenHeaderTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("evenHeader")),
			0);
			stabilitytest_Nova_FancyOutputStreamTests_Nova__headerPatternTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("headerPattern")),
			0);
			stabilitytest_Nova_FancyOutputStreamTests_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated15(0,
					stabilitytest_Nova_FancyOutputStreamTests_Nova__oddHeaderTestCase,
					stabilitytest_Nova_FancyOutputStreamTests_Nova__evenHeaderTestCase,
				stabilitytest_Nova_FancyOutputStreamTests_Nova__headerPatternTestCase),
			0);
		}
	}
}

stabilitytest_Nova_FancyOutputStreamTests* stabilitytest_Nova_FancyOutputStreamTests_Nova_construct(stabilitytest_Nova_FancyOutputStreamTests* this)
{
	CCLASS_NEW(stabilitytest_Nova_FancyOutputStreamTests, this);
	this->vtable = &stabilitytest_Nova_FancyOutputStreamTests_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_FancyOutputStreamTests_Nova_super(this);
	
	return stabilitytest_Nova_FancyOutputStreamTests_Nova_this((stabilitytest_Nova_FancyOutputStreamTests*)(this));
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_destroy(stabilitytest_Nova_FancyOutputStreamTests** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_io_Nova_FancyOutputStream_Nova_destroy(&(*this)->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream);
	nova_io_Nova_StringBuilder_Nova_destroy(&(*this)->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder);
	NOVA_FREE((*this)->prv);
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_FancyOutputStreamTests_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_init(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder = nova_io_Nova_StringBuilder_Nova_construct(0,
	0);
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream = nova_io_Nova_FancyOutputStream_Nova_construct(0,
		(nova_io_Nova_OutputStream*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder),
		(int)(intptr_t)nova_null,
	0);
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_clean(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream = (nova_io_Nova_FancyOutputStream*)((nova_Nova_Object*)nova_null);
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder = (nova_io_Nova_StringBuilder*)((nova_Nova_Object*)nova_null);
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_oddHeader(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out)
{
	nova_Nova_String* l1_Nova_string = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_expected = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing oddHeader ")));
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_string = (nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder)));
	l1_Nova_expected = nova_Nova_String_1_Nova_construct(0,
		(char*)("=================================== "));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int59_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_string->nova_Nova_String_Nova_count)),
		81,
	0);
	novex_nest_Char_Nova_Nest1Char_char_String_char_Nova_toBe((novex_nest_Char_Nova_Nest1Char*)(novex_nest_Nova_Nest_char_Nest1Char60_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_Accessorfunc_Nova_last((nova_Nova_String*)(l1_Nova_string)))),
		'\n',
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected new line at end of header, received '"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
								(nova_Nova_String_Accessorfunc_Nova_last((nova_Nova_String*)(l1_Nova_string))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("'"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int61_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_Nova_trim((nova_Nova_String*)(l1_Nova_string),
					(int)(intptr_t)nova_null,
					(int)(intptr_t)nova_null,
		0)->nova_Nova_String_Nova_count)),
		80,
	0);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool62_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_1_Nova_startsWith((nova_Nova_String*)(l1_Nova_string),
		l1_Nova_expected))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Header width not correct ("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l1_Nova_string->nova_Nova_String_Nova_count))),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)(" chars)\n"))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_expected)),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)("\n"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_string)),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_evenHeader(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out)
{
	nova_Nova_String* l1_Nova_string = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_expected = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing evenHeader ")));
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Test")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_string = (nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder)));
	l1_Nova_expected = nova_Nova_String_1_Nova_construct(0,
		(char*)("===================================== "));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int63_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_string->nova_Nova_String_Nova_count)),
		81,
	0);
	novex_nest_Char_Nova_Nest1Char_char_String_char_Nova_toBe((novex_nest_Char_Nova_Nest1Char*)(novex_nest_Nova_Nest_char_Nest1Char64_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_Accessorfunc_Nova_last((nova_Nova_String*)(l1_Nova_string)))),
		'\n',
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected new line at end of header, received '"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
								(nova_Nova_String_Accessorfunc_Nova_last((nova_Nova_String*)(l1_Nova_string))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("'"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int65_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_Nova_trim((nova_Nova_String*)(l1_Nova_string),
					(int)(intptr_t)nova_null,
					(int)(intptr_t)nova_null,
		0)->nova_Nova_String_Nova_count)),
		80,
	0);
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool66_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_1_Nova_startsWith((nova_Nova_String*)(l1_Nova_string),
		l1_Nova_expected))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Header width not correct ("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l1_Nova_string->nova_Nova_String_Nova_count))),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)(" chars)\n"))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_expected)),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)("\n"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_string)),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_headerPattern(stabilitytest_Nova_FancyOutputStreamTests* this, nova_io_Nova_OutputStream* out)
{
	nova_Nova_String* l1_Nova_string = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_expected = (nova_Nova_String*)nova_null;
	
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing headerPattern ")));
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream->nova_io_Nova_FancyOutputStream_Nova_headerPattern = nova_Nova_String_1_Nova_construct(0,
		(char*)("/\\"));
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Test")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_string = (nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder)));
	l1_Nova_expected = nova_Nova_String_1_Nova_construct(0,
		(char*)("/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/ "));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int67_static_Nova_expect((novex_nest_Nova_Nest*)(this),
		l1_Nova_string->nova_Nova_String_Nova_count)),
		81,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Header count expected 81, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(l1_Nova_string->nova_Nova_String_Nova_count))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Char_Nova_Nest1Char_char_String_char_Nova_toBe((novex_nest_Char_Nova_Nest1Char*)(novex_nest_Nova_Nest_char_Nest1Char68_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_Accessorfunc_Nova_last((nova_Nova_String*)(l1_Nova_string)))),
		'\n',
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Expected new line at end of header, received '"))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Char_static_Nova_toString((nova_primitive_number_Nova_Char*)(0),
								(nova_Nova_String_Accessorfunc_Nova_last((nova_Nova_String*)(l1_Nova_string))))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("'"))))))));
	novex_nest_Int_Nova_Nest1Int_int_String_char_Nova_toBe((novex_nest_Int_Nova_Nest1Int*)(novex_nest_Nova_Nest_int_Nest1Int69_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_Nova_trim((nova_Nova_String*)(l1_Nova_string),
					(int)(intptr_t)nova_null,
					(int)(intptr_t)nova_null,
		0)->nova_Nova_String_Nova_count)),
		80,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Trimmed header count expected 80, but received "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
								(nova_Nova_String_Nova_trim((nova_Nova_String*)(l1_Nova_string),
										(int)(intptr_t)nova_null,
										(int)(intptr_t)nova_null,
						0)->nova_Nova_String_Nova_count))),
						(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
								(char*)(""))))))));
	novex_nest_Bool_Nova_Nest1Bool_char_String_char_Nova_toBe((novex_nest_Bool_Nova_Nest1Bool*)(novex_nest_Nova_Nest_char_Nest1Bool70_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_Nova_String_1_Nova_startsWith((nova_Nova_String*)(l1_Nova_string),
		l1_Nova_expected))),
		1,
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Header width not correct ("))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
									(l1_Nova_string->nova_Nova_String_Nova_count))),
							(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
											(char*)(" chars)\n"))),
								(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_expected)),
										(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
														(char*)("\n"))),
												(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l1_Nova_string)),
														(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
																(char*)(""))))))))))))))));
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_runTests(stabilitytest_Nova_FancyOutputStreamTests* this, stabilitytest_Nova_FancyOutputStreamTests_closure528_Nova_onResult stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult, void* stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult, void* stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context207* contextArg186 = NOVA_MALLOC(sizeof(Context207));
	nova_time_Nova_Timer* l1_Nova_oddHeaderTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_evenHeaderTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_headerPatternTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult = (stabilitytest_Nova_FancyOutputStreamTests_closure528_Nova_onResult)(stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult == 0 ? (stabilitytest_Nova_FancyOutputStreamTests_closure528_Nova_onResult)&stabilitytest_Nova_FancyOutputStreamTests_Nova_lambda186 : stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult);
	stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult = (void*)(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult);
	stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult = (void*)(stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult == 0 ? (void*)contextArg186 : stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing FancyOutputStreamTests")),
		0,
		0,
		(int)(intptr_t)nova_null);
	stabilitytest_Nova_FancyOutputStreamTests_Nova_init((stabilitytest_Nova_FancyOutputStreamTests*)(this),
	out);
	l1_Nova_oddHeaderTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l11_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FancyOutputStreamTests_Nova_oddHeader((stabilitytest_Nova_FancyOutputStreamTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_oddHeaderTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l11_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_oddHeaderTimer,
			stabilitytest_Nova_FancyOutputStreamTests_Nova__oddHeaderTestCase);
			stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult,
				l11_Nova_testResult,
			stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l16_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l16_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l16_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_oddHeaderTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l16_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l16_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_oddHeaderTimer,
		stabilitytest_Nova_FancyOutputStreamTests_Nova__oddHeaderTestCase);
		stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult,
			l16_Nova_testResult,
		stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	stabilitytest_Nova_FancyOutputStreamTests_Nova_clean((stabilitytest_Nova_FancyOutputStreamTests*)(this),
	out);
	stabilitytest_Nova_FancyOutputStreamTests_Nova_init((stabilitytest_Nova_FancyOutputStreamTests*)(this),
	out);
	l1_Nova_evenHeaderTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l48_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FancyOutputStreamTests_Nova_evenHeader((stabilitytest_Nova_FancyOutputStreamTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_evenHeaderTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l48_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_evenHeaderTimer,
			stabilitytest_Nova_FancyOutputStreamTests_Nova__evenHeaderTestCase);
			stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult,
				l48_Nova_testResult,
			stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l53_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l53_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l53_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_evenHeaderTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l53_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l53_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_evenHeaderTimer,
		stabilitytest_Nova_FancyOutputStreamTests_Nova__evenHeaderTestCase);
		stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult,
			l53_Nova_testResult,
		stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	stabilitytest_Nova_FancyOutputStreamTests_Nova_clean((stabilitytest_Nova_FancyOutputStreamTests*)(this),
	out);
	stabilitytest_Nova_FancyOutputStreamTests_Nova_init((stabilitytest_Nova_FancyOutputStreamTests*)(this),
	out);
	l1_Nova_headerPatternTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l85_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_FancyOutputStreamTests_Nova_headerPattern((stabilitytest_Nova_FancyOutputStreamTests*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_headerPatternTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l85_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_headerPatternTimer,
			stabilitytest_Nova_FancyOutputStreamTests_Nova__headerPatternTestCase);
			stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult,
				l85_Nova_testResult,
			stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l90_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l90_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l90_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_headerPatternTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l90_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l90_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_headerPatternTimer,
		stabilitytest_Nova_FancyOutputStreamTests_Nova__headerPatternTestCase);
		stabilitytest_Nova_FancyOutputStreamTests_Nova_onResult(stabilitytest_Nova_FancyOutputStreamTests_ref_Nova_onResult,
			l90_Nova_testResult,
		stabilitytest_Nova_FancyOutputStreamTests_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	stabilitytest_Nova_FancyOutputStreamTests_Nova_clean((stabilitytest_Nova_FancyOutputStreamTests*)(this),
	out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_FancyOutputStreamTests* stabilitytest_Nova_FancyOutputStreamTests_Nova_this(stabilitytest_Nova_FancyOutputStreamTests* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated15(stabilitytest_Nova_FancyOutputStreamTests* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 3);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	l1_Nova_temp[2] = value2;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	3);
}

void stabilitytest_Nova_FancyOutputStreamTests_Nova_lambda186(stabilitytest_Nova_FancyOutputStreamTests* this, novex_nest_Nova_TestResult* _1, Context207* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_FancyOutputStreamTests_Accessorfunc_Nova_model(stabilitytest_Nova_FancyOutputStreamTests* this)
{
	return stabilitytest_Nova_FancyOutputStreamTests_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_FancyOutputStreamTests_Nova_super(stabilitytest_Nova_FancyOutputStreamTests* this)
{
	this->stabilitytest_Nova_FancyOutputStreamTests_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_stream = (nova_io_Nova_FancyOutputStream*)nova_null;
	this->prv->stabilitytest_Nova_FancyOutputStreamTests_Nova_builder = (nova_io_Nova_StringBuilder*)nova_null;
}

