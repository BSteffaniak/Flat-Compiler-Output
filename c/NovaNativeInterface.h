#ifndef NOVA_NATIVE_INTERFACE
#define NOVA_NATIVE_INTERFACE

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
#include <nova/operators/nova_operators_Nova_Equals.h>
#include <nova/operators/nova_operators_Nova_Multiply.h>
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
#include <nova/thread/async/nova_thread_async_Nova_AsyncResult.h>
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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_Spectra.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/engines/spectra_engines_Nova_CodeGeneratorEngine.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/spectra_tree_Nova_AnnotationSearchResult.h>
#include <spectra/tree/spectra_tree_Nova_StatementIterator.h>
#include <spectra/tree/spectra_tree_Nova_SyntaxTree.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Abstractable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ArgumentList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ImportList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_InterfaceDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Listener.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Package.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Return.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Skeleton.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_NativeAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_OverrideAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_TargetAnnotation.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ControlStructure.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ElseStatement.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_IfStatement.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_Loop.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Catch.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Throw.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_AccessorFunction.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_BodyFunction.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_CallableFunction.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_InitializationFunction.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_MutatorFunction.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotationProperty.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Parameter.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_PropertyFunction.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureContext.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureParameter.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaParameter.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericArgument.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericType.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignment.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operator.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_ArrayBracketOverload.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_FieldDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_ImplicitDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/util/spectra_util_Nova_Bounds.h>
#include <spectra/util/spectra_util_Nova_CompilerStringFunctions.h>
#include <spectra/util/spectra_util_Nova_FileUtils.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/util/spectra_util_Nova_OS.h>
#include <spectra/util/spectra_util_Nova_SyntaxUtils.h>

typedef char (*nova_Nova_Class_native_Nova_isOfType)(nova_Nova_Class*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*);
typedef nova_Nova_Class* (*nova_Nova_Class_native_Nova_construct)(nova_Nova_Class*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char);

typedef struct nova_native_Class
{
nova_Nova_Class_native_Nova_isOfType isOfType;
nova_Nova_Class_native_Nova_construct Class;
} nova_native_Class;

typedef nova_Nova_String* (*nova_Nova_Object_native_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_Nova_Object_native_Nova_construct)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);

typedef struct nova_native_Object
{
nova_Nova_Object_native_Nova_toString toString;
nova_Nova_Object_native_Nova_construct Object;
} nova_native_Object;

typedef nova_Nova_String* (*nova_Nova_String_native_Nova_concat)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_repeat)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_String* (*nova_Nova_String_native0_Nova_replace)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native1_Nova_replace)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
typedef char (*nova_Nova_String_native0_Nova_startsWith)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char);
typedef char (*nova_Nova_String_native1_Nova_startsWith)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*nova_Nova_String_native2_Nova_startsWith)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*);
typedef char (*nova_Nova_String_native0_Nova_contains)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*nova_Nova_String_native1_Nova_contains)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*);
typedef char (*nova_Nova_String_native0_Nova_endsWith)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*nova_Nova_String_native1_Nova_endsWith)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*);
typedef char (*nova_Nova_String_native_Nova_matches)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*);
typedef int (*nova_Nova_String_native0_Nova_indexOf)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*, int, int, int);
typedef int (*nova_Nova_String_native1_Nova_indexOf)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int, int, int);
typedef int (*nova_Nova_String_native2_Nova_indexOf)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int, int);
typedef int (*nova_Nova_String_native0_Nova_lastIndexOf)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int, int);
typedef int (*nova_Nova_String_native1_Nova_lastIndexOf)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);
typedef char (*nova_Nova_String_native_Nova_validateSubstringBounds)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_substring)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_trimEnds)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_trim)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_CharArray*);
typedef char (*nova_Nova_String_native_Nova_lastChar)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_toLowerCase)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_toUpperCase)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_capitalize)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_transform)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String_closure3_Nova_transform nova_Nova_String_Nova_transform, void* nova_Nova_String_ref_Nova_transform, void* transform_context);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_getStringBetween)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_surroundWith)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef nova_datastruct_list_Nova_Array* (*nova_Nova_String_native_Nova_split)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_getGroupedChars)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int, int, int);
typedef char (*nova_Nova_String_native_Nova_get)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int);
typedef char (*nova_Nova_String_native_Nova_set)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, char);
typedef nova_Nova_String* (*nova_Nova_String_native0_Nova_construct)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char);
typedef nova_Nova_String* (*nova_Nova_String_native1_Nova_construct)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char*);
typedef nova_Nova_String* (*nova_Nova_String_native2_Nova_construct)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char*, int);
typedef nova_Nova_String* (*nova_Nova_String_native3_Nova_construct)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*);

typedef struct nova_native_String
{
nova_Nova_String_native_Nova_concat concat;
nova_Nova_String_native_Nova_repeat repeat;
nova_Nova_String_native0_Nova_replace replace__nova_regex_Pattern__nova_String;
nova_Nova_String_native1_Nova_replace replace__nova_String__nova_String;
nova_Nova_String_native0_Nova_startsWith startsWith__nova_primitive_number_Char;
nova_Nova_String_native1_Nova_startsWith startsWith__nova_String;
nova_Nova_String_native2_Nova_startsWith startsWith__nova_regex_Pattern;
nova_Nova_String_native0_Nova_contains contains__nova_String;
nova_Nova_String_native1_Nova_contains contains__nova_regex_Pattern;
nova_Nova_String_native0_Nova_endsWith endsWith__nova_String;
nova_Nova_String_native1_Nova_endsWith endsWith__nova_regex_Pattern;
nova_Nova_String_native_Nova_matches matches;
nova_Nova_String_native0_Nova_indexOf indexOf__nova_regex_Pattern__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native1_Nova_indexOf indexOf__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native2_Nova_indexOf indexOf__nova_String__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native0_Nova_lastIndexOf lastIndexOf__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native1_Nova_lastIndexOf lastIndexOf__nova_String__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native_Nova_validateSubstringBounds validateSubstringBounds;
nova_Nova_String_native_Nova_substring substring;
nova_Nova_String_native_Nova_trimEnds trimEnds;
nova_Nova_String_native_Nova_trim trim;
nova_Nova_String_native_Nova_lastChar lastChar;
nova_Nova_String_native_Nova_toLowerCase toLowerCase;
nova_Nova_String_native_Nova_toUpperCase toUpperCase;
nova_Nova_String_native_Nova_capitalize capitalize;
nova_Nova_String_native_Nova_transform transform;
nova_Nova_String_native_Nova_getStringBetween getStringBetween;
nova_Nova_String_native_Nova_surroundWith surroundWith;
nova_Nova_String_native_Nova_split split;
nova_Nova_String_native_Nova_getGroupedChars getGroupedChars;
nova_Nova_String_native_Nova_get get;
nova_Nova_String_native_Nova_set set;
nova_Nova_String_native0_Nova_construct String__nova_primitive_number_Char;
nova_Nova_String_native1_Nova_construct String__Array1d_nova_primitive_number_Char;
nova_Nova_String_native2_Nova_construct String__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
nova_Nova_String_native3_Nova_construct String__nova_datastruct_list_CharArray;
} nova_native_String;

typedef nova_Nova_Substring* (*nova_Nova_Substring_native_Nova_construct)(nova_Nova_Substring*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);

typedef struct nova_native_Substring
{
nova_Nova_Substring_native_Nova_construct Substring;
} nova_native_Substring;

typedef void (*nova_Nova_System_native0_static_Nova_exit)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, int);
typedef void (*nova_Nova_System_native1_static_Nova_exit)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*);
typedef void (*nova_Nova_System_native2_static_Nova_exit)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*, char);
typedef nova_process_Nova_Process* (*nova_Nova_System_native_static_Nova_execute)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_System* (*nova_Nova_System_native_Nova_construct)(nova_Nova_System*, nova_exception_Nova_ExceptionData*);

typedef struct nova_native_System
{
nova_Nova_System_native_Nova_construct System;
} nova_native_System;

typedef nova_ar_Nova_ImageTracker* (*nova_ar_Nova_ImageTracker_native_Nova_construct)(nova_ar_Nova_ImageTracker*, nova_exception_Nova_ExceptionData*);

typedef struct nova_ar_native_ImageTracker
{
nova_ar_Nova_ImageTracker_native_Nova_construct ImageTracker;
} nova_ar_native_ImageTracker;

typedef nova_ar_Nova_TrackPoint* (*nova_ar_Nova_TrackPoint_native_Nova_construct)(nova_ar_Nova_TrackPoint*, nova_exception_Nova_ExceptionData*);

typedef struct nova_ar_native_TrackPoint
{
nova_ar_Nova_TrackPoint_native_Nova_construct TrackPoint;
} nova_ar_native_TrackPoint;

typedef void (*nova_database_Nova_DBConnector_native0_Nova_connect)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef void (*nova_database_Nova_DBConnector_native1_Nova_connect)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef void (*nova_database_Nova_DBConnector_native2_Nova_connect)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, int, nova_Nova_String*, int);
typedef void (*nova_database_Nova_DBConnector_native_Nova_updateError)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_database_Nova_DBConnector_native_Nova_changeUser)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef nova_database_Nova_ResultSet* (*nova_database_Nova_DBConnector_native_Nova_query)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef void (*nova_database_Nova_DBConnector_native_Nova_close)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*);
typedef nova_database_Nova_DBConnector* (*nova_database_Nova_DBConnector_native_Nova_construct)(nova_database_Nova_DBConnector*, nova_exception_Nova_ExceptionData*);

typedef struct nova_database_native_DBConnector
{
nova_database_Nova_DBConnector_native0_Nova_connect connect__nova_String__nova_String__nova_String;
nova_database_Nova_DBConnector_native1_Nova_connect connect__nova_String__nova_String__nova_String__nova_String;
nova_database_Nova_DBConnector_native2_Nova_connect connect__nova_String__nova_String__nova_String__nova_String__nova_primitive_number_Int__nova_String__nova_primitive_number_Int;
nova_database_Nova_DBConnector_native_Nova_updateError updateError;
nova_database_Nova_DBConnector_native_Nova_changeUser changeUser;
nova_database_Nova_DBConnector_native_Nova_query query;
nova_database_Nova_DBConnector_native_Nova_close close;
nova_database_Nova_DBConnector_native_Nova_construct DBConnector;
} nova_database_native_DBConnector;

typedef nova_database_Nova_ResultSet* (*nova_database_Nova_ResultSet_native_Nova_construct)(nova_database_Nova_ResultSet*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int);

typedef struct nova_database_native_ResultSet
{
nova_database_Nova_ResultSet_native_Nova_construct ResultSet;
} nova_database_native_ResultSet;

typedef void (*nova_datastruct_Nova_BinaryNode_native_Nova_addChild)(nova_datastruct_Nova_BinaryNode*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Comparable*);
typedef nova_datastruct_Nova_BinaryNode* (*nova_datastruct_Nova_BinaryNode_native0_Nova_construct)(nova_datastruct_Nova_BinaryNode*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Comparable*);

typedef struct nova_datastruct_native_BinaryNode
{
nova_datastruct_Nova_BinaryNode_native_Nova_addChild addChild;
nova_datastruct_Nova_BinaryNode_native0_Nova_construct BinaryNode__nova_datastruct_Comparable;
} nova_datastruct_native_BinaryNode;

typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_addNode)(nova_datastruct_Nova_BinaryTree*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Comparable*);
typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_addNodes)(nova_datastruct_Nova_BinaryTree*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_construct)(nova_datastruct_Nova_BinaryTree*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_native_BinaryTree
{
nova_datastruct_Nova_BinaryTree_native_Nova_addNode addNode;
nova_datastruct_Nova_BinaryTree_native_Nova_addNodes addNodes;
nova_datastruct_Nova_BinaryTree_native_Nova_construct BinaryTree;
} nova_datastruct_native_BinaryTree;

typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractPreString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractPostString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_trimString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef void (*nova_datastruct_Nova_Bounds_native_Nova_invalidate)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_datastruct_Nova_Bounds_native_Nova_cloneTo)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Bounds*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_clone)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native0_Nova_construct)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native1_Nova_construct)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct nova_datastruct_native_Bounds
{
nova_datastruct_Nova_Bounds_native_Nova_extractString extractString;
nova_datastruct_Nova_Bounds_native_Nova_extractPreString extractPreString;
nova_datastruct_Nova_Bounds_native_Nova_extractPostString extractPostString;
nova_datastruct_Nova_Bounds_native_Nova_trimString trimString;
nova_datastruct_Nova_Bounds_native_Nova_invalidate invalidate;
nova_datastruct_Nova_Bounds_native_Nova_cloneTo cloneTo;
nova_datastruct_Nova_Bounds_native_Nova_clone clone;
nova_datastruct_Nova_Bounds_native0_Nova_construct Bounds;
nova_datastruct_Nova_Bounds_native1_Nova_construct Bounds__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_native_Bounds;

typedef int (*nova_datastruct_Nova_Comparable_native0_Nova_compareTo)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Comparable
{
nova_datastruct_Nova_Comparable_native0_Nova_compareTo compareTo__nova_Object;
} nova_datastruct_native_Comparable;

typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_put)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_remove)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef char (*nova_datastruct_Nova_HashMap_native_Nova_containsKey)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMap_native_Nova_clone)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_ImmutableHashMap* (*nova_datastruct_Nova_HashMap_native_Nova_toImmutable)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_get)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_set)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMap_native0_Nova_construct)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMap_native1_Nova_construct)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_HashMap*, int, int);

typedef struct nova_datastruct_native_HashMap
{
nova_datastruct_Nova_HashMap_native_Nova_put put;
nova_datastruct_Nova_HashMap_native_Nova_remove remove;
nova_datastruct_Nova_HashMap_native_Nova_containsKey containsKey;
nova_datastruct_Nova_HashMap_native_Nova_clone clone;
nova_datastruct_Nova_HashMap_native_Nova_toImmutable toImmutable;
nova_datastruct_Nova_HashMap_native_Nova_get get;
nova_datastruct_Nova_HashMap_native_Nova_set set;
nova_datastruct_Nova_HashMap_native0_Nova_construct HashMap__nova_primitive_number_Int__nova_primitive_number_Int;
nova_datastruct_Nova_HashMap_native1_Nova_construct HashMap__nova_datastruct_HashMap__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_native_HashMap;

typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native_Nova_add)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_native_Nova_get)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_native_Nova_remove)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native0_Nova_construct)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native1_Nova_construct)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct nova_datastruct_native_HashSet
{
nova_datastruct_Nova_HashSet_native_Nova_add add;
nova_datastruct_Nova_HashSet_native_Nova_get get;
nova_datastruct_Nova_HashSet_native_Nova_remove remove;
nova_datastruct_Nova_HashSet_native0_Nova_construct HashSet;
nova_datastruct_Nova_HashSet_native1_Nova_construct HashSet__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_native_HashSet;

typedef char (*nova_datastruct_Nova_ImmutableHashMap_native_Nova_containsKey)(nova_datastruct_Nova_ImmutableHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_native_Nova_get)(nova_datastruct_Nova_ImmutableHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_native_Nova_set)(nova_datastruct_Nova_ImmutableHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_datastruct_Nova_ImmutableHashMap* (*nova_datastruct_Nova_ImmutableHashMap_native0_Nova_construct)(nova_datastruct_Nova_ImmutableHashMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_HashMap*);

typedef struct nova_datastruct_native_ImmutableHashMap
{
nova_datastruct_Nova_ImmutableHashMap_native_Nova_containsKey containsKey;
nova_datastruct_Nova_ImmutableHashMap_native_Nova_get get;
nova_datastruct_Nova_ImmutableHashMap_native_Nova_set set;
nova_datastruct_Nova_ImmutableHashMap_native0_Nova_construct ImmutableHashMap__nova_datastruct_HashMap;
} nova_datastruct_native_ImmutableHashMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_preorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_inorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_postorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_levelorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_construct)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int);

typedef struct nova_datastruct_native_Node
{
nova_datastruct_Nova_Node_native0_Nova_preorder preorder;
nova_datastruct_Nova_Node_native0_Nova_inorder inorder;
nova_datastruct_Nova_Node_native0_Nova_postorder postorder;
nova_datastruct_Nova_Node_native0_Nova_levelorder levelorder;
nova_datastruct_Nova_Node_native_Nova_construct Node;
} nova_datastruct_native_Node;

typedef nova_datastruct_Nova_Pair* (*nova_datastruct_Nova_Pair_native_Nova_construct)(nova_datastruct_Nova_Pair*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Pair
{
nova_datastruct_Nova_Pair_native_Nova_construct Pair;
} nova_datastruct_native_Pair;

typedef void (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_put)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_getKey)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_getValue)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_Nova_ReversibleHashMap* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_construct)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_ReversibleHashMap
{
nova_datastruct_Nova_ReversibleHashMap_native_Nova_put put;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_getKey getKey;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_getValue getValue;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_construct ReversibleHashMap;
} nova_datastruct_native_ReversibleHashMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_preorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_inorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_postorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_levelorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Tree* (*nova_datastruct_Nova_Tree_native_Nova_construct)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_Tree
{
nova_datastruct_Nova_Tree_native_Nova_preorder preorder;
nova_datastruct_Nova_Tree_native_Nova_inorder inorder;
nova_datastruct_Nova_Tree_native_Nova_postorder postorder;
nova_datastruct_Nova_Tree_native_Nova_levelorder levelorder;
nova_datastruct_Nova_Tree_native_Nova_construct Tree;
} nova_datastruct_native_Tree;

typedef nova_datastruct_Nova_Tuple* (*nova_datastruct_Nova_Tuple_native_Nova_construct)(nova_datastruct_Nova_Tuple*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_native_Tuple
{
nova_datastruct_Nova_Tuple_native_Nova_construct Tuple;
} nova_datastruct_native_Tuple;

typedef nova_datastruct_Nova_Tuple2* (*nova_datastruct_Nova_Tuple2_native_Nova_construct)(nova_datastruct_Nova_Tuple2*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Tuple2
{
nova_datastruct_Nova_Tuple2_native_Nova_construct Tuple2;
} nova_datastruct_native_Tuple2;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_fillRemaining)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_addAll)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_add)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_add)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native0_Nova_remove)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native1_Nova_remove)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef int (*nova_datastruct_list_Nova_Array_native_Nova_indexOf)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int);
typedef char (*nova_datastruct_list_Nova_Array_native_Nova_replace)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_swap)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_Nova_Object** (*nova_datastruct_list_Nova_Array_native_Nova_cloneData)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_clone)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef long_long (*nova_datastruct_list_Nova_Array_native_Nova_sumSize)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_Array_native_Nova_toImmutable)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native_Nova_get)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native_Nova_set)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_construct)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_construct)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native2_Nova_construct)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object**, int);

typedef struct nova_datastruct_list_native_Array
{
nova_datastruct_list_Nova_Array_native_Nova_fillRemaining fillRemaining;
nova_datastruct_list_Nova_Array_native_Nova_addAll addAll;
nova_datastruct_list_Nova_Array_native_Nova_addUnique addUnique;
nova_datastruct_list_Nova_Array_native0_Nova_add add__nova_Object;
nova_datastruct_list_Nova_Array_native1_Nova_add add__nova_primitive_number_Int__nova_Object;
nova_datastruct_list_Nova_Array_native0_Nova_remove remove__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native1_Nova_remove remove__nova_Object;
nova_datastruct_list_Nova_Array_native_Nova_indexOf indexOf;
nova_datastruct_list_Nova_Array_native_Nova_replace replace;
nova_datastruct_list_Nova_Array_native_Nova_swap swap;
nova_datastruct_list_Nova_Array_native_Nova_cloneData cloneData;
nova_datastruct_list_Nova_Array_native_Nova_clone clone;
nova_datastruct_list_Nova_Array_native_Nova_sumSize sumSize;
nova_datastruct_list_Nova_Array_native_Nova_toImmutable toImmutable;
nova_datastruct_list_Nova_Array_native_Nova_get get;
nova_datastruct_list_Nova_Array_native_Nova_set set;
nova_datastruct_list_Nova_Array_native0_Nova_construct Array;
nova_datastruct_list_Nova_Array_native1_Nova_construct Array__nova_primitive_number_Int__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native2_Nova_construct Array__Array1d_nova_Object__nova_primitive_number_Int;
} nova_datastruct_list_native_Array;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_ArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ArrayIterator* (*nova_datastruct_list_Nova_ArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_ArrayIterator
{
nova_datastruct_list_Nova_ArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ArrayIterator_native_Nova_construct ArrayIterator;
} nova_datastruct_list_native_ArrayIterator;

typedef long_long (*nova_datastruct_list_Nova_CharArray_native_Nova_sum)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray_closure3_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context);
typedef long_long (*nova_datastruct_list_Nova_CharArray_native_Nova_reduce)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray_closure6_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context, long_long);
typedef nova_datastruct_list_Nova_CharArray* (*nova_datastruct_list_Nova_CharArray_native0_Nova_construct)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_CharArray* (*nova_datastruct_list_Nova_CharArray_native1_Nova_construct)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_CharArray* (*nova_datastruct_list_Nova_CharArray_native2_Nova_construct)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*, char*, int);

