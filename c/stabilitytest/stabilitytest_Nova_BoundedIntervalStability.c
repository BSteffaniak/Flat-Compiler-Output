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
#include <nova/time/nova_time_Nova_BoundedInterval.h>
#include <nova/time/nova_time_Nova_Interval.h>
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
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
} Context65;
typedef struct
{
} Context66;
typedef struct
{
} Context67;
typedef struct
{
} Context68;
typedef struct
{
} Context69;
typedef struct
{
} Context70;
typedef struct
{
} Context71;
typedef struct
{
} Context72;
typedef struct
{
} Context73;
typedef struct
{
} Context74;
typedef struct
{
} Context75;
typedef struct
{
} Context76;
typedef struct
{
} Context77;
typedef struct
{
} Context78;
typedef struct
{
} Context79;
typedef struct
{
} Context80;
typedef struct
{
} Context81;
typedef struct
{
} Context82;
typedef struct
{
} Context201;


void stabilitytest_Nova_BoundedIntervalStability_Nova_invalidUnboundedIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundedIntervalStability_Nova_invalidIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundedIntervalStability_Nova_validIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated9(stabilitytest_Nova_BoundedIntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda66(stabilitytest_Nova_BoundedIntervalStability* this, Context65* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda67(stabilitytest_Nova_BoundedIntervalStability* this, Context66* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda68(stabilitytest_Nova_BoundedIntervalStability* this, Context67* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda69(stabilitytest_Nova_BoundedIntervalStability* this, Context68* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda70(stabilitytest_Nova_BoundedIntervalStability* this, Context69* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda71(stabilitytest_Nova_BoundedIntervalStability* this, Context70* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda72(stabilitytest_Nova_BoundedIntervalStability* this, Context71* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda73(stabilitytest_Nova_BoundedIntervalStability* this, Context72* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda74(stabilitytest_Nova_BoundedIntervalStability* this, Context73* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda75(stabilitytest_Nova_BoundedIntervalStability* this, Context74* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda76(stabilitytest_Nova_BoundedIntervalStability* this, Context75* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda77(stabilitytest_Nova_BoundedIntervalStability* this, Context76* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda78(stabilitytest_Nova_BoundedIntervalStability* this, Context77* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda79(stabilitytest_Nova_BoundedIntervalStability* this, Context78* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda80(stabilitytest_Nova_BoundedIntervalStability* this, Context79* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda81(stabilitytest_Nova_BoundedIntervalStability* this, Context80* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda82(stabilitytest_Nova_BoundedIntervalStability* this, Context81* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda83(stabilitytest_Nova_BoundedIntervalStability* this, Context82* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda180(stabilitytest_Nova_BoundedIntervalStability* this, novex_nest_Nova_TestResult* _1, Context201* context);


void stabilitytest_Nova_BoundedIntervalStability_Nova_invalidUnboundedIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundedIntervalStability_Nova_invalidIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out);
void stabilitytest_Nova_BoundedIntervalStability_Nova_validIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out);
nova_datastruct_list_Nova_Array* generated9(stabilitytest_Nova_BoundedIntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda66(stabilitytest_Nova_BoundedIntervalStability* this, Context65* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda67(stabilitytest_Nova_BoundedIntervalStability* this, Context66* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda68(stabilitytest_Nova_BoundedIntervalStability* this, Context67* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda69(stabilitytest_Nova_BoundedIntervalStability* this, Context68* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda70(stabilitytest_Nova_BoundedIntervalStability* this, Context69* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda71(stabilitytest_Nova_BoundedIntervalStability* this, Context70* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda72(stabilitytest_Nova_BoundedIntervalStability* this, Context71* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda73(stabilitytest_Nova_BoundedIntervalStability* this, Context72* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda74(stabilitytest_Nova_BoundedIntervalStability* this, Context73* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda75(stabilitytest_Nova_BoundedIntervalStability* this, Context74* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda76(stabilitytest_Nova_BoundedIntervalStability* this, Context75* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda77(stabilitytest_Nova_BoundedIntervalStability* this, Context76* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda78(stabilitytest_Nova_BoundedIntervalStability* this, Context77* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda79(stabilitytest_Nova_BoundedIntervalStability* this, Context78* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda80(stabilitytest_Nova_BoundedIntervalStability* this, Context79* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda81(stabilitytest_Nova_BoundedIntervalStability* this, Context80* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda82(stabilitytest_Nova_BoundedIntervalStability* this, Context81* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda83(stabilitytest_Nova_BoundedIntervalStability* this, Context82* context);
void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda180(stabilitytest_Nova_BoundedIntervalStability* this, novex_nest_Nova_TestResult* _1, Context201* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_BoundedIntervalStability_Nova__invalidUnboundedIntervalBoundsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_BoundedIntervalStability_Nova__invalidIntervalBoundsTestCase;
novex_nest_Nova_TestCase* stabilitytest_Nova_BoundedIntervalStability_Nova__validIntervalBoundsTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_BoundedIntervalStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_BoundedIntervalStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_BoundedIntervalStability_Nova_init_static()
{
	if (!stabilitytest_Nova_BoundedIntervalStability_Nova_init_static_inited) {
		stabilitytest_Nova_BoundedIntervalStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_BoundedIntervalStability_Nova__invalidUnboundedIntervalBoundsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidUnboundedIntervalBounds")),
			0);
			stabilitytest_Nova_BoundedIntervalStability_Nova__invalidIntervalBoundsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("invalidIntervalBounds")),
			0);
			stabilitytest_Nova_BoundedIntervalStability_Nova__validIntervalBoundsTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("validIntervalBounds")),
			0);
			stabilitytest_Nova_BoundedIntervalStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated9(0,
					stabilitytest_Nova_BoundedIntervalStability_Nova__invalidUnboundedIntervalBoundsTestCase,
					stabilitytest_Nova_BoundedIntervalStability_Nova__invalidIntervalBoundsTestCase,
				stabilitytest_Nova_BoundedIntervalStability_Nova__validIntervalBoundsTestCase),
			0);
		}
	}
}

stabilitytest_Nova_BoundedIntervalStability* stabilitytest_Nova_BoundedIntervalStability_Nova_construct(stabilitytest_Nova_BoundedIntervalStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_BoundedIntervalStability, this,);
	this->vtable = &stabilitytest_Nova_BoundedIntervalStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_BoundedIntervalStability_Nova_super(this);
	
	return stabilitytest_Nova_BoundedIntervalStability_Nova_this((stabilitytest_Nova_BoundedIntervalStability*)(this));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_destroy(stabilitytest_Nova_BoundedIntervalStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_BoundedIntervalStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_invalidUnboundedIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context65* contextArg66 = NOVA_MALLOC(sizeof(Context65));
	Context66* contextArg67 = NOVA_MALLOC(sizeof(Context66));
	Context67* contextArg68 = NOVA_MALLOC(sizeof(Context67));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidUnboundedIntervalBounds ")));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda66, this, contextArg66)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda67, this, contextArg67)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda68, this, contextArg68)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_invalidIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context68* contextArg69 = NOVA_MALLOC(sizeof(Context68));
	Context69* contextArg70 = NOVA_MALLOC(sizeof(Context69));
	Context70* contextArg71 = NOVA_MALLOC(sizeof(Context70));
	Context71* contextArg72 = NOVA_MALLOC(sizeof(Context71));
	Context72* contextArg73 = NOVA_MALLOC(sizeof(Context72));
	Context73* contextArg74 = NOVA_MALLOC(sizeof(Context73));
	Context74* contextArg75 = NOVA_MALLOC(sizeof(Context74));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing invalidIntervalBounds ")));
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda69, this, contextArg69)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda70, this, contextArg70)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda71, this, contextArg71)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda72, this, contextArg72)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda73, this, contextArg73)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda74, this, contextArg74)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda75, this, contextArg75)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_validIntervalBounds(stabilitytest_Nova_BoundedIntervalStability* this, nova_io_Nova_OutputStream* out)
{
	Context75* contextArg76 = NOVA_MALLOC(sizeof(Context75));
	Context76* contextArg77 = NOVA_MALLOC(sizeof(Context76));
	Context77* contextArg78 = NOVA_MALLOC(sizeof(Context77));
	Context78* contextArg79 = NOVA_MALLOC(sizeof(Context78));
	Context79* contextArg80 = NOVA_MALLOC(sizeof(Context79));
	Context80* contextArg81 = NOVA_MALLOC(sizeof(Context80));
	Context81* contextArg82 = NOVA_MALLOC(sizeof(Context81));
	Context82* contextArg83 = NOVA_MALLOC(sizeof(Context82));
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing validIntervalBounds ")));
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda76, this, contextArg76)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda77, this, contextArg77)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda78, this, contextArg78)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda79, this, contextArg79)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda80, this, contextArg80)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda81, this, contextArg81)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda82, this, contextArg82)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
	novex_nest_Nova_Nest_Nova_toNotThrow((novex_nest_Nova_Nest*)(novex_nest_Nova_Nest_1_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				(novex_nest_Nova_Nest_closure959_Nova_func)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda83, this, contextArg83)),
		(nova_meta_Nova_Class*)(nova_time_Nova_InvalidIntervalException_VTable_val.classInstance),
		0,
		(int)(intptr_t)nova_null);
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_runTests(stabilitytest_Nova_BoundedIntervalStability* this, stabilitytest_Nova_BoundedIntervalStability_closure519_Nova_onResult stabilitytest_Nova_BoundedIntervalStability_Nova_onResult, void* stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult, void* stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context201* contextArg180 = NOVA_MALLOC(sizeof(Context201));
	nova_time_Nova_Timer* l1_Nova_invalidUnboundedIntervalBoundsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_invalidIntervalBoundsTimer = (nova_time_Nova_Timer*)nova_null;
	nova_time_Nova_Timer* l1_Nova_validIntervalBoundsTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_BoundedIntervalStability_Nova_onResult = (stabilitytest_Nova_BoundedIntervalStability_closure519_Nova_onResult)(stabilitytest_Nova_BoundedIntervalStability_Nova_onResult == 0 ? (stabilitytest_Nova_BoundedIntervalStability_closure519_Nova_onResult)&stabilitytest_Nova_BoundedIntervalStability_Nova_lambda180 : stabilitytest_Nova_BoundedIntervalStability_Nova_onResult);
	stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult);
	stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult = (void*)(stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult == 0 ? (void*)contextArg180 : stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing BoundedIntervalStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_invalidUnboundedIntervalBoundsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_BoundedIntervalStability_Nova_invalidUnboundedIntervalBounds((stabilitytest_Nova_BoundedIntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidUnboundedIntervalBoundsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidUnboundedIntervalBoundsTimer,
			stabilitytest_Nova_BoundedIntervalStability_Nova__invalidUnboundedIntervalBoundsTestCase);
			stabilitytest_Nova_BoundedIntervalStability_Nova_onResult(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidUnboundedIntervalBoundsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidUnboundedIntervalBoundsTimer,
		stabilitytest_Nova_BoundedIntervalStability_Nova__invalidUnboundedIntervalBoundsTestCase);
		stabilitytest_Nova_BoundedIntervalStability_Nova_onResult(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_invalidIntervalBoundsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l42_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_BoundedIntervalStability_Nova_invalidIntervalBounds((stabilitytest_Nova_BoundedIntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidIntervalBoundsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l42_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_invalidIntervalBoundsTimer,
			stabilitytest_Nova_BoundedIntervalStability_Nova__invalidIntervalBoundsTestCase);
			stabilitytest_Nova_BoundedIntervalStability_Nova_onResult(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult,
				l42_Nova_testResult,
			stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l47_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l47_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l47_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_invalidIntervalBoundsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l47_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l47_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_invalidIntervalBoundsTimer,
		stabilitytest_Nova_BoundedIntervalStability_Nova__invalidIntervalBoundsTestCase);
		stabilitytest_Nova_BoundedIntervalStability_Nova_onResult(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult,
			l47_Nova_testResult,
		stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	l1_Nova_validIntervalBoundsTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l75_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_BoundedIntervalStability_Nova_validIntervalBounds((stabilitytest_Nova_BoundedIntervalStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validIntervalBoundsTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l75_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_validIntervalBoundsTimer,
			stabilitytest_Nova_BoundedIntervalStability_Nova__validIntervalBoundsTestCase);
			stabilitytest_Nova_BoundedIntervalStability_Nova_onResult(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult,
				l75_Nova_testResult,
			stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l80_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l80_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l80_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_validIntervalBoundsTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l80_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l80_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_validIntervalBoundsTimer,
		stabilitytest_Nova_BoundedIntervalStability_Nova__validIntervalBoundsTestCase);
		stabilitytest_Nova_BoundedIntervalStability_Nova_onResult(stabilitytest_Nova_BoundedIntervalStability_ref_Nova_onResult,
			l80_Nova_testResult,
		stabilitytest_Nova_BoundedIntervalStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_BoundedIntervalStability* stabilitytest_Nova_BoundedIntervalStability_Nova_this(stabilitytest_Nova_BoundedIntervalStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated9(stabilitytest_Nova_BoundedIntervalStability* this, novex_nest_Nova_TestCase* value0, novex_nest_Nova_TestCase* value1, novex_nest_Nova_TestCase* value2)
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

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda66(stabilitytest_Nova_BoundedIntervalStability* this, Context65* context)
{
	nova_time_Nova_BoundedInterval_Nova_construct(0,
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null),
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda67(stabilitytest_Nova_BoundedIntervalStability* this, Context66* context)
{
	nova_time_Nova_BoundedInterval_Nova_construct(0,
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda68(stabilitytest_Nova_BoundedIntervalStability* this, Context67* context)
{
	nova_time_Nova_BoundedInterval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		(nova_time_Nova_DateTime*)((nova_Nova_Object*)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda69(stabilitytest_Nova_BoundedIntervalStability* this, Context68* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2016,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda70(stabilitytest_Nova_BoundedIntervalStability* this, Context69* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda71(stabilitytest_Nova_BoundedIntervalStability* this, Context70* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			4,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda72(stabilitytest_Nova_BoundedIntervalStability* this, Context71* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			3,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda73(stabilitytest_Nova_BoundedIntervalStability* this, Context72* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			2,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda74(stabilitytest_Nova_BoundedIntervalStability* this, Context73* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			2,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			1,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda75(stabilitytest_Nova_BoundedIntervalStability* this, Context74* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			2,
		1),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			2,
	0));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda76(stabilitytest_Nova_BoundedIntervalStability* this, Context75* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			0,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			0,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda77(stabilitytest_Nova_BoundedIntervalStability* this, Context76* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2016,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda78(stabilitytest_Nova_BoundedIntervalStability* this, Context77* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda79(stabilitytest_Nova_BoundedIntervalStability* this, Context78* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			4,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda80(stabilitytest_Nova_BoundedIntervalStability* this, Context79* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			3,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda81(stabilitytest_Nova_BoundedIntervalStability* this, Context80* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			2,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			(int)(intptr_t)nova_null,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda82(stabilitytest_Nova_BoundedIntervalStability* this, Context81* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			1,
			(int)(intptr_t)nova_null),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			2,
			(int)(intptr_t)nova_null));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda83(stabilitytest_Nova_BoundedIntervalStability* this, Context82* context)
{
	nova_time_Nova_Interval_Nova_construct(0,
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			2,
		0),
		nova_time_Nova_DateTime_2_Nova_construct(0,
			2017,
			6,
			5,
			4,
			3,
			2,
	1));
}

void stabilitytest_Nova_BoundedIntervalStability_Nova_lambda180(stabilitytest_Nova_BoundedIntervalStability* this, novex_nest_Nova_TestResult* _1, Context201* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_BoundedIntervalStability_Accessorfunc_Nova_model(stabilitytest_Nova_BoundedIntervalStability* this)
{
	return stabilitytest_Nova_BoundedIntervalStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_BoundedIntervalStability_Nova_super(stabilitytest_Nova_BoundedIntervalStability* this)
{
	this->stabilitytest_Nova_BoundedIntervalStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

