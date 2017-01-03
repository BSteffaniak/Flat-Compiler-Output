#include "NovaNativeInterface.h"

nova_env novaEnv = {
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
&nova_Nova_nova_StringFunctionMap_Nova_construct,
},

{
&nova_Nova_Substring_Nova_construct,
},
{
&nova_Nova_nova_SubstringFunctionMap_Nova_construct,
},

{
&nova_Nova_System_Nova_construct,
},
{
&nova_Nova_nova_SystemFunctionMap_Nova_construct,
},

{
&nova_ar_Nova_ImageTracker_Nova_construct,
},
{
&nova_ar_Nova_nova_ar_ImageTrackerFunctionMap_Nova_construct,
},

{
&nova_ar_Nova_TrackPoint_Nova_construct,
},
{
&nova_ar_Nova_nova_ar_TrackPointFunctionMap_Nova_construct,
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
&nova_database_Nova_nova_database_DBConnectorFunctionMap_Nova_construct,
},

{
&nova_database_Nova_ResultSet_Nova_construct,
},
{
&nova_database_Nova_nova_database_ResultSetFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_BinaryNode_Nova_addChild,
&nova_datastruct_Nova_BinaryNode_0_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_BinaryNodeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_BinaryTree_Nova_addNode,
&nova_datastruct_Nova_BinaryTree_Nova_addNodes,
&nova_datastruct_Nova_BinaryTree_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_BinaryTreeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Bounds_Nova_extractString,
&nova_datastruct_Nova_Bounds_Nova_extractPreString,
&nova_datastruct_Nova_Bounds_Nova_extractPostString,
&nova_datastruct_Nova_Bounds_Nova_trimString,
&nova_datastruct_Nova_Bounds_Nova_invalidate,
&nova_datastruct_Nova_Bounds_Nova_cloneTo,
&nova_datastruct_Nova_Bounds_Nova_clone,
&nova_datastruct_Nova_Bounds_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_BoundsFunctionMap_Nova_construct,
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
&nova_datastruct_Nova_nova_datastruct_HashMapFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_HashSet_Nova_add,
&nova_datastruct_Nova_HashSet_Nova_get,
&nova_datastruct_Nova_HashSet_Nova_remove,
&nova_datastruct_Nova_HashSet_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_HashSetFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_ImmutableHashMap_Nova_containsKey,
&nova_datastruct_Nova_ImmutableHashMap_Nova_get,
&nova_datastruct_Nova_ImmutableHashMap_Nova_set,
&nova_datastruct_Nova_ImmutableHashMap_0_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Node_0_Nova_preorder,
&nova_datastruct_Nova_Node_0_Nova_inorder,
&nova_datastruct_Nova_Node_0_Nova_postorder,
&nova_datastruct_Nova_Node_0_Nova_levelorder,
&nova_datastruct_Nova_Node_Nova_get,
&nova_datastruct_Nova_Node_Nova_set,
&nova_datastruct_Nova_Node_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_NodeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Pair_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_PairFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_ReversibleHashMap_Nova_getKey,
&nova_datastruct_Nova_ReversibleHashMap_Nova_getValue,
&nova_datastruct_Nova_ReversibleHashMap_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_ReversibleHashMapFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tree_Nova_preorder,
&nova_datastruct_Nova_Tree_Nova_inorder,
&nova_datastruct_Nova_Tree_Nova_postorder,
&nova_datastruct_Nova_Tree_Nova_levelorder,
&nova_datastruct_Nova_Tree_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_TreeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tuple_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_TupleFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tuple2_Nova_construct,
},
{
&nova_datastruct_Nova_nova_datastruct_Tuple2FunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_Array_Nova_fillRemaining,
&nova_datastruct_list_Nova_Array_Nova_addAll,
0,
&nova_datastruct_list_Nova_Array_0_Nova_add,
&nova_datastruct_list_Nova_Array_1_Nova_add,
&nova_datastruct_list_Nova_Array_0_Nova_remove,
&nova_datastruct_list_Nova_Array_1_Nova_remove,
&nova_datastruct_list_Nova_Array_Nova_indexOf,
&nova_datastruct_list_Nova_Array_Nova_replace,
&nova_datastruct_list_Nova_Array_Nova_swap,
0,
0,
&nova_datastruct_list_Nova_Array_Nova_sumSize,
&nova_datastruct_list_Nova_Array_0_Nova_mergeSort,
&nova_datastruct_list_Nova_Array_0_Nova_quickSort,
&nova_datastruct_list_Nova_Array_1_Nova_mergeSort,
&nova_datastruct_list_Nova_Array_1_Nova_quickSort,
&nova_datastruct_list_Nova_Array_Nova_sort,
&nova_datastruct_list_Nova_Array_Nova_toImmutable,
0,
0,
&nova_datastruct_list_Nova_Array_0_Nova_construct,
&nova_datastruct_list_Nova_Array_1_Nova_construct,
&nova_datastruct_list_Nova_Array_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_ArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_ArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_CharArray_Nova_sum,
&nova_datastruct_list_Nova_CharArray_Nova_reduce,
&nova_datastruct_list_Nova_CharArray_0_Nova_construct,
&nova_datastruct_list_Nova_CharArray_1_Nova_construct,
&nova_datastruct_list_Nova_CharArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_CharArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_CharArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_CharArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_CharArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_CompiledList_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_CompiledListFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_DoubleArray_Nova_sum,
&nova_datastruct_list_Nova_DoubleArray_0_Nova_construct,
&nova_datastruct_list_Nova_DoubleArray_1_Nova_construct,
&nova_datastruct_list_Nova_DoubleArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_DoubleArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_DoubleArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_EmptyStackException_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_EmptyStackExceptionFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableArray_Nova_indexOf,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_add,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_add,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_remove,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_remove,
&nova_datastruct_list_Nova_ImmutableArray_Nova_toMutable,
&nova_datastruct_list_Nova_ImmutableArray_Nova_get,
&nova_datastruct_list_Nova_ImmutableArray_Nova_set,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_construct,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct,
&nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_toMutable,
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_get,
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_set,
&nova_datastruct_list_Nova_ImmutableCharArray_0_Nova_construct,
&nova_datastruct_list_Nova_ImmutableCharArray_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntArray_0_Nova_construct,
&nova_datastruct_list_Nova_IntArray_1_Nova_construct,
&nova_datastruct_list_Nova_IntArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_IntArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_IntArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_IntArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntRange_Nova_forEach,
&nova_datastruct_list_Nova_IntRange_0_Nova_construct,
&nova_datastruct_list_Nova_IntRange_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_IntRangeFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntRangeIterator_Nova_reset,
&nova_datastruct_list_Nova_IntRangeIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_IntRangeIteratorFunctionMap_Nova_construct,
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
&nova_datastruct_list_Nova_nova_datastruct_list_LinkedListFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_LinkedListIterator_Nova_reset,
&nova_datastruct_list_Nova_LinkedListIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_LinkedListIteratorFunctionMap_Nova_construct,
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
&nova_datastruct_list_Nova_nova_datastruct_list_ListNodeFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_NoSuchElementException_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_NoSuchElementExceptionFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_OrderedList_Nova_findIndex,
},