typedef struct nova_datastruct_list_native_CharArray
{
nova_datastruct_list_Nova_CharArray_native_Nova_sum sum;
nova_datastruct_list_Nova_CharArray_native_Nova_reduce reduce;
nova_datastruct_list_Nova_CharArray_native0_Nova_construct CharArray;
nova_datastruct_list_Nova_CharArray_native1_Nova_construct CharArray__nova_primitive_number_Int;
nova_datastruct_list_Nova_CharArray_native2_Nova_construct CharArray__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
} nova_datastruct_list_native_CharArray;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_CharArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_CharArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_CharArrayIterator* (*nova_datastruct_list_Nova_CharArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_CharArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int);

typedef struct nova_datastruct_list_native_CharArrayIterator
{
nova_datastruct_list_Nova_CharArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_CharArrayIterator_native_Nova_construct CharArrayIterator;
} nova_datastruct_list_native_CharArrayIterator;

typedef nova_datastruct_list_Nova_CompiledList* (*nova_datastruct_list_Nova_CompiledList_native_Nova_construct)(nova_datastruct_list_Nova_CompiledList*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_CompiledList
{
nova_datastruct_list_Nova_CompiledList_native_Nova_construct CompiledList;
} nova_datastruct_list_native_CompiledList;

typedef double (*nova_datastruct_list_Nova_DoubleArray_native_Nova_sum)(nova_datastruct_list_Nova_DoubleArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray_closure3_Nova_func nova_datastruct_list_Nova_DoubleArray_Nova_func, void* nova_datastruct_list_Nova_DoubleArray_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_datastruct_list_Nova_DoubleArray_native0_Nova_construct)(nova_datastruct_list_Nova_DoubleArray*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_datastruct_list_Nova_DoubleArray_native1_Nova_construct)(nova_datastruct_list_Nova_DoubleArray*, nova_exception_Nova_ExceptionData*, double*, int);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_datastruct_list_Nova_DoubleArray_native2_Nova_construct)(nova_datastruct_list_Nova_DoubleArray*, nova_exception_Nova_ExceptionData*, int);

typedef struct nova_datastruct_list_native_DoubleArray
{
nova_datastruct_list_Nova_DoubleArray_native_Nova_sum sum;
nova_datastruct_list_Nova_DoubleArray_native0_Nova_construct DoubleArray;
nova_datastruct_list_Nova_DoubleArray_native1_Nova_construct DoubleArray__Array1d_nova_primitive_number_Double__nova_primitive_number_Int;
nova_datastruct_list_Nova_DoubleArray_native2_Nova_construct DoubleArray__nova_primitive_number_Int;
} nova_datastruct_list_native_DoubleArray;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_DoubleArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_DoubleArrayIterator* (*nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_DoubleArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray*);

typedef struct nova_datastruct_list_native_DoubleArrayIterator
{
nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_construct DoubleArrayIterator;
} nova_datastruct_list_native_DoubleArrayIterator;

typedef nova_datastruct_list_Nova_EmptyStackException* (*nova_datastruct_list_Nova_EmptyStackException_native_Nova_construct)(nova_datastruct_list_Nova_EmptyStackException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_datastruct_list_native_EmptyStackException
{
nova_datastruct_list_Nova_EmptyStackException_native_Nova_construct EmptyStackException;
} nova_datastruct_list_native_EmptyStackException;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_toMutable)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_set)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native0_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_Nova_Object**, int);

typedef struct nova_datastruct_list_native_ImmutableArray
{
nova_datastruct_list_Nova_ImmutableArray_native_Nova_toMutable toMutable;
nova_datastruct_list_Nova_ImmutableArray_native_Nova_set set;
nova_datastruct_list_Nova_ImmutableArray_native0_Nova_construct ImmutableArray__nova_datastruct_list_Array;
nova_datastruct_list_Nova_ImmutableArray_native1_Nova_construct ImmutableArray__Array1d_nova_Object__nova_primitive_number_Int;
} nova_datastruct_list_native_ImmutableArray;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ImmutableArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ImmutableArrayIterator* (*nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ImmutableArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_ImmutableArray*);

typedef struct nova_datastruct_list_native_ImmutableArrayIterator
{
nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_construct ImmutableArrayIterator;
} nova_datastruct_list_native_ImmutableArrayIterator;

typedef nova_datastruct_list_Nova_CharArray* (*nova_datastruct_list_Nova_ImmutableCharArray_native_Nova_toMutable)(nova_datastruct_list_Nova_ImmutableCharArray*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_datastruct_list_Nova_ImmutableCharArray_native_Nova_get)(nova_datastruct_list_Nova_ImmutableCharArray*, nova_exception_Nova_ExceptionData*, int);
typedef char (*nova_datastruct_list_Nova_ImmutableCharArray_native_Nova_set)(nova_datastruct_list_Nova_ImmutableCharArray*, nova_exception_Nova_ExceptionData*, int, char);
typedef nova_datastruct_list_Nova_ImmutableCharArray* (*nova_datastruct_list_Nova_ImmutableCharArray_native0_Nova_construct)(nova_datastruct_list_Nova_ImmutableCharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*);
typedef nova_datastruct_list_Nova_ImmutableCharArray* (*nova_datastruct_list_Nova_ImmutableCharArray_native1_Nova_construct)(nova_datastruct_list_Nova_ImmutableCharArray*, nova_exception_Nova_ExceptionData*, char*, int);

typedef struct nova_datastruct_list_native_ImmutableCharArray
{
nova_datastruct_list_Nova_ImmutableCharArray_native_Nova_toMutable toMutable;
nova_datastruct_list_Nova_ImmutableCharArray_native_Nova_get get;
nova_datastruct_list_Nova_ImmutableCharArray_native_Nova_set set;
nova_datastruct_list_Nova_ImmutableCharArray_native0_Nova_construct ImmutableCharArray__nova_datastruct_list_CharArray;
nova_datastruct_list_Nova_ImmutableCharArray_native1_Nova_construct ImmutableCharArray__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
} nova_datastruct_list_native_ImmutableCharArray;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ImmutableCharArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ImmutableCharArrayIterator* (*nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ImmutableCharArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_ImmutableCharArray*, int);

typedef struct nova_datastruct_list_native_ImmutableCharArrayIterator
{
nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_construct ImmutableCharArrayIterator;
} nova_datastruct_list_native_ImmutableCharArrayIterator;

typedef nova_datastruct_list_Nova_IntArray* (*nova_datastruct_list_Nova_IntArray_native0_Nova_construct)(nova_datastruct_list_Nova_IntArray*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntArray* (*nova_datastruct_list_Nova_IntArray_native1_Nova_construct)(nova_datastruct_list_Nova_IntArray*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_IntArray* (*nova_datastruct_list_Nova_IntArray_native2_Nova_construct)(nova_datastruct_list_Nova_IntArray*, nova_exception_Nova_ExceptionData*, int*, int);

typedef struct nova_datastruct_list_native_IntArray
{
nova_datastruct_list_Nova_IntArray_native0_Nova_construct IntArray;
nova_datastruct_list_Nova_IntArray_native1_Nova_construct IntArray__nova_primitive_number_Int;
nova_datastruct_list_Nova_IntArray_native2_Nova_construct IntArray__Array1d_nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_list_native_IntArray;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_IntArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_IntArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntArrayIterator* (*nova_datastruct_list_Nova_IntArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_IntArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_IntArray*);

typedef struct nova_datastruct_list_native_IntArrayIterator
{
nova_datastruct_list_Nova_IntArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_IntArrayIterator_native_Nova_construct IntArrayIterator;
} nova_datastruct_list_native_IntArrayIterator;

typedef void (*nova_datastruct_list_Nova_IntRange_native_Nova_forEach)(nova_datastruct_list_Nova_IntRange*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_IntRange_closure3_Nova_func nova_datastruct_list_Nova_IntRange_Nova_func, void* nova_datastruct_list_Nova_IntRange_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_IntRange* (*nova_datastruct_list_Nova_IntRange_native0_Nova_construct)(nova_datastruct_list_Nova_IntRange*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntRange* (*nova_datastruct_list_Nova_IntRange_native1_Nova_construct)(nova_datastruct_list_Nova_IntRange*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct nova_datastruct_list_native_IntRange
{
nova_datastruct_list_Nova_IntRange_native_Nova_forEach forEach;
nova_datastruct_list_Nova_IntRange_native0_Nova_construct IntRange;
nova_datastruct_list_Nova_IntRange_native1_Nova_construct IntRange__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_list_native_IntRange;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_IntRangeIterator_native_Nova_reset)(nova_datastruct_list_Nova_IntRangeIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntRangeIterator* (*nova_datastruct_list_Nova_IntRangeIterator_native_Nova_construct)(nova_datastruct_list_Nova_IntRangeIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_IntRange*);

typedef struct nova_datastruct_list_native_IntRangeIterator
{
nova_datastruct_list_Nova_IntRangeIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_IntRangeIterator_native_Nova_construct IntRangeIterator;
} nova_datastruct_list_native_IntRangeIterator;


typedef struct nova_datastruct_list_native_Iterable
{
} nova_datastruct_list_native_Iterable;


typedef struct nova_datastruct_list_native_Iterator
{
} nova_datastruct_list_native_Iterator;

typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_addAll)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_add)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_remove)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_construct)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_LinkedList
{
nova_datastruct_list_Nova_LinkedList_native_Nova_addAll addAll;
nova_datastruct_list_Nova_LinkedList_native_Nova_add add;
nova_datastruct_list_Nova_LinkedList_native_Nova_remove remove;
nova_datastruct_list_Nova_LinkedList_native_Nova_construct LinkedList;
} nova_datastruct_list_native_LinkedList;

typedef nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_LinkedListIterator_native_Nova_reset)(nova_datastruct_list_Nova_LinkedListIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_LinkedListIterator* (*nova_datastruct_list_Nova_LinkedListIterator_native_Nova_construct)(nova_datastruct_list_Nova_LinkedListIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList*);

typedef struct nova_datastruct_list_native_LinkedListIterator
{
nova_datastruct_list_Nova_LinkedListIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_LinkedListIterator_native_Nova_construct LinkedListIterator;
} nova_datastruct_list_native_LinkedListIterator;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_toArray)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_datastruct_list_Nova_List_native0_Nova_contains)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_map)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
typedef char (*nova_datastruct_list_Nova_List_native0_Nova_any)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
typedef char (*nova_datastruct_list_Nova_List_native0_Nova_all)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_filter)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_filterEmpty)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_take)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_takeLast)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_skip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstOr)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstOrThrow)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_exception_Nova_Exception*, nova_datastruct_list_Nova_List_closure21_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native0_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure24_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstNonNull)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure27_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_zip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure30_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* zipper_context);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_reverse)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_reduce)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure33_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context, nova_Nova_Object*);
typedef nova_Nova_String* (*nova_datastruct_list_Nova_List_native_Nova_join)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_datastruct_list_native_List
{
nova_datastruct_list_Nova_List_native_Nova_toArray toArray;
nova_datastruct_list_Nova_List_native0_Nova_contains contains__nova_Object;
nova_datastruct_list_Nova_List_native0_Nova_forEach forEach__void;
nova_datastruct_list_Nova_List_native0_Nova_map map__nova_Object;
nova_datastruct_list_Nova_List_native0_Nova_any any__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native0_Nova_all all__nova_primitive_Bool__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native0_Nova_filter filter__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native_Nova_filterEmpty filterEmpty;
nova_datastruct_list_Nova_List_native_Nova_take take;
nova_datastruct_list_Nova_List_native_Nova_takeLast takeLast;
nova_datastruct_list_Nova_List_native_Nova_skip skip;
nova_datastruct_list_Nova_List_native_Nova_firstOr firstOr;
nova_datastruct_list_Nova_List_native_Nova_firstOrThrow firstOrThrow;
nova_datastruct_list_Nova_List_native0_Nova_firstWhere firstWhere__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native_Nova_firstNonNull firstNonNull;
nova_datastruct_list_Nova_List_native_Nova_zip zip;
nova_datastruct_list_Nova_List_native_Nova_reverse reverse;
nova_datastruct_list_Nova_List_native_Nova_reduce reduce;
nova_datastruct_list_Nova_List_native_Nova_join join;
} nova_datastruct_list_native_List;

typedef nova_datastruct_list_Nova_ListNode* (*nova_datastruct_list_Nova_ListNode_native_Nova_clone)(nova_datastruct_list_Nova_ListNode*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ListNode* (*nova_datastruct_list_Nova_ListNode_native_Nova_construct)(nova_datastruct_list_Nova_ListNode*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_datastruct_list_native_ListNode
{
nova_datastruct_list_Nova_ListNode_native_Nova_clone clone;
nova_datastruct_list_Nova_ListNode_native_Nova_construct ListNode;
} nova_datastruct_list_native_ListNode;

typedef nova_datastruct_list_Nova_NoSuchElementException* (*nova_datastruct_list_Nova_NoSuchElementException_native_Nova_construct)(nova_datastruct_list_Nova_NoSuchElementException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_datastruct_list_native_NoSuchElementException
{
nova_datastruct_list_Nova_NoSuchElementException_native_Nova_construct NoSuchElementException;
} nova_datastruct_list_native_NoSuchElementException;

typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Queue_native_Nova_dequeue)(nova_datastruct_list_Nova_Queue*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Queue_native_Nova_enqueue)(nova_datastruct_list_Nova_Queue*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Queue* (*nova_datastruct_list_Nova_Queue_native0_Nova_construct)(nova_datastruct_list_Nova_Queue*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Queue* (*nova_datastruct_list_Nova_Queue_native1_Nova_construct)(nova_datastruct_list_Nova_Queue*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_Queue
{
nova_datastruct_list_Nova_Queue_native_Nova_dequeue dequeue;
nova_datastruct_list_Nova_Queue_native_Nova_enqueue enqueue;
nova_datastruct_list_Nova_Queue_native0_Nova_construct Queue;
nova_datastruct_list_Nova_Queue_native1_Nova_construct Queue__nova_datastruct_list_Array;
} nova_datastruct_list_native_Queue;

typedef void (*nova_datastruct_list_Nova_Stack_native_Nova_push)(nova_datastruct_list_Nova_Stack*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Stack_native_Nova_pop)(nova_datastruct_list_Nova_Stack*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Stack_native_Nova_peek)(nova_datastruct_list_Nova_Stack*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Stack* (*nova_datastruct_list_Nova_Stack_native0_Nova_construct)(nova_datastruct_list_Nova_Stack*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Stack* (*nova_datastruct_list_Nova_Stack_native1_Nova_construct)(nova_datastruct_list_Nova_Stack*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_Stack
{
nova_datastruct_list_Nova_Stack_native_Nova_push push;
nova_datastruct_list_Nova_Stack_native_Nova_pop pop;
nova_datastruct_list_Nova_Stack_native_Nova_peek peek;
nova_datastruct_list_Nova_Stack_native0_Nova_construct Stack;
nova_datastruct_list_Nova_Stack_native1_Nova_construct Stack__nova_datastruct_list_Array;
} nova_datastruct_list_native_Stack;

typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native0_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*);
typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native1_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, nova_exception_Nova_ExceptionData*, char*, int);

typedef struct nova_datastruct_list_native_StringCharArray
{
nova_datastruct_list_Nova_StringCharArray_native0_Nova_construct StringCharArray__nova_datastruct_list_CharArray;
nova_datastruct_list_Nova_StringCharArray_native1_Nova_construct StringCharArray__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
} nova_datastruct_list_native_StringCharArray;

typedef nova_datastruct_list_Nova_SubstringCharArray* (*nova_datastruct_list_Nova_SubstringCharArray_native_Nova_construct)(nova_datastruct_list_Nova_SubstringCharArray*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_SubstringCharArray
{
nova_datastruct_list_Nova_SubstringCharArray_native_Nova_construct SubstringCharArray;
} nova_datastruct_list_native_SubstringCharArray;

typedef nova_exception_Nova_Backtraces* (*nova_exception_Nova_Backtraces_native_Nova_construct)(nova_exception_Nova_Backtraces*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_Backtraces
{
nova_exception_Nova_Backtraces_native_Nova_construct Backtraces;
} nova_exception_native_Backtraces;

typedef nova_exception_Nova_CaughtException* (*nova_exception_Nova_CaughtException_native_Nova_construct)(nova_exception_Nova_CaughtException*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*, int);

typedef struct nova_exception_native_CaughtException
{
nova_exception_Nova_CaughtException_native_Nova_construct CaughtException;
} nova_exception_native_CaughtException;

typedef nova_exception_Nova_DivideByZeroException* (*nova_exception_Nova_DivideByZeroException_native_Nova_construct)(nova_exception_Nova_DivideByZeroException*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_DivideByZeroException
{
nova_exception_Nova_DivideByZeroException_native_Nova_construct DivideByZeroException;
} nova_exception_native_DivideByZeroException;

typedef nova_exception_Nova_Exception* (*nova_exception_Nova_Exception_native_Nova_construct)(nova_exception_Nova_Exception*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_Exception
{
nova_exception_Nova_Exception_native_Nova_construct Exception;
} nova_exception_native_Exception;

typedef void (*nova_exception_Nova_ExceptionData_native_Nova_addCaught)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*, int);
typedef char (*nova_exception_Nova_ExceptionData_native_Nova_throwException)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData**, nova_exception_Nova_Exception*, char);
typedef nova_exception_Nova_ExceptionData* (*nova_exception_Nova_ExceptionData_native_Nova_construct)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData*, buffer*);

typedef struct nova_exception_native_ExceptionData
{
nova_exception_Nova_ExceptionData_native_Nova_addCaught addCaught;
nova_exception_Nova_ExceptionData_native_Nova_throwException throwException;
nova_exception_Nova_ExceptionData_native_Nova_construct ExceptionData;
} nova_exception_native_ExceptionData;

typedef nova_exception_Nova_InvalidArgumentException* (*nova_exception_Nova_InvalidArgumentException_native_Nova_construct)(nova_exception_Nova_InvalidArgumentException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_InvalidArgumentException
{
nova_exception_Nova_InvalidArgumentException_native_Nova_construct InvalidArgumentException;
} nova_exception_native_InvalidArgumentException;

typedef nova_exception_Nova_InvalidOperationException* (*nova_exception_Nova_InvalidOperationException_native_Nova_construct)(nova_exception_Nova_InvalidOperationException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_InvalidOperationException
{
nova_exception_Nova_InvalidOperationException_native_Nova_construct InvalidOperationException;
} nova_exception_native_InvalidOperationException;

typedef nova_exception_Nova_UnimplementedOperationException* (*nova_exception_Nova_UnimplementedOperationException_native_Nova_construct)(nova_exception_Nova_UnimplementedOperationException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_UnimplementedOperationException
{
nova_exception_Nova_UnimplementedOperationException_native_Nova_construct UnimplementedOperationException;
} nova_exception_native_UnimplementedOperationException;

typedef void (*nova_gc_Nova_GC_native_static_Nova_init)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_collect)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_enableIncremental)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_dump)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef nova_gc_Nova_GC* (*nova_gc_Nova_GC_native_Nova_construct)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);

typedef struct nova_gc_native_GC
{
nova_gc_Nova_GC_native_Nova_construct GC;
} nova_gc_native_GC;

typedef void (*nova_io_Nova_Console_native_static_Nova_log)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef void (*nova_io_Nova_Console_native0_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_Console_native1_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef void (*nova_io_Nova_Console_native2_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef void (*nova_io_Nova_Console_native3_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, double);
typedef void (*nova_io_Nova_Console_native4_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, float);
typedef void (*nova_io_Nova_Console_native5_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, long_long);
typedef void (*nova_io_Nova_Console_native6_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, int);
typedef void (*nova_io_Nova_Console_native7_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, short);
typedef void (*nova_io_Nova_Console_native8_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, char);
typedef void (*nova_io_Nova_Console_native9_static_Nova_writeLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, char);
typedef void (*nova_io_Nova_Console_native0_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef void (*nova_io_Nova_Console_native1_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef void (*nova_io_Nova_Console_native2_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, double);
typedef void (*nova_io_Nova_Console_native3_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, float);
typedef void (*nova_io_Nova_Console_native4_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, long_long);
typedef void (*nova_io_Nova_Console_native5_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, int);
typedef void (*nova_io_Nova_Console_native6_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, short);
typedef void (*nova_io_Nova_Console_native7_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, char);
typedef void (*nova_io_Nova_Console_native8_static_Nova_write)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, char);
typedef int (*nova_io_Nova_Console_native_static_Nova_readInt)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef double (*nova_io_Nova_Console_native_static_Nova_readDouble)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_Console_native_static_Nova_readChar)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_io_Nova_Console_native_static_Nova_readLine)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_io_Nova_Console_native_static_Nova_readPassword)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_Console_native_static_Nova_setEcho)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*, char);
typedef void (*nova_io_Nova_Console_native_static_Nova_clearScreen)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_Console_native_static_Nova_waitForEnter)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);
typedef nova_io_Nova_Console* (*nova_io_Nova_Console_native_Nova_construct)(nova_io_Nova_Console*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_Console
{
nova_io_Nova_Console_native_Nova_construct Console;
} nova_io_native_Console;

typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_File_native_Nova_getChildFiles)(nova_io_Nova_File*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_File_native_Nova_directoryContents)(nova_io_Nova_File*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_File_native_Nova_listFiles)(nova_io_Nova_File*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_io_Nova_File* (*nova_io_Nova_File_native1_Nova_construct)(nova_io_Nova_File*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_io_native_File
{
nova_io_Nova_File_native_Nova_getChildFiles getChildFiles;
nova_io_Nova_File_native_Nova_directoryContents directoryContents;
nova_io_Nova_File_native_Nova_listFiles listFiles;
nova_io_Nova_File_native1_Nova_construct File__nova_String;
} nova_io_native_File;

typedef nova_io_Nova_FileNotFoundException* (*nova_io_Nova_FileNotFoundException_native_Nova_construct)(nova_io_Nova_FileNotFoundException*, nova_exception_Nova_ExceptionData*, nova_io_Nova_File*);

typedef struct nova_io_native_FileNotFoundException
{
nova_io_Nova_FileNotFoundException_native_Nova_construct FileNotFoundException;
} nova_io_native_FileNotFoundException;

typedef nova_Nova_Object* (*nova_io_Nova_FileReader_native_Nova_readBytes)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_FileReader_native_Nova_open)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_io_Nova_FileReader_native_Nova_readAllContents)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_io_Nova_FileReader_native_Nova_readLine)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_FileReader_native_Nova_close)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef nova_io_Nova_FileReader* (*nova_io_Nova_FileReader_native0_Nova_construct)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*, nova_io_Nova_File*);
typedef nova_io_Nova_FileReader* (*nova_io_Nova_FileReader_native1_Nova_construct)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*, FILE*);

