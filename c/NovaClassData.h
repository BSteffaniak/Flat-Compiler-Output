#ifndef NOVA_CLASS_DATA
#define NOVA_CLASS_DATA

typedef struct NovaClassData NovaClassData;

typedef struct nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable;
typedef struct nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable;
typedef struct nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator;
typedef struct nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List;
typedef struct nova_io_vtable_InputStream nova_io_vtable_InputStream;
typedef struct nova_operators_vtable_EqualsOperator nova_operators_vtable_EqualsOperator;
typedef struct nova_operators_vtable_MultiplyEqualsOperator nova_operators_vtable_MultiplyEqualsOperator;
typedef struct nova_operators_vtable_MultiplyOperator nova_operators_vtable_MultiplyOperator;
typedef struct nova_operators_vtable_NotEqualToOperator nova_operators_vtable_NotEqualToOperator;
typedef struct nova_operators_vtable_PlusEqualsOperator nova_operators_vtable_PlusEqualsOperator;
typedef struct nova_operators_vtable_PlusOperator nova_operators_vtable_PlusOperator;
typedef struct nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer;
typedef struct nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber;
typedef struct example_vtable_Polygon example_vtable_Polygon;
extern nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable_value_default;
extern nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable_value_default;
extern nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator_value_default;
extern nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List_value_default;
extern nova_io_vtable_InputStream nova_io_vtable_InputStream_value_default;
extern nova_operators_vtable_EqualsOperator nova_operators_vtable_EqualsOperator_value_default;
extern nova_operators_vtable_MultiplyEqualsOperator nova_operators_vtable_MultiplyEqualsOperator_value_default;
extern nova_operators_vtable_MultiplyOperator nova_operators_vtable_MultiplyOperator_value_default;
extern nova_operators_vtable_NotEqualToOperator nova_operators_vtable_NotEqualToOperator_value_default;
extern nova_operators_vtable_PlusEqualsOperator nova_operators_vtable_PlusEqualsOperator_value_default;
extern nova_operators_vtable_PlusOperator nova_operators_vtable_PlusOperator_value_default;
extern nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer_value_default;
extern nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber_value_default;
extern example_vtable_Polygon example_vtable_Polygon_value_default;