{
&nova_datastruct_list_Nova_Queue_Nova_dequeue,
&nova_datastruct_list_Nova_Queue_Nova_enqueue,
&nova_datastruct_list_Nova_Queue_0_Nova_construct,
&nova_datastruct_list_Nova_Queue_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_QueueFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_Stack_Nova_push,
&nova_datastruct_list_Nova_Stack_Nova_pop,
&nova_datastruct_list_Nova_Stack_Nova_peek,
&nova_datastruct_list_Nova_Stack_0_Nova_construct,
&nova_datastruct_list_Nova_Stack_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_StringCharArray_0_Nova_construct,
&nova_datastruct_list_Nova_StringCharArray_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_StringCharArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_SubstringCharArray_Nova_construct,
},
{
&nova_datastruct_list_Nova_nova_datastruct_list_SubstringCharArrayFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_Backtraces_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_BacktracesFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_CaughtException_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_CaughtExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_DivideByZeroException_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_DivideByZeroExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_Exception_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_ExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_ExceptionData_Nova_addCaught,
&nova_exception_Nova_ExceptionData_Nova_throwException,
&nova_exception_Nova_ExceptionData_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_ExceptionDataFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_InvalidArgumentException_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_InvalidArgumentExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_InvalidOperationException_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_InvalidOperationExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_UnimplementedOperationException_Nova_construct,
},
{
&nova_exception_Nova_nova_exception_UnimplementedOperationExceptionFunctionMap_Nova_construct,
},

{
&nova_gc_Nova_GC_Nova_construct,
},
{
&nova_gc_Nova_nova_gc_GCFunctionMap_Nova_construct,
},

{
&nova_io_Nova_Console_Nova_construct,
},
{
&nova_io_Nova_nova_io_ConsoleFunctionMap_Nova_construct,
},

{
&nova_io_Nova_File_Nova_getChildFiles,
&nova_io_Nova_File_Nova_directoryContents,
&nova_io_Nova_File_Nova_listFiles,
&nova_io_Nova_File_1_Nova_construct,
},
{
&nova_io_Nova_nova_io_FileFunctionMap_Nova_construct,
},

{
&nova_io_Nova_FileNotFoundException_Nova_construct,
},
{
&nova_io_Nova_nova_io_FileNotFoundExceptionFunctionMap_Nova_construct,
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
&nova_io_Nova_nova_io_FileReaderFunctionMap_Nova_construct,
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
&nova_io_Nova_nova_io_FileWriterFunctionMap_Nova_construct,
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
&nova_io_Nova_nova_io_OutputStreamFunctionMap_Nova_construct,
},

{
&nova_io_Nova_StreamReader_Nova_construct,
},
{
&nova_io_Nova_nova_io_StreamReaderFunctionMap_Nova_construct,
},

{
&nova_math_Nova_ArithmeticSequence_Nova_construct,
},
{
&nova_math_Nova_nova_math_ArithmeticSequenceFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Diekstra_Nova_construct,
},
{
&nova_math_Nova_nova_math_DiekstraFunctionMap_Nova_construct,
},

{
&nova_math_Nova_GeometricSequence_Nova_construct,
},
{
&nova_math_Nova_nova_math_GeometricSequenceFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Graph_Nova_construct,
},
{
&nova_math_Nova_nova_math_GraphFunctionMap_Nova_construct,
},