typedef struct nova_io_native_FileReader
{
nova_io_Nova_FileReader_native_Nova_readBytes readBytes;
nova_io_Nova_FileReader_native_Nova_open open;
nova_io_Nova_FileReader_native_Nova_readAllContents readAllContents;
nova_io_Nova_FileReader_native_Nova_readLine readLine;
nova_io_Nova_FileReader_native_Nova_close close;
nova_io_Nova_FileReader_native0_Nova_construct FileReader__nova_io_File;
nova_io_Nova_FileReader_native1_Nova_construct FileReader__FILE;
} nova_io_native_FileReader;

typedef char (*nova_io_Nova_FileWriter_native_Nova_delete)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_FileWriter_native_Nova_reopen)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_FileWriter_native_Nova_rewind)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_clearContents)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_create)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_writeLine)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef void (*nova_io_Nova_FileWriter_native_Nova_flush)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_close)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef nova_io_Nova_FileWriter* (*nova_io_Nova_FileWriter_native0_Nova_construct)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*, nova_io_Nova_File*);
typedef nova_io_Nova_FileWriter* (*nova_io_Nova_FileWriter_native1_Nova_construct)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_io_native_FileWriter
{
nova_io_Nova_FileWriter_native_Nova_delete delete;
nova_io_Nova_FileWriter_native_Nova_reopen reopen;
nova_io_Nova_FileWriter_native_Nova_rewind rewind;
nova_io_Nova_FileWriter_native_Nova_clearContents clearContents;
nova_io_Nova_FileWriter_native_Nova_create create;
nova_io_Nova_FileWriter_native_Nova_writeLine writeLine;
nova_io_Nova_FileWriter_native_Nova_flush flush;
nova_io_Nova_FileWriter_native_Nova_close close;
nova_io_Nova_FileWriter_native0_Nova_construct FileWriter__nova_io_File;
nova_io_Nova_FileWriter_native1_Nova_construct FileWriter__nova_String;
} nova_io_native_FileWriter;

typedef nova_Nova_String* (*nova_io_Nova_InputStream_native_Nova_readString)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_InputStream_native_Nova_readBytes)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_InputStream
{
nova_io_Nova_InputStream_native_Nova_readString readString;
nova_io_Nova_InputStream_native_Nova_readBytes readBytes;
} nova_io_native_InputStream;

typedef char (*nova_io_Nova_OutputStream_native_Nova_write)(nova_io_Nova_OutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_io_Nova_OutputStream* (*nova_io_Nova_OutputStream_native_Nova_construct)(nova_io_Nova_OutputStream*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_OutputStream
{
nova_io_Nova_OutputStream_native_Nova_write write;
nova_io_Nova_OutputStream_native_Nova_construct OutputStream;
} nova_io_native_OutputStream;

typedef nova_io_Nova_StreamReader* (*nova_io_Nova_StreamReader_native_Nova_construct)(nova_io_Nova_StreamReader*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_StreamReader
{
nova_io_Nova_StreamReader_native_Nova_construct StreamReader;
} nova_io_native_StreamReader;

typedef nova_math_Nova_ArithmeticSequence* (*nova_math_Nova_ArithmeticSequence_native_Nova_construct)(nova_math_Nova_ArithmeticSequence*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_ArithmeticSequence
{
nova_math_Nova_ArithmeticSequence_native_Nova_construct ArithmeticSequence;
} nova_math_native_ArithmeticSequence;

typedef nova_math_Nova_Diekstra* (*nova_math_Nova_Diekstra_native_Nova_construct)(nova_math_Nova_Diekstra*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Diekstra
{
nova_math_Nova_Diekstra_native_Nova_construct Diekstra;
} nova_math_native_Diekstra;

typedef nova_math_Nova_GeometricSequence* (*nova_math_Nova_GeometricSequence_native_Nova_construct)(nova_math_Nova_GeometricSequence*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_GeometricSequence
{
nova_math_Nova_GeometricSequence_native_Nova_construct GeometricSequence;
} nova_math_native_GeometricSequence;

typedef nova_math_Nova_Graph* (*nova_math_Nova_Graph_native_Nova_construct)(nova_math_Nova_Graph*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Graph
{
nova_math_Nova_Graph_native_Nova_construct Graph;
} nova_math_native_Graph;

typedef nova_math_Nova_InvalidNumericStatementException* (*nova_math_Nova_InvalidNumericStatementException_native_Nova_construct)(nova_math_Nova_InvalidNumericStatementException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_InvalidNumericStatementException
{
nova_math_Nova_InvalidNumericStatementException_native_Nova_construct InvalidNumericStatementException;
} nova_math_native_InvalidNumericStatementException;

typedef long_long (*nova_math_Nova_Math_native_static_Nova_max)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, long_long, long_long);
typedef long_long (*nova_math_Nova_Math_native_static_Nova_min)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, long_long, long_long);
typedef char (*nova_math_Nova_Math_native_static_Nova_sign)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, long_long);
typedef long_long (*nova_math_Nova_Math_native_static_Nova_random)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, long_long);
typedef long_long (*nova_math_Nova_Math_native0_static_Nova_abs)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, long_long);
typedef double (*nova_math_Nova_Math_native1_static_Nova_abs)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_sqrt)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_pow)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_sin)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_cos)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_tan)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_asin)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_acos)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_atan)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_round)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_floor)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_ceil)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*, double);
typedef nova_math_Nova_Math* (*nova_math_Nova_Math_native_Nova_construct)(nova_math_Nova_Math*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Math
{
nova_math_Nova_Math_native_Nova_construct Math;
} nova_math_native_Math;

typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_clone)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_static_Nova_identity)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_inverse)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_math_Nova_Matrix_native_Nova_swapRows)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*nova_math_Nova_Matrix_native_Nova_multiplyRow)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int, double);
typedef void (*nova_math_Nova_Matrix_native_Nova_addRow)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*nova_math_Nova_Matrix_native_Nova_subtractRow)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_add)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_subtract)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_transpose)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
typedef double (*nova_math_Nova_Matrix_native_Nova_determinant)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
typedef double (*nova_math_Nova_Matrix_native_static_Nova_determinant)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_math_Nova_Matrix_native_Nova_get)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_math_Nova_Matrix_native_Nova_set)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, nova_datastruct_list_Nova_DoubleArray*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native0_Nova_construct)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native1_Nova_construct)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native2_Nova_construct)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_math_native_Matrix
{
nova_math_Nova_Matrix_native_Nova_clone clone;
nova_math_Nova_Matrix_native_Nova_inverse inverse;
nova_math_Nova_Matrix_native_Nova_swapRows swapRows;
nova_math_Nova_Matrix_native_Nova_multiplyRow multiplyRow;
nova_math_Nova_Matrix_native_Nova_addRow addRow;
nova_math_Nova_Matrix_native_Nova_subtractRow subtractRow;
nova_math_Nova_Matrix_native_Nova_add add;
nova_math_Nova_Matrix_native_Nova_subtract subtract;
nova_math_Nova_Matrix_native_Nova_transpose transpose;
nova_math_Nova_Matrix_native_Nova_determinant determinant;
nova_math_Nova_Matrix_native_Nova_get get;
nova_math_Nova_Matrix_native_Nova_set set;
nova_math_Nova_Matrix_native0_Nova_construct Matrix__nova_primitive_number_Int;
nova_math_Nova_Matrix_native1_Nova_construct Matrix__nova_primitive_number_Int__nova_primitive_number_Int;
nova_math_Nova_Matrix_native2_Nova_construct Matrix__nova_datastruct_list_Array;
} nova_math_native_Matrix;

typedef nova_math_Nova_NumericOperand* (*nova_math_Nova_NumericOperand_native_Nova_construct)(nova_math_Nova_NumericOperand*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_math_native_NumericOperand
{
nova_math_Nova_NumericOperand_native_Nova_construct NumericOperand;
} nova_math_native_NumericOperand;

typedef nova_math_Nova_NumericOperation* (*nova_math_Nova_NumericOperation_native0_Nova_construct)(nova_math_Nova_NumericOperation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_math_Nova_NumericOperation* (*nova_math_Nova_NumericOperation_native1_Nova_construct)(nova_math_Nova_NumericOperation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_math_native_NumericOperation
{
nova_math_Nova_NumericOperation_native0_Nova_construct NumericOperation__nova_String;
nova_math_Nova_NumericOperation_native1_Nova_construct NumericOperation__nova_String__nova_String__nova_String;
} nova_math_native_NumericOperation;

typedef nova_math_Nova_NumericStatement* (*nova_math_Nova_NumericStatement_native_Nova_construct)(nova_math_Nova_NumericStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_NumericStatement
{
nova_math_Nova_NumericStatement_native_Nova_construct NumericStatement;
} nova_math_native_NumericStatement;

typedef nova_math_Nova_NumericTree* (*nova_math_Nova_NumericTree_native_Nova_construct)(nova_math_Nova_NumericTree*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_NumericTree
{
nova_math_Nova_NumericTree_native_Nova_construct NumericTree;
} nova_math_native_NumericTree;

typedef nova_math_Nova_Polynomial* (*nova_math_Nova_Polynomial_native_Nova_construct)(nova_math_Nova_Polynomial*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_Polynomial
{
nova_math_Nova_Polynomial_native_Nova_construct Polynomial;
} nova_math_native_Polynomial;

typedef double (*nova_math_Nova_Sequence_native_static_Nova_sum)(nova_math_Nova_Sequence*, nova_exception_Nova_ExceptionData*, int);
typedef nova_math_Nova_Sequence* (*nova_math_Nova_Sequence_native_Nova_construct)(nova_math_Nova_Sequence*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray*);

typedef struct nova_math_native_Sequence
{
nova_math_Nova_Sequence_native_Nova_construct Sequence;
} nova_math_native_Sequence;

typedef nova_math_Nova_Statement* (*nova_math_Nova_Statement_native_Nova_construct)(nova_math_Nova_Statement*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Statement
{
nova_math_Nova_Statement_native_Nova_construct Statement;
} nova_math_native_Statement;

typedef nova_math_Nova_StatementComponent* (*nova_math_Nova_StatementComponent_native_Nova_construct)(nova_math_Nova_StatementComponent*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_math_native_StatementComponent
{
nova_math_Nova_StatementComponent_native_Nova_construct StatementComponent;
} nova_math_native_StatementComponent;

typedef nova_math_Nova_VariableOperand* (*nova_math_Nova_VariableOperand_native_Nova_construct)(nova_math_Nova_VariableOperand*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_VariableOperand
{
nova_math_Nova_VariableOperand_native_Nova_construct VariableOperand;
} nova_math_native_VariableOperand;

typedef double (*nova_math_Nova_Vector_native_Nova_dotProduct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*);
typedef double (*nova_math_Nova_Vector_native_Nova_innerProduct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_math_Nova_Vector_native_Nova_scale)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, double);
typedef nova_datastruct_list_Nova_DoubleArray* (*nova_math_Nova_Vector_native_Nova_normalize)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector* (*nova_math_Nova_Vector_native0_Nova_construct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, int);
typedef nova_math_Nova_Vector* (*nova_math_Nova_Vector_native1_Nova_construct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray*);

typedef struct nova_math_native_Vector
{
nova_math_Nova_Vector_native_Nova_dotProduct dotProduct;
nova_math_Nova_Vector_native_Nova_innerProduct innerProduct;
nova_math_Nova_Vector_native_Nova_scale scale;
nova_math_Nova_Vector_native_Nova_normalize normalize;
nova_math_Nova_Vector_native0_Nova_construct Vector__nova_primitive_number_Int;
nova_math_Nova_Vector_native1_Nova_construct Vector__nova_datastruct_list_DoubleArray;
} nova_math_native_Vector;

typedef nova_math_Nova_Vector2D* (*nova_math_Nova_Vector2D_native0_Nova_construct)(nova_math_Nova_Vector2D*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector2D* (*nova_math_Nova_Vector2D_native1_Nova_construct)(nova_math_Nova_Vector2D*, nova_exception_Nova_ExceptionData*, double, double);

typedef struct nova_math_native_Vector2D
{
nova_math_Nova_Vector2D_native0_Nova_construct Vector2D;
nova_math_Nova_Vector2D_native1_Nova_construct Vector2D__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector2D;

typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native_Nova_crossProduct)(nova_math_Nova_Vector3D*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector3D*);
typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native0_Nova_construct)(nova_math_Nova_Vector3D*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native1_Nova_construct)(nova_math_Nova_Vector3D*, nova_exception_Nova_ExceptionData*, double, double, double);

typedef struct nova_math_native_Vector3D
{
nova_math_Nova_Vector3D_native_Nova_crossProduct crossProduct;
nova_math_Nova_Vector3D_native0_Nova_construct Vector3D;
nova_math_Nova_Vector3D_native1_Nova_construct Vector3D__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector3D;

typedef nova_math_Nova_Vector4D* (*nova_math_Nova_Vector4D_native0_Nova_construct)(nova_math_Nova_Vector4D*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector4D* (*nova_math_Nova_Vector4D_native1_Nova_construct)(nova_math_Nova_Vector4D*, nova_exception_Nova_ExceptionData*, double, double, double, double);

typedef struct nova_math_native_Vector4D
{
nova_math_Nova_Vector4D_native0_Nova_construct Vector4D;
nova_math_Nova_Vector4D_native1_Nova_construct Vector4D__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector4D;

typedef nova_math_Nova_NumericStatement* (*nova_math_calculus_Nova_Calculus_native_static_Nova_derivative)(nova_math_calculus_Nova_Calculus*, nova_exception_Nova_ExceptionData*, nova_math_Nova_NumericStatement*);
typedef nova_math_calculus_Nova_Calculus* (*nova_math_calculus_Nova_Calculus_native_Nova_construct)(nova_math_calculus_Nova_Calculus*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_calculus_native_Calculus
{
nova_math_calculus_Nova_Calculus_native_Nova_construct Calculus;
} nova_math_calculus_native_Calculus;

typedef nova_math_huffman_Nova_HuffmanTree* (*nova_math_huffman_Nova_HuffmanTree_native_Nova_construct)(nova_math_huffman_Nova_HuffmanTree*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_huffman_native_HuffmanTree
{
nova_math_huffman_Nova_HuffmanTree_native_Nova_construct HuffmanTree;
} nova_math_huffman_native_HuffmanTree;

typedef nova_math_logic_Nova_Conclusion* (*nova_math_logic_Nova_Conclusion_native_Nova_construct)(nova_math_logic_Nova_Conclusion*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_Conclusion
{
nova_math_logic_Nova_Conclusion_native_Nova_construct Conclusion;
} nova_math_logic_native_Conclusion;

typedef nova_math_logic_Nova_Hypothesis* (*nova_math_logic_Nova_Hypothesis_native_Nova_construct)(nova_math_logic_Nova_Hypothesis*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_Hypothesis
{
nova_math_logic_Nova_Hypothesis_native_Nova_construct Hypothesis;
} nova_math_logic_native_Hypothesis;

typedef nova_math_logic_Nova_InvalidFormulaException* (*nova_math_logic_Nova_InvalidFormulaException_native_Nova_construct)(nova_math_logic_Nova_InvalidFormulaException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_InvalidFormulaException
{
nova_math_logic_Nova_InvalidFormulaException_native_Nova_construct InvalidFormulaException;
} nova_math_logic_native_InvalidFormulaException;

typedef nova_math_logic_Nova_LogicalConnective* (*nova_math_logic_Nova_LogicalConnective_native_Nova_construct)(nova_math_logic_Nova_LogicalConnective*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_LogicalConnective
{
nova_math_logic_Nova_LogicalConnective_native_Nova_construct LogicalConnective;
} nova_math_logic_native_LogicalConnective;

typedef nova_math_logic_Nova_LogicalStatement* (*nova_math_logic_Nova_LogicalStatement_native_Nova_construct)(nova_math_logic_Nova_LogicalStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_LogicalStatement
{
nova_math_logic_Nova_LogicalStatement_native_Nova_construct LogicalStatement;
} nova_math_logic_native_LogicalStatement;

typedef nova_math_logic_Nova_StatementComponent* (*nova_math_logic_Nova_StatementComponent_native_Nova_construct)(nova_math_logic_Nova_StatementComponent*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_StatementComponent
{
nova_math_logic_Nova_StatementComponent_native_Nova_construct StatementComponent;
} nova_math_logic_native_StatementComponent;

typedef nova_math_logic_Nova_StatementGroup* (*nova_math_logic_Nova_StatementGroup_native_Nova_construct)(nova_math_logic_Nova_StatementGroup*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_datastruct_Nova_Bounds*);

typedef struct nova_math_logic_native_StatementGroup
{
nova_math_logic_Nova_StatementGroup_native_Nova_construct StatementGroup;
} nova_math_logic_native_StatementGroup;

typedef nova_math_logic_Nova_StatementLetter* (*nova_math_logic_Nova_StatementLetter_native_Nova_construct)(nova_math_logic_Nova_StatementLetter*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_math_logic_native_StatementLetter
{
nova_math_logic_Nova_StatementLetter_native_Nova_construct StatementLetter;
} nova_math_logic_native_StatementLetter;

typedef nova_math_logic_Nova_WFF* (*nova_math_logic_Nova_WFF_native_Nova_construct)(nova_math_logic_Nova_WFF*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_Array*);

typedef struct nova_math_logic_native_WFF
{
nova_math_logic_Nova_WFF_native_Nova_construct WFF;
} nova_math_logic_native_WFF;

typedef nova_meta_Nova_Field* (*nova_meta_Nova_Field_native_Nova_construct)(nova_meta_Nova_Field*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_Field
{
nova_meta_Nova_Field_native_Nova_construct Field;
} nova_meta_native_Field;

typedef nova_meta_Nova_GenericArgument* (*nova_meta_Nova_GenericArgument_native_Nova_construct)(nova_meta_Nova_GenericArgument*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_GenericArgument
{
nova_meta_Nova_GenericArgument_native_Nova_construct GenericArgument;
} nova_meta_native_GenericArgument;

typedef nova_meta_Nova_GenericParameter* (*nova_meta_Nova_GenericParameter_native_Nova_construct)(nova_meta_Nova_GenericParameter*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_GenericParameter
{
nova_meta_Nova_GenericParameter_native_Nova_construct GenericParameter;
} nova_meta_native_GenericParameter;

typedef nova_meta_Nova_Type* (*nova_meta_Nova_Type_native_Nova_construct)(nova_meta_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_ImmutableArray*);

typedef struct nova_meta_native_Type
{
nova_meta_Nova_Type_native_Nova_construct Type;
} nova_meta_native_Type;

typedef char (*nova_network_Nova_ClientSocket_native_Nova_connect)(nova_network_Nova_ClientSocket*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef char (*nova_network_Nova_ClientSocket_native_Nova_close)(nova_network_Nova_ClientSocket*, nova_exception_Nova_ExceptionData*);
typedef nova_network_Nova_ClientSocket* (*nova_network_Nova_ClientSocket_native_Nova_construct)(nova_network_Nova_ClientSocket*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_ClientSocket
{
nova_network_Nova_ClientSocket_native_Nova_connect connect;
nova_network_Nova_ClientSocket_native_Nova_close close;
nova_network_Nova_ClientSocket_native_Nova_construct ClientSocket;
} nova_network_native_ClientSocket;

typedef void (*nova_network_Nova_ConnectionSocket_native_Nova_close)(nova_network_Nova_ConnectionSocket*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_network_Nova_ConnectionSocket_native_Nova_validateConnection)(nova_network_Nova_ConnectionSocket*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_network_Nova_ConnectionSocket_native0_Nova_readString)(nova_network_Nova_ConnectionSocket*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_network_Nova_ConnectionSocket_native_Nova_write)(nova_network_Nova_ConnectionSocket*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_network_Nova_ConnectionSocket* (*nova_network_Nova_ConnectionSocket_native_Nova_construct)(nova_network_Nova_ConnectionSocket*, nova_exception_Nova_ExceptionData*, SOCKET_ID_TYPE);

typedef struct nova_network_native_ConnectionSocket
{
nova_network_Nova_ConnectionSocket_native_Nova_close close;
nova_network_Nova_ConnectionSocket_native_Nova_validateConnection validateConnection;
nova_network_Nova_ConnectionSocket_native0_Nova_readString readString;
nova_network_Nova_ConnectionSocket_native_Nova_write write;
nova_network_Nova_ConnectionSocket_native_Nova_construct ConnectionSocket;
} nova_network_native_ConnectionSocket;

typedef nova_network_Nova_NetworkInputStream* (*nova_network_Nova_NetworkInputStream_native_Nova_construct)(nova_network_Nova_NetworkInputStream*, nova_exception_Nova_ExceptionData*, nova_network_Nova_ConnectionSocket*);

typedef struct nova_network_native_NetworkInputStream
{
nova_network_Nova_NetworkInputStream_native_Nova_construct NetworkInputStream;
} nova_network_native_NetworkInputStream;

typedef char (*nova_network_Nova_NetworkOutputStream_native0_Nova_write)(nova_network_Nova_NetworkOutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_network_Nova_NetworkOutputStream* (*nova_network_Nova_NetworkOutputStream_native_Nova_construct)(nova_network_Nova_NetworkOutputStream*, nova_exception_Nova_ExceptionData*, nova_network_Nova_ConnectionSocket*);

typedef struct nova_network_native_NetworkOutputStream
{
nova_network_Nova_NetworkOutputStream_native0_Nova_write write__nova_Object;
nova_network_Nova_NetworkOutputStream_native_Nova_construct NetworkOutputStream;
} nova_network_native_NetworkOutputStream;

typedef char (*nova_network_Nova_ServerSocket_native_Nova_start)(nova_network_Nova_ServerSocket*, nova_exception_Nova_ExceptionData*, int);
typedef char (*nova_network_Nova_ServerSocket_native_Nova_close)(nova_network_Nova_ServerSocket*, nova_exception_Nova_ExceptionData*);
typedef nova_network_Nova_ConnectionSocket* (*nova_network_Nova_ServerSocket_native_Nova_acceptClient)(nova_network_Nova_ServerSocket*, nova_exception_Nova_ExceptionData*);
typedef nova_network_Nova_ServerSocket* (*nova_network_Nova_ServerSocket_native_Nova_construct)(nova_network_Nova_ServerSocket*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_ServerSocket
{
nova_network_Nova_ServerSocket_native_Nova_start start;
nova_network_Nova_ServerSocket_native_Nova_close close;
nova_network_Nova_ServerSocket_native_Nova_acceptClient acceptClient;
nova_network_Nova_ServerSocket_native_Nova_construct ServerSocket;
} nova_network_native_ServerSocket;

typedef nova_network_Nova_Socket* (*nova_network_Nova_Socket_native_Nova_construct)(nova_network_Nova_Socket*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_Socket
{
nova_network_Nova_Socket_native_Nova_construct Socket;
} nova_network_native_Socket;

typedef char (*nova_operators_Nova_Equals_native1_Nova_equals)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_Equals
{
nova_operators_Nova_Equals_native1_Nova_equals equals__nova_Object;
} nova_operators_native_Equals;

typedef nova_Nova_Object* (*nova_operators_Nova_Multiply_native0_Nova_multiply)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_Multiply
{
nova_operators_Nova_Multiply_native0_Nova_multiply multiply__nova_Object;
} nova_operators_native_Multiply;

typedef char (*nova_primitive_Nova_Bool_native_Nova_compareTo)(nova_primitive_Nova_Bool*, nova_exception_Nova_ExceptionData*, char);
typedef nova_Nova_String* (*nova_primitive_Nova_Bool_native_static_Nova_toString)(nova_primitive_Nova_Bool*, nova_exception_Nova_ExceptionData*, char);
typedef nova_primitive_Nova_Bool* (*nova_primitive_Nova_Bool_native_Nova_construct)(nova_primitive_Nova_Bool*, nova_exception_Nova_ExceptionData*, char);

typedef struct nova_primitive_native_Bool
{
nova_primitive_Nova_Bool_native_Nova_compareTo compareTo;
nova_primitive_Nova_Bool_native_Nova_construct Bool;
} nova_primitive_native_Bool;

typedef nova_primitive_Nova_Null* (*nova_primitive_Nova_Null_native_Nova_construct)(nova_primitive_Nova_Null*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_Null
{
nova_primitive_Nova_Null_native_Nova_construct Null;
} nova_primitive_native_Null;

typedef nova_primitive_Nova_Primitive* (*nova_primitive_Nova_Primitive_native_Nova_construct)(nova_primitive_Nova_Primitive*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_Primitive
{
nova_primitive_Nova_Primitive_native_Nova_construct Primitive;
} nova_primitive_native_Primitive;

typedef int (*nova_primitive_number_Nova_Byte_native_static_Nova_numDigits)(nova_primitive_number_Nova_Byte*, nova_exception_Nova_ExceptionData*, char);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Byte_native_static_Nova_toString)(nova_primitive_number_Nova_Byte*, nova_exception_Nova_ExceptionData*, char);
typedef nova_primitive_number_Nova_Byte* (*nova_primitive_number_Nova_Byte_native_Nova_construct)(nova_primitive_number_Nova_Byte*, nova_exception_Nova_ExceptionData*, char);

typedef struct nova_primitive_number_native_Byte
{
nova_primitive_number_Nova_Byte_native_Nova_construct Byte;
} nova_primitive_number_native_Byte;

typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_toLowerCase)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*, char);
typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_toUpperCase)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*, char);
typedef char (*nova_primitive_number_Nova_Char_native_Nova_toLowerCase)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_primitive_number_Nova_Char_native_Nova_toUpperCase)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Char_native_static_Nova_toString)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*, char);
typedef nova_primitive_number_Nova_Char* (*nova_primitive_number_Nova_Char_native_Nova_construct)(nova_primitive_number_Nova_Char*, nova_exception_Nova_ExceptionData*, char);

typedef struct nova_primitive_number_native_Char
{
nova_primitive_number_Nova_Char_native_Nova_toLowerCase toLowerCase;
nova_primitive_number_Nova_Char_native_Nova_toUpperCase toUpperCase;
nova_primitive_number_Nova_Char_native_Nova_construct Char;
} nova_primitive_number_native_Char;

typedef int (*nova_primitive_number_Nova_Double_native_static_Nova_numDigits)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, double);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Double_native_static_Nova_genString)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, char*, int);
typedef char* (*nova_primitive_number_Nova_Double_native_static_Nova_genBuffer)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, double);
typedef int (*nova_primitive_number_Nova_Double_native_static_Nova_repetition)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, char*, int);
typedef int (*nova_primitive_number_Nova_Double_native_static_Nova_lastSignificantDigit)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, char*, int);
typedef char* (*nova_primitive_number_Nova_Double_native_static_Nova_toCharArray)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, double);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Double_native_static_Nova_toString)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, double);
typedef double (*nova_primitive_number_Nova_Double_native_static_Nova_parseDouble)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef double (*nova_primitive_number_Nova_Double_native_Nova_compareTo)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, double);
typedef nova_primitive_number_Nova_Double* (*nova_primitive_number_Nova_Double_native_Nova_construct)(nova_primitive_number_Nova_Double*, nova_exception_Nova_ExceptionData*, double);

typedef struct nova_primitive_number_native_Double
{
nova_primitive_number_Nova_Double_native_Nova_compareTo compareTo;
nova_primitive_number_Nova_Double_native_Nova_construct Double;
} nova_primitive_number_native_Double;

typedef float (*nova_primitive_number_Nova_Float_native_Nova_compareTo)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);
typedef int (*nova_primitive_number_Nova_Float_native_static_Nova_numDigits)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Float_native_static_Nova_toString)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);
typedef nova_primitive_number_Nova_Float* (*nova_primitive_number_Nova_Float_native_Nova_construct)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, int);

typedef struct nova_primitive_number_native_Float
{
nova_primitive_number_Nova_Float_native_Nova_compareTo compareTo;
nova_primitive_number_Nova_Float_native_Nova_construct Float;
} nova_primitive_number_native_Float;

typedef int (*nova_primitive_number_Nova_Int_native_static_Nova_numDigits)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Int_native_static_Nova_toString)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, int);
typedef int (*nova_primitive_number_Nova_Int_native_static_Nova_parseInt)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_primitive_number_Nova_Int* (*nova_primitive_number_Nova_Int_native_Nova_construct)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, int);

typedef struct nova_primitive_number_native_Int
{
nova_primitive_number_Nova_Int_native_Nova_construct Int;
} nova_primitive_number_native_Int;


typedef struct nova_primitive_number_native_Integer
{
} nova_primitive_number_native_Integer;

typedef int (*nova_primitive_number_Nova_Long_native_static_Nova_numDigits)(nova_primitive_number_Nova_Long*, nova_exception_Nova_ExceptionData*, long_long);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Long_native_static_Nova_toString)(nova_primitive_number_Nova_Long*, nova_exception_Nova_ExceptionData*, long_long);
typedef long_long (*nova_primitive_number_Nova_Long_native_Nova_compareTo)(nova_primitive_number_Nova_Long*, nova_exception_Nova_ExceptionData*, long_long);
typedef nova_primitive_number_Nova_Long* (*nova_primitive_number_Nova_Long_native_Nova_construct)(nova_primitive_number_Nova_Long*, nova_exception_Nova_ExceptionData*, long_long);

typedef struct nova_primitive_number_native_Long
{
nova_primitive_number_Nova_Long_native_Nova_compareTo compareTo;
nova_primitive_number_Nova_Long_native_Nova_construct Long;
} nova_primitive_number_native_Long;

typedef char (*nova_primitive_number_Nova_Number_native_static_Nova_numDigits)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, nova_primitive_number_Nova_Number*);
typedef nova_primitive_number_Nova_Number* (*nova_primitive_number_Nova_Number_native_Nova_construct)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_Number
{
nova_primitive_number_Nova_Number_native_Nova_construct Number;
} nova_primitive_number_native_Number;


typedef struct nova_primitive_number_native_RealNumber
{
} nova_primitive_number_native_RealNumber;

typedef int (*nova_primitive_number_Nova_Short_native_static_Nova_numDigits)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*, short);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Short_native_static_Nova_toString)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*, short);
typedef nova_primitive_number_Nova_Short* (*nova_primitive_number_Nova_Short_native_Nova_construct)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*, short);

