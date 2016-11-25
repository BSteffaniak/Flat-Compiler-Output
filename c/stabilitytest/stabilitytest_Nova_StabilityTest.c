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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_StabilityTest_Extension_VTable stabilitytest_StabilityTest_Extension_VTable_val =
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
		},
		nova_Nova_Object_Nova_toString,
		nova_Nova_Object_Accessor_Nova_hashCodeLong,
		stabilitytest_Nova_StabilityTest_Nova_test,
};


void stabilitytest_Nova_StabilityTest_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
		{
		}
}

stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTest_Nova_construct(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
		CCLASS_NEW(stabilitytest_Nova_StabilityTest, this,);
		this->vtable = &stabilitytest_StabilityTest_Extension_VTable_val;
		nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
		stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
		stabilitytest_Nova_StabilityTest_Nova_super(this, exceptionData);
		
		{
				stabilitytest_Nova_StabilityTest_Nova_this(this, exceptionData, program);
		}
		
		return this;
}

void stabilitytest_Nova_StabilityTest_Nova_destroy(stabilitytest_Nova_StabilityTest** this, nova_exception_Nova_ExceptionData* exceptionData)
{
		if (!*this)
		{
				return;
		}
		
		
		NOVA_FREE(*this);
}

void stabilitytest_Nova_StabilityTest_static_Nova_main(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
		stabilitytest_Nova_StabilityTest* l1_Nova_n = (stabilitytest_Nova_StabilityTest*)nova_null;
		stabilitytest_Nova_StabilityTest* l1_Nova_test = (stabilitytest_Nova_StabilityTest*)nova_null;
		nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
		
		l1_Nova_n = (stabilitytest_Nova_StabilityTest*)((nova_Nova_Object*)nova_null);
		l1_Nova_test = stabilitytest_Nova_StabilityTest_Nova_construct(0, exceptionData, l1_Nova_n);
		l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
		stabilitytest_Nova_StabilityTest_Nova_test(l1_Nova_test, exceptionData);
		nova_time_Nova_Timer_Nova_stop(l1_Nova_timer, exceptionData);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Took "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Timer_Accessor_Nova_duration(l1_Nova_timer, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))));
		nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void stabilitytest_Nova_StabilityTest_Nova_this(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
		stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_StabilityTest_Nova_test(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		TRY
		{
				novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, stabilitytest_UnstableException_Extension_VTable_val.classInstance, 0);
				
				{
						stabilitytest_Nova_ExceptionStability_Nova_test(stabilitytest_Nova_ExceptionStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_SyntaxStability_Nova_test(stabilitytest_Nova_SyntaxStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_ClosureStability_Nova_test(stabilitytest_Nova_ClosureStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_PolymorphismStability_Nova_test(stabilitytest_Nova_PolymorphismStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_LambdaStability_Nova_test(stabilitytest_Nova_LambdaStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_ToStringStability_Nova_test(stabilitytest_Nova_ToStringStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_AssignmentStability_Nova_test(stabilitytest_Nova_AssignmentStability_Nova_construct(0, exceptionData, this), exceptionData);
						stabilitytest_Nova_RegexStability_Nova_test(stabilitytest_Nova_RegexStability_Nova_construct(0, exceptionData, this), exceptionData);
						
						stabilitytest_Nova_TimeStability_Nova_test(stabilitytest_Nova_TimeStability_Nova_construct(0, exceptionData, this), exceptionData);
						
						stabilitytest_Nova_ThreadStability_Nova_test(stabilitytest_Nova_ThreadStability_Nova_construct(0, exceptionData, this), exceptionData);
						
						stabilitytest_Nova_FileStability_Nova_test(stabilitytest_Nova_FileStability_Nova_construct(0, exceptionData, this), exceptionData);
						
						stabilitytest_Nova_NetworkStability_Nova_test(stabilitytest_Nova_NetworkStability_Nova_construct(0, exceptionData, this), exceptionData);
						nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("All OK")));
				}
		}
		CATCH (stabilitytest_UnstableException_Extension_VTable_val.classInstance)
		{
				stabilitytest_Nova_UnstableException* l2_Nova_e = (stabilitytest_Nova_UnstableException*)nova_null;
				
				l2_Nova_e = (stabilitytest_Nova_UnstableException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unstable exception thrown: "))), exceptionData, l2_Nova_e->nova_exception_Nova_Exception_Nova_message));
		}
		FINALLY
		{
		}
		END_TRY;
}

void stabilitytest_Nova_StabilityTest_Nova_fail(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, int condition)
{
		message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed")) : (nova_Nova_Object*)message);
		condition = (int)(condition == (intptr_t)nova_null ? 1 : condition);
		if (condition)
		{
				THROW(stabilitytest_Nova_UnstableException_Nova_construct(0, exceptionData, message), 0);
		}
}

void stabilitytest_Nova_StabilityTest_Nova_super(stabilitytest_Nova_StabilityTest* this, nova_exception_Nova_ExceptionData* exceptionData)
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
		novaEnv.nova_thread_UncaughtExceptionHandler.uncaughtException = nova_thread_UncaughtExceptionHandler_Extension_VTable_val.nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException;
		novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_SvgComponent_Extension_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
		novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_No3Node_Extension_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;
		novaEnv.stabilitytest_StabilityTestCase.test = stabilitytest_StabilityTestCase_Extension_VTable_val.stabilitytest_Nova_StabilityTestCase_virtual_Nova_test;
		
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
		nova_exception_CaughtException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/CaughtException")), 0);
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/DivideByZeroException")), 0);
		nova_exception_Exception_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Exception")), 0);
		nova_exception_ExceptionData_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/ExceptionData")), 0);
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/InvalidArgumentException")), 0);
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/InvalidOperationException")), 0);
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
		stabilitytest_AssignmentStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/AssignmentStability")), 0);
		stabilitytest_ClassWithProperties_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ClassWithProperties")), 0);
		stabilitytest_ClientThread_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ClientThread")), 0);
		stabilitytest_ClosureStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ClosureStability")), 0);
		stabilitytest_ExceptionStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ExceptionStability")), 0);
		stabilitytest_FileStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/FileStability")), 0);
		stabilitytest_LambdaStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/LambdaStability")), 0);
		stabilitytest_NetworkStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/NetworkStability")), 0);
		stabilitytest_Node_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/Node")), 0);
		stabilitytest_PolymorphicSubClass_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/PolymorphicSubClass")), 0);
		stabilitytest_PolymorphicSuperClass_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/PolymorphicSuperClass")), 0);
		stabilitytest_PolymorphismStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/PolymorphismStability")), 0);
		stabilitytest_RegexStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/RegexStability")), 0);
		stabilitytest_StabilityExceptionHandler_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/StabilityExceptionHandler")), 0);
		stabilitytest_StabilityTest_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/StabilityTest")), 0);
		stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/StabilityTestCase")), 0);
		stabilitytest_StabilityTestException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/StabilityTestException")), 0);
		stabilitytest_SyntaxStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/SyntaxStability")), 0);
		stabilitytest_ThreadImplementation_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ThreadImplementation")), 0);
		stabilitytest_ThreadStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ThreadStability")), 0);
		stabilitytest_TimeStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/TimeStability")), 0);
		stabilitytest_ToStringStability_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/ToStringStability")), 0);
		stabilitytest_UnstableException_Extension_VTable_val.classInstance = nova_Nova_Class_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("stabilitytest/UnstableException")), 0);
		
		
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
		nova_exception_CaughtException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_exception_DivideByZeroException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_exception_Exception_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_exception_ExceptionData_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		nova_exception_InvalidArgumentException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		nova_exception_InvalidOperationException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
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
		stabilitytest_AssignmentStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_ClassWithProperties_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		stabilitytest_ClientThread_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		stabilitytest_ClosureStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_ExceptionStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_FileStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_LambdaStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_NetworkStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_Node_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		stabilitytest_PolymorphicSubClass_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_PolymorphicSuperClass_Extension_VTable_val.classInstance;
		stabilitytest_PolymorphicSuperClass_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		stabilitytest_PolymorphismStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_RegexStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_StabilityExceptionHandler_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_UncaughtExceptionHandler_Extension_VTable_val.classInstance;
		stabilitytest_StabilityTest_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_Object_Extension_VTable_val.classInstance;
		stabilitytest_StabilityTestException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		stabilitytest_SyntaxStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_ThreadImplementation_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_thread_Thread_Extension_VTable_val.classInstance;
		stabilitytest_ThreadStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_TimeStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_ToStringStability_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = stabilitytest_StabilityTestCase_Extension_VTable_val.classInstance;
		stabilitytest_UnstableException_Extension_VTable_val.classInstance->nova_Nova_Class_Nova_extension = nova_exception_Exception_Extension_VTable_val.classInstance;
		
		
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
		nova_exception_Nova_CaughtException_Nova_init_static(exceptionData);
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
		stabilitytest_Nova_RegexStability_Nova_init_static(exceptionData);
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
				stabilitytest_Nova_StabilityTest_static_Nova_main(0, exceptionData, argsArray);
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