{
&nova_math_Nova_InvalidNumericStatementException_Nova_construct,
},
{
&nova_math_Nova_nova_math_InvalidNumericStatementExceptionFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Math_Nova_construct,
},
{
&nova_math_Nova_nova_math_MathFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Matrix_Nova_clone,
&nova_math_Nova_Matrix_Nova_inverse,
&nova_math_Nova_Matrix_Nova_swapRows,
&nova_math_Nova_Matrix_Nova_multiplyRow,
&nova_math_Nova_Matrix_Nova_addRow,
&nova_math_Nova_Matrix_Nova_subtractRow,
&nova_math_Nova_Matrix_Nova_add,
&nova_math_Nova_Matrix_1_Nova_plus,
&nova_math_Nova_Matrix_Nova_subtract,
&nova_math_Nova_Matrix_0_Nova_minus,
&nova_math_Nova_Matrix_1_Nova_minus,
&nova_math_Nova_Matrix_Nova_transpose,
&nova_math_Nova_Matrix_Nova_determinant,
&nova_math_Nova_Matrix_Nova_get,
&nova_math_Nova_Matrix_Nova_set,
&nova_math_Nova_Matrix_0_Nova_construct,
&nova_math_Nova_Matrix_1_Nova_construct,
&nova_math_Nova_Matrix_2_Nova_construct,
},
{
&nova_math_Nova_nova_math_MatrixFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericOperand_Nova_construct,
},
{
&nova_math_Nova_nova_math_NumericOperandFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericOperation_0_Nova_construct,
&nova_math_Nova_NumericOperation_1_Nova_construct,
},
{
&nova_math_Nova_nova_math_NumericOperationFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericStatement_Nova_construct,
},
{
&nova_math_Nova_nova_math_NumericStatementFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericTree_Nova_construct,
},
{
&nova_math_Nova_nova_math_NumericTreeFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Polynomial_Nova_construct,
},
{
&nova_math_Nova_nova_math_PolynomialFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Sequence_Nova_construct,
},
{
&nova_math_Nova_nova_math_SequenceFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Statement_Nova_construct,
},
{
&nova_math_Nova_nova_math_StatementFunctionMap_Nova_construct,
},

{
&nova_math_Nova_StatementComponent_Nova_construct,
},
{
&nova_math_Nova_nova_math_StatementComponentFunctionMap_Nova_construct,
},

{
&nova_math_Nova_VariableOperand_Nova_construct,
},
{
&nova_math_Nova_nova_math_VariableOperandFunctionMap_Nova_construct,
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
&nova_math_Nova_nova_math_VectorFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Vector2D_0_Nova_construct,
&nova_math_Nova_Vector2D_1_Nova_construct,
},
{
&nova_math_Nova_nova_math_Vector2DFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Vector3D_Nova_crossProduct,
&nova_math_Nova_Vector3D_0_Nova_construct,
&nova_math_Nova_Vector3D_1_Nova_construct,
},
{
&nova_math_Nova_nova_math_Vector3DFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Vector4D_0_Nova_construct,
&nova_math_Nova_Vector4D_1_Nova_construct,
},
{
&nova_math_Nova_nova_math_Vector4DFunctionMap_Nova_construct,
},

{
&nova_math_calculus_Nova_Calculus_Nova_construct,
},
{
&nova_math_calculus_Nova_nova_math_calculus_CalculusFunctionMap_Nova_construct,
},

{
&nova_math_huffman_Nova_HuffmanTree_Nova_construct,
},
{
&nova_math_huffman_Nova_nova_math_huffman_HuffmanTreeFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_Conclusion_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_ConclusionFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_Hypothesis_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_HypothesisFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_InvalidFormulaException_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_InvalidFormulaExceptionFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_LogicalConnective_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_LogicalConnectiveFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_LogicalStatement_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_LogicalStatementFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_StatementComponent_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_StatementComponentFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_StatementGroup_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_StatementGroupFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_StatementLetter_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_StatementLetterFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_WFF_Nova_construct,
},
{
&nova_math_logic_Nova_nova_math_logic_WFFFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_Class_Nova_isOfType,
&nova_meta_Nova_Class_Nova_construct,
},
{
&nova_meta_Nova_nova_meta_ClassFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_Field_Nova_construct,
},
{
&nova_meta_Nova_nova_meta_FieldFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_FunctionMap_Nova_construct,
},
{
&nova_meta_Nova_nova_meta_FunctionMapFunctionMap_Nova_construct,
},
{
&nova_meta_Nova_ModifierFdunctionMap_Nova_construct,
},

{
&nova_meta_Nova_GenericArgument_Nova_construct,
},
{
&nova_meta_Nova_nova_meta_GenericArgumentFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_GenericParameter_Nova_construct,
},
{
&nova_meta_Nova_nova_meta_GenericParameterFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_Type_Nova_construct,
},
{
&nova_meta_Nova_nova_meta_TypeFunctionMap_Nova_construct,
},

{
&nova_network_Nova_ClientSocket_Nova_connect,
&nova_network_Nova_ClientSocket_Nova_close,
&nova_network_Nova_ClientSocket_Nova_construct,
},
{
&nova_network_Nova_nova_network_ClientSocketFunctionMap_Nova_construct,
},

{
&nova_network_Nova_ConnectionSocket_Nova_close,
&nova_network_Nova_ConnectionSocket_Nova_validateConnection,
&nova_network_Nova_ConnectionSocket_0_Nova_readString,
&nova_network_Nova_ConnectionSocket_Nova_write,
&nova_network_Nova_ConnectionSocket_Nova_construct,
},
{
&nova_network_Nova_nova_network_ConnectionSocketFunctionMap_Nova_construct,
},