typedef struct nova_primitive_number_native_Short
{
nova_primitive_number_Nova_Short_native_Nova_construct Short;
} nova_primitive_number_native_Short;

typedef nova_process_Nova_Process* (*nova_process_Nova_Process_native_Nova_construct)(nova_process_Nova_Process*, nova_exception_Nova_ExceptionData*, nova_io_Nova_InputStream*);

typedef struct nova_process_native_Process
{
nova_process_Nova_Process_native_Nova_construct Process;
} nova_process_native_Process;

typedef nova_regex_Nova_Match* (*nova_regex_Nova_Match_native_Nova_construct)(nova_regex_Nova_Match*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);

typedef struct nova_regex_native_Match
{
nova_regex_Nova_Match_native_Nova_construct Match;
} nova_regex_native_Match;

typedef nova_regex_Nova_Pattern* (*nova_regex_Nova_Pattern_native_Nova_construct)(nova_regex_Nova_Pattern*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_regex_native_Pattern
{
nova_regex_Nova_Pattern_native_Nova_construct Pattern;
} nova_regex_native_Pattern;

typedef char (*nova_regex_Nova_Regex_native0_static_Nova_containsMatch)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef char (*nova_regex_Nova_Regex_native1_static_Nova_containsMatch)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_regex_Nova_Regex_native0_static_Nova_getMatches)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_regex_Nova_Regex_native_static_Nova_getMatches)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
typedef nova_regex_Nova_Regex* (*nova_regex_Nova_Regex_native_Nova_construct)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*);

typedef struct nova_regex_native_Regex
{
nova_regex_Nova_Regex_native_Nova_construct Regex;
} nova_regex_native_Regex;

typedef nova_Nova_String* (*nova_security_Nova_MD5_native_static_Nova_encrypt)(nova_security_Nova_MD5*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_security_Nova_MD5* (*nova_security_Nova_MD5_native_Nova_construct)(nova_security_Nova_MD5*, nova_exception_Nova_ExceptionData*);

typedef struct nova_security_native_MD5
{
nova_security_Nova_MD5_native_Nova_construct MD5;
} nova_security_native_MD5;

typedef nova_Nova_String* (*nova_security_Nova_Sha256_native_Nova_digest)(nova_security_Nova_Sha256*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_security_Nova_Sha256* (*nova_security_Nova_Sha256_native_Nova_construct)(nova_security_Nova_Sha256*, nova_exception_Nova_ExceptionData*);

typedef struct nova_security_native_Sha256
{
nova_security_Nova_Sha256_native_Nova_digest digest;
nova_security_Nova_Sha256_native_Nova_construct Sha256;
} nova_security_native_Sha256;

typedef nova_star_Nova_Frame* (*nova_star_Nova_Frame_native_Nova_construct)(nova_star_Nova_Frame*, nova_exception_Nova_ExceptionData*, int, int, int, int);

typedef struct nova_star_native_Frame
{
nova_star_Nova_Frame_native_Nova_construct Frame;
} nova_star_native_Frame;

typedef void (*nova_star_Nova_Window_native_Nova_create)(nova_star_Nova_Window*, nova_exception_Nova_ExceptionData*);
typedef nova_star_Nova_Window* (*nova_star_Nova_Window_native_Nova_construct)(nova_star_Nova_Window*, nova_exception_Nova_ExceptionData*);

typedef struct nova_star_native_Window
{
nova_star_Nova_Window_native_Nova_create create;
nova_star_Nova_Window_native_Nova_construct Window;
} nova_star_native_Window;

typedef nova_star_Nova_WindowThread* (*nova_star_Nova_WindowThread_native_Nova_construct)(nova_star_Nova_WindowThread*, nova_exception_Nova_ExceptionData*, nova_star_Nova_Window*);

typedef struct nova_star_native_WindowThread
{
nova_star_Nova_WindowThread_native_Nova_construct WindowThread;
} nova_star_native_WindowThread;

typedef NOVA_THREAD_HANDLE* (*nova_thread_Nova_Thread_native_Nova_start)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_thread_Nova_Thread_native_Nova_join)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_thread_Nova_Thread_native_Nova_kill)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_thread_Nova_Thread_native_static_Nova_sleep)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*, long_long);
typedef void (*nova_thread_Nova_Thread_native_Nova_run)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef nova_thread_Nova_Thread* (*nova_thread_Nova_Thread_native_Nova_construct)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_native_Thread
{
nova_thread_Nova_Thread_native_Nova_start start;
nova_thread_Nova_Thread_native_Nova_join join;
nova_thread_Nova_Thread_native_Nova_kill kill;
nova_thread_Nova_Thread_native_Nova_run run;
nova_thread_Nova_Thread_native_Nova_construct Thread;
} nova_thread_native_Thread;

