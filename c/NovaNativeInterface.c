#include <precompiled.h>
#include "NovaNativeInterface.h"

nova_env novaEnv = {
{
&nova_Nova_Class_Nova_isOfType,
&nova_Nova_Class_Nova_construct,
},

{
0,
&nova_Nova_Object_Nova_construct,
},

{
0,
&nova_Nova_String_Nova_repeat,
&nova_Nova_String_0_Nova_replace,
&nova_Nova_String_1_Nova_replace,
&nova_Nova_String_0_Nova_startsWith,
&nova_Nova_String_1_Nova_startsWith,
&nova_Nova_String_2_Nova_startsWith,
&nova_Nova_String_0_Nova_contains,
&nova_Nova_String_1_Nova_contains,
&nova_Nova_String_0_Nova_endsWith,
&nova_Nova_String_1_Nova_endsWith,
&nova_Nova_String_Nova_matches,
&nova_Nova_String_0_Nova_indexOf,
&nova_Nova_String_1_Nova_indexOf,
&nova_Nova_String_2_Nova_indexOf,
&nova_Nova_String_0_Nova_lastIndexOf,
&nova_Nova_String_1_Nova_lastIndexOf,
&nova_Nova_String_Nova_validateSubstringBounds,
0,
&nova_Nova_String_Nova_trimEnds,
&nova_Nova_String_Nova_trim,
&nova_Nova_String_Nova_lastChar,
&nova_Nova_String_Nova_toLowerCase,
&nova_Nova_String_Nova_toUpperCase,
&nova_Nova_String_Nova_capitalize,
&nova_Nova_String_Nova_transform,
&nova_Nova_String_Nova_getStringBetween,
&nova_Nova_String_Nova_surroundWith,
&nova_Nova_String_Nova_split,
&nova_Nova_String_Nova_getGroupedChars,
&nova_Nova_String_Nova_get,
&nova_Nova_String_Nova_set,
&nova_Nova_String_0_Nova_construct,
&nova_Nova_String_1_Nova_construct,
&nova_Nova_String_2_Nova_construct,
&nova_Nova_String_3_Nova_construct,
},

{
&nova_Nova_Substring_Nova_construct,
},

{
&nova_Nova_System_Nova_construct,
},

{
&nova_ar_Nova_ImageTracker_Nova_construct,
},

{
&nova_ar_Nova_TrackPoint_Nova_construct,
},

{
&nova_database_Nova_DBConnector_0_Nova_connect,
&nova_database_Nova_DBConnector_1_Nova_connect,
&nova_database_Nova_DBConnector_2_Nova_connect,
&nova_database_Nova_DBConnector_Nova_updateError,
&nova_database_Nova_DBConnector_Nova_changeUser,
&nova_database_Nova_DBConnector_Nova_query,
&nova_database_Nova_DBConnector_Nova_close,
&nova_database_Nova_DBConnector_Nova_construct,
},

{
&nova_database_Nova_ResultSet_Nova_construct,
},

{
&nova_datastruct_Nova_BinaryNode_Nova_addChild,
&nova_datastruct_Nova_BinaryNode_0_Nova_construct,
},

{
&nova_datastruct_Nova_BinaryTree_Nova_addNode,
&nova_datastruct_Nova_BinaryTree_Nova_addNodes,
&nova_datastruct_Nova_BinaryTree_Nova_construct,
},

{
&nova_datastruct_Nova_Bounds_Nova_extractString,
&nova_datastruct_Nova_Bounds_Nova_extractPreString,
&nova_datastruct_Nova_Bounds_Nova_extractPostString,
&nova_datastruct_Nova_Bounds_Nova_trimString,
&nova_datastruct_Nova_Bounds_Nova_invalidate,
&nova_datastruct_Nova_Bounds_Nova_cloneTo,
&nova_datastruct_Nova_Bounds_Nova_clone,
&nova_datastruct_Nova_Bounds_0_Nova_construct,
&nova_datastruct_Nova_Bounds_1_Nova_construct,
},

{
0,
},

{
0,
&nova_datastruct_Nova_HashMap_Nova_remove,
&nova_datastruct_Nova_HashMap_Nova_containsKey,
&nova_datastruct_Nova_HashMap_Nova_clone,
&nova_datastruct_Nova_HashMap_Nova_toImmutable,
&nova_datastruct_Nova_HashMap_Nova_get,
&nova_datastruct_Nova_HashMap_Nova_set,
&nova_datastruct_Nova_HashMap_0_Nova_construct,
&nova_datastruct_Nova_HashMap_1_Nova_construct,
},

{
&nova_datastruct_Nova_HashSet_Nova_add,
&nova_datastruct_Nova_HashSet_Nova_get,
&nova_datastruct_Nova_HashSet_Nova_remove,
&nova_datastruct_Nova_HashSet_0_Nova_construct,
&nova_datastruct_Nova_HashSet_1_Nova_construct,
},

{
&nova_datastruct_Nova_ImmutableHashMap_Nova_containsKey,
&nova_datastruct_Nova_ImmutableHashMap_Nova_get,
&nova_datastruct_Nova_ImmutableHashMap_Nova_set,
&nova_datastruct_Nova_ImmutableHashMap_0_Nova_construct,
},

{
&nova_datastruct_Nova_Node_0_Nova_preorder,
&nova_datastruct_Nova_Node_0_Nova_inorder,
&nova_datastruct_Nova_Node_0_Nova_postorder,
&nova_datastruct_Nova_Node_0_Nova_levelorder,
&nova_datastruct_Nova_Node_Nova_construct,
},

{
&nova_datastruct_Nova_Pair_Nova_construct,
},

{
&nova_datastruct_Nova_ReversibleHashMap_Nova_put,
&nova_datastruct_Nova_ReversibleHashMap_Nova_getKey,
&nova_datastruct_Nova_ReversibleHashMap_Nova_getValue,
&nova_datastruct_Nova_ReversibleHashMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tree_Nova_preorder,
&nova_datastruct_Nova_Tree_Nova_inorder,
&nova_datastruct_Nova_Tree_Nova_postorder,
&nova_datastruct_Nova_Tree_Nova_levelorder,
&nova_datastruct_Nova_Tree_Nova_construct,
},

{
&nova_datastruct_Nova_Tuple_Nova_construct,
},

{
&nova_datastruct_Nova_Tuple2_Nova_construct,
},

{
&nova_datastruct_list_Nova_Array_Nova_fillRemaining,
&nova_datastruct_list_Nova_Array_Nova_addAll,
0,
0,
0,
&nova_datastruct_list_Nova_Array_0_Nova_remove,
&nova_datastruct_list_Nova_Array_1_Nova_remove,
0,
&nova_datastruct_list_Nova_Array_Nova_replace,
&nova_datastruct_list_Nova_Array_Nova_swap,
0,
0,
&nova_datastruct_list_Nova_Array_Nova_sumSize,
&nova_datastruct_list_Nova_Array_Nova_toImmutable,
0,
0,
&nova_datastruct_list_Nova_Array_0_Nova_construct,
&nova_datastruct_list_Nova_Array_1_Nova_construct,
&nova_datastruct_list_Nova_Array_2_Nova_construct,
},

{
&nova_datastruct_list_Nova_ArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ArrayIterator_Nova_construct,
},

{
&nova_datastruct_list_Nova_CharArray_Nova_sum,
&nova_datastruct_list_Nova_CharArray_Nova_reduce,
&nova_datastruct_list_Nova_CharArray_0_Nova_construct,
&nova_datastruct_list_Nova_CharArray_1_Nova_construct,
&nova_datastruct_list_Nova_CharArray_2_Nova_construct,
},

{
&nova_datastruct_list_Nova_CharArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_CharArrayIterator_Nova_construct,
},

{
&nova_datastruct_list_Nova_CompiledList_Nova_construct,
},

{
&nova_datastruct_list_Nova_DoubleArray_Nova_sum,
&nova_datastruct_list_Nova_DoubleArray_0_Nova_construct,
&nova_datastruct_list_Nova_DoubleArray_1_Nova_construct,
&nova_datastruct_list_Nova_DoubleArray_2_Nova_construct,
},

{
&nova_datastruct_list_Nova_DoubleArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_DoubleArrayIterator_Nova_construct,
},

{
&nova_datastruct_list_Nova_EmptyStackException_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableArray_Nova_toMutable,
&nova_datastruct_list_Nova_ImmutableArray_Nova_set,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_construct,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_toMutable,
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_get,
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_set,
&nova_datastruct_list_Nova_ImmutableCharArray_0_Nova_construct,
&nova_datastruct_list_Nova_ImmutableCharArray_1_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntArray_0_Nova_construct,
&nova_datastruct_list_Nova_IntArray_1_Nova_construct,
&nova_datastruct_list_Nova_IntArray_2_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_IntArrayIterator_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntRange_Nova_forEach,
&nova_datastruct_list_Nova_IntRange_0_Nova_construct,
&nova_datastruct_list_Nova_IntRange_1_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntRangeIterator_Nova_reset,
&nova_datastruct_list_Nova_IntRangeIterator_Nova_construct,
},

{
},

{
},

{
&nova_datastruct_list_Nova_LinkedList_Nova_addAll,
&nova_datastruct_list_Nova_LinkedList_Nova_add,
&nova_datastruct_list_Nova_LinkedList_Nova_remove,
&nova_datastruct_list_Nova_LinkedList_Nova_construct,
},

{
&nova_datastruct_list_Nova_LinkedListIterator_Nova_reset,
&nova_datastruct_list_Nova_LinkedListIterator_Nova_construct,
},

{
0,
0,
0,
0,
0,
0,
0,
&nova_datastruct_list_Nova_List_Nova_filterEmpty,
0,
&nova_datastruct_list_Nova_List_Nova_takeLast,
0,
&nova_datastruct_list_Nova_List_Nova_firstOr,
&nova_datastruct_list_Nova_List_Nova_firstOrThrow,
0,
&nova_datastruct_list_Nova_List_Nova_firstNonNull,
&nova_datastruct_list_Nova_List_Nova_zip,
0,
&nova_datastruct_list_Nova_List_Nova_reduce,
0,
},

{
&nova_datastruct_list_Nova_ListNode_Nova_clone,
&nova_datastruct_list_Nova_ListNode_Nova_construct,
},

{
&nova_datastruct_list_Nova_NoSuchElementException_Nova_construct,
},

{
&nova_datastruct_list_Nova_Queue_Nova_dequeue,
&nova_datastruct_list_Nova_Queue_Nova_enqueue,
&nova_datastruct_list_Nova_Queue_0_Nova_construct,
&nova_datastruct_list_Nova_Queue_1_Nova_construct,
},

{
&nova_datastruct_list_Nova_Stack_Nova_push,
&nova_datastruct_list_Nova_Stack_Nova_pop,
&nova_datastruct_list_Nova_Stack_Nova_peek,
&nova_datastruct_list_Nova_Stack_0_Nova_construct,
&nova_datastruct_list_Nova_Stack_1_Nova_construct,
},

{
&nova_datastruct_list_Nova_StringCharArray_0_Nova_construct,
&nova_datastruct_list_Nova_StringCharArray_1_Nova_construct,
},

{
&nova_datastruct_list_Nova_SubstringCharArray_Nova_construct,
},

{
&nova_exception_Nova_Backtraces_Nova_construct,
},

{
&nova_exception_Nova_CaughtException_Nova_construct,
},

{
&nova_exception_Nova_DivideByZeroException_Nova_construct,
},

{
&nova_exception_Nova_Exception_Nova_construct,
},

{
&nova_exception_Nova_ExceptionData_Nova_addCaught,
&nova_exception_Nova_ExceptionData_Nova_throwException,
&nova_exception_Nova_ExceptionData_Nova_construct,
},

{
&nova_exception_Nova_InvalidArgumentException_Nova_construct,
},

{
&nova_exception_Nova_InvalidOperationException_Nova_construct,
},

{
&nova_exception_Nova_UnimplementedOperationException_Nova_construct,
},

{
&nova_gc_Nova_GC_Nova_construct,
},

{
&nova_io_Nova_Console_Nova_construct,
},

{
&nova_io_Nova_File_Nova_getChildFiles,
&nova_io_Nova_File_Nova_directoryContents,
&nova_io_Nova_File_Nova_listFiles,
&nova_io_Nova_File_1_Nova_construct,
},

{
&nova_io_Nova_FileNotFoundException_Nova_construct,
},

{
&nova_io_Nova_FileReader_Nova_readBytes,
&nova_io_Nova_FileReader_Nova_open,
&nova_io_Nova_FileReader_Nova_readAllContents,
&nova_io_Nova_FileReader_Nova_readLine,
&nova_io_Nova_FileReader_Nova_close,
&nova_io_Nova_FileReader_0_Nova_construct,
&nova_io_Nova_FileReader_1_Nova_construct,
},

{
&nova_io_Nova_FileWriter_Nova_delete,
&nova_io_Nova_FileWriter_Nova_reopen,
&nova_io_Nova_FileWriter_Nova_rewind,
&nova_io_Nova_FileWriter_Nova_clearContents,
&nova_io_Nova_FileWriter_Nova_create,
&nova_io_Nova_FileWriter_Nova_writeLine,
&nova_io_Nova_FileWriter_Nova_flush,
&nova_io_Nova_FileWriter_Nova_close,
&nova_io_Nova_FileWriter_0_Nova_construct,
&nova_io_Nova_FileWriter_1_Nova_construct,
},

{
0,
0,
},

{
0,
&nova_io_Nova_OutputStream_Nova_construct,
},

{
&nova_io_Nova_StreamReader_Nova_construct,
},

{
&nova_math_Nova_ArithmeticSequence_Nova_construct,
},

{
&nova_math_Nova_Diekstra_Nova_construct,
},

{
&nova_math_Nova_GeometricSequence_Nova_construct,
},

{
&nova_math_Nova_Graph_Nova_construct,
},

{
&nova_math_Nova_InvalidNumericStatementException_Nova_construct,
},

{
&nova_math_Nova_Math_Nova_construct,
},

{
&nova_math_Nova_Matrix_Nova_clone,
&nova_math_Nova_Matrix_Nova_inverse,
&nova_math_Nova_Matrix_Nova_swapRows,
&nova_math_Nova_Matrix_Nova_multiplyRow,
&nova_math_Nova_Matrix_Nova_addRow,
&nova_math_Nova_Matrix_Nova_subtractRow,
&nova_math_Nova_Matrix_Nova_add,
&nova_math_Nova_Matrix_Nova_subtract,
&nova_math_Nova_Matrix_Nova_transpose,
&nova_math_Nova_Matrix_Nova_determinant,
&nova_math_Nova_Matrix_Nova_get,
&nova_math_Nova_Matrix_Nova_set,
&nova_math_Nova_Matrix_0_Nova_construct,
&nova_math_Nova_Matrix_1_Nova_construct,
&nova_math_Nova_Matrix_2_Nova_construct,
},

{
&nova_math_Nova_NumericOperand_Nova_construct,
},

{
&nova_math_Nova_NumericOperation_0_Nova_construct,
&nova_math_Nova_NumericOperation_1_Nova_construct,
},

{
&nova_math_Nova_NumericStatement_Nova_construct,
},

{
&nova_math_Nova_NumericTree_Nova_construct,
},

{
&nova_math_Nova_Polynomial_Nova_construct,
},

{
&nova_math_Nova_Sequence_Nova_construct,
},

{
&nova_math_Nova_Statement_Nova_construct,
},

{
&nova_math_Nova_StatementComponent_Nova_construct,
},

{
&nova_math_Nova_VariableOperand_Nova_construct,
},

{
0,
&nova_math_Nova_Vector_Nova_innerProduct,
&nova_math_Nova_Vector_Nova_scale,
&nova_math_Nova_Vector_Nova_normalize,
&nova_math_Nova_Vector_0_Nova_construct,
&nova_math_Nova_Vector_1_Nova_construct,
},

{
&nova_math_Nova_Vector2D_0_Nova_construct,
&nova_math_Nova_Vector2D_1_Nova_construct,
},

{
&nova_math_Nova_Vector3D_Nova_crossProduct,
&nova_math_Nova_Vector3D_0_Nova_construct,
&nova_math_Nova_Vector3D_1_Nova_construct,
},

{
&nova_math_Nova_Vector4D_0_Nova_construct,
&nova_math_Nova_Vector4D_1_Nova_construct,
},

{
&nova_math_calculus_Nova_Calculus_Nova_construct,
},

{
&nova_math_huffman_Nova_HuffmanTree_Nova_construct,
},

{
&nova_math_logic_Nova_Conclusion_Nova_construct,
},

{
&nova_math_logic_Nova_Hypothesis_Nova_construct,
},

{
&nova_math_logic_Nova_InvalidFormulaException_Nova_construct,
},

{
&nova_math_logic_Nova_LogicalConnective_Nova_construct,
},

{
&nova_math_logic_Nova_LogicalStatement_Nova_construct,
},

{
&nova_math_logic_Nova_StatementComponent_Nova_construct,
},

{
&nova_math_logic_Nova_StatementGroup_Nova_construct,
},

{
&nova_math_logic_Nova_StatementLetter_Nova_construct,
},

{
&nova_math_logic_Nova_WFF_Nova_construct,
},

{
&nova_meta_Nova_Field_Nova_construct,
},

{
&nova_meta_Nova_GenericArgument_Nova_construct,
},

{
&nova_meta_Nova_GenericParameter_Nova_construct,
},

{
&nova_meta_Nova_Type_Nova_construct,
},

{
&nova_network_Nova_ClientSocket_Nova_connect,
&nova_network_Nova_ClientSocket_Nova_close,
&nova_network_Nova_ClientSocket_Nova_construct,
},

{
&nova_network_Nova_ConnectionSocket_Nova_close,
&nova_network_Nova_ConnectionSocket_Nova_validateConnection,
&nova_network_Nova_ConnectionSocket_0_Nova_readString,
&nova_network_Nova_ConnectionSocket_Nova_write,
&nova_network_Nova_ConnectionSocket_Nova_construct,
},

{
&nova_network_Nova_NetworkInputStream_Nova_construct,
},

{
&nova_network_Nova_NetworkOutputStream_0_Nova_write,
&nova_network_Nova_NetworkOutputStream_Nova_construct,
},

{
&nova_network_Nova_ServerSocket_Nova_start,
&nova_network_Nova_ServerSocket_Nova_close,
&nova_network_Nova_ServerSocket_Nova_acceptClient,
&nova_network_Nova_ServerSocket_Nova_construct,
},

{
&nova_network_Nova_Socket_Nova_construct,
},

{
0,
},

{
0,
},

{
&nova_primitive_Nova_Bool_Nova_compareTo,
&nova_primitive_Nova_Bool_Nova_construct,
},

{
&nova_primitive_Nova_Null_Nova_construct,
},

{
&nova_primitive_Nova_Primitive_Nova_construct,
},

{
&nova_primitive_number_Nova_Byte_Nova_construct,
},

{
&nova_primitive_number_Nova_Char_Nova_toLowerCase,
&nova_primitive_number_Nova_Char_Nova_toUpperCase,
&nova_primitive_number_Nova_Char_Nova_construct,
},

{
&nova_primitive_number_Nova_Double_Nova_compareTo,
&nova_primitive_number_Nova_Double_Nova_construct,
},

{
&nova_primitive_number_Nova_Float_Nova_compareTo,
&nova_primitive_number_Nova_Float_Nova_construct,
},

{
&nova_primitive_number_Nova_Int_Nova_construct,
},

{
},

{
&nova_primitive_number_Nova_Long_Nova_compareTo,
&nova_primitive_number_Nova_Long_Nova_construct,
},

{
&nova_primitive_number_Nova_Number_Nova_construct,
},

{
},

{
&nova_primitive_number_Nova_Short_Nova_construct,
},

{
&nova_process_Nova_Process_Nova_construct,
},

{
&nova_regex_Nova_Match_Nova_construct,
},

{
&nova_regex_Nova_Pattern_Nova_construct,
},

{
&nova_regex_Nova_Regex_Nova_construct,
},

{
&nova_security_Nova_MD5_Nova_construct,
},

{
&nova_security_Nova_Sha256_Nova_digest,
&nova_security_Nova_Sha256_Nova_construct,
},

{
&nova_star_Nova_Frame_Nova_construct,
},

{
&nova_star_Nova_Window_Nova_create,
&nova_star_Nova_Window_Nova_construct,
},

{
&nova_star_Nova_WindowThread_Nova_construct,
},

{
&nova_thread_Nova_Thread_Nova_start,
&nova_thread_Nova_Thread_Nova_join,
&nova_thread_Nova_Thread_Nova_kill,
0,
&nova_thread_Nova_Thread_Nova_construct,
},

{
&nova_thread_Nova_UncaughtExceptionHandler_Nova_uncaughtException,
&nova_thread_Nova_UncaughtExceptionHandler_Nova_construct,
},

{
&nova_thread_async_Nova_Async_Nova_construct,
},

{
&nova_thread_async_Nova_AsyncResult_Nova_construct,
},

{
&nova_time_Nova_CumulativeTimer_Nova_construct,
},

{
&nova_time_Nova_Date_Nova_decodeDate,
&nova_time_Nova_Date_Nova_updateTime,
&nova_time_Nova_Date_Nova_formatDate,
&nova_time_Nova_Date_Nova_construct,
},

{
&nova_time_Nova_Time_Nova_construct,
},

{
&nova_time_Nova_Timer_Nova_start,
0,
&nova_time_Nova_Timer_Nova_reset,
&nova_time_Nova_Timer_Nova_construct,
},

{
&nova_web_js_json_Nova_Json_Nova_construct,
},

{
&nova_web_svg_Nova_Svg_Nova_generateOutput,
&nova_web_svg_Nova_Svg_Nova_generateHTMLOutput,
&nova_web_svg_Nova_Svg_Nova_construct,
},

{
&nova_web_svg_Nova_SvgCircle_Nova_generateOutput,
&nova_web_svg_Nova_SvgCircle_Nova_construct,
},

{
0,
&nova_web_svg_Nova_SvgComponent_Nova_construct,
},

{
&nova_web_svg_Nova_SvgComponentList_Nova_generateOutput,
&nova_web_svg_Nova_SvgComponentList_Nova_addChild,
&nova_web_svg_Nova_SvgComponentList_Nova_construct,
},

{
&nova_web_svg_Nova_SvgComponentNode_Nova_construct,
},

{
&nova_web_svg_Nova_SvgMainComponent_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3_Nova_construct,
},

{
0,
&nova_web_svg_no3_Nova_No3Node_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3Select_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3SelectAll_Nova_construct,
},

{
0,
0,
0,
&example_Nova_Animal_Nova_construct,
},

{
&example_Nova_ArrayDemo_Nova_construct,
},

{
&example_Nova_BodyBuilder_Nova_construct,
},

{
&example_Nova_ClosureDemo_Nova_construct,
},

{
&example_Nova_Dog_Nova_construct,
},

{
&example_Nova_ExceptionHandlingDemo_Nova_construct,
},

{
&example_Nova_FileTest_Nova_construct,
},

{
&example_Nova_GenericDemo_Nova_construct,
},

{
&example_Nova_HashMapDemo_Nova_construct,
},

{
&example_Nova_HashSetDemo_Nova_construct,
},

{
&example_Nova_IntegerTest_Nova_construct,
},

{
&example_Nova_Lab_Nova_construct,
},

{
&example_Nova_MathDemo_Nova_construct,
},

{
&example_Nova_NonWholeDivisionException_Nova_construct,
},

{
0,
&example_Nova_Person_Nova_construct,
},

{
0,
0,
},

{
&example_Nova_PolymorphismDemo_Nova_construct,
},

{
&example_Nova_QueueDemo_Nova_construct,
},

{
&example_Nova_Spider_Nova_construct,
},

{
&example_Nova_Square_Nova_construct,
},

{
&example_Nova_SvgChart_Nova_construct,
},

{
&example_Nova_SvgFractal_Nova_construct,
},

{
&example_Nova_T1_Nova_construct,
},

{
&example_Nova_T2_Nova_construct,
},

{
&example_Nova_Test_Nova_construct,
},

{
&example_Nova_ThreadDemo_Nova_construct,
},

{
&example_Nova_ThreadDemoImplementation_Nova_construct,
},

{
&example_ackermann_Nova_Ackermann_Nova_construct,
},

{
&example_copy_Nova_Dog_Nova_construct,
},

{
&example_database_Nova_DatabaseDemo_Nova_construct,
},

{
&example_network_Nova_ClientDemo_Nova_construct,
},

{
&example_network_Nova_ConnectionThread_Nova_construct,
},

{
&example_network_Nova_OutputThread_Nova_construct,
},

{
&example_network_Nova_ServerDemo_Nova_construct,
},

};