{
&nova_network_Nova_NetworkInputStream_Nova_construct,
},
{
&nova_network_Nova_nova_network_NetworkInputStreamFunctionMap_Nova_construct,
},

{
&nova_network_Nova_NetworkOutputStream_0_Nova_write,
&nova_network_Nova_NetworkOutputStream_Nova_construct,
},
{
&nova_network_Nova_nova_network_NetworkOutputStreamFunctionMap_Nova_construct,
},

{
&nova_network_Nova_ServerSocket_Nova_start,
&nova_network_Nova_ServerSocket_Nova_close,
&nova_network_Nova_ServerSocket_Nova_acceptClient,
&nova_network_Nova_ServerSocket_Nova_construct,
},
{
&nova_network_Nova_nova_network_ServerSocketFunctionMap_Nova_construct,
},

{
&nova_network_Nova_Socket_Nova_construct,
},
{
&nova_network_Nova_nova_network_SocketFunctionMap_Nova_construct,
},

{
0,
},

{
},

{
0,
},

{
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
&nova_primitive_Nova_nova_primitive_BoolFunctionMap_Nova_construct,
},

{
&nova_primitive_Nova_Null_Nova_construct,
},
{
&nova_primitive_Nova_nova_primitive_NullFunctionMap_Nova_construct,
},

{
&nova_primitive_Nova_Primitive_Nova_construct,
},
{
&nova_primitive_Nova_nova_primitive_PrimitiveFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Byte_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_ByteFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Char_Nova_toLowerCase,
&nova_primitive_number_Nova_Char_Nova_toUpperCase,
&nova_primitive_number_Nova_Char_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_CharFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Double_Nova_compareTo,
&nova_primitive_number_Nova_Double_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_DoubleFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Float_Nova_compareTo,
&nova_primitive_number_Nova_Float_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_FloatFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Int_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_IntFunctionMap_Nova_construct,
},

{
},

{
&nova_primitive_number_Nova_Long_Nova_compareTo,
&nova_primitive_number_Nova_Long_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_LongFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Number_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_NumberFunctionMap_Nova_construct,
},

{
},

{
&nova_primitive_number_Nova_Short_Nova_construct,
},
{
&nova_primitive_number_Nova_nova_primitive_number_ShortFunctionMap_Nova_construct,
},

{
&nova_process_Nova_Process_Nova_construct,
},
{
&nova_process_Nova_nova_process_ProcessFunctionMap_Nova_construct,
},

{
&nova_regex_Nova_Match_Nova_construct,
},
{
&nova_regex_Nova_nova_regex_MatchFunctionMap_Nova_construct,
},

{
&nova_regex_Nova_Pattern_Nova_construct,
},
{
&nova_regex_Nova_nova_regex_PatternFunctionMap_Nova_construct,
},

{
&nova_regex_Nova_Regex_Nova_construct,
},
{
&nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_construct,
},

{
&nova_security_Nova_MD5_Nova_construct,
},
{
&nova_security_Nova_nova_security_MD5FunctionMap_Nova_construct,
},

{
&nova_security_Nova_Sha256_Nova_digest,
&nova_security_Nova_Sha256_Nova_construct,
},
{
&nova_security_Nova_nova_security_Sha256FunctionMap_Nova_construct,
},

{
&nova_star_Nova_Frame_Nova_construct,
},
{
&nova_star_Nova_nova_star_FrameFunctionMap_Nova_construct,
},

{
&nova_star_Nova_Window_Nova_create,
&nova_star_Nova_Window_Nova_construct,
},
{
&nova_star_Nova_nova_star_WindowFunctionMap_Nova_construct,
},

{
&nova_star_Nova_WindowThread_Nova_construct,
},
{
&nova_star_Nova_nova_star_WindowThreadFunctionMap_Nova_construct,
},

{
&nova_thread_Nova_Thread_Nova_start,
&nova_thread_Nova_Thread_Nova_join,
&nova_thread_Nova_Thread_Nova_kill,
0,
&nova_thread_Nova_Thread_0_Nova_construct,
&nova_thread_Nova_Thread_1_Nova_construct,
},
{
&nova_thread_Nova_nova_thread_ThreadFunctionMap_Nova_construct,
},

{
0,
&nova_thread_Nova_UncaughtExceptionHandler_Nova_construct,
},
{
&nova_thread_Nova_nova_thread_UncaughtExceptionHandlerFunctionMap_Nova_construct,
},

{
&nova_thread_async_Nova_Async_Nova_construct,
},
{
&nova_thread_async_Nova_nova_thread_async_AsyncFunctionMap_Nova_construct,
},

{
&nova_thread_async_Nova_Task_Nova_waitForCompletion,
&nova_thread_async_Nova_Task_Nova_waitForResult,
&nova_thread_async_Nova_Task_Nova_construct,
},
{
&nova_thread_async_Nova_nova_thread_async_TaskFunctionMap_Nova_construct,
},

{
&nova_time_Nova_CumulativeTimer_Nova_construct,
},
{
&nova_time_Nova_nova_time_CumulativeTimerFunctionMap_Nova_construct,
},