typedef void (*nova_thread_Nova_UncaughtExceptionHandler_native_Nova_uncaughtException)(nova_thread_Nova_UncaughtExceptionHandler*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread*, nova_exception_Nova_Exception*);
typedef nova_thread_Nova_UncaughtExceptionHandler* (*nova_thread_Nova_UncaughtExceptionHandler_native_Nova_construct)(nova_thread_Nova_UncaughtExceptionHandler*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_native_UncaughtExceptionHandler
{
nova_thread_Nova_UncaughtExceptionHandler_native_Nova_uncaughtException uncaughtException;
nova_thread_Nova_UncaughtExceptionHandler_native_Nova_construct UncaughtExceptionHandler;
} nova_thread_native_UncaughtExceptionHandler;

typedef nova_thread_async_Nova_AsyncResult* (*nova_thread_async_Nova_Async_native_static_Nova_execute)(nova_thread_async_Nova_Async*, nova_exception_Nova_ExceptionData*, nova_thread_async_Nova_Async_closure3_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* func_context);
typedef nova_thread_async_Nova_Async* (*nova_thread_async_Nova_Async_native_Nova_construct)(nova_thread_async_Nova_Async*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_async_native_Async
{
nova_thread_async_Nova_Async_native_Nova_construct Async;
} nova_thread_async_native_Async;

typedef nova_thread_async_Nova_AsyncResult* (*nova_thread_async_Nova_AsyncResult_native_Nova_construct)(nova_thread_async_Nova_AsyncResult*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_async_native_AsyncResult
{
nova_thread_async_Nova_AsyncResult_native_Nova_construct AsyncResult;
} nova_thread_async_native_AsyncResult;

typedef nova_time_Nova_CumulativeTimer* (*nova_time_Nova_CumulativeTimer_native_Nova_construct)(nova_time_Nova_CumulativeTimer*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_CumulativeTimer
{
nova_time_Nova_CumulativeTimer_native_Nova_construct CumulativeTimer;
} nova_time_native_CumulativeTimer;

typedef void (*nova_time_Nova_Date_native_Nova_decodeDate)(nova_time_Nova_Date*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
typedef void (*nova_time_Nova_Date_native_Nova_updateTime)(nova_time_Nova_Date*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_time_Nova_Date_native_Nova_formatDate)(nova_time_Nova_Date*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int, int, int, int, int);
typedef nova_time_Nova_Date* (*nova_time_Nova_Date_native_Nova_construct)(nova_time_Nova_Date*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_Date
{
nova_time_Nova_Date_native_Nova_decodeDate decodeDate;
nova_time_Nova_Date_native_Nova_updateTime updateTime;
nova_time_Nova_Date_native_Nova_formatDate formatDate;
nova_time_Nova_Date_native_Nova_construct Date;
} nova_time_native_Date;

typedef nova_time_Nova_Time* (*nova_time_Nova_Time_native_Nova_construct)(nova_time_Nova_Time*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_Time
{
nova_time_Nova_Time_native_Nova_construct Time;
} nova_time_native_Time;

typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_start)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_stop)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_reset)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_static_Nova_time)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer_closure5_Nova_action nova_time_Nova_Timer_Nova_action, void* nova_time_Nova_Timer_ref_Nova_action, void* action_context, nova_time_Nova_Timer_closure6_Nova_callback nova_time_Nova_Timer_Nova_callback, void* nova_time_Nova_Timer_ref_Nova_callback, void* callback_context);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_construct)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_Timer
{
nova_time_Nova_Timer_native_Nova_start start;
nova_time_Nova_Timer_native_Nova_stop stop;
nova_time_Nova_Timer_native_Nova_reset reset;
nova_time_Nova_Timer_native_Nova_construct Timer;
} nova_time_native_Timer;

typedef nova_web_js_json_Nova_Json* (*nova_web_js_json_Nova_Json_native_Nova_construct)(nova_web_js_json_Nova_Json*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_js_json_native_Json
{
nova_web_js_json_Nova_Json_native_Nova_construct Json;
} nova_web_js_json_native_Json;

typedef void (*nova_web_svg_Nova_Svg_native_Nova_generateOutput)(nova_web_svg_Nova_Svg*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef void (*nova_web_svg_Nova_Svg_native_Nova_generateHTMLOutput)(nova_web_svg_Nova_Svg*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef nova_web_svg_Nova_Svg* (*nova_web_svg_Nova_Svg_native_Nova_construct)(nova_web_svg_Nova_Svg*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_Svg
{
nova_web_svg_Nova_Svg_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_Svg_native_Nova_generateHTMLOutput generateHTMLOutput;
nova_web_svg_Nova_Svg_native_Nova_construct Svg;
} nova_web_svg_native_Svg;

typedef char (*nova_web_svg_Nova_SvgCircle_native_Nova_generateOutput)(nova_web_svg_Nova_SvgCircle*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef nova_web_svg_Nova_SvgCircle* (*nova_web_svg_Nova_SvgCircle_native_Nova_construct)(nova_web_svg_Nova_SvgCircle*, nova_exception_Nova_ExceptionData*, double, double, int);

typedef struct nova_web_svg_native_SvgCircle
{
nova_web_svg_Nova_SvgCircle_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgCircle_native_Nova_construct SvgCircle;
} nova_web_svg_native_SvgCircle;

typedef void (*nova_web_svg_Nova_SvgComponent_native_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef nova_web_svg_Nova_SvgComponent* (*nova_web_svg_Nova_SvgComponent_native_Nova_construct)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgComponent
{
nova_web_svg_Nova_SvgComponent_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgComponent_native_Nova_construct SvgComponent;
} nova_web_svg_native_SvgComponent;

typedef void (*nova_web_svg_Nova_SvgComponentList_native_Nova_generateOutput)(nova_web_svg_Nova_SvgComponentList*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef void (*nova_web_svg_Nova_SvgComponentList_native_Nova_addChild)(nova_web_svg_Nova_SvgComponentList*, nova_exception_Nova_ExceptionData*, nova_web_svg_Nova_SvgComponent*);
typedef nova_web_svg_Nova_SvgComponentList* (*nova_web_svg_Nova_SvgComponentList_native_Nova_construct)(nova_web_svg_Nova_SvgComponentList*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgComponentList
{
nova_web_svg_Nova_SvgComponentList_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgComponentList_native_Nova_addChild addChild;
nova_web_svg_Nova_SvgComponentList_native_Nova_construct SvgComponentList;
} nova_web_svg_native_SvgComponentList;

typedef nova_web_svg_Nova_SvgComponentNode* (*nova_web_svg_Nova_SvgComponentNode_native_Nova_construct)(nova_web_svg_Nova_SvgComponentNode*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgComponentNode
{
nova_web_svg_Nova_SvgComponentNode_native_Nova_construct SvgComponentNode;
} nova_web_svg_native_SvgComponentNode;

typedef nova_web_svg_Nova_SvgMainComponent* (*nova_web_svg_Nova_SvgMainComponent_native_Nova_construct)(nova_web_svg_Nova_SvgMainComponent*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgMainComponent
{
nova_web_svg_Nova_SvgMainComponent_native_Nova_construct SvgMainComponent;
} nova_web_svg_native_SvgMainComponent;

typedef nova_web_svg_no3_Nova_No3Select* (*nova_web_svg_no3_Nova_No3_native_static_Nova_select)(nova_web_svg_no3_Nova_No3*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_web_svg_no3_Nova_No3SelectAll* (*nova_web_svg_no3_Nova_No3_native_static_Nova_selectAll)(nova_web_svg_no3_Nova_No3*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_web_svg_no3_Nova_No3* (*nova_web_svg_no3_Nova_No3_native_Nova_construct)(nova_web_svg_no3_Nova_No3*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_No3
{
nova_web_svg_no3_Nova_No3_native_Nova_construct No3;
} nova_web_svg_no3_native_No3;

typedef nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_native_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);
typedef nova_web_svg_no3_Nova_No3Node* (*nova_web_svg_no3_Nova_No3Node_native_Nova_construct)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_No3Node
{
nova_web_svg_no3_Nova_No3Node_native_Nova_toJs toJs;
nova_web_svg_no3_Nova_No3Node_native_Nova_construct No3Node;
} nova_web_svg_no3_native_No3Node;

typedef nova_web_svg_no3_Nova_No3Select* (*nova_web_svg_no3_Nova_No3Select_native_Nova_construct)(nova_web_svg_no3_Nova_No3Select*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3Select
{
nova_web_svg_no3_Nova_No3Select_native_Nova_construct No3Select;
} nova_web_svg_no3_native_No3Select;

typedef nova_web_svg_no3_Nova_No3SelectAll* (*nova_web_svg_no3_Nova_No3SelectAll_native_Nova_construct)(nova_web_svg_no3_Nova_No3SelectAll*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3SelectAll
{
nova_web_svg_no3_Nova_No3SelectAll_native_Nova_construct No3SelectAll;
} nova_web_svg_no3_native_No3SelectAll;

typedef spectra_Nova_InvalidParseException* (*spectra_Nova_InvalidParseException_native_Nova_construct)(spectra_Nova_InvalidParseException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*);

typedef struct spectra_native_InvalidParseException
{
spectra_Nova_InvalidParseException_native_Nova_construct InvalidParseException;
} spectra_native_InvalidParseException;

typedef void (*spectra_Nova_Spectra_native_static_Nova_main)(spectra_Nova_Spectra*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef void (*spectra_Nova_Spectra_native_Nova_compile)(spectra_Nova_Spectra*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef spectra_Nova_Spectra* (*spectra_Nova_Spectra_native_Nova_construct)(spectra_Nova_Spectra*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_Spectra
{
spectra_Nova_Spectra_native_Nova_compile compile;
spectra_Nova_Spectra_native_Nova_construct Spectra;
} spectra_native_Spectra;

typedef spectra_Nova_SyntaxErrorException* (*spectra_Nova_SyntaxErrorException_native0_Nova_construct)(spectra_Nova_SyntaxErrorException*, nova_exception_Nova_ExceptionData*);
typedef spectra_Nova_SyntaxErrorException* (*spectra_Nova_SyntaxErrorException_native1_Nova_construct)(spectra_Nova_SyntaxErrorException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Program*);

typedef struct spectra_native_SyntaxErrorException
{
spectra_Nova_SyntaxErrorException_native0_Nova_construct SyntaxErrorException;
spectra_Nova_SyntaxErrorException_native1_Nova_construct SyntaxErrorException__nova_String__spectra_tree_nodes_Node__spectra_tree_nodes_Program;
} spectra_native_SyntaxErrorException;

typedef void (*spectra_Nova_SyntaxMessage_native_static_Nova_errorIf)(spectra_Nova_SyntaxMessage*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, char, int);
typedef void (*spectra_Nova_SyntaxMessage_native_static_Nova_error)(spectra_Nova_SyntaxMessage*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_Nova_SyntaxMessage* (*spectra_Nova_SyntaxMessage_native_Nova_construct)(spectra_Nova_SyntaxMessage*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_SyntaxMessage
{
spectra_Nova_SyntaxMessage_native_Nova_construct SyntaxMessage;
} spectra_native_SyntaxMessage;

typedef void (*spectra_engines_Nova_CodeGeneratorEngine_native_Nova_writeFiles)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_engines_Nova_CodeGeneratorEngine_native_Nova_insertMainMethod)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
typedef spectra_engines_Nova_CodeGeneratorEngine* (*spectra_engines_Nova_CodeGeneratorEngine_native_Nova_construct)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_engines_native_CodeGeneratorEngine
{
spectra_engines_Nova_CodeGeneratorEngine_native_Nova_construct CodeGeneratorEngine;
} spectra_engines_native_CodeGeneratorEngine;

typedef spectra_error_Nova_UnimplementedOperationException* (*spectra_error_Nova_UnimplementedOperationException_native_Nova_construct)(spectra_error_Nova_UnimplementedOperationException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_error_native_UnimplementedOperationException
{
spectra_error_Nova_UnimplementedOperationException_native_Nova_construct UnimplementedOperationException;
} spectra_error_native_UnimplementedOperationException;

typedef nova_datastruct_list_Nova_Array* (*spectra_tree_Nova_AnnotationSearchResult_native0_Nova_addTo)(spectra_tree_Nova_AnnotationSearchResult*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef nova_datastruct_list_Nova_Array* (*spectra_tree_Nova_AnnotationSearchResult_native1_Nova_addTo)(spectra_tree_Nova_AnnotationSearchResult*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Stack*);
typedef spectra_tree_Nova_AnnotationSearchResult* (*spectra_tree_Nova_AnnotationSearchResult_native_Nova_construct)(spectra_tree_Nova_AnnotationSearchResult*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_tree_native_AnnotationSearchResult
{
spectra_tree_Nova_AnnotationSearchResult_native0_Nova_addTo addTo__spectra_tree_nodes_Node;
spectra_tree_Nova_AnnotationSearchResult_native1_Nova_addTo addTo__nova_datastruct_list_Stack;
spectra_tree_Nova_AnnotationSearchResult_native_Nova_construct AnnotationSearchResult;
} spectra_tree_native_AnnotationSearchResult;

typedef spectra_tree_Nova_StatementIterator* (*spectra_tree_Nova_StatementIterator_native_Nova_reset)(spectra_tree_Nova_StatementIterator*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_Nova_StatementIterator* (*spectra_tree_Nova_StatementIterator_native_Nova_construct)(spectra_tree_Nova_StatementIterator*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_Stack*);

typedef struct spectra_tree_native_StatementIterator
{
spectra_tree_Nova_StatementIterator_native_Nova_reset reset;
spectra_tree_Nova_StatementIterator_native_Nova_construct StatementIterator;
} spectra_tree_native_StatementIterator;

typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_formTree)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_validateTypes)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_parseStatements)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_Nova_AnnotationSearchResult* (*spectra_tree_Nova_SyntaxTree_native_static_Nova_searchAnnotations)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_Nova_SyntaxTree* (*spectra_tree_Nova_SyntaxTree_native_Nova_construct)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*, spectra_Nova_Spectra*, spectra_tree_nodes_Nova_Program*);

typedef struct spectra_tree_native_SyntaxTree
{
spectra_tree_Nova_SyntaxTree_native_Nova_formTree formTree;
spectra_tree_Nova_SyntaxTree_native_Nova_validateTypes validateTypes;
spectra_tree_Nova_SyntaxTree_native_Nova_parseStatements parseStatements;
spectra_tree_Nova_SyntaxTree_native_Nova_construct SyntaxTree;
} spectra_tree_native_SyntaxTree;

typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Abstractable_native_Nova_writeAbstract)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Abstractable* (*spectra_tree_nodes_Nova_Abstractable_native0_Nova_cloneTo)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Abstractable*);

typedef struct spectra_tree_nodes_native_Abstractable
{
spectra_tree_nodes_Nova_Abstractable_native_Nova_writeAbstract writeAbstract;
spectra_tree_nodes_Nova_Abstractable_native0_Nova_cloneTo cloneTo__spectra_tree_nodes_Abstractable;
} spectra_tree_nodes_native_Abstractable;

typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native2_Nova_getNextAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, char);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*, char, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, char, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*, char);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, char);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native_Nova_getLastAccessed)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_Class*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native_Nova_getRootReferenceNode)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native_Nova_getReferenceNode)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, int, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_static_Nova_parse)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Accessible_native_static_Nova_parseDotAccess)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_cloneTo)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Accessible*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Accessible_native_Nova_writeAccessedNodes)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_Accessible
{
spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessingOfType getNextAccessingOfType__nova_Class;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessingOfType getNextAccessingOfType__nova_datastruct_list_Array;
spectra_tree_nodes_Nova_Accessible_native2_Nova_getNextAccessingOfType getNextAccessingOfType__nova_datastruct_list_Array__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessingOfType getLastAccessingOfType__nova_Class__nova_primitive_Bool__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessingOfType getLastAccessingOfType__nova_datastruct_list_Array__nova_primitive_Bool__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessedOfType getLastAccessedOfType__nova_Class__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessedOfType getLastAccessedOfType__nova_datastruct_list_Array__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native_Nova_getLastAccessed getLastAccessed;
spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessedOfType getNextAccessedOfType__nova_Class;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessedOfType getNextAccessedOfType__nova_datastruct_list_Array;
spectra_tree_nodes_Nova_Accessible_native_Nova_getRootReferenceNode getRootReferenceNode;
spectra_tree_nodes_Nova_Accessible_native_Nova_getReferenceNode getReferenceNode;
spectra_tree_nodes_Nova_Accessible_native0_Nova_cloneTo cloneTo__spectra_tree_nodes_Accessible;
spectra_tree_nodes_Nova_Accessible_native_Nova_writeAccessedNodes writeAccessedNodes;
} spectra_tree_nodes_native_Accessible;

typedef spectra_tree_nodes_Nova_ArgumentList* (*spectra_tree_nodes_Nova_ArgumentList_native_Nova_construct)(spectra_tree_nodes_Nova_ArgumentList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_ArgumentList
{
spectra_tree_nodes_Nova_ArgumentList_native_Nova_construct ArgumentList;
} spectra_tree_nodes_native_ArgumentList;

typedef nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_findCompatibleFunctions)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_Array*);
typedef spectra_tree_nodes_variables_Nova_VariableDeclaration* (*spectra_tree_nodes_Nova_ClassDeclaration_native0_Nova_findVariableDeclaration)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeHeader)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeExtension)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeImplementedInterfaces)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeArrayBracketOverload)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_ClassDeclaration* (*spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_construct)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_ClassDeclaration
{
spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_findCompatibleFunctions findCompatibleFunctions;
spectra_tree_nodes_Nova_ClassDeclaration_native0_Nova_findVariableDeclaration findVariableDeclaration__nova_String__nova_primitive_Bool__nova_primitive_Bool;
spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeHeader writeHeader;
spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeExtension writeExtension;
spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeImplementedInterfaces writeImplementedInterfaces;
spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_writeArrayBracketOverload writeArrayBracketOverload;
spectra_tree_nodes_Nova_ClassDeclaration_native_Nova_construct ClassDeclaration;
} spectra_tree_nodes_native_ClassDeclaration;

typedef spectra_tree_nodes_Nova_Identifier* (*spectra_tree_nodes_Nova_Identifier_native_Nova_construct)(spectra_tree_nodes_Nova_Identifier*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Identifier
{
spectra_tree_nodes_Nova_Identifier_native_Nova_construct Identifier;
} spectra_tree_nodes_native_Identifier;

typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Import_native_Nova_getClassLocation)(spectra_tree_nodes_Nova_Import*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_Nova_Import* (*spectra_tree_nodes_Nova_Import_native_static_Nova_parse)(spectra_tree_nodes_Nova_Import*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Import* (*spectra_tree_nodes_Nova_Import_native_Nova_construct)(spectra_tree_nodes_Nova_Import*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Import
{
spectra_tree_nodes_Nova_Import_native_Nova_getClassLocation getClassLocation;
spectra_tree_nodes_Nova_Import_native_Nova_construct Import;
} spectra_tree_nodes_native_Import;

typedef spectra_tree_nodes_Nova_ImportList* (*spectra_tree_nodes_Nova_ImportList_native_Nova_construct)(spectra_tree_nodes_Nova_ImportList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_ImportList
{
spectra_tree_nodes_Nova_ImportList_native_Nova_construct ImportList;
} spectra_tree_nodes_native_ImportList;

typedef spectra_tree_nodes_Nova_InterfaceDeclaration* (*spectra_tree_nodes_Nova_InterfaceDeclaration_native_Nova_construct)(spectra_tree_nodes_Nova_InterfaceDeclaration*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_InterfaceDeclaration
{
spectra_tree_nodes_Nova_InterfaceDeclaration_native_Nova_construct InterfaceDeclaration;
} spectra_tree_nodes_native_InterfaceDeclaration;


typedef struct spectra_tree_nodes_native_Listener
{
} spectra_tree_nodes_native_Listener;

typedef spectra_tree_nodes_Nova_Literal* (*spectra_tree_nodes_Nova_Literal_native_Nova_construct)(spectra_tree_nodes_Nova_Literal*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Literal
{
spectra_tree_nodes_Nova_Literal_native_Nova_construct Literal;
} spectra_tree_nodes_native_Literal;

typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_getAdjacentNode)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_tree_nodes_Nova_Node_native0_Nova_detach)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_nodes_Nova_Node_native1_Nova_detach)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_addChild)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_onAdded)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_onRemoved)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef char (*spectra_tree_nodes_Nova_Node_native_Nova_onAfterDecoded)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef char (*spectra_tree_nodes_Nova_Node_native_Nova_onNextStatementDecoded)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_onStackPopped)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_followedByScope)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, char);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_onChildReplaced)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_onReplaced)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
typedef void (*spectra_tree_nodes_Nova_Node_native_Nova_onChildDetached)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef spectra_tree_nodes_Nova_ValidationResult* (*spectra_tree_nodes_Nova_Node_native_Nova_validate)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_variables_Nova_VariableDeclaration* (*spectra_tree_nodes_Nova_Node_native_Nova_findVariableDeclaration)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_parseStatement)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_generateTemporaryScopeNode)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_nodes_Nova_Node_native_static_Nova_strictParse)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node_closure3_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
typedef void (*spectra_tree_nodes_Nova_Node_native_static_Nova_catchSyntaxErrors)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node_closure6_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_clone)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_cloneTo)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef char (*spectra_tree_nodes_Nova_Node_native_Nova_replace)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
typedef char (*spectra_tree_nodes_Nova_Node_native_Nova_validateTypes)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef char (*spectra_tree_nodes_Nova_Node_native_Nova_parsePlaceholders)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef char (*spectra_tree_nodes_Nova_Node_native_Nova_parsePlaceholderChildren)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NodeList*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Node_native_Nova_writeAnnotationSeparator)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Node_native_Nova_writeAnnotations)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Node_native_Nova_toNova)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Node_native_Nova_writeNova)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_construct)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Node
{
spectra_tree_nodes_Nova_Node_native_Nova_getAdjacentNode getAdjacentNode;
spectra_tree_nodes_Nova_Node_native0_Nova_detach detach;
spectra_tree_nodes_Nova_Node_native1_Nova_detach detach__spectra_tree_nodes_Node;
spectra_tree_nodes_Nova_Node_native_Nova_addChild addChild;
spectra_tree_nodes_Nova_Node_native_Nova_onAdded onAdded;
spectra_tree_nodes_Nova_Node_native_Nova_onRemoved onRemoved;
spectra_tree_nodes_Nova_Node_native_Nova_onAfterDecoded onAfterDecoded;
spectra_tree_nodes_Nova_Node_native_Nova_onNextStatementDecoded onNextStatementDecoded;
spectra_tree_nodes_Nova_Node_native_Nova_onStackPopped onStackPopped;
spectra_tree_nodes_Nova_Node_native_Nova_followedByScope followedByScope;
spectra_tree_nodes_Nova_Node_native_Nova_onChildReplaced onChildReplaced;
spectra_tree_nodes_Nova_Node_native_Nova_onReplaced onReplaced;
spectra_tree_nodes_Nova_Node_native_Nova_onChildDetached onChildDetached;
spectra_tree_nodes_Nova_Node_native_Nova_validate validate;
spectra_tree_nodes_Nova_Node_native_Nova_findVariableDeclaration findVariableDeclaration;
spectra_tree_nodes_Nova_Node_native_Nova_parseStatement parseStatement;
spectra_tree_nodes_Nova_Node_native_Nova_generateTemporaryScopeNode generateTemporaryScopeNode;
spectra_tree_nodes_Nova_Node_native_Nova_clone clone;
spectra_tree_nodes_Nova_Node_native_Nova_cloneTo cloneTo;
spectra_tree_nodes_Nova_Node_native_Nova_replace replace;
spectra_tree_nodes_Nova_Node_native_Nova_validateTypes validateTypes;
spectra_tree_nodes_Nova_Node_native_Nova_parsePlaceholders parsePlaceholders;
spectra_tree_nodes_Nova_Node_native_Nova_parsePlaceholderChildren parsePlaceholderChildren;
spectra_tree_nodes_Nova_Node_native_Nova_writeAnnotationSeparator writeAnnotationSeparator;
spectra_tree_nodes_Nova_Node_native_Nova_writeAnnotations writeAnnotations;
spectra_tree_nodes_Nova_Node_native_Nova_toNova toNova;
spectra_tree_nodes_Nova_Node_native_Nova_writeNova writeNova;
spectra_tree_nodes_Nova_Node_native_Nova_construct Node;
} spectra_tree_nodes_native_Node;