#include <nova/nova_Nova_Class.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/nova_Nova_System.h>
#include <nova/ar/nova_ar_Nova_ImageTracker.h>
#include <nova/ar/nova_ar_Nova_TrackPoint.h>
#include <nova/database/nova_database_Nova_DBConnector.h>
#include <nova/database/nova_database_Nova_ResultSet.h>
#include <nova/datastruct/nova_datastruct_Nova_BinaryNode.h>
#include <nova/datastruct/nova_datastruct_Nova_BinaryTree.h>
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_HashSet.h>
#include <nova/datastruct/nova_datastruct_Nova_ImmutableHashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/datastruct/nova_datastruct_Nova_ReversibleHashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Tree.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CompiledList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_EmptyStackException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableCharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableCharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRangeIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedListIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Queue.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_SubstringCharArray.h>
#include <nova/exception/nova_exception_Nova_Backtraces.h>
#include <nova/exception/nova_exception_Nova_CaughtException.h>
#include <nova/exception/nova_exception_Nova_DivideByZeroException.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_InvalidArgumentException.h>
#include <nova/exception/nova_exception_Nova_InvalidOperationException.h>
#include <nova/exception/nova_exception_Nova_UnimplementedOperationException.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/io/nova_io_Nova_Console.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileNotFoundException.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/io/nova_io_Nova_InputStream.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/io/nova_io_Nova_StreamReader.h>
#include <nova/math/nova_math_Nova_ArithmeticSequence.h>
#include <nova/math/nova_math_Nova_Diekstra.h>
#include <nova/math/nova_math_Nova_GeometricSequence.h>
#include <nova/math/nova_math_Nova_Graph.h>
#include <nova/math/nova_math_Nova_InvalidNumericStatementException.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/math/nova_math_Nova_Matrix.h>
#include <nova/math/nova_math_Nova_NumericOperand.h>
#include <nova/math/nova_math_Nova_NumericOperation.h>
#include <nova/math/nova_math_Nova_NumericStatement.h>
#include <nova/math/nova_math_Nova_NumericTree.h>
#include <nova/math/nova_math_Nova_Polynomial.h>
#include <nova/math/nova_math_Nova_Sequence.h>
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/math/nova_math_Nova_StatementComponent.h>
#include <nova/math/nova_math_Nova_VariableOperand.h>
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/math/nova_math_Nova_Vector2D.h>
#include <nova/math/nova_math_Nova_Vector3D.h>
#include <nova/math/nova_math_Nova_Vector4D.h>
#include <nova/math/calculus/nova_math_calculus_Nova_Calculus.h>
#include <nova/math/huffman/nova_math_huffman_Nova_HuffmanTree.h>
#include <nova/math/logic/nova_math_logic_Nova_Conclusion.h>
#include <nova/math/logic/nova_math_logic_Nova_Hypothesis.h>
#include <nova/math/logic/nova_math_logic_Nova_InvalidFormulaException.h>
#include <nova/math/logic/nova_math_logic_Nova_LogicalConnective.h>
#include <nova/math/logic/nova_math_logic_Nova_LogicalStatement.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementGroup.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementLetter.h>
#include <nova/math/logic/nova_math_logic_Nova_WFF.h>
#include <nova/meta/nova_meta_Nova_Field.h>
#include <nova/meta/nova_meta_Nova_GenericArgument.h>
#include <nova/meta/nova_meta_Nova_GenericParameter.h>
#include <nova/meta/nova_meta_Nova_Type.h>
#include <nova/network/nova_network_Nova_ClientSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/network/nova_network_Nova_NetworkInputStream.h>
#include <nova/network/nova_network_Nova_NetworkOutputStream.h>
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <nova/network/nova_network_Nova_Socket.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyEqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_NotEqualToOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/primitive/nova_primitive_Nova_Bool.h>
#include <nova/primitive/nova_primitive_Nova_Null.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Byte.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Char.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Double.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Float.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Int.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Long.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/primitive/number/nova_primitive_number_Nova_RealNumber.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>
#include <nova/process/nova_process_Nova_Process.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/security/nova_security_Nova_MD5.h>
#include <nova/security/nova_security_Nova_Sha256.h>
#include <nova/star/nova_star_Nova_Frame.h>
#include <nova/star/nova_star_Nova_Window.h>
#include <nova/star/nova_star_Nova_WindowThread.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/time/nova_time_Nova_CumulativeTimer.h>
#include <nova/time/nova_time_Nova_Date.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/web/js/json/nova_web_js_json_Nova_Json.h>
#include <nova/web/svg/nova_web_svg_Nova_Svg.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgCircle.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentList.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentNode.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgMainComponent.h>
#include <nova/web/svg/no3/nova_web_svg_no3_Nova_No3.h>
#include <nova/web/svg/no3/nova_web_svg_no3_Nova_No3Node.h>
#include <nova/web/svg/no3/nova_web_svg_no3_Nova_No3Select.h>
#include <nova/web/svg/no3/nova_web_svg_no3_Nova_No3SelectAll.h>
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
#include <example/example_Nova_Lab.h>
#include <example/example_Nova_MathDemo.h>
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
#include <example/ackermann/example_ackermann_Nova_Ackermann.h>
#include <example/copy/example_copy_Nova_Dog.h>
#include <example/database/example_database_Nova_DatabaseDemo.h>
#include <example/network/example_network_Nova_ClientDemo.h>
#include <example/network/example_network_Nova_ConnectionThread.h>
#include <example/network/example_network_Nova_OutputThread.h>
#include <example/network/example_network_Nova_ServerDemo.h>

struct nova_datastruct_vtable_Comparable {
char x;
};

struct nova_datastruct_list_vtable_Iterable {
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Mutator0_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Iterator*);
};