{
&nova_time_Nova_Date_Nova_decodeDate,
&nova_time_Nova_Date_Nova_updateTime,
&nova_time_Nova_Date_Nova_formatDate,
&nova_time_Nova_Date_Nova_construct,
},
{
&nova_time_Nova_nova_time_DateFunctionMap_Nova_construct,
},

{
&nova_time_Nova_Time_Nova_construct,
},
{
&nova_time_Nova_nova_time_TimeFunctionMap_Nova_construct,
},

{
&nova_time_Nova_Timer_Nova_start,
0,
&nova_time_Nova_Timer_Nova_reset,
&nova_time_Nova_Timer_Nova_construct,
},
{
&nova_time_Nova_nova_time_TimerFunctionMap_Nova_construct,
},

{
&nova_web_js_json_Nova_Json_Nova_construct,
},
{
&nova_web_js_json_Nova_nova_web_js_json_JsonFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_Svg_Nova_generateOutput,
&nova_web_svg_Nova_Svg_Nova_generateHTMLOutput,
&nova_web_svg_Nova_Svg_Nova_construct,
},
{
&nova_web_svg_Nova_nova_web_svg_SvgFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgCircle_Nova_generateOutput,
&nova_web_svg_Nova_SvgCircle_Nova_construct,
},
{
&nova_web_svg_Nova_nova_web_svg_SvgCircleFunctionMap_Nova_construct,
},

{
0,
&nova_web_svg_Nova_SvgComponent_Nova_construct,
},
{
&nova_web_svg_Nova_nova_web_svg_SvgComponentFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgComponentList_Nova_generateOutput,
&nova_web_svg_Nova_SvgComponentList_Nova_addChild,
&nova_web_svg_Nova_SvgComponentList_Nova_construct,
},
{
&nova_web_svg_Nova_nova_web_svg_SvgComponentListFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgComponentNode_Nova_construct,
},
{
&nova_web_svg_Nova_nova_web_svg_SvgComponentNodeFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgMainComponent_Nova_construct,
},
{
&nova_web_svg_Nova_nova_web_svg_SvgMainComponentFunctionMap_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3_Nova_construct,
},
{
&nova_web_svg_no3_Nova_nova_web_svg_no3_No3FunctionMap_Nova_construct,
},

{
0,
&nova_web_svg_no3_Nova_No3Node_Nova_construct,
},
{
&nova_web_svg_no3_Nova_nova_web_svg_no3_No3NodeFunctionMap_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3Select_Nova_construct,
},
{
&nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectFunctionMap_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3SelectAll_Nova_construct,
},
{
&nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectAllFunctionMap_Nova_construct,
},

{
&spectra_Nova_InvalidParseException_Nova_construct,
},
{
&spectra_Nova_spectra_InvalidParseExceptionFunctionMap_Nova_construct,
},

{
&spectra_Nova_Spectra_Nova_compile,
&spectra_Nova_Spectra_Nova_construct,
},
{
&spectra_Nova_spectra_SpectraFunctionMap_Nova_construct,
},

{
&spectra_Nova_SyntaxErrorException_0_Nova_construct,
&spectra_Nova_SyntaxErrorException_1_Nova_construct,
},
{
&spectra_Nova_spectra_SyntaxErrorExceptionFunctionMap_Nova_construct,
},

{
&spectra_Nova_SyntaxMessage_Nova_construct,
},
{
&spectra_Nova_spectra_SyntaxMessageFunctionMap_Nova_construct,
},

{
&spectra_engines_Nova_CodeGeneratorEngine_Nova_construct,
},
{
&spectra_engines_Nova_spectra_engines_CodeGeneratorEngineFunctionMap_Nova_construct,
},

{
&spectra_error_Nova_UnimplementedOperationException_Nova_construct,
},
{
&spectra_error_Nova_spectra_error_UnimplementedOperationExceptionFunctionMap_Nova_construct,
},

{
&spectra_tree_Nova_AnnotationSearchResult_0_Nova_addTo,
&spectra_tree_Nova_AnnotationSearchResult_1_Nova_addTo,
&spectra_tree_Nova_AnnotationSearchResult_Nova_construct,
},
{
&spectra_tree_Nova_spectra_tree_AnnotationSearchResultFunctionMap_Nova_construct,
},

{
&spectra_tree_Nova_StatementIterator_Nova_reset,
&spectra_tree_Nova_StatementIterator_Nova_construct,
},
{
&spectra_tree_Nova_spectra_tree_StatementIteratorFunctionMap_Nova_construct,
},

{
&spectra_tree_Nova_SyntaxTree_Nova_processFiles,
&spectra_tree_Nova_SyntaxTree_Nova_formTree,
&spectra_tree_Nova_SyntaxTree_Nova_validateTypes,
&spectra_tree_Nova_SyntaxTree_Nova_parseStatements,
&spectra_tree_Nova_SyntaxTree_Nova_construct,
},
{
&spectra_tree_Nova_spectra_tree_SyntaxTreeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Abstractable_Nova_writeAbstract,
&spectra_tree_nodes_Nova_Abstractable_0_Nova_cloneTo,
},

{
&spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_Nova_getLastAccessed,
&spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode,
&spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode,
&spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo,
&spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes,
},