typedef void (*spectra_tree_nodes_Nova_NodeList_native_Nova_replace)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeList_native_Nova_addChild)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, int, int);
typedef char (*spectra_tree_nodes_Nova_NodeList_native_Nova_containsChild)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, int);
typedef nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_Nova_NodeList_native_Nova_inheritChildren)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NodeList*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeList_native0_Nova_removeChild)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeList_native1_Nova_removeChild)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_Nova_NodeList_native_Nova_slaughterChildren)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_NodeList* (*spectra_tree_nodes_Nova_NodeList_native_Nova_construct)(spectra_tree_nodes_Nova_NodeList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_NodeList
{
spectra_tree_nodes_Nova_NodeList_native_Nova_replace replace;
spectra_tree_nodes_Nova_NodeList_native_Nova_addChild addChild;
spectra_tree_nodes_Nova_NodeList_native_Nova_containsChild containsChild;
spectra_tree_nodes_Nova_NodeList_native_Nova_inheritChildren inheritChildren;
spectra_tree_nodes_Nova_NodeList_native0_Nova_removeChild removeChild__spectra_tree_nodes_Node;
spectra_tree_nodes_Nova_NodeList_native1_Nova_removeChild removeChild__nova_primitive_number_Int;
spectra_tree_nodes_Nova_NodeList_native_Nova_slaughterChildren slaughterChildren;
spectra_tree_nodes_Nova_NodeList_native_Nova_construct NodeList;
} spectra_tree_nodes_native_NodeList;

typedef spectra_tree_nodes_Nova_ClassDeclaration* (*spectra_tree_nodes_Nova_NovaFile_native_Nova_getImportedClass)(spectra_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_Nova_NovaFile_native_Nova_addAutoImports)(spectra_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Import* (*spectra_tree_nodes_Nova_NovaFile_native_Nova_addImport)(spectra_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*spectra_tree_nodes_Nova_NovaFile_native_Nova_containsImport)(spectra_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);
typedef spectra_tree_nodes_Nova_NovaFile* (*spectra_tree_nodes_Nova_NovaFile_native_Nova_construct)(spectra_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*, nova_io_Nova_File*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_NovaFile
{
spectra_tree_nodes_Nova_NovaFile_native_Nova_getImportedClass getImportedClass;
spectra_tree_nodes_Nova_NovaFile_native_Nova_addAutoImports addAutoImports;
spectra_tree_nodes_Nova_NovaFile_native_Nova_addImport addImport;
spectra_tree_nodes_Nova_NovaFile_native_Nova_containsImport containsImport;
spectra_tree_nodes_Nova_NovaFile_native_Nova_construct NovaFile;
} spectra_tree_nodes_native_NovaFile;

typedef spectra_tree_nodes_Nova_NumericRange* (*spectra_tree_nodes_Nova_NumericRange_native_Nova_construct)(spectra_tree_nodes_Nova_NumericRange*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_NumericRange
{
spectra_tree_nodes_Nova_NumericRange_native_Nova_construct NumericRange;
} spectra_tree_nodes_native_NumericRange;

typedef spectra_tree_nodes_Nova_Package* (*spectra_tree_nodes_Nova_Package_native_static_Nova_generateDefaultPackage)(spectra_tree_nodes_Nova_Package*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);
typedef spectra_tree_nodes_Nova_Package* (*spectra_tree_nodes_Nova_Package_native_static_Nova_parse)(spectra_tree_nodes_Nova_Package*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Package* (*spectra_tree_nodes_Nova_Package_native_Nova_construct)(spectra_tree_nodes_Nova_Package*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Package
{
spectra_tree_nodes_Nova_Package_native_Nova_construct Package;
} spectra_tree_nodes_native_Package;

typedef nova_Nova_String* (*spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_writeChildren)(spectra_tree_nodes_Nova_PlaceholderValue*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_PlaceholderValue* (*spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_construct)(spectra_tree_nodes_Nova_PlaceholderValue*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_native_PlaceholderValue
{
spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_writeChildren writeChildren;
spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_construct PlaceholderValue;
} spectra_tree_nodes_native_PlaceholderValue;

typedef spectra_tree_nodes_Nova_Priority* (*spectra_tree_nodes_Nova_Priority_native_Nova_construct)(spectra_tree_nodes_Nova_Priority*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Priority
{
spectra_tree_nodes_Nova_Priority_native_Nova_construct Priority;
} spectra_tree_nodes_native_Priority;

typedef void (*spectra_tree_nodes_Nova_Program_native_Nova_addChild)(spectra_tree_nodes_Nova_Program*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef spectra_tree_nodes_Nova_ClassDeclaration* (*spectra_tree_nodes_Nova_Program_native_Nova_getClassDeclaration)(spectra_tree_nodes_Nova_Program*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_nodes_Nova_Program* (*spectra_tree_nodes_Nova_Program_native_Nova_construct)(spectra_tree_nodes_Nova_Program*, nova_exception_Nova_ExceptionData*, spectra_tree_Nova_SyntaxTree*);

typedef struct spectra_tree_nodes_native_Program
{
spectra_tree_nodes_Nova_Program_native_Nova_addChild addChild;
spectra_tree_nodes_Nova_Program_native_Nova_getClassDeclaration getClassDeclaration;
spectra_tree_nodes_Nova_Program_native_Nova_construct Program;
} spectra_tree_nodes_native_Program;

typedef spectra_tree_nodes_Nova_Return* (*spectra_tree_nodes_Nova_Return_native_static_Nova_parse)(spectra_tree_nodes_Nova_Return*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Return_native_Nova_writeValue)(spectra_tree_nodes_Nova_Return*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Return* (*spectra_tree_nodes_Nova_Return_native_Nova_construct)(spectra_tree_nodes_Nova_Return*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_Nova_Value*);

typedef struct spectra_tree_nodes_native_Return
{
spectra_tree_nodes_Nova_Return_native_Nova_writeValue writeValue;
spectra_tree_nodes_Nova_Return_native_Nova_construct Return;
} spectra_tree_nodes_native_Return;

typedef spectra_tree_nodes_Nova_Scope* (*spectra_tree_nodes_Nova_Scope_native_Nova_construct)(spectra_tree_nodes_Nova_Scope*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Scope
{
spectra_tree_nodes_Nova_Scope_native_Nova_construct Scope;
} spectra_tree_nodes_native_Scope;

typedef spectra_tree_nodes_Nova_Skeleton* (*spectra_tree_nodes_Nova_Skeleton_native_static_Nova_parse)(spectra_tree_nodes_Nova_Skeleton*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Skeleton* (*spectra_tree_nodes_Nova_Skeleton_native_Nova_construct)(spectra_tree_nodes_Nova_Skeleton*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Skeleton
{
spectra_tree_nodes_Nova_Skeleton_native_Nova_construct Skeleton;
} spectra_tree_nodes_native_Skeleton;

typedef spectra_tree_nodes_Nova_StaticClassReference* (*spectra_tree_nodes_Nova_StaticClassReference_native_Nova_construct)(spectra_tree_nodes_Nova_StaticClassReference*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_native_StaticClassReference
{
spectra_tree_nodes_Nova_StaticClassReference_native_Nova_construct StaticClassReference;
} spectra_tree_nodes_native_StaticClassReference;

typedef spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_native_static_Nova_parse)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_writeArray)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_writeGenericParameters)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_toNova)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_writeNova)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_native_Nova_cloneTo)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*);
typedef spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_native_Nova_construct)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_tree_nodes_native_Type
{
spectra_tree_nodes_Nova_Type_native_Nova_writeArray writeArray;
spectra_tree_nodes_Nova_Type_native_Nova_writeGenericParameters writeGenericParameters;
spectra_tree_nodes_Nova_Type_native_Nova_toNova toNova;
spectra_tree_nodes_Nova_Type_native_Nova_writeNova writeNova;
spectra_tree_nodes_Nova_Type_native_Nova_cloneTo cloneTo;
spectra_tree_nodes_Nova_Type_native_Nova_construct Type;
} spectra_tree_nodes_native_Type;

typedef spectra_tree_nodes_Nova_ValidationResult* (*spectra_tree_nodes_Nova_ValidationResult_native_Nova_construct)(spectra_tree_nodes_Nova_ValidationResult*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);

typedef struct spectra_tree_nodes_native_ValidationResult
{
spectra_tree_nodes_Nova_ValidationResult_native_Nova_construct ValidationResult;
} spectra_tree_nodes_native_ValidationResult;

typedef spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_Value_native0_static_Nova_parse)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_Value_native1_static_Nova_parse)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_PlaceholderValue*, int);
typedef char (*spectra_tree_nodes_Nova_Value_native_Nova_parseType)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef void (*spectra_tree_nodes_Nova_Value_native_Nova_invalidTypeError)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Value_native_Nova_writeType)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Value_native_Nova_writeArrayAccess)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_Value_native_Nova_construct)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_Nova_Type*);

typedef struct spectra_tree_nodes_native_Value
{
spectra_tree_nodes_Nova_Value_native_Nova_parseType parseType;
spectra_tree_nodes_Nova_Value_native_Nova_invalidTypeError invalidTypeError;
spectra_tree_nodes_Nova_Value_native_Nova_writeType writeType;
spectra_tree_nodes_Nova_Value_native_Nova_writeArrayAccess writeArrayAccess;
spectra_tree_nodes_Nova_Value_native_Nova_construct Value;
} spectra_tree_nodes_native_Value;

typedef void (*spectra_tree_nodes_annotations_Nova_Annotatable_native_Nova_addAnnotation)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*);

typedef struct spectra_tree_nodes_annotations_native_Annotatable
{
spectra_tree_nodes_annotations_Nova_Annotatable_native_Nova_addAnnotation addAnnotation;
} spectra_tree_nodes_annotations_native_Annotatable;