struct nova_datastruct_list_vtable_Iterator {
char (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
};

struct nova_datastruct_list_vtable_List {
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_virtual_Nova_toArray)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_contains)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure4_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_map)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure8_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_any)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_all)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure16_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_filter)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure20_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual_Nova_take)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual_Nova_skip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure32_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_Nova_String* (*nova_datastruct_list_Nova_List_virtual_Nova_join)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
int (*nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
int (*nova_datastruct_list_Nova_List_virtual_Mutator0_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Mutator0_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Iterator*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_first)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Mutator0_Nova_first)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Accessor1_Nova_last)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Mutator0_Nova_last)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
};

struct nova_io_vtable_InputStream {
char x;
};

struct nova_operators_vtable_EqualsOperator {
char x;
};

struct nova_operators_vtable_MultiplyEqualsOperator {
char x;
};

struct nova_operators_vtable_MultiplyOperator {
char x;
};

struct nova_operators_vtable_NotEqualToOperator {
char x;
};

struct nova_operators_vtable_PlusEqualsOperator {
char x;
};

struct nova_operators_vtable_PlusOperator {
char x;
};

struct nova_primitive_number_vtable_Integer {
char x;
};

struct nova_primitive_number_vtable_RealNumber {
char x;
};

struct example_vtable_Polygon {
char x;
};



struct NovaClassData {
nova_datastruct_vtable_Comparable* nova_datastruct_vtable_Comparable_value;
nova_datastruct_list_vtable_Iterable* nova_datastruct_list_vtable_Iterable_value;
nova_datastruct_list_vtable_Iterator* nova_datastruct_list_vtable_Iterator_value;
nova_datastruct_list_vtable_List* nova_datastruct_list_vtable_List_value;
nova_io_vtable_InputStream* nova_io_vtable_InputStream_value;
nova_operators_vtable_EqualsOperator* nova_operators_vtable_EqualsOperator_value;
nova_operators_vtable_MultiplyEqualsOperator* nova_operators_vtable_MultiplyEqualsOperator_value;
nova_operators_vtable_MultiplyOperator* nova_operators_vtable_MultiplyOperator_value;
nova_operators_vtable_NotEqualToOperator* nova_operators_vtable_NotEqualToOperator_value;
nova_operators_vtable_PlusEqualsOperator* nova_operators_vtable_PlusEqualsOperator_value;
nova_operators_vtable_PlusOperator* nova_operators_vtable_PlusOperator_value;
nova_primitive_number_vtable_Integer* nova_primitive_number_vtable_Integer_value;
nova_primitive_number_vtable_RealNumber* nova_primitive_number_vtable_RealNumber_value;
example_vtable_Polygon* example_vtable_Polygon_value;

nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_concat)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_substring)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
nova_Nova_Object* (*nova_datastruct_Nova_HashMap_virtual_Nova_add)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_virtual_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object** (*nova_datastruct_list_Nova_Array_virtual_Nova_cloneData)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_virtual_Nova_clone)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_get)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_set)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
char (*nova_io_Nova_OutputStream_virtual_Nova_write)(nova_io_Nova_OutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
double (*nova_math_Nova_Vector_virtual_Nova_dotProduct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*);
char (*nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, nova_primitive_number_Nova_Number*);
void (*nova_thread_Nova_Thread_virtual_Nova_run)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
nova_time_Nova_Timer* (*nova_time_Nova_Timer_virtual_Nova_stop)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
long_long (*nova_time_Nova_Timer_virtual_Accessor_Nova_duration)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
void (*nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_Animal_virtual_Nova_getNumLegs)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_Animal_virtual_Nova_getNumEyes)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*example_Nova_Animal_virtual_Nova_getDescription)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
void (*example_Nova_Person_virtual_Nova_sayHello)(example_Nova_Person*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_T1_virtual_Accessor_static_Nova_ind)(example_Nova_T1*, nova_exception_Nova_ExceptionData*);
};

#endif