{
&spectra_tree_nodes_Nova_ArgumentList_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ArgumentListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Cast_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_CastFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_findCompatibleFunctions,
&spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ClassDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Identifier_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_IdentifierFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Import_Nova_getClassLocation,
&spectra_tree_nodes_Nova_Import_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ImportFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_ImportList_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ImportListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_InterfaceDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_InterfaceDeclarationFunctionMap_Nova_construct,
},

{
},

{
&spectra_tree_nodes_Nova_Literal_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_LiteralFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode,
&spectra_tree_nodes_Nova_Node_0_Nova_detach,
0,
&spectra_tree_nodes_Nova_Node_Nova_onAdded,
&spectra_tree_nodes_Nova_Node_Nova_onRemoved,
&spectra_tree_nodes_Nova_Node_Nova_onAfterDecoded,
&spectra_tree_nodes_Nova_Node_Nova_onNextStatementDecoded,
&spectra_tree_nodes_Nova_Node_Nova_onStackPopped,
&spectra_tree_nodes_Nova_Node_Nova_followedByScope,
&spectra_tree_nodes_Nova_Node_Nova_onChildReplaced,
&spectra_tree_nodes_Nova_Node_Nova_onReplaced,
&spectra_tree_nodes_Nova_Node_Nova_onChildDetached,
&spectra_tree_nodes_Nova_Node_Nova_validate,
0,
0,
0,
&spectra_tree_nodes_Nova_Node_Nova_clone,
0,
0,
0,
0,
0,
0,
&spectra_tree_nodes_Nova_Node_Nova_writeAnnotations,
0,
0,
&spectra_tree_nodes_Nova_Node_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_NodeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_NodeList_Nova_replace,
&spectra_tree_nodes_Nova_NodeList_Nova_addChild,
&spectra_tree_nodes_Nova_NodeList_Nova_containsChild,
&spectra_tree_nodes_Nova_NodeList_Nova_inheritChildren,
&spectra_tree_nodes_Nova_NodeList_0_Nova_removeChild,
&spectra_tree_nodes_Nova_NodeList_1_Nova_removeChild,
&spectra_tree_nodes_Nova_NodeList_Nova_slaughterChildren,
&spectra_tree_nodes_Nova_NodeList_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_NodeListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass,
&spectra_tree_nodes_Nova_NovaFile_Nova_addAutoImports,
&spectra_tree_nodes_Nova_NovaFile_Nova_addImport,
&spectra_tree_nodes_Nova_NovaFile_Nova_containsImport,
&spectra_tree_nodes_Nova_NovaFile_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_NovaFileFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_NumericRange_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_NumericRangeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Package_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_PackageFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeChildren,
&spectra_tree_nodes_Nova_PlaceholderValue_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_PlaceholderValueFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Priority_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_PriorityFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Program_Nova_addChild,
&spectra_tree_nodes_Nova_Program_Nova_getClassDeclaration,
&spectra_tree_nodes_Nova_Program_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ProgramFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Return_Nova_writeValue,
&spectra_tree_nodes_Nova_Return_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ReturnFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Scope_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ScopeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Skeleton_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_SkeletonFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_StaticClassReference_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_StaticClassReferenceFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_Nova_Type_Nova_writeArray,
&spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters,
&spectra_tree_nodes_Nova_Type_Nova_toNova,
&spectra_tree_nodes_Nova_Type_Nova_writeNova,
0,
&spectra_tree_nodes_Nova_Type_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_TypeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_ValidationResult_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ValidationResultFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_Nova_Value_Nova_invalidTypeError,
0,
&spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess,
&spectra_tree_nodes_Nova_Value_Nova_construct,
},
{
&spectra_tree_nodes_Nova_spectra_tree_nodes_ValueFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_AbstractAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap_Nova_construct,
},

{
0,
},

{
&spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied,
&spectra_tree_nodes_annotations_Nova_Annotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_AutoPureAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_FinalAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_ImmutableAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_ImpureAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply,
&spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier,
},

{
&spectra_tree_nodes_annotations_Nova_NativeAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_OverrideAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_PrivateAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_PureAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PureAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_StaticAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_TargetAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_VarAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VarAnnotationFunctionMap_Nova_construct,
},

{
},

{
&spectra_tree_nodes_annotations_Nova_VisibleAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse,
&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension,
&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct,
},
{
&spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_Nova_IfStatement_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_IfStatementFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_loops_Nova_Loop_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeException,
&spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_Try_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_TryFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_AccessorFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_AccessorFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeDimensions,
&spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_BodyFunction_Nova_writeBody,
&spectra_tree_nodes_functions_Nova_BodyFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_BodyFunctionFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations,
0,
&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments,
&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseName,
},

{
&spectra_tree_nodes_functions_Nova_Constructor_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ConstructorFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_FunctionArgumentList_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_functions_Nova_FunctionCall_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionCallFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parseSignature,
0,
&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeHeader,
&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_InitializationFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InitializationFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation,
&spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InstantiationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_MutatorFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_MutatorFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_writeChildren,
&spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_Parameter_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ParameterList_Nova_get,
&spectra_tree_nodes_functions_Nova_ParameterList_Nova_set,
&spectra_tree_nodes_functions_Nova_ParameterList_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_PropertyFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_PropertyFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_ClosureContext_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_ClosureParameter_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters,
&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_generics_Nova_GenericArgument_Nova_construct,
},
{
&spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericArgumentFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters,
&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters,
&spectra_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo,
},