typedef spectra_tree_nodes_annotations_Nova_Annotation* (*spectra_tree_nodes_annotations_Nova_Annotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_annotations_Nova_Annotation_native_static_Nova_getRemainingStatement)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_nodes_annotations_Nova_Annotation* (*spectra_tree_nodes_annotations_Nova_Annotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_Annotation
{
spectra_tree_nodes_annotations_Nova_Annotation_native_Nova_construct Annotation;
} spectra_tree_nodes_annotations_native_Annotation;


typedef struct spectra_tree_nodes_annotations_native_Modifier
{
} spectra_tree_nodes_annotations_native_Modifier;

typedef spectra_tree_nodes_annotations_Nova_NativeAnnotation* (*spectra_tree_nodes_annotations_Nova_NativeAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_NativeAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_NativeAnnotation* (*spectra_tree_nodes_annotations_Nova_NativeAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_NativeAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_NativeAnnotation
{
spectra_tree_nodes_annotations_Nova_NativeAnnotation_native_Nova_construct NativeAnnotation;
} spectra_tree_nodes_annotations_native_NativeAnnotation;

typedef spectra_tree_nodes_annotations_Nova_OverrideAnnotation* (*spectra_tree_nodes_annotations_Nova_OverrideAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_OverrideAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_OverrideAnnotation* (*spectra_tree_nodes_annotations_Nova_OverrideAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_OverrideAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_OverrideAnnotation
{
spectra_tree_nodes_annotations_Nova_OverrideAnnotation_native_Nova_construct OverrideAnnotation;
} spectra_tree_nodes_annotations_native_OverrideAnnotation;

typedef spectra_tree_nodes_annotations_Nova_TargetAnnotation* (*spectra_tree_nodes_annotations_Nova_TargetAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_TargetAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_TargetAnnotation* (*spectra_tree_nodes_annotations_Nova_TargetAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_TargetAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_TargetAnnotation
{
spectra_tree_nodes_annotations_Nova_TargetAnnotation_native_Nova_construct TargetAnnotation;
} spectra_tree_nodes_annotations_native_TargetAnnotation;

typedef spectra_tree_nodes_arrays_Nova_ArrayAccess* (*spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parse)(spectra_tree_nodes_arrays_Nova_ArrayAccess*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef char (*spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parseDimension)(spectra_tree_nodes_arrays_Nova_ArrayAccess*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_nodes_arrays_Nova_ArrayAccess* (*spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_construct)(spectra_tree_nodes_arrays_Nova_ArrayAccess*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_arrays_native_ArrayAccess
{
spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parse parse;
spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parseDimension parseDimension;
spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_construct ArrayAccess;
} spectra_tree_nodes_arrays_native_ArrayAccess;

typedef spectra_tree_nodes_controlstructures_Nova_ControlStructure* (*spectra_tree_nodes_controlstructures_Nova_ControlStructure_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_ControlStructure*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_native_ControlStructure
{
spectra_tree_nodes_controlstructures_Nova_ControlStructure_native_Nova_construct ControlStructure;
} spectra_tree_nodes_controlstructures_native_ControlStructure;

typedef spectra_tree_nodes_controlstructures_Nova_ElseStatement* (*spectra_tree_nodes_controlstructures_Nova_ElseStatement_native_static_Nova_parse)(spectra_tree_nodes_controlstructures_Nova_ElseStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_controlstructures_Nova_ElseStatement* (*spectra_tree_nodes_controlstructures_Nova_ElseStatement_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_ElseStatement*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_native_ElseStatement
{
spectra_tree_nodes_controlstructures_Nova_ElseStatement_native_Nova_construct ElseStatement;
} spectra_tree_nodes_controlstructures_native_ElseStatement;

typedef spectra_tree_nodes_controlstructures_Nova_IfStatement* (*spectra_tree_nodes_controlstructures_Nova_IfStatement_native_static_Nova_parse)(spectra_tree_nodes_controlstructures_Nova_IfStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_controlstructures_Nova_IfStatement* (*spectra_tree_nodes_controlstructures_Nova_IfStatement_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_IfStatement*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_native_IfStatement
{
spectra_tree_nodes_controlstructures_Nova_IfStatement_native_Nova_construct IfStatement;
} spectra_tree_nodes_controlstructures_native_IfStatement;

typedef spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* (*spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_ForEachLoop
{
spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_native_Nova_construct ForEachLoop;
} spectra_tree_nodes_controlstructures_loops_native_ForEachLoop;

typedef spectra_tree_nodes_controlstructures_loops_Nova_Loop* (*spectra_tree_nodes_controlstructures_loops_Nova_Loop_native_static_Nova_parse)(spectra_tree_nodes_controlstructures_loops_Nova_Loop*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_controlstructures_loops_Nova_Loop* (*spectra_tree_nodes_controlstructures_loops_Nova_Loop_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_Loop*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_Loop
{
spectra_tree_nodes_controlstructures_loops_Nova_Loop_native_Nova_construct Loop;
} spectra_tree_nodes_controlstructures_loops_native_Loop;

typedef spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop* (*spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_WhileLoop
{
spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_native_Nova_construct WhileLoop;
} spectra_tree_nodes_controlstructures_loops_native_WhileLoop;

typedef spectra_tree_nodes_exceptionhandling_Nova_Catch* (*spectra_tree_nodes_exceptionhandling_Nova_Catch_native_static_Nova_parse)(spectra_tree_nodes_exceptionhandling_Nova_Catch*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_writeException)(spectra_tree_nodes_exceptionhandling_Nova_Catch*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_exceptionhandling_Nova_Catch* (*spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_Catch*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_exceptionhandling_native_Catch
{
spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_writeException writeException;
spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_construct Catch;
} spectra_tree_nodes_exceptionhandling_native_Catch;

typedef spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler* (*spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_exceptionhandling_native_ExceptionHandler
{
spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_native_Nova_construct ExceptionHandler;
} spectra_tree_nodes_exceptionhandling_native_ExceptionHandler;

typedef spectra_tree_nodes_exceptionhandling_Nova_Throw* (*spectra_tree_nodes_exceptionhandling_Nova_Throw_native_static_Nova_parse)(spectra_tree_nodes_exceptionhandling_Nova_Throw*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_exceptionhandling_Nova_Throw* (*spectra_tree_nodes_exceptionhandling_Nova_Throw_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_Throw*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_exceptionhandling_native_Throw
{
spectra_tree_nodes_exceptionhandling_Nova_Throw_native_Nova_construct Throw;
} spectra_tree_nodes_exceptionhandling_native_Throw;

typedef spectra_tree_nodes_exceptionhandling_Nova_Try* (*spectra_tree_nodes_exceptionhandling_Nova_Try_native_static_Nova_parse)(spectra_tree_nodes_exceptionhandling_Nova_Try*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_exceptionhandling_Nova_Try* (*spectra_tree_nodes_exceptionhandling_Nova_Try_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_Try*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_exceptionhandling_native_Try
{
spectra_tree_nodes_exceptionhandling_Nova_Try_native_Nova_construct Try;
} spectra_tree_nodes_exceptionhandling_native_Try;

typedef spectra_tree_nodes_functions_Nova_AccessorFunction* (*spectra_tree_nodes_functions_Nova_AccessorFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_AccessorFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_AccessorFunction
{
spectra_tree_nodes_functions_Nova_AccessorFunction_native_Nova_construct AccessorFunction;
} spectra_tree_nodes_functions_native_AccessorFunction;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_writeDimensions)(spectra_tree_nodes_functions_Nova_ArrayInstantiation*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_ArrayInstantiation* (*spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ArrayInstantiation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ArrayInstantiation
{
spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_writeDimensions writeDimensions;
spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_construct ArrayInstantiation;
} spectra_tree_nodes_functions_native_ArrayInstantiation;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_writeBody)(spectra_tree_nodes_functions_Nova_BodyFunction*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_BodyFunction* (*spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_BodyFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_BodyFunction
{
spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_writeBody writeBody;
spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_construct BodyFunction;
} spectra_tree_nodes_functions_native_BodyFunction;

typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseParameter)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef char (*spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseParameterAndAnnotations)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef char (*spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseParameters)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef char (*spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_compatibleArguments)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef char (*spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseName)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_tree_nodes_functions_native_CallableFunction
{
spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseParameter parseParameter;
spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseParameterAndAnnotations parseParameterAndAnnotations;
spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseParameters parseParameters;
spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_compatibleArguments compatibleArguments;
spectra_tree_nodes_functions_Nova_CallableFunction_native_Nova_parseName parseName;
} spectra_tree_nodes_functions_native_CallableFunction;

typedef spectra_tree_nodes_functions_Nova_Constructor* (*spectra_tree_nodes_functions_Nova_Constructor_native_Nova_construct)(spectra_tree_nodes_functions_Nova_Constructor*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_Constructor
{
spectra_tree_nodes_functions_Nova_Constructor_native_Nova_construct Constructor;
} spectra_tree_nodes_functions_native_Constructor;

typedef spectra_tree_nodes_functions_Nova_FunctionArgumentList* (*spectra_tree_nodes_functions_Nova_FunctionArgumentList_native_Nova_construct)(spectra_tree_nodes_functions_Nova_FunctionArgumentList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_FunctionArgumentList
{
spectra_tree_nodes_functions_Nova_FunctionArgumentList_native_Nova_construct FunctionArgumentList;
} spectra_tree_nodes_functions_native_FunctionArgumentList;

typedef spectra_tree_nodes_functions_Nova_FunctionCall* (*spectra_tree_nodes_functions_Nova_FunctionCall_native0_static_Nova_parse)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int, spectra_tree_nodes_functions_Nova_FunctionDeclaration*);
typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_writeName)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_FunctionCall* (*spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_construct)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_FunctionCall
{
spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_writeName writeName;
spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_construct FunctionCall;
} spectra_tree_nodes_functions_native_FunctionCall;

typedef char (*spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_parseSignature)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char);
typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_writeReturnType)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_writeHeader)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_FunctionDeclaration* (*spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_construct)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_FunctionDeclaration
{
spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_parseSignature parseSignature;
spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_writeReturnType writeReturnType;
spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_writeHeader writeHeader;
spectra_tree_nodes_functions_Nova_FunctionDeclaration_native_Nova_construct FunctionDeclaration;
} spectra_tree_nodes_functions_native_FunctionDeclaration;

typedef spectra_tree_nodes_functions_Nova_InitializationFunction* (*spectra_tree_nodes_functions_Nova_InitializationFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_InitializationFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_Constructor*);

typedef struct spectra_tree_nodes_functions_native_InitializationFunction
{
spectra_tree_nodes_functions_Nova_InitializationFunction_native_Nova_construct InitializationFunction;
} spectra_tree_nodes_functions_native_InitializationFunction;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_writeObjectNotation)(spectra_tree_nodes_functions_Nova_Instantiation*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_Instantiation* (*spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_construct)(spectra_tree_nodes_functions_Nova_Instantiation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_Instantiation
{
spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_writeObjectNotation writeObjectNotation;
spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_construct Instantiation;
} spectra_tree_nodes_functions_native_Instantiation;

typedef spectra_tree_nodes_functions_Nova_MutatorFunction* (*spectra_tree_nodes_functions_Nova_MutatorFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_MutatorFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_MutatorFunction
{
spectra_tree_nodes_functions_Nova_MutatorFunction_native_Nova_construct MutatorFunction;
} spectra_tree_nodes_functions_native_MutatorFunction;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_writeChildren)(spectra_tree_nodes_functions_Nova_ObjectNotation*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_ObjectNotation* (*spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ObjectNotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ObjectNotation
{
spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_writeChildren writeChildren;
spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_construct ObjectNotation;
} spectra_tree_nodes_functions_native_ObjectNotation;

typedef spectra_tree_nodes_functions_Nova_ObjectNotationProperty* (*spectra_tree_nodes_functions_Nova_ObjectNotationProperty_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ObjectNotationProperty*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ObjectNotationProperty
{
spectra_tree_nodes_functions_Nova_ObjectNotationProperty_native_Nova_construct ObjectNotationProperty;
} spectra_tree_nodes_functions_native_ObjectNotationProperty;

typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_Parameter_native_Nova_construct)(spectra_tree_nodes_functions_Nova_Parameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_Parameter
{
spectra_tree_nodes_functions_Nova_Parameter_native_Nova_construct Parameter;
} spectra_tree_nodes_functions_native_Parameter;

typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_get)(spectra_tree_nodes_functions_Nova_ParameterList*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_set)(spectra_tree_nodes_functions_Nova_ParameterList*, nova_exception_Nova_ExceptionData*, int, spectra_tree_nodes_functions_Nova_Parameter*);
typedef spectra_tree_nodes_functions_Nova_ParameterList* (*spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ParameterList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ParameterList
{
spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_get get;
spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_set set;
spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_construct ParameterList;
} spectra_tree_nodes_functions_native_ParameterList;

typedef spectra_tree_nodes_functions_Nova_PropertyFunction* (*spectra_tree_nodes_functions_Nova_PropertyFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_PropertyFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_PropertyFunction
{
spectra_tree_nodes_functions_Nova_PropertyFunction_native_Nova_construct PropertyFunction;
} spectra_tree_nodes_functions_native_PropertyFunction;

typedef spectra_tree_nodes_functions_closures_Nova_ClosureContext* (*spectra_tree_nodes_functions_closures_Nova_ClosureContext_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_ClosureContext*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_ClosureContext
{
spectra_tree_nodes_functions_closures_Nova_ClosureContext_native_Nova_construct ClosureContext;
} spectra_tree_nodes_functions_closures_native_ClosureContext;

typedef spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* (*spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_ClosureDeclaration
{
spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_native_Nova_construct ClosureDeclaration;
} spectra_tree_nodes_functions_closures_native_ClosureDeclaration;

typedef spectra_tree_nodes_functions_closures_Nova_ClosureParameter* (*spectra_tree_nodes_functions_closures_Nova_ClosureParameter_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_ClosureParameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_ClosureParameter
{
spectra_tree_nodes_functions_closures_Nova_ClosureParameter_native_Nova_construct ClosureParameter;
} spectra_tree_nodes_functions_closures_native_ClosureParameter;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_writeParameters)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_closures_Nova_LambdaExpression* (*spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_LambdaExpression
{
spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_writeParameters writeParameters;
spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_construct LambdaExpression;
} spectra_tree_nodes_functions_closures_native_LambdaExpression;

typedef spectra_tree_nodes_functions_closures_Nova_LambdaParameter* (*spectra_tree_nodes_functions_closures_Nova_LambdaParameter_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_LambdaParameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_LambdaParameter
{
spectra_tree_nodes_functions_closures_Nova_LambdaParameter_native_Nova_construct LambdaParameter;
} spectra_tree_nodes_functions_closures_native_LambdaParameter;

typedef spectra_tree_nodes_generics_Nova_GenericArgument* (*spectra_tree_nodes_generics_Nova_GenericArgument_native_Nova_construct)(spectra_tree_nodes_generics_Nova_GenericArgument*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_generics_native_GenericArgument
{
spectra_tree_nodes_generics_Nova_GenericArgument_native_Nova_construct GenericArgument;
} spectra_tree_nodes_generics_native_GenericArgument;

typedef char (*spectra_tree_nodes_generics_Nova_GenericCompatible_native_Nova_parseGenericParameters)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_generics_Nova_GenericCompatible_native_Nova_writeGenericParameters)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_generics_Nova_GenericCompatible* (*spectra_tree_nodes_generics_Nova_GenericCompatible_native1_Nova_cloneTo)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_generics_Nova_GenericCompatible*);

typedef struct spectra_tree_nodes_generics_native_GenericCompatible
{
spectra_tree_nodes_generics_Nova_GenericCompatible_native_Nova_parseGenericParameters parseGenericParameters;
spectra_tree_nodes_generics_Nova_GenericCompatible_native_Nova_writeGenericParameters writeGenericParameters;
spectra_tree_nodes_generics_Nova_GenericCompatible_native1_Nova_cloneTo cloneTo__spectra_tree_nodes_generics_GenericCompatible;
} spectra_tree_nodes_generics_native_GenericCompatible;

typedef spectra_tree_nodes_generics_Nova_GenericParameter* (*spectra_tree_nodes_generics_Nova_GenericParameter_native_Nova_construct)(spectra_tree_nodes_generics_Nova_GenericParameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_generics_native_GenericParameter
{
spectra_tree_nodes_generics_Nova_GenericParameter_native_Nova_construct GenericParameter;
} spectra_tree_nodes_generics_native_GenericParameter;

typedef spectra_tree_nodes_generics_Nova_GenericType* (*spectra_tree_nodes_generics_Nova_GenericType_native_Nova_construct)(spectra_tree_nodes_generics_Nova_GenericType*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_tree_nodes_generics_native_GenericType
{
spectra_tree_nodes_generics_Nova_GenericType_native_Nova_construct GenericType;
} spectra_tree_nodes_generics_native_GenericType;

typedef void (*spectra_tree_nodes_operations_Nova_Assignable_native_Nova_onAssigned)(spectra_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*);
typedef void (*spectra_tree_nodes_operations_Nova_Assignable_native_Nova_onAssignedTo)(spectra_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_variables_Nova_VariableDeclaration*);

typedef struct spectra_tree_nodes_operations_native_Assignable
{
spectra_tree_nodes_operations_Nova_Assignable_native_Nova_onAssigned onAssigned;
spectra_tree_nodes_operations_Nova_Assignable_native_Nova_onAssignedTo onAssignedTo;
} spectra_tree_nodes_operations_native_Assignable;

typedef nova_Nova_String* (*spectra_tree_nodes_operations_Nova_Assignment_native_static_Nova_findAssigned)(spectra_tree_nodes_operations_Nova_Assignment*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_operations_Nova_Assignment_native_static_Nova_findAssignment)(spectra_tree_nodes_operations_Nova_Assignment*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef spectra_tree_nodes_operations_Nova_Assignment* (*spectra_tree_nodes_operations_Nova_Assignment_native_Nova_construct)(spectra_tree_nodes_operations_Nova_Assignment*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_Assignment
{
spectra_tree_nodes_operations_Nova_Assignment_native_Nova_construct Assignment;
} spectra_tree_nodes_operations_native_Assignment;

typedef spectra_tree_nodes_operations_Nova_ElvisOperation* (*spectra_tree_nodes_operations_Nova_ElvisOperation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_ElvisOperation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_ElvisOperation
{
spectra_tree_nodes_operations_Nova_ElvisOperation_native_Nova_construct ElvisOperation;
} spectra_tree_nodes_operations_native_ElvisOperation;

typedef spectra_tree_nodes_operations_Nova_Operation* (*spectra_tree_nodes_operations_Nova_Operation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_Operation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_Operation
{
spectra_tree_nodes_operations_Nova_Operation_native_Nova_construct Operation;
} spectra_tree_nodes_operations_native_Operation;

typedef spectra_tree_nodes_operations_Nova_Operator* (*spectra_tree_nodes_operations_Nova_Operator_native_Nova_construct)(spectra_tree_nodes_operations_Nova_Operator*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_operations_native_Operator
{
spectra_tree_nodes_operations_Nova_Operator_native_Nova_construct Operator;
} spectra_tree_nodes_operations_native_Operator;

typedef spectra_tree_nodes_operations_Nova_TernaryOperation* (*spectra_tree_nodes_operations_Nova_TernaryOperation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_TernaryOperation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_TernaryOperation
{
spectra_tree_nodes_operations_Nova_TernaryOperation_native_Nova_construct TernaryOperation;
} spectra_tree_nodes_operations_native_TernaryOperation;

typedef spectra_tree_nodes_operations_Nova_UnaryOperation* (*spectra_tree_nodes_operations_Nova_UnaryOperation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_UnaryOperation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_UnaryOperation
{
spectra_tree_nodes_operations_Nova_UnaryOperation_native_Nova_construct UnaryOperation;
} spectra_tree_nodes_operations_native_UnaryOperation;

typedef spectra_tree_nodes_variables_Nova_ArrayBracketOverload* (*spectra_tree_nodes_variables_Nova_ArrayBracketOverload_native_static_Nova_parse)(spectra_tree_nodes_variables_Nova_ArrayBracketOverload*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_variables_Nova_ArrayBracketOverload* (*spectra_tree_nodes_variables_Nova_ArrayBracketOverload_native_Nova_construct)(spectra_tree_nodes_variables_Nova_ArrayBracketOverload*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_ArrayBracketOverload
{
spectra_tree_nodes_variables_Nova_ArrayBracketOverload_native_Nova_construct ArrayBracketOverload;
} spectra_tree_nodes_variables_native_ArrayBracketOverload;

typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeInitializationValue)(spectra_tree_nodes_variables_Nova_FieldDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeAccessorValue)(spectra_tree_nodes_variables_Nova_FieldDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_variables_Nova_FieldDeclaration* (*spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_FieldDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_FieldDeclaration
{
spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeInitializationValue writeInitializationValue;
spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeAccessorValue writeAccessorValue;
spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_construct FieldDeclaration;
} spectra_tree_nodes_variables_native_FieldDeclaration;

typedef spectra_tree_nodes_variables_Nova_ImplicitDeclaration* (*spectra_tree_nodes_variables_Nova_ImplicitDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_ImplicitDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_ImplicitDeclaration
{
spectra_tree_nodes_variables_Nova_ImplicitDeclaration_native_Nova_construct ImplicitDeclaration;
} spectra_tree_nodes_variables_native_ImplicitDeclaration;

typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeVisibility)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeStatic)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_variables_Nova_InstanceDeclaration* (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_InstanceDeclaration
{
spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeVisibility writeVisibility;
spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeStatic writeStatic;
spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_construct InstanceDeclaration;
} spectra_tree_nodes_variables_native_InstanceDeclaration;

typedef spectra_tree_nodes_variables_Nova_LocalDeclaration* (*spectra_tree_nodes_variables_Nova_LocalDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_LocalDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_LocalDeclaration
{
spectra_tree_nodes_variables_Nova_LocalDeclaration_native_Nova_construct LocalDeclaration;
} spectra_tree_nodes_variables_native_LocalDeclaration;

typedef spectra_tree_nodes_variables_Nova_Variable* (*spectra_tree_nodes_variables_Nova_Variable_native_static_Nova_findVariable)(spectra_tree_nodes_variables_Nova_Variable*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);
typedef spectra_tree_nodes_variables_Nova_Variable* (*spectra_tree_nodes_variables_Nova_Variable_native_Nova_construct)(spectra_tree_nodes_variables_Nova_Variable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_variables_Nova_VariableDeclaration*);

typedef struct spectra_tree_nodes_variables_native_Variable
{
spectra_tree_nodes_variables_Nova_Variable_native_Nova_construct Variable;
} spectra_tree_nodes_variables_native_Variable;

typedef char (*spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_parseModifier)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*spectra_tree_nodes_variables_Nova_VariableDeclaration_native0_Nova_parseModifiers)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*spectra_tree_nodes_variables_Nova_VariableDeclaration_native1_Nova_parseModifiers)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_getInvalidModifiers)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_writeModifiers)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_variables_Nova_VariableDeclaration* (*spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_VariableDeclaration
{
spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_parseModifier parseModifier;
spectra_tree_nodes_variables_Nova_VariableDeclaration_native0_Nova_parseModifiers parseModifiers__nova_String;
spectra_tree_nodes_variables_Nova_VariableDeclaration_native1_Nova_parseModifiers parseModifiers__nova_datastruct_list_Array;
spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_getInvalidModifiers getInvalidModifiers;
spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_writeModifiers writeModifiers;
spectra_tree_nodes_variables_Nova_VariableDeclaration_native_Nova_construct VariableDeclaration;
} spectra_tree_nodes_variables_native_VariableDeclaration;

typedef nova_Nova_String* (*spectra_util_Nova_Bounds_native_Nova_extractString)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_util_Nova_Bounds_native_Nova_extractPreString)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_util_Nova_Bounds_native_Nova_extractPostString)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_util_Nova_Bounds_native_Nova_trimString)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_util_Nova_Bounds* (*spectra_util_Nova_Bounds_native_Nova_invalidate)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_util_Nova_Bounds_native_Nova_cloneTo)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*, spectra_util_Nova_Bounds*);
typedef spectra_util_Nova_Bounds* (*spectra_util_Nova_Bounds_native_Nova_clone)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef spectra_util_Nova_Bounds* (*spectra_util_Nova_Bounds_native_Nova_construct)(spectra_util_Nova_Bounds*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct spectra_util_native_Bounds
{
spectra_util_Nova_Bounds_native_Nova_extractString extractString;
spectra_util_Nova_Bounds_native_Nova_extractPreString extractPreString;
spectra_util_Nova_Bounds_native_Nova_extractPostString extractPostString;
spectra_util_Nova_Bounds_native_Nova_trimString trimString;
spectra_util_Nova_Bounds_native_Nova_invalidate invalidate;
spectra_util_Nova_Bounds_native_Nova_cloneTo cloneTo;
spectra_util_Nova_Bounds_native_Nova_clone clone;
spectra_util_Nova_Bounds_native_Nova_construct Bounds;
} spectra_util_native_Bounds;

typedef spectra_tree_Nova_StatementIterator* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_getStatements)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Stack*);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_Nova_containsAllWhitespaceAfter)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_datastruct_Nova_Tuple2* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_getArrayAccesses)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_substring)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, spectra_util_Nova_Bounds*);
typedef spectra_util_Nova_Bounds* (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_nextWordBounds)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_Nova_containsWord)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextWordIndex)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextWord)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, nova_Nova_String*);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextNonWhitespaceChar)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextNonWhitespaceIndex)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextWhitespaceIndex)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextIndexThatDoesntContain)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextIndexThatContains)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_nextLetterIndex)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, int, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_Nova_isSurroundedByQuotes)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_removeSurroundingQuotes)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_containsString)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_containsString)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_static_Nova_defaultCharacterCheck)(spectra_util_Nova_CompilerStringFunctions*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findEndingChar)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int, int, spectra_util_Nova_CompilerStringFunctions_closure1_Nova_advance spectra_util_Nova_CompilerStringFunctions_Nova_advance, void* spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance, void* advance_context, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findEndingQuote)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_findEndingMatch)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, char, char, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_findEndingMatch)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*, nova_Nova_String*, int, int, int);
typedef nova_datastruct_list_Nova_Array* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_splitAtDotOperator)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_splitValues)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_splitAtCommas)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_datastruct_list_Nova_IntArray* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findOperatorIndices)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_isStrictlyOperator)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_isStrictlyOperator)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_findOperatorOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_findOperatorOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_findCharOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_findCharOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findWordOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native0_Nova_findStringOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_findStringOnTopLevel)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_calculateStatementEnd)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_calculateReturnValue)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, int, int);
typedef spectra_util_Nova_Bounds* (*spectra_util_Nova_CompilerStringFunctions_native1_Nova_nextWordBounds)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findGroupedSymbols)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findGroupedChars)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_Nova_checkStatementContinuation)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_static_Nova_validBounds)(spectra_util_Nova_CompilerStringFunctions*, nova_exception_Nova_ExceptionData*, spectra_util_Nova_Bounds*, int, int);
typedef char (*spectra_util_Nova_CompilerStringFunctions_native_Nova_containsUnaryOperator)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int, int);
typedef spectra_util_Nova_Bounds* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findStrings)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int, int, nova_datastruct_list_Nova_CharArray*);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_searchGenericType)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findDotOperatorIndex)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_String* (*spectra_util_Nova_CompilerStringFunctions_native_Nova_formatIndentation)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_CompilerStringFunctions
{
spectra_util_Nova_CompilerStringFunctions_native_Nova_getStatements getStatements;
spectra_util_Nova_CompilerStringFunctions_native_Nova_containsAllWhitespaceAfter containsAllWhitespaceAfter;
spectra_util_Nova_CompilerStringFunctions_native_Nova_getArrayAccesses getArrayAccesses;
spectra_util_Nova_CompilerStringFunctions_native_Nova_substring substring;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_nextWordBounds nextWordBounds__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native_Nova_containsWord containsWord;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextWordIndex nextWordIndex;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextWord nextWord;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextNonWhitespaceChar nextNonWhitespaceChar;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextNonWhitespaceIndex nextNonWhitespaceIndex;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextWhitespaceIndex nextWhitespaceIndex;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextIndexThatDoesntContain nextIndexThatDoesntContain;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextIndexThatContains nextIndexThatContains;
spectra_util_Nova_CompilerStringFunctions_native_Nova_nextLetterIndex nextLetterIndex;
spectra_util_Nova_CompilerStringFunctions_native_Nova_isSurroundedByQuotes isSurroundedByQuotes;
spectra_util_Nova_CompilerStringFunctions_native_Nova_removeSurroundingQuotes removeSurroundingQuotes;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_containsString containsString__nova_datastruct_list_Array__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_containsString containsString__nova_String__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findEndingChar findEndingChar;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findEndingQuote findEndingQuote;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_findEndingMatch findEndingMatch__nova_primitive_number_Int__nova_primitive_number_Char__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_number_Char;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_findEndingMatch findEndingMatch__nova_primitive_number_Int__nova_String__nova_String__nova_primitive_number_Int__nova_primitive_number_Char__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native_Nova_splitAtDotOperator splitAtDotOperator;
spectra_util_Nova_CompilerStringFunctions_native_Nova_splitValues splitValues;
spectra_util_Nova_CompilerStringFunctions_native_Nova_splitAtCommas splitAtCommas;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findOperatorIndices findOperatorIndices;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_isStrictlyOperator isStrictlyOperator__nova_primitive_number_Char__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_isStrictlyOperator isStrictlyOperator__nova_String__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_findOperatorOnTopLevel findOperatorOnTopLevel__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_Bool;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_findOperatorOnTopLevel findOperatorOnTopLevel__nova_String__nova_primitive_number_Int__nova_primitive_Bool;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_findCharOnTopLevel findCharOnTopLevel__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_Bool;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_findCharOnTopLevel findCharOnTopLevel__nova_datastruct_list_CharArray__nova_primitive_number_Int__nova_primitive_Bool;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findWordOnTopLevel findWordOnTopLevel;
spectra_util_Nova_CompilerStringFunctions_native0_Nova_findStringOnTopLevel findStringOnTopLevel__nova_String__nova_primitive_number_Int__nova_primitive_Bool__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_findStringOnTopLevel findStringOnTopLevel__nova_datastruct_list_Array__nova_primitive_number_Int__nova_primitive_Bool__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native_Nova_calculateStatementEnd calculateStatementEnd;
spectra_util_Nova_CompilerStringFunctions_native_Nova_calculateReturnValue calculateReturnValue;
spectra_util_Nova_CompilerStringFunctions_native1_Nova_nextWordBounds nextWordBounds__nova_primitive_number_Int__nova_primitive_number_Int;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findGroupedSymbols findGroupedSymbols;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findGroupedChars findGroupedChars;
spectra_util_Nova_CompilerStringFunctions_native_Nova_checkStatementContinuation checkStatementContinuation;
spectra_util_Nova_CompilerStringFunctions_native_Nova_containsUnaryOperator containsUnaryOperator;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findStrings findStrings;
spectra_util_Nova_CompilerStringFunctions_native_Nova_searchGenericType searchGenericType;
spectra_util_Nova_CompilerStringFunctions_native_Nova_findDotOperatorIndex findDotOperatorIndex;
spectra_util_Nova_CompilerStringFunctions_native_Nova_formatIndentation formatIndentation;
} spectra_util_native_CompilerStringFunctions;

typedef nova_Nova_String* (*spectra_util_Nova_FileUtils_native_static_Nova_formatPath)(spectra_util_Nova_FileUtils*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_util_Nova_FileUtils_native_static_Nova_formAbsolutePath)(spectra_util_Nova_FileUtils*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_util_Nova_FileUtils_native_static_Nova_escapeSpaces)(spectra_util_Nova_FileUtils*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*spectra_util_Nova_FileUtils_native_static_Nova_getWorkingDirectoryPath)(spectra_util_Nova_FileUtils*, nova_exception_Nova_ExceptionData*);
typedef spectra_util_Nova_FileUtils* (*spectra_util_Nova_FileUtils_native_Nova_construct)(spectra_util_Nova_FileUtils*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_FileUtils
{
spectra_util_Nova_FileUtils_native_Nova_construct FileUtils;
} spectra_util_native_FileUtils;

typedef void (*spectra_util_Nova_Location_native_Nova_setLineNumber)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int);
typedef int (*spectra_util_Nova_Location_native_Nova_getStart)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*);
typedef int (*spectra_util_Nova_Location_native_Nova_getEnd)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_util_Nova_Location_native_Nova_setOffset)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_util_Nova_Location_native_Nova_addOffset)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_util_Nova_Location_native_Nova_subtractOffset)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_util_Nova_Location_native0_Nova_setBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Bounds*);
typedef void (*spectra_util_Nova_Location_native1_Nova_setBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*spectra_util_Nova_Location_native0_Nova_addBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_util_Nova_Location_native_Nova_moveBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*spectra_util_Nova_Location_native0_Nova_subtractBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*spectra_util_Nova_Location_native1_Nova_subtractBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_util_Nova_Location_native1_Nova_addBounds)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int, int);
typedef char (*spectra_util_Nova_Location_native_Nova_isValid)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*);
typedef spectra_util_Nova_Location* (*spectra_util_Nova_Location_native_Nova_asNew)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*);
typedef spectra_util_Nova_Location* (*spectra_util_Nova_Location_native0_Nova_construct)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*);
typedef spectra_util_Nova_Location* (*spectra_util_Nova_Location_native1_Nova_construct)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, spectra_util_Nova_Location*);
typedef spectra_util_Nova_Location* (*spectra_util_Nova_Location_native2_Nova_construct)(spectra_util_Nova_Location*, nova_exception_Nova_ExceptionData*, int, int, int, int);

typedef struct spectra_util_native_Location
{
spectra_util_Nova_Location_native_Nova_setLineNumber setLineNumber;
spectra_util_Nova_Location_native_Nova_getStart getStart;
spectra_util_Nova_Location_native_Nova_getEnd getEnd;
spectra_util_Nova_Location_native_Nova_setOffset setOffset;
spectra_util_Nova_Location_native_Nova_addOffset addOffset;
spectra_util_Nova_Location_native_Nova_subtractOffset subtractOffset;
spectra_util_Nova_Location_native0_Nova_setBounds setBounds__nova_datastruct_Bounds;
spectra_util_Nova_Location_native1_Nova_setBounds setBounds__nova_primitive_number_Int__nova_primitive_number_Int;
spectra_util_Nova_Location_native0_Nova_addBounds addBounds__nova_primitive_number_Int;
spectra_util_Nova_Location_native_Nova_moveBounds moveBounds;
spectra_util_Nova_Location_native0_Nova_subtractBounds subtractBounds__nova_primitive_number_Int__nova_primitive_number_Int;
spectra_util_Nova_Location_native1_Nova_subtractBounds subtractBounds__nova_primitive_number_Int;
spectra_util_Nova_Location_native1_Nova_addBounds addBounds__nova_primitive_number_Int__nova_primitive_number_Int;
spectra_util_Nova_Location_native_Nova_isValid isValid;
spectra_util_Nova_Location_native_Nova_asNew asNew;
spectra_util_Nova_Location_native0_Nova_construct Location;
spectra_util_Nova_Location_native1_Nova_construct Location__spectra_util_Location;
spectra_util_Nova_Location_native2_Nova_construct Location__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
} spectra_util_native_Location;