{
&spectra_tree_nodes_generics_Nova_GenericParameter_Nova_construct,
},
{
&spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_generics_Nova_GenericType_0_Nova_construct,
&spectra_tree_nodes_generics_Nova_GenericType_1_Nova_construct,
},
{
&spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericTypeFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssignedTo,
},

{
&spectra_tree_nodes_operations_Nova_Assignment_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_AssignmentFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_ElvisOperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_Operation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_Operator_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperatorFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_TernaryOperation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_TernaryOperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_UnaryOperation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_UnaryOperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_ArrayBracketOverload_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeInitializationValue,
&spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeAccessorValue,
&spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_FieldDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeVisibility,
&spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeStatic,
&spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_LocalDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_Variable_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_0_Nova_parseModifiers,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers,
0,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableDeclarationFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_Bounds_Nova_extractString,
&spectra_util_Nova_Bounds_Nova_extractPreString,
&spectra_util_Nova_Bounds_Nova_extractPostString,
&spectra_util_Nova_Bounds_Nova_trimString,
&spectra_util_Nova_Bounds_Nova_invalidate,
&spectra_util_Nova_Bounds_Nova_cloneTo,
&spectra_util_Nova_Bounds_Nova_clone,
&spectra_util_Nova_Bounds_Nova_construct,
},
{
&spectra_util_Nova_spectra_util_BoundsFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_CompilerStringFunctions_Nova_getStatements,
&spectra_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter,
&spectra_util_Nova_CompilerStringFunctions_Nova_getArrayAccesses,
&spectra_util_Nova_CompilerStringFunctions_Nova_substring,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_nextWordBounds,
&spectra_util_Nova_CompilerStringFunctions_Nova_containsWord,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextWord,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceChar,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes,
&spectra_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_containsString,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString,
&spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar,
&spectra_util_Nova_CompilerStringFunctions_Nova_findEndingQuote,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch,
&spectra_util_Nova_CompilerStringFunctions_Nova_splitAtDotOperator,
&spectra_util_Nova_CompilerStringFunctions_Nova_splitValues,
&spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas,
&spectra_util_Nova_CompilerStringFunctions_Nova_findOperatorIndices,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_isStrictlyOperator,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findOperatorOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findCharOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_Nova_findWordOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd,
&spectra_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_nextWordBounds,
&spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols,
&spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedChars,
&spectra_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation,
&spectra_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator,
&spectra_util_Nova_CompilerStringFunctions_Nova_findStrings,
&spectra_util_Nova_CompilerStringFunctions_Nova_searchGenericType,
&spectra_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_formatIndentation,
},

{
&spectra_util_Nova_FileUtils_Nova_construct,
},
{
&spectra_util_Nova_spectra_util_FileUtilsFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_Location_Nova_setLineNumber,
&spectra_util_Nova_Location_Nova_getStart,
&spectra_util_Nova_Location_Nova_getEnd,
&spectra_util_Nova_Location_Nova_setOffset,
&spectra_util_Nova_Location_Nova_addOffset,
&spectra_util_Nova_Location_Nova_subtractOffset,
&spectra_util_Nova_Location_0_Nova_setBounds,
&spectra_util_Nova_Location_1_Nova_setBounds,
&spectra_util_Nova_Location_0_Nova_addBounds,
&spectra_util_Nova_Location_Nova_moveBounds,
&spectra_util_Nova_Location_0_Nova_subtractBounds,
&spectra_util_Nova_Location_1_Nova_subtractBounds,
&spectra_util_Nova_Location_1_Nova_addBounds,
&spectra_util_Nova_Location_Nova_isValid,
&spectra_util_Nova_Location_Nova_asNew,
&spectra_util_Nova_Location_0_Nova_construct,
&spectra_util_Nova_Location_1_Nova_construct,
&spectra_util_Nova_Location_2_Nova_construct,
},
{
&spectra_util_Nova_spectra_util_LocationFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_OS_func_Nova_construct,
},
{
&spectra_util_Nova_spectra_util_OSFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_SyntaxUtils_Nova_construct,
},
{
&spectra_util_Nova_spectra_util_SyntaxUtilsFunctionMap_Nova_construct,
},

{
0,
0,
0,
&example_Nova_Animal_Nova_construct,
},
{
&example_Nova_example_AnimalFunctionMap_Nova_construct,
},

{
&example_Nova_ArrayDemo_Nova_construct,
},
{
&example_Nova_example_ArrayDemoFunctionMap_Nova_construct,
},

{
&example_Nova_BodyBuilder_Nova_construct,
},
{
&example_Nova_example_BodyBuilderFunctionMap_Nova_construct,
},

{
&example_Nova_ClosureDemo_Nova_construct,
},
{
&example_Nova_example_ClosureDemoFunctionMap_Nova_construct,
},

{
&example_Nova_Dog_Nova_construct,
},
{
&example_Nova_example_DogFunctionMap_Nova_construct,
},

{
&example_Nova_ExceptionHandlingDemo_Nova_construct,
},
{
&example_Nova_example_ExceptionHandlingDemoFunctionMap_Nova_construct,
},

{
&example_Nova_FileTest_Nova_construct,
},
{
&example_Nova_example_FileTestFunctionMap_Nova_construct,
},

{
&example_Nova_GenericDemo_Nova_construct,
},
{
&example_Nova_example_GenericDemoFunctionMap_Nova_construct,
},

{
&example_Nova_HashMapDemo_Nova_construct,
},
{
&example_Nova_example_HashMapDemoFunctionMap_Nova_construct,
},

{
&example_Nova_HashSetDemo_Nova_construct,
},
{
&example_Nova_example_HashSetDemoFunctionMap_Nova_construct,
},

{
&example_Nova_IntegerTest_Nova_construct,
},
{
&example_Nova_example_IntegerTestFunctionMap_Nova_construct,
},

{
&example_Nova_Lab_Nova_construct,
},
{
&example_Nova_example_LabFunctionMap_Nova_construct,
},

{
&example_Nova_MathDemo_Nova_construct,
},
{
&example_Nova_example_MathDemoFunctionMap_Nova_construct,
},

{
&example_Nova_NonWholeDivisionException_Nova_construct,
},
{
&example_Nova_example_NonWholeDivisionExceptionFunctionMap_Nova_construct,
},

{
0,
&example_Nova_Person_Nova_construct,
},
{
&example_Nova_example_PersonFunctionMap_Nova_construct,
},

{
0,
0,
},

{
&example_Nova_PolymorphismDemo_Nova_construct,
},
{
&example_Nova_example_PolymorphismDemoFunctionMap_Nova_construct,
},

{
&example_Nova_QueueDemo_Nova_construct,
},
{
&example_Nova_example_QueueDemoFunctionMap_Nova_construct,
},

{
&example_Nova_Spider_Nova_construct,
},
{
&example_Nova_example_SpiderFunctionMap_Nova_construct,
},

{
&example_Nova_Square_Nova_construct,
},
{
&example_Nova_example_SquareFunctionMap_Nova_construct,
},

{
&example_Nova_SvgChart_Nova_construct,
},
{
&example_Nova_example_SvgChartFunctionMap_Nova_construct,
},

{
&example_Nova_SvgFractal_Nova_construct,
},
{
&example_Nova_example_SvgFractalFunctionMap_Nova_construct,
},

{
&example_Nova_T1_Nova_construct,
},
{
&example_Nova_example_T1FunctionMap_Nova_construct,
},

{
&example_Nova_T2_Nova_construct,
},
{
&example_Nova_example_T2FunctionMap_Nova_construct,
},

{
&example_Nova_Test_Nova_construct,
},
{
&example_Nova_example_TestFunctionMap_Nova_construct,
},

{
&example_Nova_ThreadDemo_Nova_construct,
},
{
&example_Nova_example_ThreadDemoFunctionMap_Nova_construct,
},

{
&example_Nova_ThreadDemoImplementation_Nova_construct,
},
{
&example_Nova_example_ThreadDemoImplementationFunctionMap_Nova_construct,
},

{
&example_ackermann_Nova_Ackermann_Nova_construct,
},
{
&example_ackermann_Nova_example_ackermann_AckermannFunctionMap_Nova_construct,
},

{
&example_copy_Nova_Dog_Nova_construct,
},
{
&example_copy_Nova_example_copy_DogFunctionMap_Nova_construct,
},

{
&example_database_Nova_DatabaseDemo_Nova_construct,
},
{
&example_database_Nova_example_database_DatabaseDemoFunctionMap_Nova_construct,
},

{
&example_network_Nova_ClientDemo_Nova_construct,
},
{
&example_network_Nova_example_network_ClientDemoFunctionMap_Nova_construct,
},

{
&example_network_Nova_ConnectionThread_Nova_construct,
},
{
&example_network_Nova_example_network_ConnectionThreadFunctionMap_Nova_construct,
},

{
&example_network_Nova_OutputThread_Nova_construct,
},
{
&example_network_Nova_example_network_OutputThreadFunctionMap_Nova_construct,
},

{
&example_network_Nova_ServerDemo_Nova_construct,
},
{
&example_network_Nova_example_network_ServerDemoFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_AssignmentStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_AssignmentStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ClassWithProperties_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ClassWithPropertiesFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ClientThread_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ClosureStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ClosureStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ExceptionStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ExceptionStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_FileStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_FileStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_LambdaStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_LambdaStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_NetworkStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_NetworkStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_Node_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_NodeFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_PolymorphicSubClass_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_PolymorphicSubClassFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_PolymorphicSuperClass_Nova_giveBirth,
&stabilitytest_Nova_PolymorphicSuperClass_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_PolymorphicSuperClassFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_PolymorphismStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_RegexStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_RegexStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_StabilityExceptionHandler_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_StabilityExceptionHandlerFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_StabilityTest_Nova_fail,
&stabilitytest_Nova_StabilityTest_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_StabilityTestFunctionMap_Nova_construct,
},

{
0,
&stabilitytest_Nova_StabilityTestCase_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_StabilityTestCaseFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_StabilityTestException_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_StabilityTestExceptionFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_StaticImportStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_StaticImportStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_SyntaxStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_SyntaxStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ThreadImplementation_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ThreadImplementationFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ThreadStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ThreadStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_TimeStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_TimeStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_ToStringStability_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_ToStringStabilityFunctionMap_Nova_construct,
},

{
&stabilitytest_Nova_UnstableException_Nova_construct,
},
{
&stabilitytest_Nova_stabilitytest_UnstableExceptionFunctionMap_Nova_construct,
},

};