typedef spectra_util_Nova_OS* (*spectra_util_Nova_OS_nativefunc_Nova_construct)(spectra_util_Nova_OS*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_OS
{
spectra_util_Nova_OS_nativefunc_Nova_construct OS;
} spectra_util_native_OS;

typedef char (*spectra_util_Nova_SyntaxUtils_native_static_Nova_checkTypes)(spectra_util_Nova_SyntaxUtils*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, nova_Nova_Class*);
typedef spectra_util_Nova_SyntaxUtils* (*spectra_util_Nova_SyntaxUtils_native_Nova_construct)(spectra_util_Nova_SyntaxUtils*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_SyntaxUtils
{
spectra_util_Nova_SyntaxUtils_native_Nova_construct SyntaxUtils;
} spectra_util_native_SyntaxUtils;


typedef struct nova_env
{
nova_native_Class nova_Class;
nova_native_Object nova_Object;
nova_native_String nova_String;
nova_native_Substring nova_Substring;
nova_native_System nova_System;
nova_ar_native_ImageTracker nova_ar_ImageTracker;
nova_ar_native_TrackPoint nova_ar_TrackPoint;
nova_database_native_DBConnector nova_database_DBConnector;
nova_database_native_ResultSet nova_database_ResultSet;
nova_datastruct_native_BinaryNode nova_datastruct_BinaryNode;
nova_datastruct_native_BinaryTree nova_datastruct_BinaryTree;
nova_datastruct_native_Bounds nova_datastruct_Bounds;
nova_datastruct_native_Comparable nova_datastruct_Comparable;
nova_datastruct_native_HashMap nova_datastruct_HashMap;
nova_datastruct_native_HashSet nova_datastruct_HashSet;
nova_datastruct_native_ImmutableHashMap nova_datastruct_ImmutableHashMap;
nova_datastruct_native_Node nova_datastruct_Node;
nova_datastruct_native_Pair nova_datastruct_Pair;
nova_datastruct_native_ReversibleHashMap nova_datastruct_ReversibleHashMap;
nova_datastruct_native_Tree nova_datastruct_Tree;
nova_datastruct_native_Tuple nova_datastruct_Tuple;
nova_datastruct_native_Tuple2 nova_datastruct_Tuple2;
nova_datastruct_list_native_Array nova_datastruct_list_Array;
nova_datastruct_list_native_ArrayIterator nova_datastruct_list_ArrayIterator;
nova_datastruct_list_native_CharArray nova_datastruct_list_CharArray;
nova_datastruct_list_native_CharArrayIterator nova_datastruct_list_CharArrayIterator;
nova_datastruct_list_native_CompiledList nova_datastruct_list_CompiledList;
nova_datastruct_list_native_DoubleArray nova_datastruct_list_DoubleArray;
nova_datastruct_list_native_DoubleArrayIterator nova_datastruct_list_DoubleArrayIterator;
nova_datastruct_list_native_EmptyStackException nova_datastruct_list_EmptyStackException;
nova_datastruct_list_native_ImmutableArray nova_datastruct_list_ImmutableArray;
nova_datastruct_list_native_ImmutableArrayIterator nova_datastruct_list_ImmutableArrayIterator;
nova_datastruct_list_native_ImmutableCharArray nova_datastruct_list_ImmutableCharArray;
nova_datastruct_list_native_ImmutableCharArrayIterator nova_datastruct_list_ImmutableCharArrayIterator;
nova_datastruct_list_native_IntArray nova_datastruct_list_IntArray;
nova_datastruct_list_native_IntArrayIterator nova_datastruct_list_IntArrayIterator;
nova_datastruct_list_native_IntRange nova_datastruct_list_IntRange;
nova_datastruct_list_native_IntRangeIterator nova_datastruct_list_IntRangeIterator;
nova_datastruct_list_native_Iterable nova_datastruct_list_Iterable;
nova_datastruct_list_native_Iterator nova_datastruct_list_Iterator;
nova_datastruct_list_native_LinkedList nova_datastruct_list_LinkedList;
nova_datastruct_list_native_LinkedListIterator nova_datastruct_list_LinkedListIterator;
nova_datastruct_list_native_List nova_datastruct_list_List;
nova_datastruct_list_native_ListNode nova_datastruct_list_ListNode;
nova_datastruct_list_native_NoSuchElementException nova_datastruct_list_NoSuchElementException;
nova_datastruct_list_native_Queue nova_datastruct_list_Queue;
nova_datastruct_list_native_Stack nova_datastruct_list_Stack;
nova_datastruct_list_native_StringCharArray nova_datastruct_list_StringCharArray;
nova_datastruct_list_native_SubstringCharArray nova_datastruct_list_SubstringCharArray;
nova_exception_native_Backtraces nova_exception_Backtraces;
nova_exception_native_CaughtException nova_exception_CaughtException;
nova_exception_native_DivideByZeroException nova_exception_DivideByZeroException;
nova_exception_native_Exception nova_exception_Exception;
nova_exception_native_ExceptionData nova_exception_ExceptionData;
nova_exception_native_InvalidArgumentException nova_exception_InvalidArgumentException;
nova_exception_native_InvalidOperationException nova_exception_InvalidOperationException;
nova_exception_native_UnimplementedOperationException nova_exception_UnimplementedOperationException;
nova_gc_native_GC nova_gc_GC;
nova_io_native_Console nova_io_Console;
nova_io_native_File nova_io_File;
nova_io_native_FileNotFoundException nova_io_FileNotFoundException;
nova_io_native_FileReader nova_io_FileReader;
nova_io_native_FileWriter nova_io_FileWriter;
nova_io_native_InputStream nova_io_InputStream;
nova_io_native_OutputStream nova_io_OutputStream;
nova_io_native_StreamReader nova_io_StreamReader;
nova_math_native_ArithmeticSequence nova_math_ArithmeticSequence;
nova_math_native_Diekstra nova_math_Diekstra;
nova_math_native_GeometricSequence nova_math_GeometricSequence;
nova_math_native_Graph nova_math_Graph;
nova_math_native_InvalidNumericStatementException nova_math_InvalidNumericStatementException;
nova_math_native_Math nova_math_Math;
nova_math_native_Matrix nova_math_Matrix;
nova_math_native_NumericOperand nova_math_NumericOperand;
nova_math_native_NumericOperation nova_math_NumericOperation;
nova_math_native_NumericStatement nova_math_NumericStatement;
nova_math_native_NumericTree nova_math_NumericTree;
nova_math_native_Polynomial nova_math_Polynomial;
nova_math_native_Sequence nova_math_Sequence;
nova_math_native_Statement nova_math_Statement;
nova_math_native_StatementComponent nova_math_StatementComponent;
nova_math_native_VariableOperand nova_math_VariableOperand;
nova_math_native_Vector nova_math_Vector;
nova_math_native_Vector2D nova_math_Vector2D;
nova_math_native_Vector3D nova_math_Vector3D;
nova_math_native_Vector4D nova_math_Vector4D;
nova_math_calculus_native_Calculus nova_math_calculus_Calculus;
nova_math_huffman_native_HuffmanTree nova_math_huffman_HuffmanTree;
nova_math_logic_native_Conclusion nova_math_logic_Conclusion;
nova_math_logic_native_Hypothesis nova_math_logic_Hypothesis;
nova_math_logic_native_InvalidFormulaException nova_math_logic_InvalidFormulaException;
nova_math_logic_native_LogicalConnective nova_math_logic_LogicalConnective;
nova_math_logic_native_LogicalStatement nova_math_logic_LogicalStatement;
nova_math_logic_native_StatementComponent nova_math_logic_StatementComponent;
nova_math_logic_native_StatementGroup nova_math_logic_StatementGroup;
nova_math_logic_native_StatementLetter nova_math_logic_StatementLetter;
nova_math_logic_native_WFF nova_math_logic_WFF;
nova_meta_native_Field nova_meta_Field;
nova_meta_native_GenericArgument nova_meta_GenericArgument;
nova_meta_native_GenericParameter nova_meta_GenericParameter;
nova_meta_native_Type nova_meta_Type;
nova_network_native_ClientSocket nova_network_ClientSocket;
nova_network_native_ConnectionSocket nova_network_ConnectionSocket;
nova_network_native_NetworkInputStream nova_network_NetworkInputStream;
nova_network_native_NetworkOutputStream nova_network_NetworkOutputStream;
nova_network_native_ServerSocket nova_network_ServerSocket;
nova_network_native_Socket nova_network_Socket;
nova_operators_native_Equals nova_operators_Equals;
nova_operators_native_Multiply nova_operators_Multiply;
nova_primitive_native_Bool nova_primitive_Bool;
nova_primitive_native_Null nova_primitive_Null;
nova_primitive_native_Primitive nova_primitive_Primitive;
nova_primitive_number_native_Byte nova_primitive_number_Byte;
nova_primitive_number_native_Char nova_primitive_number_Char;
nova_primitive_number_native_Double nova_primitive_number_Double;
nova_primitive_number_native_Float nova_primitive_number_Float;
nova_primitive_number_native_Int nova_primitive_number_Int;
nova_primitive_number_native_Integer nova_primitive_number_Integer;
nova_primitive_number_native_Long nova_primitive_number_Long;
nova_primitive_number_native_Number nova_primitive_number_Number;
nova_primitive_number_native_RealNumber nova_primitive_number_RealNumber;
nova_primitive_number_native_Short nova_primitive_number_Short;
nova_process_native_Process nova_process_Process;
nova_regex_native_Match nova_regex_Match;
nova_regex_native_Pattern nova_regex_Pattern;
nova_regex_native_Regex nova_regex_Regex;
nova_security_native_MD5 nova_security_MD5;
nova_security_native_Sha256 nova_security_Sha256;
nova_star_native_Frame nova_star_Frame;
nova_star_native_Window nova_star_Window;
nova_star_native_WindowThread nova_star_WindowThread;
nova_thread_native_Thread nova_thread_Thread;
nova_thread_native_UncaughtExceptionHandler nova_thread_UncaughtExceptionHandler;
nova_thread_async_native_Async nova_thread_async_Async;
nova_thread_async_native_AsyncResult nova_thread_async_AsyncResult;
nova_time_native_CumulativeTimer nova_time_CumulativeTimer;
nova_time_native_Date nova_time_Date;
nova_time_native_Time nova_time_Time;
nova_time_native_Timer nova_time_Timer;
nova_web_js_json_native_Json nova_web_js_json_Json;
nova_web_svg_native_Svg nova_web_svg_Svg;
nova_web_svg_native_SvgCircle nova_web_svg_SvgCircle;
nova_web_svg_native_SvgComponent nova_web_svg_SvgComponent;
nova_web_svg_native_SvgComponentList nova_web_svg_SvgComponentList;
nova_web_svg_native_SvgComponentNode nova_web_svg_SvgComponentNode;
nova_web_svg_native_SvgMainComponent nova_web_svg_SvgMainComponent;
nova_web_svg_no3_native_No3 nova_web_svg_no3_No3;
nova_web_svg_no3_native_No3Node nova_web_svg_no3_No3Node;
nova_web_svg_no3_native_No3Select nova_web_svg_no3_No3Select;
nova_web_svg_no3_native_No3SelectAll nova_web_svg_no3_No3SelectAll;
spectra_native_InvalidParseException spectra_InvalidParseException;
spectra_native_Spectra spectra_Spectra;
spectra_native_SyntaxErrorException spectra_SyntaxErrorException;
spectra_native_SyntaxMessage spectra_SyntaxMessage;
spectra_engines_native_CodeGeneratorEngine spectra_engines_CodeGeneratorEngine;
spectra_error_native_UnimplementedOperationException spectra_error_UnimplementedOperationException;
spectra_tree_native_AnnotationSearchResult spectra_tree_AnnotationSearchResult;
spectra_tree_native_StatementIterator spectra_tree_StatementIterator;
spectra_tree_native_SyntaxTree spectra_tree_SyntaxTree;
spectra_tree_nodes_native_Abstractable spectra_tree_nodes_Abstractable;
spectra_tree_nodes_native_Accessible spectra_tree_nodes_Accessible;
spectra_tree_nodes_native_ArgumentList spectra_tree_nodes_ArgumentList;
spectra_tree_nodes_native_ClassDeclaration spectra_tree_nodes_ClassDeclaration;
spectra_tree_nodes_native_Identifier spectra_tree_nodes_Identifier;
spectra_tree_nodes_native_Import spectra_tree_nodes_Import;
spectra_tree_nodes_native_ImportList spectra_tree_nodes_ImportList;
spectra_tree_nodes_native_InterfaceDeclaration spectra_tree_nodes_InterfaceDeclaration;
spectra_tree_nodes_native_Listener spectra_tree_nodes_Listener;
spectra_tree_nodes_native_Literal spectra_tree_nodes_Literal;
spectra_tree_nodes_native_Node spectra_tree_nodes_Node;
spectra_tree_nodes_native_NodeList spectra_tree_nodes_NodeList;
spectra_tree_nodes_native_NovaFile spectra_tree_nodes_NovaFile;
spectra_tree_nodes_native_NumericRange spectra_tree_nodes_NumericRange;
spectra_tree_nodes_native_Package spectra_tree_nodes_Package;
spectra_tree_nodes_native_PlaceholderValue spectra_tree_nodes_PlaceholderValue;
spectra_tree_nodes_native_Priority spectra_tree_nodes_Priority;
spectra_tree_nodes_native_Program spectra_tree_nodes_Program;
spectra_tree_nodes_native_Return spectra_tree_nodes_Return;
spectra_tree_nodes_native_Scope spectra_tree_nodes_Scope;
spectra_tree_nodes_native_Skeleton spectra_tree_nodes_Skeleton;
spectra_tree_nodes_native_StaticClassReference spectra_tree_nodes_StaticClassReference;
spectra_tree_nodes_native_Type spectra_tree_nodes_Type;
spectra_tree_nodes_native_ValidationResult spectra_tree_nodes_ValidationResult;
spectra_tree_nodes_native_Value spectra_tree_nodes_Value;
spectra_tree_nodes_annotations_native_Annotatable spectra_tree_nodes_annotations_Annotatable;
spectra_tree_nodes_annotations_native_Annotation spectra_tree_nodes_annotations_Annotation;
spectra_tree_nodes_annotations_native_Modifier spectra_tree_nodes_annotations_Modifier;
spectra_tree_nodes_annotations_native_NativeAnnotation spectra_tree_nodes_annotations_NativeAnnotation;
spectra_tree_nodes_annotations_native_OverrideAnnotation spectra_tree_nodes_annotations_OverrideAnnotation;
spectra_tree_nodes_annotations_native_TargetAnnotation spectra_tree_nodes_annotations_TargetAnnotation;
spectra_tree_nodes_arrays_native_ArrayAccess spectra_tree_nodes_arrays_ArrayAccess;
spectra_tree_nodes_controlstructures_native_ControlStructure spectra_tree_nodes_controlstructures_ControlStructure;
spectra_tree_nodes_controlstructures_native_ElseStatement spectra_tree_nodes_controlstructures_ElseStatement;
spectra_tree_nodes_controlstructures_native_IfStatement spectra_tree_nodes_controlstructures_IfStatement;
spectra_tree_nodes_controlstructures_loops_native_ForEachLoop spectra_tree_nodes_controlstructures_loops_ForEachLoop;
spectra_tree_nodes_controlstructures_loops_native_Loop spectra_tree_nodes_controlstructures_loops_Loop;
spectra_tree_nodes_controlstructures_loops_native_WhileLoop spectra_tree_nodes_controlstructures_loops_WhileLoop;
spectra_tree_nodes_exceptionhandling_native_Catch spectra_tree_nodes_exceptionhandling_Catch;
spectra_tree_nodes_exceptionhandling_native_ExceptionHandler spectra_tree_nodes_exceptionhandling_ExceptionHandler;
spectra_tree_nodes_exceptionhandling_native_Throw spectra_tree_nodes_exceptionhandling_Throw;
spectra_tree_nodes_exceptionhandling_native_Try spectra_tree_nodes_exceptionhandling_Try;
spectra_tree_nodes_functions_native_AccessorFunction spectra_tree_nodes_functions_AccessorFunction;
spectra_tree_nodes_functions_native_ArrayInstantiation spectra_tree_nodes_functions_ArrayInstantiation;
spectra_tree_nodes_functions_native_BodyFunction spectra_tree_nodes_functions_BodyFunction;
spectra_tree_nodes_functions_native_CallableFunction spectra_tree_nodes_functions_CallableFunction;
spectra_tree_nodes_functions_native_Constructor spectra_tree_nodes_functions_Constructor;
spectra_tree_nodes_functions_native_FunctionArgumentList spectra_tree_nodes_functions_FunctionArgumentList;
spectra_tree_nodes_functions_native_FunctionCall spectra_tree_nodes_functions_FunctionCall;
spectra_tree_nodes_functions_native_FunctionDeclaration spectra_tree_nodes_functions_FunctionDeclaration;
spectra_tree_nodes_functions_native_InitializationFunction spectra_tree_nodes_functions_InitializationFunction;
spectra_tree_nodes_functions_native_Instantiation spectra_tree_nodes_functions_Instantiation;
spectra_tree_nodes_functions_native_MutatorFunction spectra_tree_nodes_functions_MutatorFunction;
spectra_tree_nodes_functions_native_ObjectNotation spectra_tree_nodes_functions_ObjectNotation;
spectra_tree_nodes_functions_native_ObjectNotationProperty spectra_tree_nodes_functions_ObjectNotationProperty;
spectra_tree_nodes_functions_native_Parameter spectra_tree_nodes_functions_Parameter;
spectra_tree_nodes_functions_native_ParameterList spectra_tree_nodes_functions_ParameterList;
spectra_tree_nodes_functions_native_PropertyFunction spectra_tree_nodes_functions_PropertyFunction;
spectra_tree_nodes_functions_closures_native_ClosureContext spectra_tree_nodes_functions_closures_ClosureContext;
spectra_tree_nodes_functions_closures_native_ClosureDeclaration spectra_tree_nodes_functions_closures_ClosureDeclaration;
spectra_tree_nodes_functions_closures_native_ClosureParameter spectra_tree_nodes_functions_closures_ClosureParameter;
spectra_tree_nodes_functions_closures_native_LambdaExpression spectra_tree_nodes_functions_closures_LambdaExpression;
spectra_tree_nodes_functions_closures_native_LambdaParameter spectra_tree_nodes_functions_closures_LambdaParameter;
spectra_tree_nodes_generics_native_GenericArgument spectra_tree_nodes_generics_GenericArgument;
spectra_tree_nodes_generics_native_GenericCompatible spectra_tree_nodes_generics_GenericCompatible;
spectra_tree_nodes_generics_native_GenericParameter spectra_tree_nodes_generics_GenericParameter;
spectra_tree_nodes_generics_native_GenericType spectra_tree_nodes_generics_GenericType;
spectra_tree_nodes_operations_native_Assignable spectra_tree_nodes_operations_Assignable;
spectra_tree_nodes_operations_native_Assignment spectra_tree_nodes_operations_Assignment;
spectra_tree_nodes_operations_native_ElvisOperation spectra_tree_nodes_operations_ElvisOperation;
spectra_tree_nodes_operations_native_Operation spectra_tree_nodes_operations_Operation;
spectra_tree_nodes_operations_native_Operator spectra_tree_nodes_operations_Operator;
spectra_tree_nodes_operations_native_TernaryOperation spectra_tree_nodes_operations_TernaryOperation;
spectra_tree_nodes_operations_native_UnaryOperation spectra_tree_nodes_operations_UnaryOperation;
spectra_tree_nodes_variables_native_ArrayBracketOverload spectra_tree_nodes_variables_ArrayBracketOverload;
spectra_tree_nodes_variables_native_FieldDeclaration spectra_tree_nodes_variables_FieldDeclaration;
spectra_tree_nodes_variables_native_ImplicitDeclaration spectra_tree_nodes_variables_ImplicitDeclaration;
spectra_tree_nodes_variables_native_InstanceDeclaration spectra_tree_nodes_variables_InstanceDeclaration;
spectra_tree_nodes_variables_native_LocalDeclaration spectra_tree_nodes_variables_LocalDeclaration;
spectra_tree_nodes_variables_native_Variable spectra_tree_nodes_variables_Variable;
spectra_tree_nodes_variables_native_VariableDeclaration spectra_tree_nodes_variables_VariableDeclaration;
spectra_util_native_Bounds spectra_util_Bounds;
spectra_util_native_CompilerStringFunctions spectra_util_CompilerStringFunctions;
spectra_util_native_FileUtils spectra_util_FileUtils;
spectra_util_native_Location spectra_util_Location;
spectra_util_native_OS spectra_util_OS;
spectra_util_native_SyntaxUtils spectra_util_SyntaxUtils;
} nova_env;

extern nova_env novaEnv;


#endif
