#ifndef NOVA_NATIVE_INTERFACE
#define NOVA_NATIVE_INTERFACE

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
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_Field.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
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
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AbstractAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AutoPureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_FinalAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_ImmutableAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_ImpureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_NativeAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_OverrideAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PrivateAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PublicAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_StaticAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_TargetAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VarAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibilityModifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibleAnnotation.h>
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
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClientThread.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
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
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_toLowerCase)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_toUpperCase)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_capitalize)(nova_Nova_String*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_transform)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String_closure4_Nova_transform nova_Nova_String_Nova_transform, void* nova_Nova_String_ref_Nova_transform, void* transform_context);
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
typedef nova_Nova_nova_StringFunctionMap* (*nova_Nova_nova_StringFunctionMap_native_Nova_construct)(nova_Nova_nova_StringFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_native_nova_StringFunctionMap
{
nova_Nova_nova_StringFunctionMap_native_Nova_construct nova_StringFunctionMap;
} nova_native_nova_StringFunctionMap;

typedef nova_Nova_Substring* (*nova_Nova_Substring_native_Nova_construct)(nova_Nova_Substring*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);

typedef struct nova_native_Substring
{
nova_Nova_Substring_native_Nova_construct Substring;
} nova_native_Substring;
typedef nova_Nova_nova_SubstringFunctionMap* (*nova_Nova_nova_SubstringFunctionMap_native_Nova_construct)(nova_Nova_nova_SubstringFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_native_nova_SubstringFunctionMap
{
nova_Nova_nova_SubstringFunctionMap_native_Nova_construct nova_SubstringFunctionMap;
} nova_native_nova_SubstringFunctionMap;

typedef void (*nova_Nova_System_native0_static_Nova_exit)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, int);
typedef void (*nova_Nova_System_native1_static_Nova_exit)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*);
typedef void (*nova_Nova_System_native2_static_Nova_exit)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*, char);
typedef nova_process_Nova_Process* (*nova_Nova_System_native_static_Nova_execute)(nova_Nova_System*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_System* (*nova_Nova_System_native_Nova_construct)(nova_Nova_System*, nova_exception_Nova_ExceptionData*);

typedef struct nova_native_System
{
nova_Nova_System_native_Nova_construct System;
} nova_native_System;
typedef nova_Nova_nova_SystemFunctionMap* (*nova_Nova_nova_SystemFunctionMap_native_Nova_construct)(nova_Nova_nova_SystemFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_native_nova_SystemFunctionMap
{
nova_Nova_nova_SystemFunctionMap_native_Nova_construct nova_SystemFunctionMap;
} nova_native_nova_SystemFunctionMap;

typedef nova_ar_Nova_ImageTracker* (*nova_ar_Nova_ImageTracker_native_Nova_construct)(nova_ar_Nova_ImageTracker*, nova_exception_Nova_ExceptionData*);

typedef struct nova_ar_native_ImageTracker
{
nova_ar_Nova_ImageTracker_native_Nova_construct ImageTracker;
} nova_ar_native_ImageTracker;
typedef nova_ar_Nova_nova_ar_ImageTrackerFunctionMap* (*nova_ar_Nova_nova_ar_ImageTrackerFunctionMap_native_Nova_construct)(nova_ar_Nova_nova_ar_ImageTrackerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_ar_native_nova_ar_ImageTrackerFunctionMap
{
nova_ar_Nova_nova_ar_ImageTrackerFunctionMap_native_Nova_construct nova_ar_ImageTrackerFunctionMap;
} nova_ar_native_nova_ar_ImageTrackerFunctionMap;

typedef nova_ar_Nova_TrackPoint* (*nova_ar_Nova_TrackPoint_native_Nova_construct)(nova_ar_Nova_TrackPoint*, nova_exception_Nova_ExceptionData*);

typedef struct nova_ar_native_TrackPoint
{
nova_ar_Nova_TrackPoint_native_Nova_construct TrackPoint;
} nova_ar_native_TrackPoint;
typedef nova_ar_Nova_nova_ar_TrackPointFunctionMap* (*nova_ar_Nova_nova_ar_TrackPointFunctionMap_native_Nova_construct)(nova_ar_Nova_nova_ar_TrackPointFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_ar_native_nova_ar_TrackPointFunctionMap
{
nova_ar_Nova_nova_ar_TrackPointFunctionMap_native_Nova_construct nova_ar_TrackPointFunctionMap;
} nova_ar_native_nova_ar_TrackPointFunctionMap;

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
typedef nova_database_Nova_nova_database_DBConnectorFunctionMap* (*nova_database_Nova_nova_database_DBConnectorFunctionMap_native_Nova_construct)(nova_database_Nova_nova_database_DBConnectorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_database_native_nova_database_DBConnectorFunctionMap
{
nova_database_Nova_nova_database_DBConnectorFunctionMap_native_Nova_construct nova_database_DBConnectorFunctionMap;
} nova_database_native_nova_database_DBConnectorFunctionMap;

typedef nova_database_Nova_ResultSet* (*nova_database_Nova_ResultSet_native_Nova_construct)(nova_database_Nova_ResultSet*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int);

typedef struct nova_database_native_ResultSet
{
nova_database_Nova_ResultSet_native_Nova_construct ResultSet;
} nova_database_native_ResultSet;
typedef nova_database_Nova_nova_database_ResultSetFunctionMap* (*nova_database_Nova_nova_database_ResultSetFunctionMap_native_Nova_construct)(nova_database_Nova_nova_database_ResultSetFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_database_native_nova_database_ResultSetFunctionMap
{
nova_database_Nova_nova_database_ResultSetFunctionMap_native_Nova_construct nova_database_ResultSetFunctionMap;
} nova_database_native_nova_database_ResultSetFunctionMap;

typedef void (*nova_datastruct_Nova_BinaryNode_native_Nova_addChild)(nova_datastruct_Nova_BinaryNode*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Comparable*);
typedef nova_datastruct_Nova_BinaryNode* (*nova_datastruct_Nova_BinaryNode_native0_Nova_construct)(nova_datastruct_Nova_BinaryNode*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Comparable*);

typedef struct nova_datastruct_native_BinaryNode
{
nova_datastruct_Nova_BinaryNode_native_Nova_addChild addChild;
nova_datastruct_Nova_BinaryNode_native0_Nova_construct BinaryNode__nova_datastruct_Comparable;
} nova_datastruct_native_BinaryNode;
typedef nova_datastruct_Nova_nova_datastruct_BinaryNodeFunctionMap* (*nova_datastruct_Nova_nova_datastruct_BinaryNodeFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_BinaryNodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_BinaryNodeFunctionMap
{
nova_datastruct_Nova_nova_datastruct_BinaryNodeFunctionMap_native_Nova_construct nova_datastruct_BinaryNodeFunctionMap;
} nova_datastruct_native_nova_datastruct_BinaryNodeFunctionMap;

typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_addNode)(nova_datastruct_Nova_BinaryTree*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Comparable*);
typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_addNodes)(nova_datastruct_Nova_BinaryTree*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_construct)(nova_datastruct_Nova_BinaryTree*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_native_BinaryTree
{
nova_datastruct_Nova_BinaryTree_native_Nova_addNode addNode;
nova_datastruct_Nova_BinaryTree_native_Nova_addNodes addNodes;
nova_datastruct_Nova_BinaryTree_native_Nova_construct BinaryTree;
} nova_datastruct_native_BinaryTree;
typedef nova_datastruct_Nova_nova_datastruct_BinaryTreeFunctionMap* (*nova_datastruct_Nova_nova_datastruct_BinaryTreeFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_BinaryTreeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_BinaryTreeFunctionMap
{
nova_datastruct_Nova_nova_datastruct_BinaryTreeFunctionMap_native_Nova_construct nova_datastruct_BinaryTreeFunctionMap;
} nova_datastruct_native_nova_datastruct_BinaryTreeFunctionMap;

typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractPreString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractPostString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_trimString)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*nova_datastruct_Nova_Bounds_native_Nova_invalidate)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_cloneTo)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Bounds*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_clone)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_construct)(nova_datastruct_Nova_Bounds*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct nova_datastruct_native_Bounds
{
nova_datastruct_Nova_Bounds_native_Nova_extractString extractString;
nova_datastruct_Nova_Bounds_native_Nova_extractPreString extractPreString;
nova_datastruct_Nova_Bounds_native_Nova_extractPostString extractPostString;
nova_datastruct_Nova_Bounds_native_Nova_trimString trimString;
nova_datastruct_Nova_Bounds_native_Nova_invalidate invalidate;
nova_datastruct_Nova_Bounds_native_Nova_cloneTo cloneTo;
nova_datastruct_Nova_Bounds_native_Nova_clone clone;
nova_datastruct_Nova_Bounds_native_Nova_construct Bounds;
} nova_datastruct_native_Bounds;
typedef nova_datastruct_Nova_nova_datastruct_BoundsFunctionMap* (*nova_datastruct_Nova_nova_datastruct_BoundsFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_BoundsFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_BoundsFunctionMap
{
nova_datastruct_Nova_nova_datastruct_BoundsFunctionMap_native_Nova_construct nova_datastruct_BoundsFunctionMap;
} nova_datastruct_native_nova_datastruct_BoundsFunctionMap;

typedef int (*nova_datastruct_Nova_Comparable_native0_Nova_compareTo)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Comparable
{
nova_datastruct_Nova_Comparable_native0_Nova_compareTo compareTo__nova_Object;
} nova_datastruct_native_Comparable;

typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_add)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
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
nova_datastruct_Nova_HashMap_native_Nova_add add;
nova_datastruct_Nova_HashMap_native_Nova_remove remove;
nova_datastruct_Nova_HashMap_native_Nova_containsKey containsKey;
nova_datastruct_Nova_HashMap_native_Nova_clone clone;
nova_datastruct_Nova_HashMap_native_Nova_toImmutable toImmutable;
nova_datastruct_Nova_HashMap_native_Nova_get get;
nova_datastruct_Nova_HashMap_native_Nova_set set;
nova_datastruct_Nova_HashMap_native0_Nova_construct HashMap__nova_primitive_number_Int__nova_primitive_number_Int;
nova_datastruct_Nova_HashMap_native1_Nova_construct HashMap__nova_datastruct_HashMap__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_native_HashMap;
typedef nova_datastruct_Nova_nova_datastruct_HashMapFunctionMap* (*nova_datastruct_Nova_nova_datastruct_HashMapFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_HashMapFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_HashMapFunctionMap
{
nova_datastruct_Nova_nova_datastruct_HashMapFunctionMap_native_Nova_construct nova_datastruct_HashMapFunctionMap;
} nova_datastruct_native_nova_datastruct_HashMapFunctionMap;

typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native_Nova_add)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_native_Nova_get)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_native_Nova_remove)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native_Nova_construct)(nova_datastruct_Nova_HashSet*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct nova_datastruct_native_HashSet
{
nova_datastruct_Nova_HashSet_native_Nova_add add;
nova_datastruct_Nova_HashSet_native_Nova_get get;
nova_datastruct_Nova_HashSet_native_Nova_remove remove;
nova_datastruct_Nova_HashSet_native_Nova_construct HashSet;
} nova_datastruct_native_HashSet;
typedef nova_datastruct_Nova_nova_datastruct_HashSetFunctionMap* (*nova_datastruct_Nova_nova_datastruct_HashSetFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_HashSetFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_HashSetFunctionMap
{
nova_datastruct_Nova_nova_datastruct_HashSetFunctionMap_native_Nova_construct nova_datastruct_HashSetFunctionMap;
} nova_datastruct_native_nova_datastruct_HashSetFunctionMap;

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
typedef nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap* (*nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_ImmutableHashMapFunctionMap
{
nova_datastruct_Nova_nova_datastruct_ImmutableHashMapFunctionMap_native_Nova_construct nova_datastruct_ImmutableHashMapFunctionMap;
} nova_datastruct_native_nova_datastruct_ImmutableHashMapFunctionMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_preorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_inorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_postorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_levelorder)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_get)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_set)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*, int, nova_datastruct_Nova_Node*);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_construct)(nova_datastruct_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int);

typedef struct nova_datastruct_native_Node
{
nova_datastruct_Nova_Node_native0_Nova_preorder preorder;
nova_datastruct_Nova_Node_native0_Nova_inorder inorder;
nova_datastruct_Nova_Node_native0_Nova_postorder postorder;
nova_datastruct_Nova_Node_native0_Nova_levelorder levelorder;
nova_datastruct_Nova_Node_native_Nova_get get;
nova_datastruct_Nova_Node_native_Nova_set set;
nova_datastruct_Nova_Node_native_Nova_construct Node;
} nova_datastruct_native_Node;
typedef nova_datastruct_Nova_nova_datastruct_NodeFunctionMap* (*nova_datastruct_Nova_nova_datastruct_NodeFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_NodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_NodeFunctionMap
{
nova_datastruct_Nova_nova_datastruct_NodeFunctionMap_native_Nova_construct nova_datastruct_NodeFunctionMap;
} nova_datastruct_native_nova_datastruct_NodeFunctionMap;

typedef nova_datastruct_Nova_Pair* (*nova_datastruct_Nova_Pair_native_Nova_construct)(nova_datastruct_Nova_Pair*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Pair
{
nova_datastruct_Nova_Pair_native_Nova_construct Pair;
} nova_datastruct_native_Pair;
typedef nova_datastruct_Nova_nova_datastruct_PairFunctionMap* (*nova_datastruct_Nova_nova_datastruct_PairFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_PairFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_PairFunctionMap
{
nova_datastruct_Nova_nova_datastruct_PairFunctionMap_native_Nova_construct nova_datastruct_PairFunctionMap;
} nova_datastruct_native_nova_datastruct_PairFunctionMap;

typedef nova_Nova_Object* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_getKey)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_getValue)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_Nova_ReversibleHashMap* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_construct)(nova_datastruct_Nova_ReversibleHashMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_ReversibleHashMap
{
nova_datastruct_Nova_ReversibleHashMap_native_Nova_getKey getKey;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_getValue getValue;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_construct ReversibleHashMap;
} nova_datastruct_native_ReversibleHashMap;
typedef nova_datastruct_Nova_nova_datastruct_ReversibleHashMapFunctionMap* (*nova_datastruct_Nova_nova_datastruct_ReversibleHashMapFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_ReversibleHashMapFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_ReversibleHashMapFunctionMap
{
nova_datastruct_Nova_nova_datastruct_ReversibleHashMapFunctionMap_native_Nova_construct nova_datastruct_ReversibleHashMapFunctionMap;
} nova_datastruct_native_nova_datastruct_ReversibleHashMapFunctionMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_preorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_inorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_postorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_levelorder)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_Nova_Tree* (*nova_datastruct_Nova_Tree_native_Nova_construct)(nova_datastruct_Nova_Tree*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Node*);

typedef struct nova_datastruct_native_Tree
{
nova_datastruct_Nova_Tree_native_Nova_preorder preorder;
nova_datastruct_Nova_Tree_native_Nova_inorder inorder;
nova_datastruct_Nova_Tree_native_Nova_postorder postorder;
nova_datastruct_Nova_Tree_native_Nova_levelorder levelorder;
nova_datastruct_Nova_Tree_native_Nova_construct Tree;
} nova_datastruct_native_Tree;
typedef nova_datastruct_Nova_nova_datastruct_TreeFunctionMap* (*nova_datastruct_Nova_nova_datastruct_TreeFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_TreeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_TreeFunctionMap
{
nova_datastruct_Nova_nova_datastruct_TreeFunctionMap_native_Nova_construct nova_datastruct_TreeFunctionMap;
} nova_datastruct_native_nova_datastruct_TreeFunctionMap;

typedef nova_datastruct_Nova_Tuple* (*nova_datastruct_Nova_Tuple_native_Nova_construct)(nova_datastruct_Nova_Tuple*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_native_Tuple
{
nova_datastruct_Nova_Tuple_native_Nova_construct Tuple;
} nova_datastruct_native_Tuple;
typedef nova_datastruct_Nova_nova_datastruct_TupleFunctionMap* (*nova_datastruct_Nova_nova_datastruct_TupleFunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_TupleFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_TupleFunctionMap
{
nova_datastruct_Nova_nova_datastruct_TupleFunctionMap_native_Nova_construct nova_datastruct_TupleFunctionMap;
} nova_datastruct_native_nova_datastruct_TupleFunctionMap;

typedef nova_datastruct_Nova_Tuple2* (*nova_datastruct_Nova_Tuple2_native_Nova_construct)(nova_datastruct_Nova_Tuple2*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Tuple2
{
nova_datastruct_Nova_Tuple2_native_Nova_construct Tuple2;
} nova_datastruct_native_Tuple2;
typedef nova_datastruct_Nova_nova_datastruct_Tuple2FunctionMap* (*nova_datastruct_Nova_nova_datastruct_Tuple2FunctionMap_native_Nova_construct)(nova_datastruct_Nova_nova_datastruct_Tuple2FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_native_nova_datastruct_Tuple2FunctionMap
{
nova_datastruct_Nova_nova_datastruct_Tuple2FunctionMap_native_Nova_construct nova_datastruct_Tuple2FunctionMap;
} nova_datastruct_native_nova_datastruct_Tuple2FunctionMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_fillRemaining)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_addAll)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_add)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_add)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native0_Nova_remove)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native1_Nova_remove)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef int (*nova_datastruct_list_Nova_Array_native_Nova_indexOf)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native_Nova_replace)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_swap)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_Nova_Object** (*nova_datastruct_list_Nova_Array_native_Nova_cloneData)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_clone)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef long_long (*nova_datastruct_list_Nova_Array_native_Nova_sumSize)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_mergeSort)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array_closure16_Nova_comparator nova_datastruct_list_Nova_Array_Nova_comparator, void* nova_datastruct_list_Nova_Array_ref_Nova_comparator, void* comparator_context);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_quickSort)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array_closure20_Nova_comparator nova_datastruct_list_Nova_Array_Nova_comparator, void* nova_datastruct_list_Nova_Array_ref_Nova_comparator, void* comparator_context);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_mergeSort)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_quickSort)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_sort)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
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
nova_datastruct_list_Nova_Array_native0_Nova_mergeSort mergeSort__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native0_Nova_quickSort quickSort__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native1_Nova_mergeSort mergeSort;
nova_datastruct_list_Nova_Array_native1_Nova_quickSort quickSort;
nova_datastruct_list_Nova_Array_native_Nova_sort sort;
nova_datastruct_list_Nova_Array_native_Nova_toImmutable toImmutable;
nova_datastruct_list_Nova_Array_native_Nova_get get;
nova_datastruct_list_Nova_Array_native_Nova_set set;
nova_datastruct_list_Nova_Array_native0_Nova_construct Array;
nova_datastruct_list_Nova_Array_native1_Nova_construct Array__nova_primitive_number_Int__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native2_Nova_construct Array__Array1d_nova_Object__nova_primitive_number_Int;
} nova_datastruct_list_native_Array;
typedef nova_datastruct_list_Nova_nova_datastruct_list_ArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ArrayFunctionMap_native_Nova_construct nova_datastruct_list_ArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ArrayFunctionMap;

typedef nova_datastruct_list_Nova_ArrayIterator* (*nova_datastruct_list_Nova_ArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ArrayIterator* (*nova_datastruct_list_Nova_ArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_ArrayIterator
{
nova_datastruct_list_Nova_ArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ArrayIterator_native_Nova_construct ArrayIterator;
} nova_datastruct_list_native_ArrayIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_ArrayIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ArrayIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ArrayIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ArrayIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ArrayIteratorFunctionMap_native_Nova_construct nova_datastruct_list_ArrayIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ArrayIteratorFunctionMap;

typedef long_long (*nova_datastruct_list_Nova_CharArray_native_Nova_sum)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray_closure4_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context);
typedef long_long (*nova_datastruct_list_Nova_CharArray_native_Nova_reduce)(nova_datastruct_list_Nova_CharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray_closure8_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context, long_long);
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
typedef nova_datastruct_list_Nova_nova_datastruct_list_CharArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_CharArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_CharArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_CharArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_CharArrayFunctionMap_native_Nova_construct nova_datastruct_list_CharArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_CharArrayFunctionMap;

typedef nova_datastruct_list_Nova_CharArrayIterator* (*nova_datastruct_list_Nova_CharArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_CharArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_CharArrayIterator* (*nova_datastruct_list_Nova_CharArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_CharArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*, int);

typedef struct nova_datastruct_list_native_CharArrayIterator
{
nova_datastruct_list_Nova_CharArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_CharArrayIterator_native_Nova_construct CharArrayIterator;
} nova_datastruct_list_native_CharArrayIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_CharArrayIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_CharArrayIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_CharArrayIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_CharArrayIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_CharArrayIteratorFunctionMap_native_Nova_construct nova_datastruct_list_CharArrayIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_CharArrayIteratorFunctionMap;

typedef nova_datastruct_list_Nova_CompiledList* (*nova_datastruct_list_Nova_CompiledList_native_Nova_construct)(nova_datastruct_list_Nova_CompiledList*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_CompiledList
{
nova_datastruct_list_Nova_CompiledList_native_Nova_construct CompiledList;
} nova_datastruct_list_native_CompiledList;
typedef nova_datastruct_list_Nova_nova_datastruct_list_CompiledListFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_CompiledListFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_CompiledListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_CompiledListFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_CompiledListFunctionMap_native_Nova_construct nova_datastruct_list_CompiledListFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_CompiledListFunctionMap;

typedef double (*nova_datastruct_list_Nova_DoubleArray_native_Nova_sum)(nova_datastruct_list_Nova_DoubleArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray_closure4_Nova_func nova_datastruct_list_Nova_DoubleArray_Nova_func, void* nova_datastruct_list_Nova_DoubleArray_ref_Nova_func, void* func_context);
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
typedef nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_DoubleArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayFunctionMap_native_Nova_construct nova_datastruct_list_DoubleArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_DoubleArrayFunctionMap;

typedef nova_datastruct_list_Nova_DoubleArrayIterator* (*nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_DoubleArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_DoubleArrayIterator* (*nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_DoubleArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray*);

typedef struct nova_datastruct_list_native_DoubleArrayIterator
{
nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_construct DoubleArrayIterator;
} nova_datastruct_list_native_DoubleArrayIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_DoubleArrayIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_DoubleArrayIteratorFunctionMap_native_Nova_construct nova_datastruct_list_DoubleArrayIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_DoubleArrayIteratorFunctionMap;

typedef nova_datastruct_list_Nova_EmptyStackException* (*nova_datastruct_list_Nova_EmptyStackException_native_Nova_construct)(nova_datastruct_list_Nova_EmptyStackException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_datastruct_list_native_EmptyStackException
{
nova_datastruct_list_Nova_EmptyStackException_native_Nova_construct EmptyStackException;
} nova_datastruct_list_native_EmptyStackException;
typedef nova_datastruct_list_Nova_nova_datastruct_list_EmptyStackExceptionFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_EmptyStackExceptionFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_EmptyStackExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_EmptyStackExceptionFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_EmptyStackExceptionFunctionMap_native_Nova_construct nova_datastruct_list_EmptyStackExceptionFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_EmptyStackExceptionFunctionMap;

typedef int (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_indexOf)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native0_Nova_add)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_add)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native0_Nova_remove)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_remove)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_toMutable)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_get)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_set)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native0_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native2_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_exception_Nova_ExceptionData*, nova_Nova_Object**, int);

typedef struct nova_datastruct_list_native_ImmutableArray
{
nova_datastruct_list_Nova_ImmutableArray_native_Nova_indexOf indexOf;
nova_datastruct_list_Nova_ImmutableArray_native0_Nova_add add__nova_Object;
nova_datastruct_list_Nova_ImmutableArray_native1_Nova_add add__nova_primitive_number_Int__nova_Object;
nova_datastruct_list_Nova_ImmutableArray_native0_Nova_remove remove__nova_Object;
nova_datastruct_list_Nova_ImmutableArray_native1_Nova_remove remove__nova_primitive_number_Int;
nova_datastruct_list_Nova_ImmutableArray_native_Nova_toMutable toMutable;
nova_datastruct_list_Nova_ImmutableArray_native_Nova_get get;
nova_datastruct_list_Nova_ImmutableArray_native_Nova_set set;
nova_datastruct_list_Nova_ImmutableArray_native0_Nova_construct ImmutableArray;
nova_datastruct_list_Nova_ImmutableArray_native1_Nova_construct ImmutableArray__nova_datastruct_list_Array;
nova_datastruct_list_Nova_ImmutableArray_native2_Nova_construct ImmutableArray__Array1d_nova_Object__nova_primitive_number_Int;
} nova_datastruct_list_native_ImmutableArray;
typedef nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ImmutableArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayFunctionMap_native_Nova_construct nova_datastruct_list_ImmutableArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ImmutableArrayFunctionMap;

typedef nova_datastruct_list_Nova_ImmutableArrayIterator* (*nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ImmutableArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ImmutableArrayIterator* (*nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ImmutableArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_ImmutableArray*);

typedef struct nova_datastruct_list_native_ImmutableArrayIterator
{
nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_construct ImmutableArrayIterator;
} nova_datastruct_list_native_ImmutableArrayIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ImmutableArrayIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ImmutableArrayIteratorFunctionMap_native_Nova_construct nova_datastruct_list_ImmutableArrayIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ImmutableArrayIteratorFunctionMap;

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
typedef nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ImmutableCharArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayFunctionMap_native_Nova_construct nova_datastruct_list_ImmutableCharArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ImmutableCharArrayFunctionMap;

typedef nova_datastruct_list_Nova_ImmutableCharArrayIterator* (*nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ImmutableCharArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_ImmutableCharArrayIterator* (*nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ImmutableCharArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_ImmutableCharArray*, int);

typedef struct nova_datastruct_list_native_ImmutableCharArrayIterator
{
nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ImmutableCharArrayIterator_native_Nova_construct ImmutableCharArrayIterator;
} nova_datastruct_list_native_ImmutableCharArrayIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap_native_Nova_construct nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap;

typedef nova_datastruct_list_Nova_IntArray* (*nova_datastruct_list_Nova_IntArray_native0_Nova_construct)(nova_datastruct_list_Nova_IntArray*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntArray* (*nova_datastruct_list_Nova_IntArray_native1_Nova_construct)(nova_datastruct_list_Nova_IntArray*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_IntArray* (*nova_datastruct_list_Nova_IntArray_native2_Nova_construct)(nova_datastruct_list_Nova_IntArray*, nova_exception_Nova_ExceptionData*, int*, int);

typedef struct nova_datastruct_list_native_IntArray
{
nova_datastruct_list_Nova_IntArray_native0_Nova_construct IntArray;
nova_datastruct_list_Nova_IntArray_native1_Nova_construct IntArray__nova_primitive_number_Int;
nova_datastruct_list_Nova_IntArray_native2_Nova_construct IntArray__Array1d_nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_list_native_IntArray;
typedef nova_datastruct_list_Nova_nova_datastruct_list_IntArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_IntArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_IntArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_IntArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_IntArrayFunctionMap_native_Nova_construct nova_datastruct_list_IntArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_IntArrayFunctionMap;

typedef nova_datastruct_list_Nova_IntArrayIterator* (*nova_datastruct_list_Nova_IntArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_IntArrayIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntArrayIterator* (*nova_datastruct_list_Nova_IntArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_IntArrayIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_IntArray*);

typedef struct nova_datastruct_list_native_IntArrayIterator
{
nova_datastruct_list_Nova_IntArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_IntArrayIterator_native_Nova_construct IntArrayIterator;
} nova_datastruct_list_native_IntArrayIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_IntArrayIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_IntArrayIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_IntArrayIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_IntArrayIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_IntArrayIteratorFunctionMap_native_Nova_construct nova_datastruct_list_IntArrayIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_IntArrayIteratorFunctionMap;

typedef void (*nova_datastruct_list_Nova_IntRange_native_Nova_forEach)(nova_datastruct_list_Nova_IntRange*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_IntRange_closure4_Nova_func nova_datastruct_list_Nova_IntRange_Nova_func, void* nova_datastruct_list_Nova_IntRange_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_IntRange* (*nova_datastruct_list_Nova_IntRange_native0_Nova_construct)(nova_datastruct_list_Nova_IntRange*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntRange* (*nova_datastruct_list_Nova_IntRange_native1_Nova_construct)(nova_datastruct_list_Nova_IntRange*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct nova_datastruct_list_native_IntRange
{
nova_datastruct_list_Nova_IntRange_native_Nova_forEach forEach;
nova_datastruct_list_Nova_IntRange_native0_Nova_construct IntRange;
nova_datastruct_list_Nova_IntRange_native1_Nova_construct IntRange__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_list_native_IntRange;
typedef nova_datastruct_list_Nova_nova_datastruct_list_IntRangeFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_IntRangeFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_IntRangeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_IntRangeFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_IntRangeFunctionMap_native_Nova_construct nova_datastruct_list_IntRangeFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_IntRangeFunctionMap;

typedef nova_datastruct_list_Nova_IntRangeIterator* (*nova_datastruct_list_Nova_IntRangeIterator_native_Nova_reset)(nova_datastruct_list_Nova_IntRangeIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_IntRangeIterator* (*nova_datastruct_list_Nova_IntRangeIterator_native_Nova_construct)(nova_datastruct_list_Nova_IntRangeIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_IntRange*);

typedef struct nova_datastruct_list_native_IntRangeIterator
{
nova_datastruct_list_Nova_IntRangeIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_IntRangeIterator_native_Nova_construct IntRangeIterator;
} nova_datastruct_list_native_IntRangeIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_IntRangeIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_IntRangeIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_IntRangeIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_IntRangeIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_IntRangeIteratorFunctionMap_native_Nova_construct nova_datastruct_list_IntRangeIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_IntRangeIteratorFunctionMap;


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
typedef nova_datastruct_list_Nova_nova_datastruct_list_LinkedListFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_LinkedListFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_LinkedListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_LinkedListFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_LinkedListFunctionMap_native_Nova_construct nova_datastruct_list_LinkedListFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_LinkedListFunctionMap;

typedef nova_datastruct_list_Nova_LinkedListIterator* (*nova_datastruct_list_Nova_LinkedListIterator_native_Nova_reset)(nova_datastruct_list_Nova_LinkedListIterator*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_LinkedListIterator* (*nova_datastruct_list_Nova_LinkedListIterator_native_Nova_construct)(nova_datastruct_list_Nova_LinkedListIterator*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList*);

typedef struct nova_datastruct_list_native_LinkedListIterator
{
nova_datastruct_list_Nova_LinkedListIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_LinkedListIterator_native_Nova_construct LinkedListIterator;
} nova_datastruct_list_native_LinkedListIterator;
typedef nova_datastruct_list_Nova_nova_datastruct_list_LinkedListIteratorFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_LinkedListIteratorFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_LinkedListIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_LinkedListIteratorFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_LinkedListIteratorFunctionMap_native_Nova_construct nova_datastruct_list_LinkedListIteratorFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_LinkedListIteratorFunctionMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_toArray)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_datastruct_list_Nova_List_native0_Nova_contains)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure4_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_map)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure8_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
typedef char (*nova_datastruct_list_Nova_List_native0_Nova_any)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
typedef char (*nova_datastruct_list_Nova_List_native0_Nova_all)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure16_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_filter)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure20_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_filterEmpty)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_take)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_takeLast)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_skip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstOr)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_datastruct_list_Nova_List_closure24_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstOrThrow)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_exception_Nova_Exception*, nova_datastruct_list_Nova_List_closure28_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native0_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure32_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstNonNull)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure36_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_zip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure40_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* zipper_context);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_reverse)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_reduce)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure44_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context, nova_Nova_Object*);
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
typedef nova_datastruct_list_Nova_ListNode* (*nova_datastruct_list_Nova_ListNode_native_Nova_construct)(nova_datastruct_list_Nova_ListNode*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_datastruct_list_Nova_ListNode*);

typedef struct nova_datastruct_list_native_ListNode
{
nova_datastruct_list_Nova_ListNode_native_Nova_clone clone;
nova_datastruct_list_Nova_ListNode_native_Nova_construct ListNode;
} nova_datastruct_list_native_ListNode;
typedef nova_datastruct_list_Nova_nova_datastruct_list_ListNodeFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_ListNodeFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_ListNodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_ListNodeFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_ListNodeFunctionMap_native_Nova_construct nova_datastruct_list_ListNodeFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_ListNodeFunctionMap;

typedef nova_datastruct_list_Nova_NoSuchElementException* (*nova_datastruct_list_Nova_NoSuchElementException_native_Nova_construct)(nova_datastruct_list_Nova_NoSuchElementException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_datastruct_list_native_NoSuchElementException
{
nova_datastruct_list_Nova_NoSuchElementException_native_Nova_construct NoSuchElementException;
} nova_datastruct_list_native_NoSuchElementException;
typedef nova_datastruct_list_Nova_nova_datastruct_list_NoSuchElementExceptionFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_NoSuchElementExceptionFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_NoSuchElementExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_NoSuchElementExceptionFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_NoSuchElementExceptionFunctionMap_native_Nova_construct nova_datastruct_list_NoSuchElementExceptionFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_NoSuchElementExceptionFunctionMap;

typedef char (*nova_datastruct_list_Nova_OrderedList_native_Nova_findIndex)(nova_datastruct_list_Nova_OrderedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_OrderedList_closure4_Nova_condition nova_datastruct_list_Nova_OrderedList_Nova_condition, void* nova_datastruct_list_Nova_OrderedList_ref_Nova_condition, void* condition_context, int);

typedef struct nova_datastruct_list_native_OrderedList
{
nova_datastruct_list_Nova_OrderedList_native_Nova_findIndex findIndex;
} nova_datastruct_list_native_OrderedList;

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
typedef nova_datastruct_list_Nova_nova_datastruct_list_QueueFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_QueueFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_QueueFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_QueueFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_QueueFunctionMap_native_Nova_construct nova_datastruct_list_QueueFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_QueueFunctionMap;

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
typedef nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_StackFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_StackFunctionMap_native_Nova_construct nova_datastruct_list_StackFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_StackFunctionMap;

typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native0_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_CharArray*);
typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native1_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, nova_exception_Nova_ExceptionData*, char*, int);

typedef struct nova_datastruct_list_native_StringCharArray
{
nova_datastruct_list_Nova_StringCharArray_native0_Nova_construct StringCharArray__nova_datastruct_list_CharArray;
nova_datastruct_list_Nova_StringCharArray_native1_Nova_construct StringCharArray__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
} nova_datastruct_list_native_StringCharArray;
typedef nova_datastruct_list_Nova_nova_datastruct_list_StringCharArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_StringCharArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_StringCharArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_StringCharArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_StringCharArrayFunctionMap_native_Nova_construct nova_datastruct_list_StringCharArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_StringCharArrayFunctionMap;

typedef nova_datastruct_list_Nova_SubstringCharArray* (*nova_datastruct_list_Nova_SubstringCharArray_native_Nova_construct)(nova_datastruct_list_Nova_SubstringCharArray*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_SubstringCharArray
{
nova_datastruct_list_Nova_SubstringCharArray_native_Nova_construct SubstringCharArray;
} nova_datastruct_list_native_SubstringCharArray;
typedef nova_datastruct_list_Nova_nova_datastruct_list_SubstringCharArrayFunctionMap* (*nova_datastruct_list_Nova_nova_datastruct_list_SubstringCharArrayFunctionMap_native_Nova_construct)(nova_datastruct_list_Nova_nova_datastruct_list_SubstringCharArrayFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_datastruct_list_native_nova_datastruct_list_SubstringCharArrayFunctionMap
{
nova_datastruct_list_Nova_nova_datastruct_list_SubstringCharArrayFunctionMap_native_Nova_construct nova_datastruct_list_SubstringCharArrayFunctionMap;
} nova_datastruct_list_native_nova_datastruct_list_SubstringCharArrayFunctionMap;

typedef nova_exception_Nova_Backtraces* (*nova_exception_Nova_Backtraces_native_Nova_construct)(nova_exception_Nova_Backtraces*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_Backtraces
{
nova_exception_Nova_Backtraces_native_Nova_construct Backtraces;
} nova_exception_native_Backtraces;
typedef nova_exception_Nova_nova_exception_BacktracesFunctionMap* (*nova_exception_Nova_nova_exception_BacktracesFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_BacktracesFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_BacktracesFunctionMap
{
nova_exception_Nova_nova_exception_BacktracesFunctionMap_native_Nova_construct nova_exception_BacktracesFunctionMap;
} nova_exception_native_nova_exception_BacktracesFunctionMap;

typedef nova_exception_Nova_CaughtException* (*nova_exception_Nova_CaughtException_native_Nova_construct)(nova_exception_Nova_CaughtException*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*, int);

typedef struct nova_exception_native_CaughtException
{
nova_exception_Nova_CaughtException_native_Nova_construct CaughtException;
} nova_exception_native_CaughtException;
typedef nova_exception_Nova_nova_exception_CaughtExceptionFunctionMap* (*nova_exception_Nova_nova_exception_CaughtExceptionFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_CaughtExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_CaughtExceptionFunctionMap
{
nova_exception_Nova_nova_exception_CaughtExceptionFunctionMap_native_Nova_construct nova_exception_CaughtExceptionFunctionMap;
} nova_exception_native_nova_exception_CaughtExceptionFunctionMap;

typedef nova_exception_Nova_DivideByZeroException* (*nova_exception_Nova_DivideByZeroException_native_Nova_construct)(nova_exception_Nova_DivideByZeroException*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_DivideByZeroException
{
nova_exception_Nova_DivideByZeroException_native_Nova_construct DivideByZeroException;
} nova_exception_native_DivideByZeroException;
typedef nova_exception_Nova_nova_exception_DivideByZeroExceptionFunctionMap* (*nova_exception_Nova_nova_exception_DivideByZeroExceptionFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_DivideByZeroExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_DivideByZeroExceptionFunctionMap
{
nova_exception_Nova_nova_exception_DivideByZeroExceptionFunctionMap_native_Nova_construct nova_exception_DivideByZeroExceptionFunctionMap;
} nova_exception_native_nova_exception_DivideByZeroExceptionFunctionMap;

typedef nova_exception_Nova_Exception* (*nova_exception_Nova_Exception_native_Nova_construct)(nova_exception_Nova_Exception*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_Exception
{
nova_exception_Nova_Exception_native_Nova_construct Exception;
} nova_exception_native_Exception;
typedef nova_exception_Nova_nova_exception_ExceptionFunctionMap* (*nova_exception_Nova_nova_exception_ExceptionFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_ExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_ExceptionFunctionMap
{
nova_exception_Nova_nova_exception_ExceptionFunctionMap_native_Nova_construct nova_exception_ExceptionFunctionMap;
} nova_exception_native_nova_exception_ExceptionFunctionMap;

typedef void (*nova_exception_Nova_ExceptionData_native_Nova_addCaught)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*, int);
typedef char (*nova_exception_Nova_ExceptionData_native_Nova_throwException)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData**, nova_exception_Nova_Exception*, char);
typedef nova_exception_Nova_ExceptionData* (*nova_exception_Nova_ExceptionData_native_Nova_construct)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData*, buffer*);

typedef struct nova_exception_native_ExceptionData
{
nova_exception_Nova_ExceptionData_native_Nova_addCaught addCaught;
nova_exception_Nova_ExceptionData_native_Nova_throwException throwException;
nova_exception_Nova_ExceptionData_native_Nova_construct ExceptionData;
} nova_exception_native_ExceptionData;
typedef nova_exception_Nova_nova_exception_ExceptionDataFunctionMap* (*nova_exception_Nova_nova_exception_ExceptionDataFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_ExceptionDataFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_ExceptionDataFunctionMap
{
nova_exception_Nova_nova_exception_ExceptionDataFunctionMap_native_Nova_construct nova_exception_ExceptionDataFunctionMap;
} nova_exception_native_nova_exception_ExceptionDataFunctionMap;

typedef nova_exception_Nova_InvalidArgumentException* (*nova_exception_Nova_InvalidArgumentException_native_Nova_construct)(nova_exception_Nova_InvalidArgumentException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_InvalidArgumentException
{
nova_exception_Nova_InvalidArgumentException_native_Nova_construct InvalidArgumentException;
} nova_exception_native_InvalidArgumentException;
typedef nova_exception_Nova_nova_exception_InvalidArgumentExceptionFunctionMap* (*nova_exception_Nova_nova_exception_InvalidArgumentExceptionFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_InvalidArgumentExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_InvalidArgumentExceptionFunctionMap
{
nova_exception_Nova_nova_exception_InvalidArgumentExceptionFunctionMap_native_Nova_construct nova_exception_InvalidArgumentExceptionFunctionMap;
} nova_exception_native_nova_exception_InvalidArgumentExceptionFunctionMap;

typedef nova_exception_Nova_InvalidOperationException* (*nova_exception_Nova_InvalidOperationException_native_Nova_construct)(nova_exception_Nova_InvalidOperationException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_InvalidOperationException
{
nova_exception_Nova_InvalidOperationException_native_Nova_construct InvalidOperationException;
} nova_exception_native_InvalidOperationException;
typedef nova_exception_Nova_nova_exception_InvalidOperationExceptionFunctionMap* (*nova_exception_Nova_nova_exception_InvalidOperationExceptionFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_InvalidOperationExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_InvalidOperationExceptionFunctionMap
{
nova_exception_Nova_nova_exception_InvalidOperationExceptionFunctionMap_native_Nova_construct nova_exception_InvalidOperationExceptionFunctionMap;
} nova_exception_native_nova_exception_InvalidOperationExceptionFunctionMap;

typedef nova_exception_Nova_UnimplementedOperationException* (*nova_exception_Nova_UnimplementedOperationException_native_Nova_construct)(nova_exception_Nova_UnimplementedOperationException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_exception_native_UnimplementedOperationException
{
nova_exception_Nova_UnimplementedOperationException_native_Nova_construct UnimplementedOperationException;
} nova_exception_native_UnimplementedOperationException;
typedef nova_exception_Nova_nova_exception_UnimplementedOperationExceptionFunctionMap* (*nova_exception_Nova_nova_exception_UnimplementedOperationExceptionFunctionMap_native_Nova_construct)(nova_exception_Nova_nova_exception_UnimplementedOperationExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_exception_native_nova_exception_UnimplementedOperationExceptionFunctionMap
{
nova_exception_Nova_nova_exception_UnimplementedOperationExceptionFunctionMap_native_Nova_construct nova_exception_UnimplementedOperationExceptionFunctionMap;
} nova_exception_native_nova_exception_UnimplementedOperationExceptionFunctionMap;

typedef void (*nova_gc_Nova_GC_native_static_Nova_init)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_collect)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_enableIncremental)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_dump)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);
typedef nova_gc_Nova_GC* (*nova_gc_Nova_GC_native_Nova_construct)(nova_gc_Nova_GC*, nova_exception_Nova_ExceptionData*);

typedef struct nova_gc_native_GC
{
nova_gc_Nova_GC_native_Nova_construct GC;
} nova_gc_native_GC;
typedef nova_gc_Nova_nova_gc_GCFunctionMap* (*nova_gc_Nova_nova_gc_GCFunctionMap_native_Nova_construct)(nova_gc_Nova_nova_gc_GCFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_gc_native_nova_gc_GCFunctionMap
{
nova_gc_Nova_nova_gc_GCFunctionMap_native_Nova_construct nova_gc_GCFunctionMap;
} nova_gc_native_nova_gc_GCFunctionMap;

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
typedef nova_io_Nova_nova_io_ConsoleFunctionMap* (*nova_io_Nova_nova_io_ConsoleFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_ConsoleFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_ConsoleFunctionMap
{
nova_io_Nova_nova_io_ConsoleFunctionMap_native_Nova_construct nova_io_ConsoleFunctionMap;
} nova_io_native_nova_io_ConsoleFunctionMap;

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
typedef nova_io_Nova_nova_io_FileFunctionMap* (*nova_io_Nova_nova_io_FileFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_FileFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_FileFunctionMap
{
nova_io_Nova_nova_io_FileFunctionMap_native_Nova_construct nova_io_FileFunctionMap;
} nova_io_native_nova_io_FileFunctionMap;

typedef nova_io_Nova_FileNotFoundException* (*nova_io_Nova_FileNotFoundException_native_Nova_construct)(nova_io_Nova_FileNotFoundException*, nova_exception_Nova_ExceptionData*, nova_io_Nova_File*);

typedef struct nova_io_native_FileNotFoundException
{
nova_io_Nova_FileNotFoundException_native_Nova_construct FileNotFoundException;
} nova_io_native_FileNotFoundException;
typedef nova_io_Nova_nova_io_FileNotFoundExceptionFunctionMap* (*nova_io_Nova_nova_io_FileNotFoundExceptionFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_FileNotFoundExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_FileNotFoundExceptionFunctionMap
{
nova_io_Nova_nova_io_FileNotFoundExceptionFunctionMap_native_Nova_construct nova_io_FileNotFoundExceptionFunctionMap;
} nova_io_native_nova_io_FileNotFoundExceptionFunctionMap;

typedef nova_Nova_Object* (*nova_io_Nova_FileReader_native_Nova_readBytes)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_FileReader_native_Nova_open)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_io_Nova_FileReader_native_Nova_readAllContents)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*nova_io_Nova_FileReader_native_Nova_readLine)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileReader_native_Nova_close)(nova_io_Nova_FileReader*, nova_exception_Nova_ExceptionData*);
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
typedef nova_io_Nova_nova_io_FileReaderFunctionMap* (*nova_io_Nova_nova_io_FileReaderFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_FileReaderFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_FileReaderFunctionMap
{
nova_io_Nova_nova_io_FileReaderFunctionMap_native_Nova_construct nova_io_FileReaderFunctionMap;
} nova_io_native_nova_io_FileReaderFunctionMap;

typedef char (*nova_io_Nova_FileWriter_native_Nova_delete)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_reopen)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_io_Nova_FileWriter_native_Nova_rewind)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_clearContents)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_create)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_writeLine)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_flush)(nova_io_Nova_FileWriter*, nova_exception_Nova_ExceptionData*);
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
typedef nova_io_Nova_nova_io_FileWriterFunctionMap* (*nova_io_Nova_nova_io_FileWriterFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_FileWriterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_FileWriterFunctionMap
{
nova_io_Nova_nova_io_FileWriterFunctionMap_native_Nova_construct nova_io_FileWriterFunctionMap;
} nova_io_native_nova_io_FileWriterFunctionMap;

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
typedef nova_io_Nova_nova_io_OutputStreamFunctionMap* (*nova_io_Nova_nova_io_OutputStreamFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_OutputStreamFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_OutputStreamFunctionMap
{
nova_io_Nova_nova_io_OutputStreamFunctionMap_native_Nova_construct nova_io_OutputStreamFunctionMap;
} nova_io_native_nova_io_OutputStreamFunctionMap;

typedef nova_io_Nova_StreamReader* (*nova_io_Nova_StreamReader_native_Nova_construct)(nova_io_Nova_StreamReader*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_StreamReader
{
nova_io_Nova_StreamReader_native_Nova_construct StreamReader;
} nova_io_native_StreamReader;
typedef nova_io_Nova_nova_io_StreamReaderFunctionMap* (*nova_io_Nova_nova_io_StreamReaderFunctionMap_native_Nova_construct)(nova_io_Nova_nova_io_StreamReaderFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_io_native_nova_io_StreamReaderFunctionMap
{
nova_io_Nova_nova_io_StreamReaderFunctionMap_native_Nova_construct nova_io_StreamReaderFunctionMap;
} nova_io_native_nova_io_StreamReaderFunctionMap;

typedef nova_math_Nova_ArithmeticSequence* (*nova_math_Nova_ArithmeticSequence_native_Nova_construct)(nova_math_Nova_ArithmeticSequence*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_ArithmeticSequence
{
nova_math_Nova_ArithmeticSequence_native_Nova_construct ArithmeticSequence;
} nova_math_native_ArithmeticSequence;
typedef nova_math_Nova_nova_math_ArithmeticSequenceFunctionMap* (*nova_math_Nova_nova_math_ArithmeticSequenceFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_ArithmeticSequenceFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_ArithmeticSequenceFunctionMap
{
nova_math_Nova_nova_math_ArithmeticSequenceFunctionMap_native_Nova_construct nova_math_ArithmeticSequenceFunctionMap;
} nova_math_native_nova_math_ArithmeticSequenceFunctionMap;

typedef nova_math_Nova_Diekstra* (*nova_math_Nova_Diekstra_native_Nova_construct)(nova_math_Nova_Diekstra*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Diekstra
{
nova_math_Nova_Diekstra_native_Nova_construct Diekstra;
} nova_math_native_Diekstra;
typedef nova_math_Nova_nova_math_DiekstraFunctionMap* (*nova_math_Nova_nova_math_DiekstraFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_DiekstraFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_DiekstraFunctionMap
{
nova_math_Nova_nova_math_DiekstraFunctionMap_native_Nova_construct nova_math_DiekstraFunctionMap;
} nova_math_native_nova_math_DiekstraFunctionMap;

typedef nova_math_Nova_GeometricSequence* (*nova_math_Nova_GeometricSequence_native_Nova_construct)(nova_math_Nova_GeometricSequence*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_GeometricSequence
{
nova_math_Nova_GeometricSequence_native_Nova_construct GeometricSequence;
} nova_math_native_GeometricSequence;
typedef nova_math_Nova_nova_math_GeometricSequenceFunctionMap* (*nova_math_Nova_nova_math_GeometricSequenceFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_GeometricSequenceFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_GeometricSequenceFunctionMap
{
nova_math_Nova_nova_math_GeometricSequenceFunctionMap_native_Nova_construct nova_math_GeometricSequenceFunctionMap;
} nova_math_native_nova_math_GeometricSequenceFunctionMap;

typedef nova_math_Nova_Graph* (*nova_math_Nova_Graph_native_Nova_construct)(nova_math_Nova_Graph*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Graph
{
nova_math_Nova_Graph_native_Nova_construct Graph;
} nova_math_native_Graph;
typedef nova_math_Nova_nova_math_GraphFunctionMap* (*nova_math_Nova_nova_math_GraphFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_GraphFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_GraphFunctionMap
{
nova_math_Nova_nova_math_GraphFunctionMap_native_Nova_construct nova_math_GraphFunctionMap;
} nova_math_native_nova_math_GraphFunctionMap;

typedef nova_math_Nova_InvalidNumericStatementException* (*nova_math_Nova_InvalidNumericStatementException_native_Nova_construct)(nova_math_Nova_InvalidNumericStatementException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_InvalidNumericStatementException
{
nova_math_Nova_InvalidNumericStatementException_native_Nova_construct InvalidNumericStatementException;
} nova_math_native_InvalidNumericStatementException;
typedef nova_math_Nova_nova_math_InvalidNumericStatementExceptionFunctionMap* (*nova_math_Nova_nova_math_InvalidNumericStatementExceptionFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_InvalidNumericStatementExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_InvalidNumericStatementExceptionFunctionMap
{
nova_math_Nova_nova_math_InvalidNumericStatementExceptionFunctionMap_native_Nova_construct nova_math_InvalidNumericStatementExceptionFunctionMap;
} nova_math_native_nova_math_InvalidNumericStatementExceptionFunctionMap;

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
typedef nova_math_Nova_nova_math_MathFunctionMap* (*nova_math_Nova_nova_math_MathFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_MathFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_MathFunctionMap
{
nova_math_Nova_nova_math_MathFunctionMap_native_Nova_construct nova_math_MathFunctionMap;
} nova_math_native_nova_math_MathFunctionMap;

typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_clone)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_static_Nova_identity)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_inverse)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_math_Nova_Matrix_native_Nova_swapRows)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*nova_math_Nova_Matrix_native_Nova_multiplyRow)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int, double);
typedef void (*nova_math_Nova_Matrix_native_Nova_addRow)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef void (*nova_math_Nova_Matrix_native_Nova_subtractRow)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, int, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_add)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native1_Nova_plus)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*, char);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_subtract)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native0_Nova_minus)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native1_Nova_minus)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*, char);
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
nova_math_Nova_Matrix_native1_Nova_plus plus__nova_math_Matrix__nova_primitive_Bool;
nova_math_Nova_Matrix_native_Nova_subtract subtract;
nova_math_Nova_Matrix_native0_Nova_minus minus__nova_math_Matrix;
nova_math_Nova_Matrix_native1_Nova_minus minus__nova_math_Matrix__nova_primitive_Bool;
nova_math_Nova_Matrix_native_Nova_transpose transpose;
nova_math_Nova_Matrix_native_Nova_determinant determinant;
nova_math_Nova_Matrix_native_Nova_get get;
nova_math_Nova_Matrix_native_Nova_set set;
nova_math_Nova_Matrix_native0_Nova_construct Matrix__nova_primitive_number_Int;
nova_math_Nova_Matrix_native1_Nova_construct Matrix__nova_primitive_number_Int__nova_primitive_number_Int;
nova_math_Nova_Matrix_native2_Nova_construct Matrix__nova_datastruct_list_Array;
} nova_math_native_Matrix;
typedef nova_math_Nova_nova_math_MatrixFunctionMap* (*nova_math_Nova_nova_math_MatrixFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_MatrixFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_MatrixFunctionMap
{
nova_math_Nova_nova_math_MatrixFunctionMap_native_Nova_construct nova_math_MatrixFunctionMap;
} nova_math_native_nova_math_MatrixFunctionMap;

typedef nova_math_Nova_NumericOperand* (*nova_math_Nova_NumericOperand_native_Nova_construct)(nova_math_Nova_NumericOperand*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_math_native_NumericOperand
{
nova_math_Nova_NumericOperand_native_Nova_construct NumericOperand;
} nova_math_native_NumericOperand;
typedef nova_math_Nova_nova_math_NumericOperandFunctionMap* (*nova_math_Nova_nova_math_NumericOperandFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_NumericOperandFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_NumericOperandFunctionMap
{
nova_math_Nova_nova_math_NumericOperandFunctionMap_native_Nova_construct nova_math_NumericOperandFunctionMap;
} nova_math_native_nova_math_NumericOperandFunctionMap;

typedef nova_math_Nova_NumericOperation* (*nova_math_Nova_NumericOperation_native0_Nova_construct)(nova_math_Nova_NumericOperation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_math_Nova_NumericOperation* (*nova_math_Nova_NumericOperation_native1_Nova_construct)(nova_math_Nova_NumericOperation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_math_native_NumericOperation
{
nova_math_Nova_NumericOperation_native0_Nova_construct NumericOperation__nova_String;
nova_math_Nova_NumericOperation_native1_Nova_construct NumericOperation__nova_String__nova_String__nova_String;
} nova_math_native_NumericOperation;
typedef nova_math_Nova_nova_math_NumericOperationFunctionMap* (*nova_math_Nova_nova_math_NumericOperationFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_NumericOperationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_NumericOperationFunctionMap
{
nova_math_Nova_nova_math_NumericOperationFunctionMap_native_Nova_construct nova_math_NumericOperationFunctionMap;
} nova_math_native_nova_math_NumericOperationFunctionMap;

typedef nova_math_Nova_NumericStatement* (*nova_math_Nova_NumericStatement_native_Nova_construct)(nova_math_Nova_NumericStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_NumericStatement
{
nova_math_Nova_NumericStatement_native_Nova_construct NumericStatement;
} nova_math_native_NumericStatement;
typedef nova_math_Nova_nova_math_NumericStatementFunctionMap* (*nova_math_Nova_nova_math_NumericStatementFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_NumericStatementFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_NumericStatementFunctionMap
{
nova_math_Nova_nova_math_NumericStatementFunctionMap_native_Nova_construct nova_math_NumericStatementFunctionMap;
} nova_math_native_nova_math_NumericStatementFunctionMap;

typedef nova_math_Nova_NumericTree* (*nova_math_Nova_NumericTree_native_Nova_construct)(nova_math_Nova_NumericTree*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_NumericTree
{
nova_math_Nova_NumericTree_native_Nova_construct NumericTree;
} nova_math_native_NumericTree;
typedef nova_math_Nova_nova_math_NumericTreeFunctionMap* (*nova_math_Nova_nova_math_NumericTreeFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_NumericTreeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_NumericTreeFunctionMap
{
nova_math_Nova_nova_math_NumericTreeFunctionMap_native_Nova_construct nova_math_NumericTreeFunctionMap;
} nova_math_native_nova_math_NumericTreeFunctionMap;

typedef nova_math_Nova_Polynomial* (*nova_math_Nova_Polynomial_native_Nova_construct)(nova_math_Nova_Polynomial*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_native_Polynomial
{
nova_math_Nova_Polynomial_native_Nova_construct Polynomial;
} nova_math_native_Polynomial;
typedef nova_math_Nova_nova_math_PolynomialFunctionMap* (*nova_math_Nova_nova_math_PolynomialFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_PolynomialFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_PolynomialFunctionMap
{
nova_math_Nova_nova_math_PolynomialFunctionMap_native_Nova_construct nova_math_PolynomialFunctionMap;
} nova_math_native_nova_math_PolynomialFunctionMap;

typedef double (*nova_math_Nova_Sequence_native_static_Nova_sum)(nova_math_Nova_Sequence*, nova_exception_Nova_ExceptionData*, int);
typedef nova_math_Nova_Sequence* (*nova_math_Nova_Sequence_native_Nova_construct)(nova_math_Nova_Sequence*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_DoubleArray*);

typedef struct nova_math_native_Sequence
{
nova_math_Nova_Sequence_native_Nova_construct Sequence;
} nova_math_native_Sequence;
typedef nova_math_Nova_nova_math_SequenceFunctionMap* (*nova_math_Nova_nova_math_SequenceFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_SequenceFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_SequenceFunctionMap
{
nova_math_Nova_nova_math_SequenceFunctionMap_native_Nova_construct nova_math_SequenceFunctionMap;
} nova_math_native_nova_math_SequenceFunctionMap;

typedef nova_math_Nova_Statement* (*nova_math_Nova_Statement_native_Nova_construct)(nova_math_Nova_Statement*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_Statement
{
nova_math_Nova_Statement_native_Nova_construct Statement;
} nova_math_native_Statement;
typedef nova_math_Nova_nova_math_StatementFunctionMap* (*nova_math_Nova_nova_math_StatementFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_StatementFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_StatementFunctionMap
{
nova_math_Nova_nova_math_StatementFunctionMap_native_Nova_construct nova_math_StatementFunctionMap;
} nova_math_native_nova_math_StatementFunctionMap;

typedef nova_math_Nova_StatementComponent* (*nova_math_Nova_StatementComponent_native_Nova_construct)(nova_math_Nova_StatementComponent*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_math_Nova_StatementComponent*);

typedef struct nova_math_native_StatementComponent
{
nova_math_Nova_StatementComponent_native_Nova_construct StatementComponent;
} nova_math_native_StatementComponent;
typedef nova_math_Nova_nova_math_StatementComponentFunctionMap* (*nova_math_Nova_nova_math_StatementComponentFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_StatementComponentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_StatementComponentFunctionMap
{
nova_math_Nova_nova_math_StatementComponentFunctionMap_native_Nova_construct nova_math_StatementComponentFunctionMap;
} nova_math_native_nova_math_StatementComponentFunctionMap;

typedef nova_math_Nova_VariableOperand* (*nova_math_Nova_VariableOperand_native_Nova_construct)(nova_math_Nova_VariableOperand*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_VariableOperand
{
nova_math_Nova_VariableOperand_native_Nova_construct VariableOperand;
} nova_math_native_VariableOperand;
typedef nova_math_Nova_nova_math_VariableOperandFunctionMap* (*nova_math_Nova_nova_math_VariableOperandFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_VariableOperandFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_VariableOperandFunctionMap
{
nova_math_Nova_nova_math_VariableOperandFunctionMap_native_Nova_construct nova_math_VariableOperandFunctionMap;
} nova_math_native_nova_math_VariableOperandFunctionMap;

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
typedef nova_math_Nova_nova_math_VectorFunctionMap* (*nova_math_Nova_nova_math_VectorFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_VectorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_VectorFunctionMap
{
nova_math_Nova_nova_math_VectorFunctionMap_native_Nova_construct nova_math_VectorFunctionMap;
} nova_math_native_nova_math_VectorFunctionMap;

typedef nova_math_Nova_Vector2D* (*nova_math_Nova_Vector2D_native0_Nova_construct)(nova_math_Nova_Vector2D*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector2D* (*nova_math_Nova_Vector2D_native1_Nova_construct)(nova_math_Nova_Vector2D*, nova_exception_Nova_ExceptionData*, double, double);

typedef struct nova_math_native_Vector2D
{
nova_math_Nova_Vector2D_native0_Nova_construct Vector2D;
nova_math_Nova_Vector2D_native1_Nova_construct Vector2D__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector2D;
typedef nova_math_Nova_nova_math_Vector2DFunctionMap* (*nova_math_Nova_nova_math_Vector2DFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_Vector2DFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_Vector2DFunctionMap
{
nova_math_Nova_nova_math_Vector2DFunctionMap_native_Nova_construct nova_math_Vector2DFunctionMap;
} nova_math_native_nova_math_Vector2DFunctionMap;

typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native_Nova_crossProduct)(nova_math_Nova_Vector3D*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector3D*);
typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native0_Nova_construct)(nova_math_Nova_Vector3D*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native1_Nova_construct)(nova_math_Nova_Vector3D*, nova_exception_Nova_ExceptionData*, double, double, double);

typedef struct nova_math_native_Vector3D
{
nova_math_Nova_Vector3D_native_Nova_crossProduct crossProduct;
nova_math_Nova_Vector3D_native0_Nova_construct Vector3D;
nova_math_Nova_Vector3D_native1_Nova_construct Vector3D__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector3D;
typedef nova_math_Nova_nova_math_Vector3DFunctionMap* (*nova_math_Nova_nova_math_Vector3DFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_Vector3DFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_Vector3DFunctionMap
{
nova_math_Nova_nova_math_Vector3DFunctionMap_native_Nova_construct nova_math_Vector3DFunctionMap;
} nova_math_native_nova_math_Vector3DFunctionMap;

typedef nova_math_Nova_Vector4D* (*nova_math_Nova_Vector4D_native0_Nova_construct)(nova_math_Nova_Vector4D*, nova_exception_Nova_ExceptionData*);
typedef nova_math_Nova_Vector4D* (*nova_math_Nova_Vector4D_native1_Nova_construct)(nova_math_Nova_Vector4D*, nova_exception_Nova_ExceptionData*, double, double, double, double);

typedef struct nova_math_native_Vector4D
{
nova_math_Nova_Vector4D_native0_Nova_construct Vector4D;
nova_math_Nova_Vector4D_native1_Nova_construct Vector4D__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector4D;
typedef nova_math_Nova_nova_math_Vector4DFunctionMap* (*nova_math_Nova_nova_math_Vector4DFunctionMap_native_Nova_construct)(nova_math_Nova_nova_math_Vector4DFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_native_nova_math_Vector4DFunctionMap
{
nova_math_Nova_nova_math_Vector4DFunctionMap_native_Nova_construct nova_math_Vector4DFunctionMap;
} nova_math_native_nova_math_Vector4DFunctionMap;

typedef nova_math_Nova_NumericStatement* (*nova_math_calculus_Nova_Calculus_native_static_Nova_derivative)(nova_math_calculus_Nova_Calculus*, nova_exception_Nova_ExceptionData*, nova_math_Nova_NumericStatement*);
typedef nova_math_calculus_Nova_Calculus* (*nova_math_calculus_Nova_Calculus_native_Nova_construct)(nova_math_calculus_Nova_Calculus*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_calculus_native_Calculus
{
nova_math_calculus_Nova_Calculus_native_Nova_construct Calculus;
} nova_math_calculus_native_Calculus;
typedef nova_math_calculus_Nova_nova_math_calculus_CalculusFunctionMap* (*nova_math_calculus_Nova_nova_math_calculus_CalculusFunctionMap_native_Nova_construct)(nova_math_calculus_Nova_nova_math_calculus_CalculusFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_calculus_native_nova_math_calculus_CalculusFunctionMap
{
nova_math_calculus_Nova_nova_math_calculus_CalculusFunctionMap_native_Nova_construct nova_math_calculus_CalculusFunctionMap;
} nova_math_calculus_native_nova_math_calculus_CalculusFunctionMap;

typedef nova_math_huffman_Nova_HuffmanTree* (*nova_math_huffman_Nova_HuffmanTree_native_Nova_construct)(nova_math_huffman_Nova_HuffmanTree*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_huffman_native_HuffmanTree
{
nova_math_huffman_Nova_HuffmanTree_native_Nova_construct HuffmanTree;
} nova_math_huffman_native_HuffmanTree;
typedef nova_math_huffman_Nova_nova_math_huffman_HuffmanTreeFunctionMap* (*nova_math_huffman_Nova_nova_math_huffman_HuffmanTreeFunctionMap_native_Nova_construct)(nova_math_huffman_Nova_nova_math_huffman_HuffmanTreeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_huffman_native_nova_math_huffman_HuffmanTreeFunctionMap
{
nova_math_huffman_Nova_nova_math_huffman_HuffmanTreeFunctionMap_native_Nova_construct nova_math_huffman_HuffmanTreeFunctionMap;
} nova_math_huffman_native_nova_math_huffman_HuffmanTreeFunctionMap;

typedef nova_math_logic_Nova_Conclusion* (*nova_math_logic_Nova_Conclusion_native_Nova_construct)(nova_math_logic_Nova_Conclusion*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_Conclusion
{
nova_math_logic_Nova_Conclusion_native_Nova_construct Conclusion;
} nova_math_logic_native_Conclusion;
typedef nova_math_logic_Nova_nova_math_logic_ConclusionFunctionMap* (*nova_math_logic_Nova_nova_math_logic_ConclusionFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_ConclusionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_ConclusionFunctionMap
{
nova_math_logic_Nova_nova_math_logic_ConclusionFunctionMap_native_Nova_construct nova_math_logic_ConclusionFunctionMap;
} nova_math_logic_native_nova_math_logic_ConclusionFunctionMap;

typedef nova_math_logic_Nova_Hypothesis* (*nova_math_logic_Nova_Hypothesis_native_Nova_construct)(nova_math_logic_Nova_Hypothesis*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_Hypothesis
{
nova_math_logic_Nova_Hypothesis_native_Nova_construct Hypothesis;
} nova_math_logic_native_Hypothesis;
typedef nova_math_logic_Nova_nova_math_logic_HypothesisFunctionMap* (*nova_math_logic_Nova_nova_math_logic_HypothesisFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_HypothesisFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_HypothesisFunctionMap
{
nova_math_logic_Nova_nova_math_logic_HypothesisFunctionMap_native_Nova_construct nova_math_logic_HypothesisFunctionMap;
} nova_math_logic_native_nova_math_logic_HypothesisFunctionMap;

typedef nova_math_logic_Nova_InvalidFormulaException* (*nova_math_logic_Nova_InvalidFormulaException_native_Nova_construct)(nova_math_logic_Nova_InvalidFormulaException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_InvalidFormulaException
{
nova_math_logic_Nova_InvalidFormulaException_native_Nova_construct InvalidFormulaException;
} nova_math_logic_native_InvalidFormulaException;
typedef nova_math_logic_Nova_nova_math_logic_InvalidFormulaExceptionFunctionMap* (*nova_math_logic_Nova_nova_math_logic_InvalidFormulaExceptionFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_InvalidFormulaExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_InvalidFormulaExceptionFunctionMap
{
nova_math_logic_Nova_nova_math_logic_InvalidFormulaExceptionFunctionMap_native_Nova_construct nova_math_logic_InvalidFormulaExceptionFunctionMap;
} nova_math_logic_native_nova_math_logic_InvalidFormulaExceptionFunctionMap;

typedef nova_math_logic_Nova_LogicalConnective* (*nova_math_logic_Nova_LogicalConnective_native_Nova_construct)(nova_math_logic_Nova_LogicalConnective*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_LogicalConnective
{
nova_math_logic_Nova_LogicalConnective_native_Nova_construct LogicalConnective;
} nova_math_logic_native_LogicalConnective;
typedef nova_math_logic_Nova_nova_math_logic_LogicalConnectiveFunctionMap* (*nova_math_logic_Nova_nova_math_logic_LogicalConnectiveFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_LogicalConnectiveFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_LogicalConnectiveFunctionMap
{
nova_math_logic_Nova_nova_math_logic_LogicalConnectiveFunctionMap_native_Nova_construct nova_math_logic_LogicalConnectiveFunctionMap;
} nova_math_logic_native_nova_math_logic_LogicalConnectiveFunctionMap;

typedef nova_math_logic_Nova_LogicalStatement* (*nova_math_logic_Nova_LogicalStatement_native_Nova_construct)(nova_math_logic_Nova_LogicalStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_math_logic_native_LogicalStatement
{
nova_math_logic_Nova_LogicalStatement_native_Nova_construct LogicalStatement;
} nova_math_logic_native_LogicalStatement;
typedef nova_math_logic_Nova_nova_math_logic_LogicalStatementFunctionMap* (*nova_math_logic_Nova_nova_math_logic_LogicalStatementFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_LogicalStatementFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_LogicalStatementFunctionMap
{
nova_math_logic_Nova_nova_math_logic_LogicalStatementFunctionMap_native_Nova_construct nova_math_logic_LogicalStatementFunctionMap;
} nova_math_logic_native_nova_math_logic_LogicalStatementFunctionMap;

typedef nova_math_logic_Nova_StatementComponent* (*nova_math_logic_Nova_StatementComponent_native_Nova_construct)(nova_math_logic_Nova_StatementComponent*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_StatementComponent
{
nova_math_logic_Nova_StatementComponent_native_Nova_construct StatementComponent;
} nova_math_logic_native_StatementComponent;
typedef nova_math_logic_Nova_nova_math_logic_StatementComponentFunctionMap* (*nova_math_logic_Nova_nova_math_logic_StatementComponentFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_StatementComponentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_StatementComponentFunctionMap
{
nova_math_logic_Nova_nova_math_logic_StatementComponentFunctionMap_native_Nova_construct nova_math_logic_StatementComponentFunctionMap;
} nova_math_logic_native_nova_math_logic_StatementComponentFunctionMap;

typedef nova_math_logic_Nova_StatementGroup* (*nova_math_logic_Nova_StatementGroup_native_Nova_construct)(nova_math_logic_Nova_StatementGroup*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_datastruct_Nova_Bounds*);

typedef struct nova_math_logic_native_StatementGroup
{
nova_math_logic_Nova_StatementGroup_native_Nova_construct StatementGroup;
} nova_math_logic_native_StatementGroup;
typedef nova_math_logic_Nova_nova_math_logic_StatementGroupFunctionMap* (*nova_math_logic_Nova_nova_math_logic_StatementGroupFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_StatementGroupFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_StatementGroupFunctionMap
{
nova_math_logic_Nova_nova_math_logic_StatementGroupFunctionMap_native_Nova_construct nova_math_logic_StatementGroupFunctionMap;
} nova_math_logic_native_nova_math_logic_StatementGroupFunctionMap;

typedef nova_math_logic_Nova_StatementLetter* (*nova_math_logic_Nova_StatementLetter_native_Nova_construct)(nova_math_logic_Nova_StatementLetter*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_math_logic_native_StatementLetter
{
nova_math_logic_Nova_StatementLetter_native_Nova_construct StatementLetter;
} nova_math_logic_native_StatementLetter;
typedef nova_math_logic_Nova_nova_math_logic_StatementLetterFunctionMap* (*nova_math_logic_Nova_nova_math_logic_StatementLetterFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_StatementLetterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_StatementLetterFunctionMap
{
nova_math_logic_Nova_nova_math_logic_StatementLetterFunctionMap_native_Nova_construct nova_math_logic_StatementLetterFunctionMap;
} nova_math_logic_native_nova_math_logic_StatementLetterFunctionMap;

typedef nova_math_logic_Nova_WFF* (*nova_math_logic_Nova_WFF_native_Nova_construct)(nova_math_logic_Nova_WFF*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_Array*);

typedef struct nova_math_logic_native_WFF
{
nova_math_logic_Nova_WFF_native_Nova_construct WFF;
} nova_math_logic_native_WFF;
typedef nova_math_logic_Nova_nova_math_logic_WFFFunctionMap* (*nova_math_logic_Nova_nova_math_logic_WFFFunctionMap_native_Nova_construct)(nova_math_logic_Nova_nova_math_logic_WFFFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_math_logic_native_nova_math_logic_WFFFunctionMap
{
nova_math_logic_Nova_nova_math_logic_WFFFunctionMap_native_Nova_construct nova_math_logic_WFFFunctionMap;
} nova_math_logic_native_nova_math_logic_WFFFunctionMap;

typedef char (*nova_meta_Nova_Class_native_Nova_isOfType)(nova_meta_Nova_Class*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*);
typedef nova_meta_Nova_Class* (*nova_meta_Nova_Class_native_Nova_construct)(nova_meta_Nova_Class*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, char);

typedef struct nova_meta_native_Class
{
nova_meta_Nova_Class_native_Nova_isOfType isOfType;
nova_meta_Nova_Class_native_Nova_construct Class;
} nova_meta_native_Class;
typedef nova_meta_Nova_nova_meta_ClassFunctionMap* (*nova_meta_Nova_nova_meta_ClassFunctionMap_native_Nova_construct)(nova_meta_Nova_nova_meta_ClassFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_nova_meta_ClassFunctionMap
{
nova_meta_Nova_nova_meta_ClassFunctionMap_native_Nova_construct nova_meta_ClassFunctionMap;
} nova_meta_native_nova_meta_ClassFunctionMap;

typedef nova_meta_Nova_Field* (*nova_meta_Nova_Field_native_Nova_construct)(nova_meta_Nova_Field*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_meta_Nova_Type*);

typedef struct nova_meta_native_Field
{
nova_meta_Nova_Field_native_Nova_construct Field;
} nova_meta_native_Field;
typedef nova_meta_Nova_nova_meta_FieldFunctionMap* (*nova_meta_Nova_nova_meta_FieldFunctionMap_native_Nova_construct)(nova_meta_Nova_nova_meta_FieldFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_nova_meta_FieldFunctionMap
{
nova_meta_Nova_nova_meta_FieldFunctionMap_native_Nova_construct nova_meta_FieldFunctionMap;
} nova_meta_native_nova_meta_FieldFunctionMap;

typedef nova_meta_Nova_FunctionMap* (*nova_meta_Nova_FunctionMap_native_Nova_construct)(nova_meta_Nova_FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_FunctionMap
{
nova_meta_Nova_FunctionMap_native_Nova_construct FunctionMap;
} nova_meta_native_FunctionMap;
typedef nova_meta_Nova_nova_meta_FunctionMapFunctionMap* (*nova_meta_Nova_nova_meta_FunctionMapFunctionMap_native_Nova_construct)(nova_meta_Nova_nova_meta_FunctionMapFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_nova_meta_FunctionMapFunctionMap
{
nova_meta_Nova_nova_meta_FunctionMapFunctionMap_native_Nova_construct nova_meta_FunctionMapFunctionMap;
} nova_meta_native_nova_meta_FunctionMapFunctionMap;

typedef nova_meta_Nova_GenericArgument* (*nova_meta_Nova_GenericArgument_native_Nova_construct)(nova_meta_Nova_GenericArgument*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Type*);

typedef struct nova_meta_native_GenericArgument
{
nova_meta_Nova_GenericArgument_native_Nova_construct GenericArgument;
} nova_meta_native_GenericArgument;
typedef nova_meta_Nova_nova_meta_GenericArgumentFunctionMap* (*nova_meta_Nova_nova_meta_GenericArgumentFunctionMap_native_Nova_construct)(nova_meta_Nova_nova_meta_GenericArgumentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_nova_meta_GenericArgumentFunctionMap
{
nova_meta_Nova_nova_meta_GenericArgumentFunctionMap_native_Nova_construct nova_meta_GenericArgumentFunctionMap;
} nova_meta_native_nova_meta_GenericArgumentFunctionMap;

typedef nova_meta_Nova_GenericParameter* (*nova_meta_Nova_GenericParameter_native_Nova_construct)(nova_meta_Nova_GenericParameter*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Type*, nova_meta_Nova_Type*);

typedef struct nova_meta_native_GenericParameter
{
nova_meta_Nova_GenericParameter_native_Nova_construct GenericParameter;
} nova_meta_native_GenericParameter;
typedef nova_meta_Nova_nova_meta_GenericParameterFunctionMap* (*nova_meta_Nova_nova_meta_GenericParameterFunctionMap_native_Nova_construct)(nova_meta_Nova_nova_meta_GenericParameterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_nova_meta_GenericParameterFunctionMap
{
nova_meta_Nova_nova_meta_GenericParameterFunctionMap_native_Nova_construct nova_meta_GenericParameterFunctionMap;
} nova_meta_native_nova_meta_GenericParameterFunctionMap;

typedef nova_meta_Nova_Type* (*nova_meta_Nova_Type_native_Nova_construct)(nova_meta_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_ImmutableArray*);

typedef struct nova_meta_native_Type
{
nova_meta_Nova_Type_native_Nova_construct Type;
} nova_meta_native_Type;
typedef nova_meta_Nova_nova_meta_TypeFunctionMap* (*nova_meta_Nova_nova_meta_TypeFunctionMap_native_Nova_construct)(nova_meta_Nova_nova_meta_TypeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_meta_native_nova_meta_TypeFunctionMap
{
nova_meta_Nova_nova_meta_TypeFunctionMap_native_Nova_construct nova_meta_TypeFunctionMap;
} nova_meta_native_nova_meta_TypeFunctionMap;

typedef char (*nova_network_Nova_ClientSocket_native_Nova_connect)(nova_network_Nova_ClientSocket*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef char (*nova_network_Nova_ClientSocket_native_Nova_close)(nova_network_Nova_ClientSocket*, nova_exception_Nova_ExceptionData*);
typedef nova_network_Nova_ClientSocket* (*nova_network_Nova_ClientSocket_native_Nova_construct)(nova_network_Nova_ClientSocket*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_ClientSocket
{
nova_network_Nova_ClientSocket_native_Nova_connect connect;
nova_network_Nova_ClientSocket_native_Nova_close close;
nova_network_Nova_ClientSocket_native_Nova_construct ClientSocket;
} nova_network_native_ClientSocket;
typedef nova_network_Nova_nova_network_ClientSocketFunctionMap* (*nova_network_Nova_nova_network_ClientSocketFunctionMap_native_Nova_construct)(nova_network_Nova_nova_network_ClientSocketFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_nova_network_ClientSocketFunctionMap
{
nova_network_Nova_nova_network_ClientSocketFunctionMap_native_Nova_construct nova_network_ClientSocketFunctionMap;
} nova_network_native_nova_network_ClientSocketFunctionMap;

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
typedef nova_network_Nova_nova_network_ConnectionSocketFunctionMap* (*nova_network_Nova_nova_network_ConnectionSocketFunctionMap_native_Nova_construct)(nova_network_Nova_nova_network_ConnectionSocketFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_nova_network_ConnectionSocketFunctionMap
{
nova_network_Nova_nova_network_ConnectionSocketFunctionMap_native_Nova_construct nova_network_ConnectionSocketFunctionMap;
} nova_network_native_nova_network_ConnectionSocketFunctionMap;

typedef nova_network_Nova_NetworkInputStream* (*nova_network_Nova_NetworkInputStream_native_Nova_construct)(nova_network_Nova_NetworkInputStream*, nova_exception_Nova_ExceptionData*, nova_network_Nova_ConnectionSocket*);

typedef struct nova_network_native_NetworkInputStream
{
nova_network_Nova_NetworkInputStream_native_Nova_construct NetworkInputStream;
} nova_network_native_NetworkInputStream;
typedef nova_network_Nova_nova_network_NetworkInputStreamFunctionMap* (*nova_network_Nova_nova_network_NetworkInputStreamFunctionMap_native_Nova_construct)(nova_network_Nova_nova_network_NetworkInputStreamFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_nova_network_NetworkInputStreamFunctionMap
{
nova_network_Nova_nova_network_NetworkInputStreamFunctionMap_native_Nova_construct nova_network_NetworkInputStreamFunctionMap;
} nova_network_native_nova_network_NetworkInputStreamFunctionMap;

typedef char (*nova_network_Nova_NetworkOutputStream_native0_Nova_write)(nova_network_Nova_NetworkOutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
typedef nova_network_Nova_NetworkOutputStream* (*nova_network_Nova_NetworkOutputStream_native_Nova_construct)(nova_network_Nova_NetworkOutputStream*, nova_exception_Nova_ExceptionData*, nova_network_Nova_ConnectionSocket*);

typedef struct nova_network_native_NetworkOutputStream
{
nova_network_Nova_NetworkOutputStream_native0_Nova_write write__nova_Object;
nova_network_Nova_NetworkOutputStream_native_Nova_construct NetworkOutputStream;
} nova_network_native_NetworkOutputStream;
typedef nova_network_Nova_nova_network_NetworkOutputStreamFunctionMap* (*nova_network_Nova_nova_network_NetworkOutputStreamFunctionMap_native_Nova_construct)(nova_network_Nova_nova_network_NetworkOutputStreamFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_nova_network_NetworkOutputStreamFunctionMap
{
nova_network_Nova_nova_network_NetworkOutputStreamFunctionMap_native_Nova_construct nova_network_NetworkOutputStreamFunctionMap;
} nova_network_native_nova_network_NetworkOutputStreamFunctionMap;

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
typedef nova_network_Nova_nova_network_ServerSocketFunctionMap* (*nova_network_Nova_nova_network_ServerSocketFunctionMap_native_Nova_construct)(nova_network_Nova_nova_network_ServerSocketFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_nova_network_ServerSocketFunctionMap
{
nova_network_Nova_nova_network_ServerSocketFunctionMap_native_Nova_construct nova_network_ServerSocketFunctionMap;
} nova_network_native_nova_network_ServerSocketFunctionMap;

typedef nova_network_Nova_Socket* (*nova_network_Nova_Socket_native_Nova_construct)(nova_network_Nova_Socket*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);

typedef struct nova_network_native_Socket
{
nova_network_Nova_Socket_native_Nova_construct Socket;
} nova_network_native_Socket;
typedef nova_network_Nova_nova_network_SocketFunctionMap* (*nova_network_Nova_nova_network_SocketFunctionMap_native_Nova_construct)(nova_network_Nova_nova_network_SocketFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_network_native_nova_network_SocketFunctionMap
{
nova_network_Nova_nova_network_SocketFunctionMap_native_Nova_construct nova_network_SocketFunctionMap;
} nova_network_native_nova_network_SocketFunctionMap;

typedef char (*nova_operators_Nova_EqualsOperator_native0_Nova_equals)(nova_operators_Nova_EqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_EqualsOperator
{
nova_operators_Nova_EqualsOperator_native0_Nova_equals equals__nova_Object;
} nova_operators_native_EqualsOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_MultiplyEqualsOperator_native_Nova_multiplyEquals)(nova_operators_Nova_MultiplyEqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_MultiplyEqualsOperator
{
} nova_operators_native_MultiplyEqualsOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_MultiplyOperator_native0_Nova_multiply)(nova_operators_Nova_MultiplyOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_MultiplyOperator
{
nova_operators_Nova_MultiplyOperator_native0_Nova_multiply multiply__nova_Object;
} nova_operators_native_MultiplyOperator;

typedef char (*nova_operators_Nova_NotEqualToOperator_native_Nova_notEqualTo)(nova_operators_Nova_NotEqualToOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_NotEqualToOperator
{
} nova_operators_native_NotEqualToOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_PlusEqualsOperator_native0_Nova_plusEquals)(nova_operators_Nova_PlusEqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_PlusEqualsOperator
{
nova_operators_Nova_PlusEqualsOperator_native0_Nova_plusEquals plusEquals__nova_Object;
} nova_operators_native_PlusEqualsOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_PlusOperator_native0_Nova_plus)(nova_operators_Nova_PlusOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);

typedef struct nova_operators_native_PlusOperator
{
nova_operators_Nova_PlusOperator_native0_Nova_plus plus__nova_Object;
} nova_operators_native_PlusOperator;

typedef char (*nova_primitive_Nova_Bool_native_Nova_compareTo)(nova_primitive_Nova_Bool*, nova_exception_Nova_ExceptionData*, char);
typedef nova_Nova_String* (*nova_primitive_Nova_Bool_native_static_Nova_toString)(nova_primitive_Nova_Bool*, nova_exception_Nova_ExceptionData*, char);
typedef nova_primitive_Nova_Bool* (*nova_primitive_Nova_Bool_native_Nova_construct)(nova_primitive_Nova_Bool*, nova_exception_Nova_ExceptionData*, char);

typedef struct nova_primitive_native_Bool
{
nova_primitive_Nova_Bool_native_Nova_compareTo compareTo;
nova_primitive_Nova_Bool_native_Nova_construct Bool;
} nova_primitive_native_Bool;
typedef nova_primitive_Nova_nova_primitive_BoolFunctionMap* (*nova_primitive_Nova_nova_primitive_BoolFunctionMap_native_Nova_construct)(nova_primitive_Nova_nova_primitive_BoolFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_nova_primitive_BoolFunctionMap
{
nova_primitive_Nova_nova_primitive_BoolFunctionMap_native_Nova_construct nova_primitive_BoolFunctionMap;
} nova_primitive_native_nova_primitive_BoolFunctionMap;

typedef nova_primitive_Nova_Null* (*nova_primitive_Nova_Null_native_Nova_construct)(nova_primitive_Nova_Null*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_Null
{
nova_primitive_Nova_Null_native_Nova_construct Null;
} nova_primitive_native_Null;
typedef nova_primitive_Nova_nova_primitive_NullFunctionMap* (*nova_primitive_Nova_nova_primitive_NullFunctionMap_native_Nova_construct)(nova_primitive_Nova_nova_primitive_NullFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_nova_primitive_NullFunctionMap
{
nova_primitive_Nova_nova_primitive_NullFunctionMap_native_Nova_construct nova_primitive_NullFunctionMap;
} nova_primitive_native_nova_primitive_NullFunctionMap;

typedef nova_primitive_Nova_Primitive* (*nova_primitive_Nova_Primitive_native_Nova_construct)(nova_primitive_Nova_Primitive*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_Primitive
{
nova_primitive_Nova_Primitive_native_Nova_construct Primitive;
} nova_primitive_native_Primitive;
typedef nova_primitive_Nova_nova_primitive_PrimitiveFunctionMap* (*nova_primitive_Nova_nova_primitive_PrimitiveFunctionMap_native_Nova_construct)(nova_primitive_Nova_nova_primitive_PrimitiveFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_native_nova_primitive_PrimitiveFunctionMap
{
nova_primitive_Nova_nova_primitive_PrimitiveFunctionMap_native_Nova_construct nova_primitive_PrimitiveFunctionMap;
} nova_primitive_native_nova_primitive_PrimitiveFunctionMap;

typedef int (*nova_primitive_number_Nova_Byte_native_static_Nova_numDigits)(nova_primitive_number_Nova_Byte*, nova_exception_Nova_ExceptionData*, char);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Byte_native_static_Nova_toString)(nova_primitive_number_Nova_Byte*, nova_exception_Nova_ExceptionData*, char);
typedef nova_primitive_number_Nova_Byte* (*nova_primitive_number_Nova_Byte_native_Nova_construct)(nova_primitive_number_Nova_Byte*, nova_exception_Nova_ExceptionData*, char);

typedef struct nova_primitive_number_native_Byte
{
nova_primitive_number_Nova_Byte_native_Nova_construct Byte;
} nova_primitive_number_native_Byte;
typedef nova_primitive_number_Nova_nova_primitive_number_ByteFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_ByteFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_ByteFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_ByteFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_ByteFunctionMap_native_Nova_construct nova_primitive_number_ByteFunctionMap;
} nova_primitive_number_native_nova_primitive_number_ByteFunctionMap;

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
typedef nova_primitive_number_Nova_nova_primitive_number_CharFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_CharFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_CharFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_CharFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_CharFunctionMap_native_Nova_construct nova_primitive_number_CharFunctionMap;
} nova_primitive_number_native_nova_primitive_number_CharFunctionMap;

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
typedef nova_primitive_number_Nova_nova_primitive_number_DoubleFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_DoubleFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_DoubleFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_DoubleFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_DoubleFunctionMap_native_Nova_construct nova_primitive_number_DoubleFunctionMap;
} nova_primitive_number_native_nova_primitive_number_DoubleFunctionMap;

typedef float (*nova_primitive_number_Nova_Float_native_Nova_compareTo)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);
typedef int (*nova_primitive_number_Nova_Float_native_static_Nova_numDigits)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Float_native_static_Nova_toString)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);
typedef nova_primitive_number_Nova_Float* (*nova_primitive_number_Nova_Float_native_Nova_construct)(nova_primitive_number_Nova_Float*, nova_exception_Nova_ExceptionData*, float);

typedef struct nova_primitive_number_native_Float
{
nova_primitive_number_Nova_Float_native_Nova_compareTo compareTo;
nova_primitive_number_Nova_Float_native_Nova_construct Float;
} nova_primitive_number_native_Float;
typedef nova_primitive_number_Nova_nova_primitive_number_FloatFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_FloatFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_FloatFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_FloatFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_FloatFunctionMap_native_Nova_construct nova_primitive_number_FloatFunctionMap;
} nova_primitive_number_native_nova_primitive_number_FloatFunctionMap;

typedef int (*nova_primitive_number_Nova_Int_native_static_Nova_numDigits)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, int);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Int_native_static_Nova_toString)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, int);
typedef int (*nova_primitive_number_Nova_Int_native_static_Nova_parseInt)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_primitive_number_Nova_Int* (*nova_primitive_number_Nova_Int_native_Nova_construct)(nova_primitive_number_Nova_Int*, nova_exception_Nova_ExceptionData*, int);

typedef struct nova_primitive_number_native_Int
{
nova_primitive_number_Nova_Int_native_Nova_construct Int;
} nova_primitive_number_native_Int;
typedef nova_primitive_number_Nova_nova_primitive_number_IntFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_IntFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_IntFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_IntFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_IntFunctionMap_native_Nova_construct nova_primitive_number_IntFunctionMap;
} nova_primitive_number_native_nova_primitive_number_IntFunctionMap;


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
typedef nova_primitive_number_Nova_nova_primitive_number_LongFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_LongFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_LongFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_LongFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_LongFunctionMap_native_Nova_construct nova_primitive_number_LongFunctionMap;
} nova_primitive_number_native_nova_primitive_number_LongFunctionMap;

typedef char (*nova_primitive_number_Nova_Number_native_static_Nova_numDigits)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, nova_primitive_number_Nova_Number*);
typedef nova_primitive_number_Nova_Number* (*nova_primitive_number_Nova_Number_native_Nova_construct)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_Number
{
nova_primitive_number_Nova_Number_native_Nova_construct Number;
} nova_primitive_number_native_Number;
typedef nova_primitive_number_Nova_nova_primitive_number_NumberFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_NumberFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_NumberFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_NumberFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_NumberFunctionMap_native_Nova_construct nova_primitive_number_NumberFunctionMap;
} nova_primitive_number_native_nova_primitive_number_NumberFunctionMap;


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
typedef nova_primitive_number_Nova_nova_primitive_number_ShortFunctionMap* (*nova_primitive_number_Nova_nova_primitive_number_ShortFunctionMap_native_Nova_construct)(nova_primitive_number_Nova_nova_primitive_number_ShortFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_primitive_number_native_nova_primitive_number_ShortFunctionMap
{
nova_primitive_number_Nova_nova_primitive_number_ShortFunctionMap_native_Nova_construct nova_primitive_number_ShortFunctionMap;
} nova_primitive_number_native_nova_primitive_number_ShortFunctionMap;

typedef nova_process_Nova_Process* (*nova_process_Nova_Process_native_Nova_construct)(nova_process_Nova_Process*, nova_exception_Nova_ExceptionData*, nova_io_Nova_InputStream*);

typedef struct nova_process_native_Process
{
nova_process_Nova_Process_native_Nova_construct Process;
} nova_process_native_Process;
typedef nova_process_Nova_nova_process_ProcessFunctionMap* (*nova_process_Nova_nova_process_ProcessFunctionMap_native_Nova_construct)(nova_process_Nova_nova_process_ProcessFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_process_native_nova_process_ProcessFunctionMap
{
nova_process_Nova_nova_process_ProcessFunctionMap_native_Nova_construct nova_process_ProcessFunctionMap;
} nova_process_native_nova_process_ProcessFunctionMap;

typedef nova_regex_Nova_Match* (*nova_regex_Nova_Match_native_Nova_construct)(nova_regex_Nova_Match*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);

typedef struct nova_regex_native_Match
{
nova_regex_Nova_Match_native_Nova_construct Match;
} nova_regex_native_Match;
typedef nova_regex_Nova_nova_regex_MatchFunctionMap* (*nova_regex_Nova_nova_regex_MatchFunctionMap_native_Nova_construct)(nova_regex_Nova_nova_regex_MatchFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_regex_native_nova_regex_MatchFunctionMap
{
nova_regex_Nova_nova_regex_MatchFunctionMap_native_Nova_construct nova_regex_MatchFunctionMap;
} nova_regex_native_nova_regex_MatchFunctionMap;

typedef nova_regex_Nova_Pattern* (*nova_regex_Nova_Pattern_native_Nova_construct)(nova_regex_Nova_Pattern*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_regex_native_Pattern
{
nova_regex_Nova_Pattern_native_Nova_construct Pattern;
} nova_regex_native_Pattern;
typedef nova_regex_Nova_nova_regex_PatternFunctionMap* (*nova_regex_Nova_nova_regex_PatternFunctionMap_native_Nova_construct)(nova_regex_Nova_nova_regex_PatternFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_regex_native_nova_regex_PatternFunctionMap
{
nova_regex_Nova_nova_regex_PatternFunctionMap_native_Nova_construct nova_regex_PatternFunctionMap;
} nova_regex_native_nova_regex_PatternFunctionMap;

typedef char (*nova_regex_Nova_Regex_native0_static_Nova_containsMatch)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef char (*nova_regex_Nova_Regex_native1_static_Nova_containsMatch)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_regex_Nova_Regex_native0_static_Nova_getMatches)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_regex_Nova_Regex_native_static_Nova_getMatches)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
typedef nova_regex_Nova_Regex* (*nova_regex_Nova_Regex_native_Nova_construct)(nova_regex_Nova_Regex*, nova_exception_Nova_ExceptionData*);

typedef struct nova_regex_native_Regex
{
nova_regex_Nova_Regex_native_Nova_construct Regex;
} nova_regex_native_Regex;
typedef nova_regex_Nova_nova_regex_RegexFunctionMap* (*nova_regex_Nova_nova_regex_RegexFunctionMap_native_Nova_construct)(nova_regex_Nova_nova_regex_RegexFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_regex_native_nova_regex_RegexFunctionMap
{
nova_regex_Nova_nova_regex_RegexFunctionMap_native_Nova_construct nova_regex_RegexFunctionMap;
} nova_regex_native_nova_regex_RegexFunctionMap;

typedef nova_Nova_String* (*nova_security_Nova_MD5_native_static_Nova_encrypt)(nova_security_Nova_MD5*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_security_Nova_MD5* (*nova_security_Nova_MD5_native_Nova_construct)(nova_security_Nova_MD5*, nova_exception_Nova_ExceptionData*);

typedef struct nova_security_native_MD5
{
nova_security_Nova_MD5_native_Nova_construct MD5;
} nova_security_native_MD5;
typedef nova_security_Nova_nova_security_MD5FunctionMap* (*nova_security_Nova_nova_security_MD5FunctionMap_native_Nova_construct)(nova_security_Nova_nova_security_MD5FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_security_native_nova_security_MD5FunctionMap
{
nova_security_Nova_nova_security_MD5FunctionMap_native_Nova_construct nova_security_MD5FunctionMap;
} nova_security_native_nova_security_MD5FunctionMap;

typedef nova_Nova_String* (*nova_security_Nova_Sha256_native_Nova_digest)(nova_security_Nova_Sha256*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_security_Nova_Sha256* (*nova_security_Nova_Sha256_native_Nova_construct)(nova_security_Nova_Sha256*, nova_exception_Nova_ExceptionData*);

typedef struct nova_security_native_Sha256
{
nova_security_Nova_Sha256_native_Nova_digest digest;
nova_security_Nova_Sha256_native_Nova_construct Sha256;
} nova_security_native_Sha256;
typedef nova_security_Nova_nova_security_Sha256FunctionMap* (*nova_security_Nova_nova_security_Sha256FunctionMap_native_Nova_construct)(nova_security_Nova_nova_security_Sha256FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_security_native_nova_security_Sha256FunctionMap
{
nova_security_Nova_nova_security_Sha256FunctionMap_native_Nova_construct nova_security_Sha256FunctionMap;
} nova_security_native_nova_security_Sha256FunctionMap;

typedef nova_star_Nova_Frame* (*nova_star_Nova_Frame_native_Nova_construct)(nova_star_Nova_Frame*, nova_exception_Nova_ExceptionData*, int, int, int, int);

typedef struct nova_star_native_Frame
{
nova_star_Nova_Frame_native_Nova_construct Frame;
} nova_star_native_Frame;
typedef nova_star_Nova_nova_star_FrameFunctionMap* (*nova_star_Nova_nova_star_FrameFunctionMap_native_Nova_construct)(nova_star_Nova_nova_star_FrameFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_star_native_nova_star_FrameFunctionMap
{
nova_star_Nova_nova_star_FrameFunctionMap_native_Nova_construct nova_star_FrameFunctionMap;
} nova_star_native_nova_star_FrameFunctionMap;

typedef void (*nova_star_Nova_Window_native_Nova_create)(nova_star_Nova_Window*, nova_exception_Nova_ExceptionData*);
typedef nova_star_Nova_Window* (*nova_star_Nova_Window_native_Nova_construct)(nova_star_Nova_Window*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int, int, int);

typedef struct nova_star_native_Window
{
nova_star_Nova_Window_native_Nova_create create;
nova_star_Nova_Window_native_Nova_construct Window;
} nova_star_native_Window;
typedef nova_star_Nova_nova_star_WindowFunctionMap* (*nova_star_Nova_nova_star_WindowFunctionMap_native_Nova_construct)(nova_star_Nova_nova_star_WindowFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_star_native_nova_star_WindowFunctionMap
{
nova_star_Nova_nova_star_WindowFunctionMap_native_Nova_construct nova_star_WindowFunctionMap;
} nova_star_native_nova_star_WindowFunctionMap;

typedef nova_star_Nova_WindowThread* (*nova_star_Nova_WindowThread_native_Nova_construct)(nova_star_Nova_WindowThread*, nova_exception_Nova_ExceptionData*, nova_star_Nova_Window*);

typedef struct nova_star_native_WindowThread
{
nova_star_Nova_WindowThread_native_Nova_construct WindowThread;
} nova_star_native_WindowThread;
typedef nova_star_Nova_nova_star_WindowThreadFunctionMap* (*nova_star_Nova_nova_star_WindowThreadFunctionMap_native_Nova_construct)(nova_star_Nova_nova_star_WindowThreadFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_star_native_nova_star_WindowThreadFunctionMap
{
nova_star_Nova_nova_star_WindowThreadFunctionMap_native_Nova_construct nova_star_WindowThreadFunctionMap;
} nova_star_native_nova_star_WindowThreadFunctionMap;

typedef NOVA_THREAD_HANDLE* (*nova_thread_Nova_Thread_native_Nova_start)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_thread_Nova_Thread_native_Nova_join)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_thread_Nova_Thread_native_Nova_kill)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef void (*nova_thread_Nova_Thread_native_static_Nova_sleep)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*, long_long);
typedef void (*nova_thread_Nova_Thread_native_Nova_run)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef nova_thread_Nova_Thread* (*nova_thread_Nova_Thread_native0_Nova_construct)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
typedef nova_thread_Nova_Thread* (*nova_thread_Nova_Thread_native1_Nova_construct)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread_closure4_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* action_context);

typedef struct nova_thread_native_Thread
{
nova_thread_Nova_Thread_native_Nova_start start;
nova_thread_Nova_Thread_native_Nova_join join;
nova_thread_Nova_Thread_native_Nova_kill kill;
nova_thread_Nova_Thread_native_Nova_run run;
nova_thread_Nova_Thread_native0_Nova_construct Thread;
nova_thread_Nova_Thread_native1_Nova_construct Thread__void;
} nova_thread_native_Thread;
typedef nova_thread_Nova_nova_thread_ThreadFunctionMap* (*nova_thread_Nova_nova_thread_ThreadFunctionMap_native_Nova_construct)(nova_thread_Nova_nova_thread_ThreadFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_native_nova_thread_ThreadFunctionMap
{
nova_thread_Nova_nova_thread_ThreadFunctionMap_native_Nova_construct nova_thread_ThreadFunctionMap;
} nova_thread_native_nova_thread_ThreadFunctionMap;

typedef void (*nova_thread_Nova_UncaughtExceptionHandler_native_Nova_uncaughtException)(nova_thread_Nova_UncaughtExceptionHandler*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread*, nova_exception_Nova_Exception*);
typedef nova_thread_Nova_UncaughtExceptionHandler* (*nova_thread_Nova_UncaughtExceptionHandler_native_Nova_construct)(nova_thread_Nova_UncaughtExceptionHandler*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_native_UncaughtExceptionHandler
{
nova_thread_Nova_UncaughtExceptionHandler_native_Nova_uncaughtException uncaughtException;
nova_thread_Nova_UncaughtExceptionHandler_native_Nova_construct UncaughtExceptionHandler;
} nova_thread_native_UncaughtExceptionHandler;
typedef nova_thread_Nova_nova_thread_UncaughtExceptionHandlerFunctionMap* (*nova_thread_Nova_nova_thread_UncaughtExceptionHandlerFunctionMap_native_Nova_construct)(nova_thread_Nova_nova_thread_UncaughtExceptionHandlerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_native_nova_thread_UncaughtExceptionHandlerFunctionMap
{
nova_thread_Nova_nova_thread_UncaughtExceptionHandlerFunctionMap_native_Nova_construct nova_thread_UncaughtExceptionHandlerFunctionMap;
} nova_thread_native_nova_thread_UncaughtExceptionHandlerFunctionMap;

typedef nova_thread_async_Nova_Task* (*nova_thread_async_Nova_Async_native_static_Nova_execute)(nova_thread_async_Nova_Async*, nova_exception_Nova_ExceptionData*, nova_thread_async_Nova_Async_closure4_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* func_context);
typedef nova_thread_async_Nova_Task* (*nova_thread_async_Nova_Async_native_static_Nova_request)(nova_thread_async_Nova_Async*, nova_exception_Nova_ExceptionData*, nova_thread_async_Nova_Async_closure8_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* func_context);
typedef nova_thread_async_Nova_Async* (*nova_thread_async_Nova_Async_native_Nova_construct)(nova_thread_async_Nova_Async*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_async_native_Async
{
nova_thread_async_Nova_Async_native_Nova_construct Async;
} nova_thread_async_native_Async;
typedef nova_thread_async_Nova_nova_thread_async_AsyncFunctionMap* (*nova_thread_async_Nova_nova_thread_async_AsyncFunctionMap_native_Nova_construct)(nova_thread_async_Nova_nova_thread_async_AsyncFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_async_native_nova_thread_async_AsyncFunctionMap
{
nova_thread_async_Nova_nova_thread_async_AsyncFunctionMap_native_Nova_construct nova_thread_async_AsyncFunctionMap;
} nova_thread_async_native_nova_thread_async_AsyncFunctionMap;

typedef void (*nova_thread_async_Nova_Task_native_Nova_waitForCompletion)(nova_thread_async_Nova_Task*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_Object* (*nova_thread_async_Nova_Task_native_Nova_waitForResult)(nova_thread_async_Nova_Task*, nova_exception_Nova_ExceptionData*);
typedef nova_thread_async_Nova_Task* (*nova_thread_async_Nova_Task_native_Nova_construct)(nova_thread_async_Nova_Task*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread*);

typedef struct nova_thread_async_native_Task
{
nova_thread_async_Nova_Task_native_Nova_waitForCompletion waitForCompletion;
nova_thread_async_Nova_Task_native_Nova_waitForResult waitForResult;
nova_thread_async_Nova_Task_native_Nova_construct Task;
} nova_thread_async_native_Task;
typedef nova_thread_async_Nova_nova_thread_async_TaskFunctionMap* (*nova_thread_async_Nova_nova_thread_async_TaskFunctionMap_native_Nova_construct)(nova_thread_async_Nova_nova_thread_async_TaskFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_thread_async_native_nova_thread_async_TaskFunctionMap
{
nova_thread_async_Nova_nova_thread_async_TaskFunctionMap_native_Nova_construct nova_thread_async_TaskFunctionMap;
} nova_thread_async_native_nova_thread_async_TaskFunctionMap;

typedef nova_time_Nova_CumulativeTimer* (*nova_time_Nova_CumulativeTimer_native_Nova_construct)(nova_time_Nova_CumulativeTimer*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_CumulativeTimer
{
nova_time_Nova_CumulativeTimer_native_Nova_construct CumulativeTimer;
} nova_time_native_CumulativeTimer;
typedef nova_time_Nova_nova_time_CumulativeTimerFunctionMap* (*nova_time_Nova_nova_time_CumulativeTimerFunctionMap_native_Nova_construct)(nova_time_Nova_nova_time_CumulativeTimerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_nova_time_CumulativeTimerFunctionMap
{
nova_time_Nova_nova_time_CumulativeTimerFunctionMap_native_Nova_construct nova_time_CumulativeTimerFunctionMap;
} nova_time_native_nova_time_CumulativeTimerFunctionMap;

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
typedef nova_time_Nova_nova_time_DateFunctionMap* (*nova_time_Nova_nova_time_DateFunctionMap_native_Nova_construct)(nova_time_Nova_nova_time_DateFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_nova_time_DateFunctionMap
{
nova_time_Nova_nova_time_DateFunctionMap_native_Nova_construct nova_time_DateFunctionMap;
} nova_time_native_nova_time_DateFunctionMap;

typedef nova_time_Nova_Time* (*nova_time_Nova_Time_native_Nova_construct)(nova_time_Nova_Time*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_Time
{
nova_time_Nova_Time_native_Nova_construct Time;
} nova_time_native_Time;
typedef nova_time_Nova_nova_time_TimeFunctionMap* (*nova_time_Nova_nova_time_TimeFunctionMap_native_Nova_construct)(nova_time_Nova_nova_time_TimeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_nova_time_TimeFunctionMap
{
nova_time_Nova_nova_time_TimeFunctionMap_native_Nova_construct nova_time_TimeFunctionMap;
} nova_time_native_nova_time_TimeFunctionMap;

typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_start)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_stop)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_reset)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_static_Nova_time)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer_closure7_Nova_action nova_time_Nova_Timer_Nova_action, void* nova_time_Nova_Timer_ref_Nova_action, void* action_context, nova_time_Nova_Timer_closure8_Nova_callback nova_time_Nova_Timer_Nova_callback, void* nova_time_Nova_Timer_ref_Nova_callback, void* callback_context);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_construct)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_Timer
{
nova_time_Nova_Timer_native_Nova_start start;
nova_time_Nova_Timer_native_Nova_stop stop;
nova_time_Nova_Timer_native_Nova_reset reset;
nova_time_Nova_Timer_native_Nova_construct Timer;
} nova_time_native_Timer;
typedef nova_time_Nova_nova_time_TimerFunctionMap* (*nova_time_Nova_nova_time_TimerFunctionMap_native_Nova_construct)(nova_time_Nova_nova_time_TimerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_time_native_nova_time_TimerFunctionMap
{
nova_time_Nova_nova_time_TimerFunctionMap_native_Nova_construct nova_time_TimerFunctionMap;
} nova_time_native_nova_time_TimerFunctionMap;

typedef nova_web_js_json_Nova_Json* (*nova_web_js_json_Nova_Json_native_Nova_construct)(nova_web_js_json_Nova_Json*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_js_json_native_Json
{
nova_web_js_json_Nova_Json_native_Nova_construct Json;
} nova_web_js_json_native_Json;
typedef nova_web_js_json_Nova_nova_web_js_json_JsonFunctionMap* (*nova_web_js_json_Nova_nova_web_js_json_JsonFunctionMap_native_Nova_construct)(nova_web_js_json_Nova_nova_web_js_json_JsonFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_js_json_native_nova_web_js_json_JsonFunctionMap
{
nova_web_js_json_Nova_nova_web_js_json_JsonFunctionMap_native_Nova_construct nova_web_js_json_JsonFunctionMap;
} nova_web_js_json_native_nova_web_js_json_JsonFunctionMap;

typedef void (*nova_web_svg_Nova_Svg_native_Nova_generateOutput)(nova_web_svg_Nova_Svg*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef void (*nova_web_svg_Nova_Svg_native_Nova_generateHTMLOutput)(nova_web_svg_Nova_Svg*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef nova_web_svg_Nova_Svg* (*nova_web_svg_Nova_Svg_native_Nova_construct)(nova_web_svg_Nova_Svg*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_Svg
{
nova_web_svg_Nova_Svg_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_Svg_native_Nova_generateHTMLOutput generateHTMLOutput;
nova_web_svg_Nova_Svg_native_Nova_construct Svg;
} nova_web_svg_native_Svg;
typedef nova_web_svg_Nova_nova_web_svg_SvgFunctionMap* (*nova_web_svg_Nova_nova_web_svg_SvgFunctionMap_native_Nova_construct)(nova_web_svg_Nova_nova_web_svg_SvgFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_nova_web_svg_SvgFunctionMap
{
nova_web_svg_Nova_nova_web_svg_SvgFunctionMap_native_Nova_construct nova_web_svg_SvgFunctionMap;
} nova_web_svg_native_nova_web_svg_SvgFunctionMap;

typedef char (*nova_web_svg_Nova_SvgCircle_native_Nova_generateOutput)(nova_web_svg_Nova_SvgCircle*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef nova_web_svg_Nova_SvgCircle* (*nova_web_svg_Nova_SvgCircle_native_Nova_construct)(nova_web_svg_Nova_SvgCircle*, nova_exception_Nova_ExceptionData*, double, double, int);

typedef struct nova_web_svg_native_SvgCircle
{
nova_web_svg_Nova_SvgCircle_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgCircle_native_Nova_construct SvgCircle;
} nova_web_svg_native_SvgCircle;
typedef nova_web_svg_Nova_nova_web_svg_SvgCircleFunctionMap* (*nova_web_svg_Nova_nova_web_svg_SvgCircleFunctionMap_native_Nova_construct)(nova_web_svg_Nova_nova_web_svg_SvgCircleFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_nova_web_svg_SvgCircleFunctionMap
{
nova_web_svg_Nova_nova_web_svg_SvgCircleFunctionMap_native_Nova_construct nova_web_svg_SvgCircleFunctionMap;
} nova_web_svg_native_nova_web_svg_SvgCircleFunctionMap;

typedef void (*nova_web_svg_Nova_SvgComponent_native_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef nova_web_svg_Nova_SvgComponent* (*nova_web_svg_Nova_SvgComponent_native_Nova_construct)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgComponent
{
nova_web_svg_Nova_SvgComponent_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgComponent_native_Nova_construct SvgComponent;
} nova_web_svg_native_SvgComponent;
typedef nova_web_svg_Nova_nova_web_svg_SvgComponentFunctionMap* (*nova_web_svg_Nova_nova_web_svg_SvgComponentFunctionMap_native_Nova_construct)(nova_web_svg_Nova_nova_web_svg_SvgComponentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_nova_web_svg_SvgComponentFunctionMap
{
nova_web_svg_Nova_nova_web_svg_SvgComponentFunctionMap_native_Nova_construct nova_web_svg_SvgComponentFunctionMap;
} nova_web_svg_native_nova_web_svg_SvgComponentFunctionMap;

typedef void (*nova_web_svg_Nova_SvgComponentList_native_Nova_generateOutput)(nova_web_svg_Nova_SvgComponentList*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
typedef void (*nova_web_svg_Nova_SvgComponentList_native_Nova_addChild)(nova_web_svg_Nova_SvgComponentList*, nova_exception_Nova_ExceptionData*, nova_web_svg_Nova_SvgComponent*);
typedef nova_web_svg_Nova_SvgComponentList* (*nova_web_svg_Nova_SvgComponentList_native_Nova_construct)(nova_web_svg_Nova_SvgComponentList*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgComponentList
{
nova_web_svg_Nova_SvgComponentList_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgComponentList_native_Nova_addChild addChild;
nova_web_svg_Nova_SvgComponentList_native_Nova_construct SvgComponentList;
} nova_web_svg_native_SvgComponentList;
typedef nova_web_svg_Nova_nova_web_svg_SvgComponentListFunctionMap* (*nova_web_svg_Nova_nova_web_svg_SvgComponentListFunctionMap_native_Nova_construct)(nova_web_svg_Nova_nova_web_svg_SvgComponentListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_nova_web_svg_SvgComponentListFunctionMap
{
nova_web_svg_Nova_nova_web_svg_SvgComponentListFunctionMap_native_Nova_construct nova_web_svg_SvgComponentListFunctionMap;
} nova_web_svg_native_nova_web_svg_SvgComponentListFunctionMap;

typedef nova_web_svg_Nova_SvgComponentNode* (*nova_web_svg_Nova_SvgComponentNode_native_Nova_construct)(nova_web_svg_Nova_SvgComponentNode*, nova_exception_Nova_ExceptionData*, nova_web_svg_Nova_SvgComponent*, nova_web_svg_Nova_SvgComponentNode*);

typedef struct nova_web_svg_native_SvgComponentNode
{
nova_web_svg_Nova_SvgComponentNode_native_Nova_construct SvgComponentNode;
} nova_web_svg_native_SvgComponentNode;
typedef nova_web_svg_Nova_nova_web_svg_SvgComponentNodeFunctionMap* (*nova_web_svg_Nova_nova_web_svg_SvgComponentNodeFunctionMap_native_Nova_construct)(nova_web_svg_Nova_nova_web_svg_SvgComponentNodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_nova_web_svg_SvgComponentNodeFunctionMap
{
nova_web_svg_Nova_nova_web_svg_SvgComponentNodeFunctionMap_native_Nova_construct nova_web_svg_SvgComponentNodeFunctionMap;
} nova_web_svg_native_nova_web_svg_SvgComponentNodeFunctionMap;

typedef nova_web_svg_Nova_SvgMainComponent* (*nova_web_svg_Nova_SvgMainComponent_native_Nova_construct)(nova_web_svg_Nova_SvgMainComponent*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_SvgMainComponent
{
nova_web_svg_Nova_SvgMainComponent_native_Nova_construct SvgMainComponent;
} nova_web_svg_native_SvgMainComponent;
typedef nova_web_svg_Nova_nova_web_svg_SvgMainComponentFunctionMap* (*nova_web_svg_Nova_nova_web_svg_SvgMainComponentFunctionMap_native_Nova_construct)(nova_web_svg_Nova_nova_web_svg_SvgMainComponentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_native_nova_web_svg_SvgMainComponentFunctionMap
{
nova_web_svg_Nova_nova_web_svg_SvgMainComponentFunctionMap_native_Nova_construct nova_web_svg_SvgMainComponentFunctionMap;
} nova_web_svg_native_nova_web_svg_SvgMainComponentFunctionMap;

typedef nova_web_svg_no3_Nova_No3Select* (*nova_web_svg_no3_Nova_No3_native_static_Nova_select)(nova_web_svg_no3_Nova_No3*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_web_svg_no3_Nova_No3SelectAll* (*nova_web_svg_no3_Nova_No3_native_static_Nova_selectAll)(nova_web_svg_no3_Nova_No3*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef nova_web_svg_no3_Nova_No3* (*nova_web_svg_no3_Nova_No3_native_Nova_construct)(nova_web_svg_no3_Nova_No3*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_No3
{
nova_web_svg_no3_Nova_No3_native_Nova_construct No3;
} nova_web_svg_no3_native_No3;
typedef nova_web_svg_no3_Nova_nova_web_svg_no3_No3FunctionMap* (*nova_web_svg_no3_Nova_nova_web_svg_no3_No3FunctionMap_native_Nova_construct)(nova_web_svg_no3_Nova_nova_web_svg_no3_No3FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_nova_web_svg_no3_No3FunctionMap
{
nova_web_svg_no3_Nova_nova_web_svg_no3_No3FunctionMap_native_Nova_construct nova_web_svg_no3_No3FunctionMap;
} nova_web_svg_no3_native_nova_web_svg_no3_No3FunctionMap;

typedef nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_native_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);
typedef nova_web_svg_no3_Nova_No3Node* (*nova_web_svg_no3_Nova_No3Node_native_Nova_construct)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_No3Node
{
nova_web_svg_no3_Nova_No3Node_native_Nova_toJs toJs;
nova_web_svg_no3_Nova_No3Node_native_Nova_construct No3Node;
} nova_web_svg_no3_native_No3Node;
typedef nova_web_svg_no3_Nova_nova_web_svg_no3_No3NodeFunctionMap* (*nova_web_svg_no3_Nova_nova_web_svg_no3_No3NodeFunctionMap_native_Nova_construct)(nova_web_svg_no3_Nova_nova_web_svg_no3_No3NodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_nova_web_svg_no3_No3NodeFunctionMap
{
nova_web_svg_no3_Nova_nova_web_svg_no3_No3NodeFunctionMap_native_Nova_construct nova_web_svg_no3_No3NodeFunctionMap;
} nova_web_svg_no3_native_nova_web_svg_no3_No3NodeFunctionMap;

typedef nova_web_svg_no3_Nova_No3Select* (*nova_web_svg_no3_Nova_No3Select_native_Nova_construct)(nova_web_svg_no3_Nova_No3Select*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3Select
{
nova_web_svg_no3_Nova_No3Select_native_Nova_construct No3Select;
} nova_web_svg_no3_native_No3Select;
typedef nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectFunctionMap* (*nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectFunctionMap_native_Nova_construct)(nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_nova_web_svg_no3_No3SelectFunctionMap
{
nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectFunctionMap_native_Nova_construct nova_web_svg_no3_No3SelectFunctionMap;
} nova_web_svg_no3_native_nova_web_svg_no3_No3SelectFunctionMap;

typedef nova_web_svg_no3_Nova_No3SelectAll* (*nova_web_svg_no3_Nova_No3SelectAll_native_Nova_construct)(nova_web_svg_no3_Nova_No3SelectAll*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3SelectAll
{
nova_web_svg_no3_Nova_No3SelectAll_native_Nova_construct No3SelectAll;
} nova_web_svg_no3_native_No3SelectAll;
typedef nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectAllFunctionMap* (*nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectAllFunctionMap_native_Nova_construct)(nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectAllFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct nova_web_svg_no3_native_nova_web_svg_no3_No3SelectAllFunctionMap
{
nova_web_svg_no3_Nova_nova_web_svg_no3_No3SelectAllFunctionMap_native_Nova_construct nova_web_svg_no3_No3SelectAllFunctionMap;
} nova_web_svg_no3_native_nova_web_svg_no3_No3SelectAllFunctionMap;

typedef spectra_Nova_InvalidParseException* (*spectra_Nova_InvalidParseException_native_Nova_construct)(spectra_Nova_InvalidParseException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*);

typedef struct spectra_native_InvalidParseException
{
spectra_Nova_InvalidParseException_native_Nova_construct InvalidParseException;
} spectra_native_InvalidParseException;
typedef spectra_Nova_spectra_InvalidParseExceptionFunctionMap* (*spectra_Nova_spectra_InvalidParseExceptionFunctionMap_native_Nova_construct)(spectra_Nova_spectra_InvalidParseExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_spectra_InvalidParseExceptionFunctionMap
{
spectra_Nova_spectra_InvalidParseExceptionFunctionMap_native_Nova_construct spectra_InvalidParseExceptionFunctionMap;
} spectra_native_spectra_InvalidParseExceptionFunctionMap;

typedef void (*spectra_Nova_Spectra_native_static_Nova_main)(spectra_Nova_Spectra*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef void (*spectra_Nova_Spectra_native_Nova_compile)(spectra_Nova_Spectra*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef spectra_Nova_Spectra* (*spectra_Nova_Spectra_native_Nova_construct)(spectra_Nova_Spectra*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_Spectra
{
spectra_Nova_Spectra_native_Nova_compile compile;
spectra_Nova_Spectra_native_Nova_construct Spectra;
} spectra_native_Spectra;
typedef spectra_Nova_spectra_SpectraFunctionMap* (*spectra_Nova_spectra_SpectraFunctionMap_native_Nova_construct)(spectra_Nova_spectra_SpectraFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_spectra_SpectraFunctionMap
{
spectra_Nova_spectra_SpectraFunctionMap_native_Nova_construct spectra_SpectraFunctionMap;
} spectra_native_spectra_SpectraFunctionMap;

typedef spectra_Nova_SyntaxErrorException* (*spectra_Nova_SyntaxErrorException_native0_Nova_construct)(spectra_Nova_SyntaxErrorException*, nova_exception_Nova_ExceptionData*);
typedef spectra_Nova_SyntaxErrorException* (*spectra_Nova_SyntaxErrorException_native1_Nova_construct)(spectra_Nova_SyntaxErrorException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Program*);

typedef struct spectra_native_SyntaxErrorException
{
spectra_Nova_SyntaxErrorException_native0_Nova_construct SyntaxErrorException;
spectra_Nova_SyntaxErrorException_native1_Nova_construct SyntaxErrorException__nova_String__spectra_tree_nodes_Node__spectra_tree_nodes_Program;
} spectra_native_SyntaxErrorException;
typedef spectra_Nova_spectra_SyntaxErrorExceptionFunctionMap* (*spectra_Nova_spectra_SyntaxErrorExceptionFunctionMap_native_Nova_construct)(spectra_Nova_spectra_SyntaxErrorExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_spectra_SyntaxErrorExceptionFunctionMap
{
spectra_Nova_spectra_SyntaxErrorExceptionFunctionMap_native_Nova_construct spectra_SyntaxErrorExceptionFunctionMap;
} spectra_native_spectra_SyntaxErrorExceptionFunctionMap;

typedef void (*spectra_Nova_SyntaxMessage_native_static_Nova_errorIf)(spectra_Nova_SyntaxMessage*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, char, int);
typedef void (*spectra_Nova_SyntaxMessage_native_static_Nova_error)(spectra_Nova_SyntaxMessage*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_Nova_SyntaxMessage* (*spectra_Nova_SyntaxMessage_native_Nova_construct)(spectra_Nova_SyntaxMessage*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_SyntaxMessage
{
spectra_Nova_SyntaxMessage_native_Nova_construct SyntaxMessage;
} spectra_native_SyntaxMessage;
typedef spectra_Nova_spectra_SyntaxMessageFunctionMap* (*spectra_Nova_spectra_SyntaxMessageFunctionMap_native_Nova_construct)(spectra_Nova_spectra_SyntaxMessageFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_native_spectra_SyntaxMessageFunctionMap
{
spectra_Nova_spectra_SyntaxMessageFunctionMap_native_Nova_construct spectra_SyntaxMessageFunctionMap;
} spectra_native_spectra_SyntaxMessageFunctionMap;

typedef void (*spectra_engines_Nova_CodeGeneratorEngine_native_Nova_writeFiles)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_engines_Nova_CodeGeneratorEngine_native_Nova_insertMainMethod)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
typedef spectra_engines_Nova_CodeGeneratorEngine* (*spectra_engines_Nova_CodeGeneratorEngine_native_Nova_construct)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_engines_native_CodeGeneratorEngine
{
spectra_engines_Nova_CodeGeneratorEngine_native_Nova_construct CodeGeneratorEngine;
} spectra_engines_native_CodeGeneratorEngine;
typedef spectra_engines_Nova_spectra_engines_CodeGeneratorEngineFunctionMap* (*spectra_engines_Nova_spectra_engines_CodeGeneratorEngineFunctionMap_native_Nova_construct)(spectra_engines_Nova_spectra_engines_CodeGeneratorEngineFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_engines_native_spectra_engines_CodeGeneratorEngineFunctionMap
{
spectra_engines_Nova_spectra_engines_CodeGeneratorEngineFunctionMap_native_Nova_construct spectra_engines_CodeGeneratorEngineFunctionMap;
} spectra_engines_native_spectra_engines_CodeGeneratorEngineFunctionMap;

typedef spectra_error_Nova_UnimplementedOperationException* (*spectra_error_Nova_UnimplementedOperationException_native_Nova_construct)(spectra_error_Nova_UnimplementedOperationException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_error_native_UnimplementedOperationException
{
spectra_error_Nova_UnimplementedOperationException_native_Nova_construct UnimplementedOperationException;
} spectra_error_native_UnimplementedOperationException;
typedef spectra_error_Nova_spectra_error_UnimplementedOperationExceptionFunctionMap* (*spectra_error_Nova_spectra_error_UnimplementedOperationExceptionFunctionMap_native_Nova_construct)(spectra_error_Nova_spectra_error_UnimplementedOperationExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_error_native_spectra_error_UnimplementedOperationExceptionFunctionMap
{
spectra_error_Nova_spectra_error_UnimplementedOperationExceptionFunctionMap_native_Nova_construct spectra_error_UnimplementedOperationExceptionFunctionMap;
} spectra_error_native_spectra_error_UnimplementedOperationExceptionFunctionMap;

typedef nova_datastruct_list_Nova_Array* (*spectra_tree_Nova_AnnotationSearchResult_native0_Nova_addTo)(spectra_tree_Nova_AnnotationSearchResult*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef nova_datastruct_list_Nova_Array* (*spectra_tree_Nova_AnnotationSearchResult_native1_Nova_addTo)(spectra_tree_Nova_AnnotationSearchResult*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Stack*);
typedef spectra_tree_Nova_AnnotationSearchResult* (*spectra_tree_Nova_AnnotationSearchResult_native_Nova_construct)(spectra_tree_Nova_AnnotationSearchResult*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_tree_native_AnnotationSearchResult
{
spectra_tree_Nova_AnnotationSearchResult_native0_Nova_addTo addTo__spectra_tree_nodes_Node;
spectra_tree_Nova_AnnotationSearchResult_native1_Nova_addTo addTo__nova_datastruct_list_Stack;
spectra_tree_Nova_AnnotationSearchResult_native_Nova_construct AnnotationSearchResult;
} spectra_tree_native_AnnotationSearchResult;
typedef spectra_tree_Nova_spectra_tree_AnnotationSearchResultFunctionMap* (*spectra_tree_Nova_spectra_tree_AnnotationSearchResultFunctionMap_native_Nova_construct)(spectra_tree_Nova_spectra_tree_AnnotationSearchResultFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_native_spectra_tree_AnnotationSearchResultFunctionMap
{
spectra_tree_Nova_spectra_tree_AnnotationSearchResultFunctionMap_native_Nova_construct spectra_tree_AnnotationSearchResultFunctionMap;
} spectra_tree_native_spectra_tree_AnnotationSearchResultFunctionMap;

typedef spectra_tree_Nova_StatementIterator* (*spectra_tree_Nova_StatementIterator_native_Nova_reset)(spectra_tree_Nova_StatementIterator*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_Nova_StatementIterator* (*spectra_tree_Nova_StatementIterator_native_Nova_construct)(spectra_tree_Nova_StatementIterator*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_datastruct_list_Nova_Stack*);

typedef struct spectra_tree_native_StatementIterator
{
spectra_tree_Nova_StatementIterator_native_Nova_reset reset;
spectra_tree_Nova_StatementIterator_native_Nova_construct StatementIterator;
} spectra_tree_native_StatementIterator;
typedef spectra_tree_Nova_spectra_tree_StatementIteratorFunctionMap* (*spectra_tree_Nova_spectra_tree_StatementIteratorFunctionMap_native_Nova_construct)(spectra_tree_Nova_spectra_tree_StatementIteratorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_native_spectra_tree_StatementIteratorFunctionMap
{
spectra_tree_Nova_spectra_tree_StatementIteratorFunctionMap_native_Nova_construct spectra_tree_StatementIteratorFunctionMap;
} spectra_tree_native_spectra_tree_StatementIteratorFunctionMap;

typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_processFiles)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*, spectra_tree_Nova_SyntaxTree_closure4_Nova_func spectra_tree_Nova_SyntaxTree_Nova_func, void* spectra_tree_Nova_SyntaxTree_ref_Nova_func, void* func_context);
typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_formTree)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_validateTypes)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*);
typedef void (*spectra_tree_Nova_SyntaxTree_native_Nova_parseStatements)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_Nova_AnnotationSearchResult* (*spectra_tree_Nova_SyntaxTree_native_static_Nova_searchAnnotations)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_Nova_SyntaxTree* (*spectra_tree_Nova_SyntaxTree_native_Nova_construct)(spectra_tree_Nova_SyntaxTree*, nova_exception_Nova_ExceptionData*, spectra_Nova_Spectra*, spectra_tree_nodes_Nova_Program*);

typedef struct spectra_tree_native_SyntaxTree
{
spectra_tree_Nova_SyntaxTree_native_Nova_processFiles processFiles;
spectra_tree_Nova_SyntaxTree_native_Nova_formTree formTree;
spectra_tree_Nova_SyntaxTree_native_Nova_validateTypes validateTypes;
spectra_tree_Nova_SyntaxTree_native_Nova_parseStatements parseStatements;
spectra_tree_Nova_SyntaxTree_native_Nova_construct SyntaxTree;
} spectra_tree_native_SyntaxTree;
typedef spectra_tree_Nova_spectra_tree_SyntaxTreeFunctionMap* (*spectra_tree_Nova_spectra_tree_SyntaxTreeFunctionMap_native_Nova_construct)(spectra_tree_Nova_spectra_tree_SyntaxTreeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_native_spectra_tree_SyntaxTreeFunctionMap
{
spectra_tree_Nova_spectra_tree_SyntaxTreeFunctionMap_native_Nova_construct spectra_tree_SyntaxTreeFunctionMap;
} spectra_tree_native_spectra_tree_SyntaxTreeFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Abstractable_native_Nova_writeAbstract)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Abstractable* (*spectra_tree_nodes_Nova_Abstractable_native0_Nova_cloneTo)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Abstractable*);

typedef struct spectra_tree_nodes_native_Abstractable
{
spectra_tree_nodes_Nova_Abstractable_native_Nova_writeAbstract writeAbstract;
spectra_tree_nodes_Nova_Abstractable_native0_Nova_cloneTo cloneTo__spectra_tree_nodes_Abstractable;
} spectra_tree_nodes_native_Abstractable;

typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native2_Nova_getNextAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, char);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*, char, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessingOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, char, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*, char);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, char);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native_Nova_getLastAccessed)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessedOfType)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native_Nova_getRootReferenceNode)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native_Nova_getReferenceNode)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, int, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_static_Nova_parse)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Accessible_native_static_Nova_parseDotAccess)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_native0_Nova_cloneTo)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Accessible*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Accessible_native_Nova_writeAccessedNodes)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_Accessible
{
spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessingOfType getNextAccessingOfType__nova_meta_Class;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getNextAccessingOfType getNextAccessingOfType__nova_datastruct_list_Array;
spectra_tree_nodes_Nova_Accessible_native2_Nova_getNextAccessingOfType getNextAccessingOfType__nova_datastruct_list_Array__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessingOfType getLastAccessingOfType__nova_meta_Class__nova_primitive_Bool__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessingOfType getLastAccessingOfType__nova_datastruct_list_Array__nova_primitive_Bool__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native0_Nova_getLastAccessedOfType getLastAccessedOfType__nova_meta_Class__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native1_Nova_getLastAccessedOfType getLastAccessedOfType__nova_datastruct_list_Array__nova_primitive_Bool;
spectra_tree_nodes_Nova_Accessible_native_Nova_getLastAccessed getLastAccessed;
spectra_tree_nodes_Nova_Accessible_native0_Nova_getNextAccessedOfType getNextAccessedOfType__nova_meta_Class;
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
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ArgumentListFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ArgumentListFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ArgumentListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ArgumentListFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ArgumentListFunctionMap_native_Nova_construct spectra_tree_nodes_ArgumentListFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ArgumentListFunctionMap;

typedef spectra_tree_nodes_Nova_Cast* (*spectra_tree_nodes_Nova_Cast_native_Nova_construct)(spectra_tree_nodes_Nova_Cast*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Cast
{
spectra_tree_nodes_Nova_Cast_native_Nova_construct Cast;
} spectra_tree_nodes_native_Cast;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_CastFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_CastFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_CastFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_CastFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_CastFunctionMap_native_Nova_construct spectra_tree_nodes_CastFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_CastFunctionMap;

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
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ClassDeclarationFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ClassDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ClassDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ClassDeclarationFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ClassDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_ClassDeclarationFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ClassDeclarationFunctionMap;

typedef spectra_tree_nodes_Nova_Identifier* (*spectra_tree_nodes_Nova_Identifier_native_Nova_construct)(spectra_tree_nodes_Nova_Identifier*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Identifier
{
spectra_tree_nodes_Nova_Identifier_native_Nova_construct Identifier;
} spectra_tree_nodes_native_Identifier;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_IdentifierFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_IdentifierFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_IdentifierFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_IdentifierFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_IdentifierFunctionMap_native_Nova_construct spectra_tree_nodes_IdentifierFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_IdentifierFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Import_native_Nova_getClassLocation)(spectra_tree_nodes_Nova_Import*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_Nova_Import* (*spectra_tree_nodes_Nova_Import_native_static_Nova_parse)(spectra_tree_nodes_Nova_Import*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Import* (*spectra_tree_nodes_Nova_Import_native_Nova_construct)(spectra_tree_nodes_Nova_Import*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Import
{
spectra_tree_nodes_Nova_Import_native_Nova_getClassLocation getClassLocation;
spectra_tree_nodes_Nova_Import_native_Nova_construct Import;
} spectra_tree_nodes_native_Import;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ImportFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ImportFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ImportFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ImportFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ImportFunctionMap_native_Nova_construct spectra_tree_nodes_ImportFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ImportFunctionMap;

typedef spectra_tree_nodes_Nova_ImportList* (*spectra_tree_nodes_Nova_ImportList_native_Nova_construct)(spectra_tree_nodes_Nova_ImportList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_ImportList
{
spectra_tree_nodes_Nova_ImportList_native_Nova_construct ImportList;
} spectra_tree_nodes_native_ImportList;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ImportListFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ImportListFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ImportListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ImportListFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ImportListFunctionMap_native_Nova_construct spectra_tree_nodes_ImportListFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ImportListFunctionMap;

typedef spectra_tree_nodes_Nova_InterfaceDeclaration* (*spectra_tree_nodes_Nova_InterfaceDeclaration_native_Nova_construct)(spectra_tree_nodes_Nova_InterfaceDeclaration*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_InterfaceDeclaration
{
spectra_tree_nodes_Nova_InterfaceDeclaration_native_Nova_construct InterfaceDeclaration;
} spectra_tree_nodes_native_InterfaceDeclaration;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_InterfaceDeclarationFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_InterfaceDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_InterfaceDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_InterfaceDeclarationFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_InterfaceDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_InterfaceDeclarationFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_InterfaceDeclarationFunctionMap;


typedef struct spectra_tree_nodes_native_Listener
{
} spectra_tree_nodes_native_Listener;

typedef spectra_tree_nodes_Nova_Literal* (*spectra_tree_nodes_Nova_Literal_native_Nova_construct)(spectra_tree_nodes_Nova_Literal*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Literal
{
spectra_tree_nodes_Nova_Literal_native_Nova_construct Literal;
} spectra_tree_nodes_native_Literal;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_LiteralFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_LiteralFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_LiteralFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_LiteralFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_LiteralFunctionMap_native_Nova_construct spectra_tree_nodes_LiteralFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_LiteralFunctionMap;

typedef spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_native_Nova_getAdjacentNode)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, int);
typedef void (*spectra_tree_nodes_Nova_Node_native0_Nova_detach)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
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
typedef void (*spectra_tree_nodes_Nova_Node_native_static_Nova_strictParse)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node_closure4_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
typedef void (*spectra_tree_nodes_Nova_Node_native_static_Nova_catchSyntaxErrors)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node_closure8_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
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
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_NodeFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_NodeFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_NodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_NodeFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_NodeFunctionMap_native_Nova_construct spectra_tree_nodes_NodeFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_NodeFunctionMap;

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
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_NodeListFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_NodeListFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_NodeListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_NodeListFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_NodeListFunctionMap_native_Nova_construct spectra_tree_nodes_NodeListFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_NodeListFunctionMap;

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
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_NovaFileFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_NovaFileFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_NovaFileFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_NovaFileFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_NovaFileFunctionMap_native_Nova_construct spectra_tree_nodes_NovaFileFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_NovaFileFunctionMap;

typedef spectra_tree_nodes_Nova_NumericRange* (*spectra_tree_nodes_Nova_NumericRange_native_Nova_construct)(spectra_tree_nodes_Nova_NumericRange*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_NumericRange
{
spectra_tree_nodes_Nova_NumericRange_native_Nova_construct NumericRange;
} spectra_tree_nodes_native_NumericRange;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_NumericRangeFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_NumericRangeFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_NumericRangeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_NumericRangeFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_NumericRangeFunctionMap_native_Nova_construct spectra_tree_nodes_NumericRangeFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_NumericRangeFunctionMap;

typedef spectra_tree_nodes_Nova_Package* (*spectra_tree_nodes_Nova_Package_native_static_Nova_generateDefaultPackage)(spectra_tree_nodes_Nova_Package*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);
typedef spectra_tree_nodes_Nova_Package* (*spectra_tree_nodes_Nova_Package_native_static_Nova_parse)(spectra_tree_nodes_Nova_Package*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Package* (*spectra_tree_nodes_Nova_Package_native_Nova_construct)(spectra_tree_nodes_Nova_Package*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Package
{
spectra_tree_nodes_Nova_Package_native_Nova_construct Package;
} spectra_tree_nodes_native_Package;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_PackageFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_PackageFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_PackageFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_PackageFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_PackageFunctionMap_native_Nova_construct spectra_tree_nodes_PackageFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_PackageFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_writeChildren)(spectra_tree_nodes_Nova_PlaceholderValue*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_PlaceholderValue* (*spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_construct)(spectra_tree_nodes_Nova_PlaceholderValue*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_native_PlaceholderValue
{
spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_writeChildren writeChildren;
spectra_tree_nodes_Nova_PlaceholderValue_native_Nova_construct PlaceholderValue;
} spectra_tree_nodes_native_PlaceholderValue;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_PlaceholderValueFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_PlaceholderValueFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_PlaceholderValueFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_PlaceholderValueFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_PlaceholderValueFunctionMap_native_Nova_construct spectra_tree_nodes_PlaceholderValueFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_PlaceholderValueFunctionMap;

typedef spectra_tree_nodes_Nova_Priority* (*spectra_tree_nodes_Nova_Priority_native_Nova_construct)(spectra_tree_nodes_Nova_Priority*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Priority
{
spectra_tree_nodes_Nova_Priority_native_Nova_construct Priority;
} spectra_tree_nodes_native_Priority;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_PriorityFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_PriorityFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_PriorityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_PriorityFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_PriorityFunctionMap_native_Nova_construct spectra_tree_nodes_PriorityFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_PriorityFunctionMap;

typedef void (*spectra_tree_nodes_Nova_Program_native_Nova_addChild)(spectra_tree_nodes_Nova_Program*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef spectra_tree_nodes_Nova_ClassDeclaration* (*spectra_tree_nodes_Nova_Program_native_Nova_getClassDeclaration)(spectra_tree_nodes_Nova_Program*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_nodes_Nova_Program* (*spectra_tree_nodes_Nova_Program_native_Nova_construct)(spectra_tree_nodes_Nova_Program*, nova_exception_Nova_ExceptionData*, spectra_tree_Nova_SyntaxTree*);

typedef struct spectra_tree_nodes_native_Program
{
spectra_tree_nodes_Nova_Program_native_Nova_addChild addChild;
spectra_tree_nodes_Nova_Program_native_Nova_getClassDeclaration getClassDeclaration;
spectra_tree_nodes_Nova_Program_native_Nova_construct Program;
} spectra_tree_nodes_native_Program;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ProgramFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ProgramFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ProgramFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ProgramFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ProgramFunctionMap_native_Nova_construct spectra_tree_nodes_ProgramFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ProgramFunctionMap;

typedef spectra_tree_nodes_Nova_Return* (*spectra_tree_nodes_Nova_Return_native_static_Nova_parse)(spectra_tree_nodes_Nova_Return*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Return_native_Nova_writeValue)(spectra_tree_nodes_Nova_Return*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Return* (*spectra_tree_nodes_Nova_Return_native_Nova_construct)(spectra_tree_nodes_Nova_Return*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_Nova_Value*);

typedef struct spectra_tree_nodes_native_Return
{
spectra_tree_nodes_Nova_Return_native_Nova_writeValue writeValue;
spectra_tree_nodes_Nova_Return_native_Nova_construct Return;
} spectra_tree_nodes_native_Return;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ReturnFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ReturnFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ReturnFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ReturnFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ReturnFunctionMap_native_Nova_construct spectra_tree_nodes_ReturnFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ReturnFunctionMap;

typedef spectra_tree_nodes_Nova_Scope* (*spectra_tree_nodes_Nova_Scope_native_Nova_construct)(spectra_tree_nodes_Nova_Scope*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Scope
{
spectra_tree_nodes_Nova_Scope_native_Nova_construct Scope;
} spectra_tree_nodes_native_Scope;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ScopeFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ScopeFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ScopeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ScopeFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ScopeFunctionMap_native_Nova_construct spectra_tree_nodes_ScopeFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ScopeFunctionMap;

typedef spectra_tree_nodes_Nova_Skeleton* (*spectra_tree_nodes_Nova_Skeleton_native_static_Nova_parse)(spectra_tree_nodes_Nova_Skeleton*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_Nova_Skeleton* (*spectra_tree_nodes_Nova_Skeleton_native_Nova_construct)(spectra_tree_nodes_Nova_Skeleton*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_native_Skeleton
{
spectra_tree_nodes_Nova_Skeleton_native_Nova_construct Skeleton;
} spectra_tree_nodes_native_Skeleton;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_SkeletonFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_SkeletonFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_SkeletonFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_SkeletonFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_SkeletonFunctionMap_native_Nova_construct spectra_tree_nodes_SkeletonFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_SkeletonFunctionMap;

typedef spectra_tree_nodes_Nova_StaticClassReference* (*spectra_tree_nodes_Nova_StaticClassReference_native_Nova_construct)(spectra_tree_nodes_Nova_StaticClassReference*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_native_StaticClassReference
{
spectra_tree_nodes_Nova_StaticClassReference_native_Nova_construct StaticClassReference;
} spectra_tree_nodes_native_StaticClassReference;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_StaticClassReferenceFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_StaticClassReferenceFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_StaticClassReferenceFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_StaticClassReferenceFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_StaticClassReferenceFunctionMap_native_Nova_construct spectra_tree_nodes_StaticClassReferenceFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_StaticClassReferenceFunctionMap;

typedef spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_native_static_Nova_parse)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef char (*spectra_tree_nodes_Nova_Type_native_Nova_isValid)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_writeArray)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_writeGenericParameters)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_toNova)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_Nova_Type_native_Nova_writeNova)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_native_Nova_cloneTo)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*);
typedef spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_native_Nova_construct)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct spectra_tree_nodes_native_Type
{
spectra_tree_nodes_Nova_Type_native_Nova_isValid isValid;
spectra_tree_nodes_Nova_Type_native_Nova_writeArray writeArray;
spectra_tree_nodes_Nova_Type_native_Nova_writeGenericParameters writeGenericParameters;
spectra_tree_nodes_Nova_Type_native_Nova_toNova toNova;
spectra_tree_nodes_Nova_Type_native_Nova_writeNova writeNova;
spectra_tree_nodes_Nova_Type_native_Nova_cloneTo cloneTo;
spectra_tree_nodes_Nova_Type_native_Nova_construct Type;
} spectra_tree_nodes_native_Type;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_TypeFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_TypeFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_TypeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_TypeFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_TypeFunctionMap_native_Nova_construct spectra_tree_nodes_TypeFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_TypeFunctionMap;

typedef spectra_tree_nodes_Nova_ValidationResult* (*spectra_tree_nodes_Nova_ValidationResult_native_Nova_construct)(spectra_tree_nodes_Nova_ValidationResult*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);

typedef struct spectra_tree_nodes_native_ValidationResult
{
spectra_tree_nodes_Nova_ValidationResult_native_Nova_construct ValidationResult;
} spectra_tree_nodes_native_ValidationResult;
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ValidationResultFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ValidationResultFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ValidationResultFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ValidationResultFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ValidationResultFunctionMap_native_Nova_construct spectra_tree_nodes_ValidationResultFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ValidationResultFunctionMap;

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
typedef spectra_tree_nodes_Nova_spectra_tree_nodes_ValueFunctionMap* (*spectra_tree_nodes_Nova_spectra_tree_nodes_ValueFunctionMap_native_Nova_construct)(spectra_tree_nodes_Nova_spectra_tree_nodes_ValueFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_native_spectra_tree_nodes_ValueFunctionMap
{
spectra_tree_nodes_Nova_spectra_tree_nodes_ValueFunctionMap_native_Nova_construct spectra_tree_nodes_ValueFunctionMap;
} spectra_tree_nodes_native_spectra_tree_nodes_ValueFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_AbstractAnnotation* (*spectra_tree_nodes_annotations_Nova_AbstractAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_AbstractAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_AbstractAnnotation* (*spectra_tree_nodes_annotations_Nova_AbstractAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_AbstractAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_AbstractAnnotation
{
spectra_tree_nodes_annotations_Nova_AbstractAnnotation_native_Nova_construct AbstractAnnotation;
} spectra_tree_nodes_annotations_native_AbstractAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap;

typedef void (*spectra_tree_nodes_annotations_Nova_Annotatable_native_Nova_addAnnotation)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*);

typedef struct spectra_tree_nodes_annotations_native_Annotatable
{
spectra_tree_nodes_annotations_Nova_Annotatable_native_Nova_addAnnotation addAnnotation;
} spectra_tree_nodes_annotations_native_Annotatable;

typedef spectra_tree_nodes_annotations_Nova_Annotation* (*spectra_tree_nodes_annotations_Nova_Annotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_annotations_Nova_Annotation_native_static_Nova_getRemainingStatement)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef char (*spectra_tree_nodes_annotations_Nova_Annotation_native_Nova_onApplied)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, int);
typedef spectra_tree_nodes_annotations_Nova_Annotation* (*spectra_tree_nodes_annotations_Nova_Annotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_Annotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_Annotation
{
spectra_tree_nodes_annotations_Nova_Annotation_native_Nova_onApplied onApplied;
spectra_tree_nodes_annotations_Nova_Annotation_native_Nova_construct Annotation;
} spectra_tree_nodes_annotations_native_Annotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_AnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* (*spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* (*spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_AutoFinalAnnotation
{
spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_native_Nova_construct AutoFinalAnnotation;
} spectra_tree_nodes_annotations_native_AutoFinalAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_AutoPureAnnotation* (*spectra_tree_nodes_annotations_Nova_AutoPureAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_AutoPureAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_AutoPureAnnotation* (*spectra_tree_nodes_annotations_Nova_AutoPureAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_AutoPureAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_AutoPureAnnotation
{
spectra_tree_nodes_annotations_Nova_AutoPureAnnotation_native_Nova_construct AutoPureAnnotation;
} spectra_tree_nodes_annotations_native_AutoPureAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_FinalAnnotation* (*spectra_tree_nodes_annotations_Nova_FinalAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_FinalAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_FinalAnnotation* (*spectra_tree_nodes_annotations_Nova_FinalAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_FinalAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_FinalAnnotation
{
spectra_tree_nodes_annotations_Nova_FinalAnnotation_native_Nova_construct FinalAnnotation;
} spectra_tree_nodes_annotations_native_FinalAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_FinalAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_ImmutableAnnotation* (*spectra_tree_nodes_annotations_Nova_ImmutableAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_ImmutableAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_ImmutableAnnotation* (*spectra_tree_nodes_annotations_Nova_ImmutableAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_ImmutableAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_ImmutableAnnotation
{
spectra_tree_nodes_annotations_Nova_ImmutableAnnotation_native_Nova_construct ImmutableAnnotation;
} spectra_tree_nodes_annotations_native_ImmutableAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_ImpureAnnotation* (*spectra_tree_nodes_annotations_Nova_ImpureAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_ImpureAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_ImpureAnnotation* (*spectra_tree_nodes_annotations_Nova_ImpureAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_ImpureAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_ImpureAnnotation
{
spectra_tree_nodes_annotations_Nova_ImpureAnnotation_native_Nova_construct ImpureAnnotation;
} spectra_tree_nodes_annotations_native_ImpureAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap;

typedef char (*spectra_tree_nodes_annotations_Nova_Modifier_native_Nova_apply)(spectra_tree_nodes_annotations_Nova_Modifier*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, nova_Nova_String*);
typedef char (*spectra_tree_nodes_annotations_Nova_Modifier_native_Nova_onAppliedAsModifier)(spectra_tree_nodes_annotations_Nova_Modifier*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, int);

typedef struct spectra_tree_nodes_annotations_native_Modifier
{
spectra_tree_nodes_annotations_Nova_Modifier_native_Nova_apply apply;
spectra_tree_nodes_annotations_Nova_Modifier_native_Nova_onAppliedAsModifier onAppliedAsModifier;
} spectra_tree_nodes_annotations_native_Modifier;

typedef spectra_tree_nodes_annotations_Nova_NativeAnnotation* (*spectra_tree_nodes_annotations_Nova_NativeAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_NativeAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_NativeAnnotation* (*spectra_tree_nodes_annotations_Nova_NativeAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_NativeAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_NativeAnnotation
{
spectra_tree_nodes_annotations_Nova_NativeAnnotation_native_Nova_construct NativeAnnotation;
} spectra_tree_nodes_annotations_native_NativeAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_NativeAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_OverrideAnnotation* (*spectra_tree_nodes_annotations_Nova_OverrideAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_OverrideAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_OverrideAnnotation* (*spectra_tree_nodes_annotations_Nova_OverrideAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_OverrideAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_OverrideAnnotation
{
spectra_tree_nodes_annotations_Nova_OverrideAnnotation_native_Nova_construct OverrideAnnotation;
} spectra_tree_nodes_annotations_native_OverrideAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_PrivateAnnotation* (*spectra_tree_nodes_annotations_Nova_PrivateAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_PrivateAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_PrivateAnnotation* (*spectra_tree_nodes_annotations_Nova_PrivateAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_PrivateAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_PrivateAnnotation
{
spectra_tree_nodes_annotations_Nova_PrivateAnnotation_native_Nova_construct PrivateAnnotation;
} spectra_tree_nodes_annotations_native_PrivateAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_PublicAnnotation* (*spectra_tree_nodes_annotations_Nova_PublicAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_PublicAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_PublicAnnotation* (*spectra_tree_nodes_annotations_Nova_PublicAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_PublicAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_PublicAnnotation
{
spectra_tree_nodes_annotations_Nova_PublicAnnotation_native_Nova_construct PublicAnnotation;
} spectra_tree_nodes_annotations_native_PublicAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_PublicAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_PureAnnotation* (*spectra_tree_nodes_annotations_Nova_PureAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_PureAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_PureAnnotation* (*spectra_tree_nodes_annotations_Nova_PureAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_PureAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_PureAnnotation
{
spectra_tree_nodes_annotations_Nova_PureAnnotation_native_Nova_construct PureAnnotation;
} spectra_tree_nodes_annotations_native_PureAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PureAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PureAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PureAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PureAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_PureAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_PureAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PureAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_StaticAnnotation* (*spectra_tree_nodes_annotations_Nova_StaticAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_StaticAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_StaticAnnotation* (*spectra_tree_nodes_annotations_Nova_StaticAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_StaticAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_StaticAnnotation
{
spectra_tree_nodes_annotations_Nova_StaticAnnotation_native_Nova_construct StaticAnnotation;
} spectra_tree_nodes_annotations_native_StaticAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_StaticAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_TargetAnnotation* (*spectra_tree_nodes_annotations_Nova_TargetAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_TargetAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_TargetAnnotation* (*spectra_tree_nodes_annotations_Nova_TargetAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_TargetAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_TargetAnnotation
{
spectra_tree_nodes_annotations_Nova_TargetAnnotation_native_Nova_construct TargetAnnotation;
} spectra_tree_nodes_annotations_native_TargetAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_TargetAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap;

typedef spectra_tree_nodes_annotations_Nova_VarAnnotation* (*spectra_tree_nodes_annotations_Nova_VarAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_VarAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_VarAnnotation* (*spectra_tree_nodes_annotations_Nova_VarAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_VarAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_VarAnnotation
{
spectra_tree_nodes_annotations_Nova_VarAnnotation_native_Nova_construct VarAnnotation;
} spectra_tree_nodes_annotations_native_VarAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VarAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VarAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VarAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_VarAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VarAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_VarAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_VarAnnotationFunctionMap;


typedef struct spectra_tree_nodes_annotations_native_VisibilityModifier
{
} spectra_tree_nodes_annotations_native_VisibilityModifier;

typedef spectra_tree_nodes_annotations_Nova_VisibleAnnotation* (*spectra_tree_nodes_annotations_Nova_VisibleAnnotation_native_static_Nova_parse)(spectra_tree_nodes_annotations_Nova_VisibleAnnotation*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_annotations_Nova_VisibleAnnotation* (*spectra_tree_nodes_annotations_Nova_VisibleAnnotation_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_VisibleAnnotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_annotations_native_VisibleAnnotation
{
spectra_tree_nodes_annotations_Nova_VisibleAnnotation_native_Nova_construct VisibleAnnotation;
} spectra_tree_nodes_annotations_native_VisibleAnnotation;
typedef spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap* (*spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap
{
spectra_tree_nodes_annotations_Nova_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap_native_Nova_construct spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap;
} spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap;

typedef spectra_tree_nodes_arrays_Nova_ArrayAccess* (*spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parse)(spectra_tree_nodes_arrays_Nova_ArrayAccess*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef char (*spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parseDimension)(spectra_tree_nodes_arrays_Nova_ArrayAccess*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_nodes_arrays_Nova_ArrayAccess* (*spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_construct)(spectra_tree_nodes_arrays_Nova_ArrayAccess*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_arrays_native_ArrayAccess
{
spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parse parse;
spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_parseDimension parseDimension;
spectra_tree_nodes_arrays_Nova_ArrayAccess_native_Nova_construct ArrayAccess;
} spectra_tree_nodes_arrays_native_ArrayAccess;
typedef spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap* (*spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_native_Nova_construct)(spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_arrays_native_spectra_tree_nodes_arrays_ArrayAccessFunctionMap
{
spectra_tree_nodes_arrays_Nova_spectra_tree_nodes_arrays_ArrayAccessFunctionMap_native_Nova_construct spectra_tree_nodes_arrays_ArrayAccessFunctionMap;
} spectra_tree_nodes_arrays_native_spectra_tree_nodes_arrays_ArrayAccessFunctionMap;

typedef spectra_tree_nodes_controlstructures_Nova_ControlStructure* (*spectra_tree_nodes_controlstructures_Nova_ControlStructure_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_ControlStructure*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_native_ControlStructure
{
spectra_tree_nodes_controlstructures_Nova_ControlStructure_native_Nova_construct ControlStructure;
} spectra_tree_nodes_controlstructures_native_ControlStructure;
typedef spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap* (*spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap
{
spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap_native_Nova_construct spectra_tree_nodes_controlstructures_ControlStructureFunctionMap;
} spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap;

typedef spectra_tree_nodes_controlstructures_Nova_ElseStatement* (*spectra_tree_nodes_controlstructures_Nova_ElseStatement_native_static_Nova_parse)(spectra_tree_nodes_controlstructures_Nova_ElseStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_controlstructures_Nova_ElseStatement* (*spectra_tree_nodes_controlstructures_Nova_ElseStatement_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_ElseStatement*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_native_ElseStatement
{
spectra_tree_nodes_controlstructures_Nova_ElseStatement_native_Nova_construct ElseStatement;
} spectra_tree_nodes_controlstructures_native_ElseStatement;
typedef spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap* (*spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap
{
spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap_native_Nova_construct spectra_tree_nodes_controlstructures_ElseStatementFunctionMap;
} spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap;

typedef spectra_tree_nodes_controlstructures_Nova_IfStatement* (*spectra_tree_nodes_controlstructures_Nova_IfStatement_native_static_Nova_parse)(spectra_tree_nodes_controlstructures_Nova_IfStatement*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_controlstructures_Nova_IfStatement* (*spectra_tree_nodes_controlstructures_Nova_IfStatement_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_IfStatement*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_native_IfStatement
{
spectra_tree_nodes_controlstructures_Nova_IfStatement_native_Nova_construct IfStatement;
} spectra_tree_nodes_controlstructures_native_IfStatement;
typedef spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_IfStatementFunctionMap* (*spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_IfStatementFunctionMap_native_Nova_construct)(spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_IfStatementFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_IfStatementFunctionMap
{
spectra_tree_nodes_controlstructures_Nova_spectra_tree_nodes_controlstructures_IfStatementFunctionMap_native_Nova_construct spectra_tree_nodes_controlstructures_IfStatementFunctionMap;
} spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_IfStatementFunctionMap;

typedef spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* (*spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_ForEachLoop
{
spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_native_Nova_construct ForEachLoop;
} spectra_tree_nodes_controlstructures_loops_native_ForEachLoop;
typedef spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap* (*spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap
{
spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap_native_Nova_construct spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap;
} spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap;

typedef spectra_tree_nodes_controlstructures_loops_Nova_Loop* (*spectra_tree_nodes_controlstructures_loops_Nova_Loop_native_static_Nova_parse)(spectra_tree_nodes_controlstructures_loops_Nova_Loop*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_controlstructures_loops_Nova_Loop* (*spectra_tree_nodes_controlstructures_loops_Nova_Loop_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_Loop*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_Loop
{
spectra_tree_nodes_controlstructures_loops_Nova_Loop_native_Nova_construct Loop;
} spectra_tree_nodes_controlstructures_loops_native_Loop;
typedef spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap* (*spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap
{
spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap_native_Nova_construct spectra_tree_nodes_controlstructures_loops_LoopFunctionMap;
} spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap;

typedef spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop* (*spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_WhileLoop
{
spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_native_Nova_construct WhileLoop;
} spectra_tree_nodes_controlstructures_loops_native_WhileLoop;
typedef spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap* (*spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap_native_Nova_construct)(spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap
{
spectra_tree_nodes_controlstructures_loops_Nova_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap_native_Nova_construct spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap;
} spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap;

typedef spectra_tree_nodes_exceptionhandling_Nova_Catch* (*spectra_tree_nodes_exceptionhandling_Nova_Catch_native_static_Nova_parse)(spectra_tree_nodes_exceptionhandling_Nova_Catch*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef nova_Nova_String* (*spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_writeException)(spectra_tree_nodes_exceptionhandling_Nova_Catch*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_exceptionhandling_Nova_Catch* (*spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_Catch*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_exceptionhandling_native_Catch
{
spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_writeException writeException;
spectra_tree_nodes_exceptionhandling_Nova_Catch_native_Nova_construct Catch;
} spectra_tree_nodes_exceptionhandling_native_Catch;
typedef spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap* (*spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_CatchFunctionMap
{
spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_CatchFunctionMap_native_Nova_construct spectra_tree_nodes_exceptionhandling_CatchFunctionMap;
} spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_CatchFunctionMap;

typedef spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler* (*spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_exceptionhandling_native_ExceptionHandler
{
spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_native_Nova_construct ExceptionHandler;
} spectra_tree_nodes_exceptionhandling_native_ExceptionHandler;
typedef spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap* (*spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap
{
spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap_native_Nova_construct spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap;
} spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap;

typedef spectra_tree_nodes_exceptionhandling_Nova_Throw* (*spectra_tree_nodes_exceptionhandling_Nova_Throw_native_static_Nova_parse)(spectra_tree_nodes_exceptionhandling_Nova_Throw*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_exceptionhandling_Nova_Throw* (*spectra_tree_nodes_exceptionhandling_Nova_Throw_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_Throw*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_exceptionhandling_native_Throw
{
spectra_tree_nodes_exceptionhandling_Nova_Throw_native_Nova_construct Throw;
} spectra_tree_nodes_exceptionhandling_native_Throw;
typedef spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap* (*spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap
{
spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap_native_Nova_construct spectra_tree_nodes_exceptionhandling_ThrowFunctionMap;
} spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap;

typedef spectra_tree_nodes_exceptionhandling_Nova_Try* (*spectra_tree_nodes_exceptionhandling_Nova_Try_native_static_Nova_parse)(spectra_tree_nodes_exceptionhandling_Nova_Try*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_exceptionhandling_Nova_Try* (*spectra_tree_nodes_exceptionhandling_Nova_Try_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_Try*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_exceptionhandling_native_Try
{
spectra_tree_nodes_exceptionhandling_Nova_Try_native_Nova_construct Try;
} spectra_tree_nodes_exceptionhandling_native_Try;
typedef spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_TryFunctionMap* (*spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_TryFunctionMap_native_Nova_construct)(spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_TryFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_TryFunctionMap
{
spectra_tree_nodes_exceptionhandling_Nova_spectra_tree_nodes_exceptionhandling_TryFunctionMap_native_Nova_construct spectra_tree_nodes_exceptionhandling_TryFunctionMap;
} spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_TryFunctionMap;

typedef spectra_tree_nodes_functions_Nova_AccessorFunction* (*spectra_tree_nodes_functions_Nova_AccessorFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_AccessorFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_AccessorFunction
{
spectra_tree_nodes_functions_Nova_AccessorFunction_native_Nova_construct AccessorFunction;
} spectra_tree_nodes_functions_native_AccessorFunction;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_AccessorFunctionFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_AccessorFunctionFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_AccessorFunctionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_AccessorFunctionFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_AccessorFunctionFunctionMap_native_Nova_construct spectra_tree_nodes_functions_AccessorFunctionFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_AccessorFunctionFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_writeDimensions)(spectra_tree_nodes_functions_Nova_ArrayInstantiation*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_ArrayInstantiation* (*spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ArrayInstantiation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ArrayInstantiation
{
spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_writeDimensions writeDimensions;
spectra_tree_nodes_functions_Nova_ArrayInstantiation_native_Nova_construct ArrayInstantiation;
} spectra_tree_nodes_functions_native_ArrayInstantiation;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap_native_Nova_construct spectra_tree_nodes_functions_ArrayInstantiationFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_writeBody)(spectra_tree_nodes_functions_Nova_BodyFunction*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_BodyFunction* (*spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_BodyFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_BodyFunction
{
spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_writeBody writeBody;
spectra_tree_nodes_functions_Nova_BodyFunction_native_Nova_construct BodyFunction;
} spectra_tree_nodes_functions_native_BodyFunction;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_BodyFunctionFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_BodyFunctionFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_BodyFunctionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_BodyFunctionFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_BodyFunctionFunctionMap_native_Nova_construct spectra_tree_nodes_functions_BodyFunctionFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_BodyFunctionFunctionMap;

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
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ConstructorFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ConstructorFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ConstructorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ConstructorFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ConstructorFunctionMap_native_Nova_construct spectra_tree_nodes_functions_ConstructorFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ConstructorFunctionMap;

typedef spectra_tree_nodes_functions_Nova_FunctionArgumentList* (*spectra_tree_nodes_functions_Nova_FunctionArgumentList_native_Nova_construct)(spectra_tree_nodes_functions_Nova_FunctionArgumentList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_FunctionArgumentList
{
spectra_tree_nodes_functions_Nova_FunctionArgumentList_native_Nova_construct FunctionArgumentList;
} spectra_tree_nodes_functions_native_FunctionArgumentList;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap_native_Nova_construct spectra_tree_nodes_functions_FunctionArgumentListFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap;

typedef spectra_tree_nodes_functions_Nova_FunctionCall* (*spectra_tree_nodes_functions_Nova_FunctionCall_native0_static_Nova_parse)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int, spectra_tree_nodes_functions_Nova_FunctionDeclaration*);
typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_writeName)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_FunctionCall* (*spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_construct)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_FunctionCall
{
spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_writeName writeName;
spectra_tree_nodes_functions_Nova_FunctionCall_native_Nova_construct FunctionCall;
} spectra_tree_nodes_functions_native_FunctionCall;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionCallFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionCallFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionCallFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionCallFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionCallFunctionMap_native_Nova_construct spectra_tree_nodes_functions_FunctionCallFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionCallFunctionMap;

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
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_functions_FunctionDeclarationFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap;

typedef spectra_tree_nodes_functions_Nova_InitializationFunction* (*spectra_tree_nodes_functions_Nova_InitializationFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_InitializationFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_Constructor*);

typedef struct spectra_tree_nodes_functions_native_InitializationFunction
{
spectra_tree_nodes_functions_Nova_InitializationFunction_native_Nova_construct InitializationFunction;
} spectra_tree_nodes_functions_native_InitializationFunction;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InitializationFunctionFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InitializationFunctionFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InitializationFunctionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_InitializationFunctionFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InitializationFunctionFunctionMap_native_Nova_construct spectra_tree_nodes_functions_InitializationFunctionFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_InitializationFunctionFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_writeObjectNotation)(spectra_tree_nodes_functions_Nova_Instantiation*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_Instantiation* (*spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_construct)(spectra_tree_nodes_functions_Nova_Instantiation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_Instantiation
{
spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_writeObjectNotation writeObjectNotation;
spectra_tree_nodes_functions_Nova_Instantiation_native_Nova_construct Instantiation;
} spectra_tree_nodes_functions_native_Instantiation;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InstantiationFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InstantiationFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InstantiationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_InstantiationFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_InstantiationFunctionMap_native_Nova_construct spectra_tree_nodes_functions_InstantiationFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_InstantiationFunctionMap;

typedef spectra_tree_nodes_functions_Nova_MutatorFunction* (*spectra_tree_nodes_functions_Nova_MutatorFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_MutatorFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_MutatorFunction
{
spectra_tree_nodes_functions_Nova_MutatorFunction_native_Nova_construct MutatorFunction;
} spectra_tree_nodes_functions_native_MutatorFunction;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_MutatorFunctionFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_MutatorFunctionFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_MutatorFunctionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_MutatorFunctionFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_MutatorFunctionFunctionMap_native_Nova_construct spectra_tree_nodes_functions_MutatorFunctionFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_MutatorFunctionFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_writeChildren)(spectra_tree_nodes_functions_Nova_ObjectNotation*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_Nova_ObjectNotation* (*spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ObjectNotation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ObjectNotation
{
spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_writeChildren writeChildren;
spectra_tree_nodes_functions_Nova_ObjectNotation_native_Nova_construct ObjectNotation;
} spectra_tree_nodes_functions_native_ObjectNotation;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ObjectNotationFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationFunctionMap_native_Nova_construct spectra_tree_nodes_functions_ObjectNotationFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ObjectNotationFunctionMap;

typedef spectra_tree_nodes_functions_Nova_ObjectNotationProperty* (*spectra_tree_nodes_functions_Nova_ObjectNotationProperty_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ObjectNotationProperty*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ObjectNotationProperty
{
spectra_tree_nodes_functions_Nova_ObjectNotationProperty_native_Nova_construct ObjectNotationProperty;
} spectra_tree_nodes_functions_native_ObjectNotationProperty;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap_native_Nova_construct spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap;

typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_Parameter_native_Nova_construct)(spectra_tree_nodes_functions_Nova_Parameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_Parameter
{
spectra_tree_nodes_functions_Nova_Parameter_native_Nova_construct Parameter;
} spectra_tree_nodes_functions_native_Parameter;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ParameterFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterFunctionMap_native_Nova_construct spectra_tree_nodes_functions_ParameterFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ParameterFunctionMap;

typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_get)(spectra_tree_nodes_functions_Nova_ParameterList*, nova_exception_Nova_ExceptionData*, int);
typedef spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_set)(spectra_tree_nodes_functions_Nova_ParameterList*, nova_exception_Nova_ExceptionData*, int, spectra_tree_nodes_functions_Nova_Parameter*);
typedef spectra_tree_nodes_functions_Nova_ParameterList* (*spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_construct)(spectra_tree_nodes_functions_Nova_ParameterList*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_ParameterList
{
spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_get get;
spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_set set;
spectra_tree_nodes_functions_Nova_ParameterList_native_Nova_construct ParameterList;
} spectra_tree_nodes_functions_native_ParameterList;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterListFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterListFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterListFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ParameterListFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_ParameterListFunctionMap_native_Nova_construct spectra_tree_nodes_functions_ParameterListFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ParameterListFunctionMap;

typedef spectra_tree_nodes_functions_Nova_PropertyFunction* (*spectra_tree_nodes_functions_Nova_PropertyFunction_native_Nova_construct)(spectra_tree_nodes_functions_Nova_PropertyFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_native_PropertyFunction
{
spectra_tree_nodes_functions_Nova_PropertyFunction_native_Nova_construct PropertyFunction;
} spectra_tree_nodes_functions_native_PropertyFunction;
typedef spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_PropertyFunctionFunctionMap* (*spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_PropertyFunctionFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_PropertyFunctionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_PropertyFunctionFunctionMap
{
spectra_tree_nodes_functions_Nova_spectra_tree_nodes_functions_PropertyFunctionFunctionMap_native_Nova_construct spectra_tree_nodes_functions_PropertyFunctionFunctionMap;
} spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_PropertyFunctionFunctionMap;

typedef spectra_tree_nodes_functions_closures_Nova_ClosureContext* (*spectra_tree_nodes_functions_closures_Nova_ClosureContext_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_ClosureContext*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_ClosureContext
{
spectra_tree_nodes_functions_closures_Nova_ClosureContext_native_Nova_construct ClosureContext;
} spectra_tree_nodes_functions_closures_native_ClosureContext;
typedef spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap* (*spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap
{
spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap_native_Nova_construct spectra_tree_nodes_functions_closures_ClosureContextFunctionMap;
} spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap;

typedef spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* (*spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_ClosureDeclaration
{
spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_native_Nova_construct ClosureDeclaration;
} spectra_tree_nodes_functions_closures_native_ClosureDeclaration;
typedef spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap* (*spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap
{
spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap;
} spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap;

typedef spectra_tree_nodes_functions_closures_Nova_ClosureParameter* (*spectra_tree_nodes_functions_closures_Nova_ClosureParameter_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_ClosureParameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_ClosureParameter
{
spectra_tree_nodes_functions_closures_Nova_ClosureParameter_native_Nova_construct ClosureParameter;
} spectra_tree_nodes_functions_closures_native_ClosureParameter;
typedef spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap* (*spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap
{
spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap_native_Nova_construct spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap;
} spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_writeParameters)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_functions_closures_Nova_LambdaExpression* (*spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_LambdaExpression*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_LambdaExpression
{
spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_writeParameters writeParameters;
spectra_tree_nodes_functions_closures_Nova_LambdaExpression_native_Nova_construct LambdaExpression;
} spectra_tree_nodes_functions_closures_native_LambdaExpression;
typedef spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap* (*spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap
{
spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap_native_Nova_construct spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap;
} spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap;

typedef spectra_tree_nodes_functions_closures_Nova_LambdaParameter* (*spectra_tree_nodes_functions_closures_Nova_LambdaParameter_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_LambdaParameter*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_functions_closures_native_LambdaParameter
{
spectra_tree_nodes_functions_closures_Nova_LambdaParameter_native_Nova_construct LambdaParameter;
} spectra_tree_nodes_functions_closures_native_LambdaParameter;
typedef spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap* (*spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap_native_Nova_construct)(spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap
{
spectra_tree_nodes_functions_closures_Nova_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap_native_Nova_construct spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap;
} spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap;

typedef spectra_tree_nodes_generics_Nova_GenericArgument* (*spectra_tree_nodes_generics_Nova_GenericArgument_native_Nova_construct)(spectra_tree_nodes_generics_Nova_GenericArgument*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_generics_native_GenericArgument
{
spectra_tree_nodes_generics_Nova_GenericArgument_native_Nova_construct GenericArgument;
} spectra_tree_nodes_generics_native_GenericArgument;
typedef spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericArgumentFunctionMap* (*spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericArgumentFunctionMap_native_Nova_construct)(spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericArgumentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericArgumentFunctionMap
{
spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericArgumentFunctionMap_native_Nova_construct spectra_tree_nodes_generics_GenericArgumentFunctionMap;
} spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericArgumentFunctionMap;

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
typedef spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericParameterFunctionMap* (*spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericParameterFunctionMap_native_Nova_construct)(spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericParameterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericParameterFunctionMap
{
spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericParameterFunctionMap_native_Nova_construct spectra_tree_nodes_generics_GenericParameterFunctionMap;
} spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericParameterFunctionMap;

typedef spectra_tree_nodes_generics_Nova_GenericType* (*spectra_tree_nodes_generics_Nova_GenericType_native0_Nova_construct)(spectra_tree_nodes_generics_Nova_GenericType*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
typedef spectra_tree_nodes_generics_Nova_GenericType* (*spectra_tree_nodes_generics_Nova_GenericType_native1_Nova_construct)(spectra_tree_nodes_generics_Nova_GenericType*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*, spectra_tree_nodes_generics_Nova_GenericParameter*);

typedef struct spectra_tree_nodes_generics_native_GenericType
{
spectra_tree_nodes_generics_Nova_GenericType_native0_Nova_construct GenericType__nova_String;
spectra_tree_nodes_generics_Nova_GenericType_native1_Nova_construct GenericType__spectra_tree_nodes_Type__spectra_tree_nodes_generics_GenericParameter;
} spectra_tree_nodes_generics_native_GenericType;
typedef spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericTypeFunctionMap* (*spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericTypeFunctionMap_native_Nova_construct)(spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericTypeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericTypeFunctionMap
{
spectra_tree_nodes_generics_Nova_spectra_tree_nodes_generics_GenericTypeFunctionMap_native_Nova_construct spectra_tree_nodes_generics_GenericTypeFunctionMap;
} spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericTypeFunctionMap;

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
typedef spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_AssignmentFunctionMap* (*spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_AssignmentFunctionMap_native_Nova_construct)(spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_AssignmentFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_AssignmentFunctionMap
{
spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_AssignmentFunctionMap_native_Nova_construct spectra_tree_nodes_operations_AssignmentFunctionMap;
} spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_AssignmentFunctionMap;

typedef spectra_tree_nodes_operations_Nova_ElvisOperation* (*spectra_tree_nodes_operations_Nova_ElvisOperation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_ElvisOperation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_ElvisOperation
{
spectra_tree_nodes_operations_Nova_ElvisOperation_native_Nova_construct ElvisOperation;
} spectra_tree_nodes_operations_native_ElvisOperation;
typedef spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_ElvisOperationFunctionMap* (*spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_ElvisOperationFunctionMap_native_Nova_construct)(spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_ElvisOperationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_ElvisOperationFunctionMap
{
spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_ElvisOperationFunctionMap_native_Nova_construct spectra_tree_nodes_operations_ElvisOperationFunctionMap;
} spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_ElvisOperationFunctionMap;

typedef spectra_tree_nodes_operations_Nova_Operation* (*spectra_tree_nodes_operations_Nova_Operation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_Operation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_Operation
{
spectra_tree_nodes_operations_Nova_Operation_native_Nova_construct Operation;
} spectra_tree_nodes_operations_native_Operation;
typedef spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperationFunctionMap* (*spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperationFunctionMap_native_Nova_construct)(spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_OperationFunctionMap
{
spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperationFunctionMap_native_Nova_construct spectra_tree_nodes_operations_OperationFunctionMap;
} spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_OperationFunctionMap;

typedef spectra_tree_nodes_operations_Nova_Operator* (*spectra_tree_nodes_operations_Nova_Operator_native_Nova_construct)(spectra_tree_nodes_operations_Nova_Operator*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, nova_Nova_String*);

typedef struct spectra_tree_nodes_operations_native_Operator
{
spectra_tree_nodes_operations_Nova_Operator_native_Nova_construct Operator;
} spectra_tree_nodes_operations_native_Operator;
typedef spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperatorFunctionMap* (*spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperatorFunctionMap_native_Nova_construct)(spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperatorFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_OperatorFunctionMap
{
spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_OperatorFunctionMap_native_Nova_construct spectra_tree_nodes_operations_OperatorFunctionMap;
} spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_OperatorFunctionMap;

typedef spectra_tree_nodes_operations_Nova_TernaryOperation* (*spectra_tree_nodes_operations_Nova_TernaryOperation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_TernaryOperation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_TernaryOperation
{
spectra_tree_nodes_operations_Nova_TernaryOperation_native_Nova_construct TernaryOperation;
} spectra_tree_nodes_operations_native_TernaryOperation;
typedef spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_TernaryOperationFunctionMap* (*spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_TernaryOperationFunctionMap_native_Nova_construct)(spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_TernaryOperationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_TernaryOperationFunctionMap
{
spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_TernaryOperationFunctionMap_native_Nova_construct spectra_tree_nodes_operations_TernaryOperationFunctionMap;
} spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_TernaryOperationFunctionMap;

typedef spectra_tree_nodes_operations_Nova_UnaryOperation* (*spectra_tree_nodes_operations_Nova_UnaryOperation_native_Nova_construct)(spectra_tree_nodes_operations_Nova_UnaryOperation*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_operations_native_UnaryOperation
{
spectra_tree_nodes_operations_Nova_UnaryOperation_native_Nova_construct UnaryOperation;
} spectra_tree_nodes_operations_native_UnaryOperation;
typedef spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_UnaryOperationFunctionMap* (*spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_UnaryOperationFunctionMap_native_Nova_construct)(spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_UnaryOperationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_UnaryOperationFunctionMap
{
spectra_tree_nodes_operations_Nova_spectra_tree_nodes_operations_UnaryOperationFunctionMap_native_Nova_construct spectra_tree_nodes_operations_UnaryOperationFunctionMap;
} spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_UnaryOperationFunctionMap;

typedef spectra_tree_nodes_variables_Nova_ArrayBracketOverload* (*spectra_tree_nodes_variables_Nova_ArrayBracketOverload_native_static_Nova_parse)(spectra_tree_nodes_variables_Nova_ArrayBracketOverload*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
typedef spectra_tree_nodes_variables_Nova_ArrayBracketOverload* (*spectra_tree_nodes_variables_Nova_ArrayBracketOverload_native_Nova_construct)(spectra_tree_nodes_variables_Nova_ArrayBracketOverload*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_ArrayBracketOverload
{
spectra_tree_nodes_variables_Nova_ArrayBracketOverload_native_Nova_construct ArrayBracketOverload;
} spectra_tree_nodes_variables_native_ArrayBracketOverload;
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap_native_Nova_construct spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeInitializationValue)(spectra_tree_nodes_variables_Nova_FieldDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeAccessorValue)(spectra_tree_nodes_variables_Nova_FieldDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_variables_Nova_FieldDeclaration* (*spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_FieldDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_FieldDeclaration
{
spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeInitializationValue writeInitializationValue;
spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_writeAccessorValue writeAccessorValue;
spectra_tree_nodes_variables_Nova_FieldDeclaration_native_Nova_construct FieldDeclaration;
} spectra_tree_nodes_variables_native_FieldDeclaration;
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_FieldDeclarationFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_FieldDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_FieldDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_FieldDeclarationFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_FieldDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_variables_FieldDeclarationFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_FieldDeclarationFunctionMap;

typedef spectra_tree_nodes_variables_Nova_ImplicitDeclaration* (*spectra_tree_nodes_variables_Nova_ImplicitDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_ImplicitDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_ImplicitDeclaration
{
spectra_tree_nodes_variables_Nova_ImplicitDeclaration_native_Nova_construct ImplicitDeclaration;
} spectra_tree_nodes_variables_native_ImplicitDeclaration;
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap;

typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeVisibility)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeStatic)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
typedef spectra_tree_nodes_variables_Nova_InstanceDeclaration* (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_InstanceDeclaration
{
spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeVisibility writeVisibility;
spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_writeStatic writeStatic;
spectra_tree_nodes_variables_Nova_InstanceDeclaration_native_Nova_construct InstanceDeclaration;
} spectra_tree_nodes_variables_native_InstanceDeclaration;
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_variables_InstanceDeclarationFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap;

typedef spectra_tree_nodes_variables_Nova_LocalDeclaration* (*spectra_tree_nodes_variables_Nova_LocalDeclaration_native_Nova_construct)(spectra_tree_nodes_variables_Nova_LocalDeclaration*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);

typedef struct spectra_tree_nodes_variables_native_LocalDeclaration
{
spectra_tree_nodes_variables_Nova_LocalDeclaration_native_Nova_construct LocalDeclaration;
} spectra_tree_nodes_variables_native_LocalDeclaration;
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_LocalDeclarationFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_LocalDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_LocalDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_LocalDeclarationFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_LocalDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_variables_LocalDeclarationFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_LocalDeclarationFunctionMap;

typedef spectra_tree_nodes_variables_Nova_Variable* (*spectra_tree_nodes_variables_Nova_Variable_native_static_Nova_findVariable)(spectra_tree_nodes_variables_Nova_Variable*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);
typedef spectra_tree_nodes_variables_Nova_Variable* (*spectra_tree_nodes_variables_Nova_Variable_native_Nova_construct)(spectra_tree_nodes_variables_Nova_Variable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_variables_Nova_VariableDeclaration*);

typedef struct spectra_tree_nodes_variables_native_Variable
{
spectra_tree_nodes_variables_Nova_Variable_native_Nova_construct Variable;
} spectra_tree_nodes_variables_native_Variable;
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_VariableFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableFunctionMap_native_Nova_construct spectra_tree_nodes_variables_VariableFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_VariableFunctionMap;

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
typedef spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableDeclarationFunctionMap* (*spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableDeclarationFunctionMap_native_Nova_construct)(spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_VariableDeclarationFunctionMap
{
spectra_tree_nodes_variables_Nova_spectra_tree_nodes_variables_VariableDeclarationFunctionMap_native_Nova_construct spectra_tree_nodes_variables_VariableDeclarationFunctionMap;
} spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_VariableDeclarationFunctionMap;

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
typedef spectra_util_Nova_spectra_util_BoundsFunctionMap* (*spectra_util_Nova_spectra_util_BoundsFunctionMap_native_Nova_construct)(spectra_util_Nova_spectra_util_BoundsFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_spectra_util_BoundsFunctionMap
{
spectra_util_Nova_spectra_util_BoundsFunctionMap_native_Nova_construct spectra_util_BoundsFunctionMap;
} spectra_util_native_spectra_util_BoundsFunctionMap;

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
typedef int (*spectra_util_Nova_CompilerStringFunctions_native_Nova_findEndingChar)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, char, int, int, spectra_util_Nova_CompilerStringFunctions_closure2_Nova_advance spectra_util_Nova_CompilerStringFunctions_Nova_advance, void* spectra_util_Nova_CompilerStringFunctions_ref_Nova_advance, void* advance_context, int);
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
typedef spectra_util_Nova_spectra_util_FileUtilsFunctionMap* (*spectra_util_Nova_spectra_util_FileUtilsFunctionMap_native_Nova_construct)(spectra_util_Nova_spectra_util_FileUtilsFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_spectra_util_FileUtilsFunctionMap
{
spectra_util_Nova_spectra_util_FileUtilsFunctionMap_native_Nova_construct spectra_util_FileUtilsFunctionMap;
} spectra_util_native_spectra_util_FileUtilsFunctionMap;

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
typedef spectra_util_Nova_spectra_util_LocationFunctionMap* (*spectra_util_Nova_spectra_util_LocationFunctionMap_native_Nova_construct)(spectra_util_Nova_spectra_util_LocationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_spectra_util_LocationFunctionMap
{
spectra_util_Nova_spectra_util_LocationFunctionMap_native_Nova_construct spectra_util_LocationFunctionMap;
} spectra_util_native_spectra_util_LocationFunctionMap;

typedef spectra_util_Nova_OS* (*spectra_util_Nova_OS_nativefunc_Nova_construct)(spectra_util_Nova_OS*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_OS
{
spectra_util_Nova_OS_nativefunc_Nova_construct OS;
} spectra_util_native_OS;
typedef spectra_util_Nova_spectra_util_OSFunctionMap* (*spectra_util_Nova_spectra_util_OSFunctionMap_native_Nova_construct)(spectra_util_Nova_spectra_util_OSFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_spectra_util_OSFunctionMap
{
spectra_util_Nova_spectra_util_OSFunctionMap_native_Nova_construct spectra_util_OSFunctionMap;
} spectra_util_native_spectra_util_OSFunctionMap;

typedef char (*spectra_util_Nova_SyntaxUtils_native_static_Nova_checkTypes)(spectra_util_Nova_SyntaxUtils*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, nova_meta_Nova_Class*);
typedef spectra_util_Nova_SyntaxUtils* (*spectra_util_Nova_SyntaxUtils_native_Nova_construct)(spectra_util_Nova_SyntaxUtils*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_SyntaxUtils
{
spectra_util_Nova_SyntaxUtils_native_Nova_construct SyntaxUtils;
} spectra_util_native_SyntaxUtils;
typedef spectra_util_Nova_spectra_util_SyntaxUtilsFunctionMap* (*spectra_util_Nova_spectra_util_SyntaxUtilsFunctionMap_native_Nova_construct)(spectra_util_Nova_spectra_util_SyntaxUtilsFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct spectra_util_native_spectra_util_SyntaxUtilsFunctionMap
{
spectra_util_Nova_spectra_util_SyntaxUtilsFunctionMap_native_Nova_construct spectra_util_SyntaxUtilsFunctionMap;
} spectra_util_native_spectra_util_SyntaxUtilsFunctionMap;

typedef int (*example_Nova_Animal_native_Nova_getNumLegs)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
typedef int (*example_Nova_Animal_native_Nova_getNumEyes)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
typedef nova_Nova_String* (*example_Nova_Animal_native_Nova_getDescription)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
typedef example_Nova_Animal* (*example_Nova_Animal_native_Nova_construct)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_Animal
{
example_Nova_Animal_native_Nova_getNumLegs getNumLegs;
example_Nova_Animal_native_Nova_getNumEyes getNumEyes;
example_Nova_Animal_native_Nova_getDescription getDescription;
example_Nova_Animal_native_Nova_construct Animal;
} example_native_Animal;
typedef example_Nova_example_AnimalFunctionMap* (*example_Nova_example_AnimalFunctionMap_native_Nova_construct)(example_Nova_example_AnimalFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_AnimalFunctionMap
{
example_Nova_example_AnimalFunctionMap_native_Nova_construct example_AnimalFunctionMap;
} example_native_example_AnimalFunctionMap;

typedef void (*example_Nova_ArrayDemo_native_static_Nova_main)(example_Nova_ArrayDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_ArrayDemo* (*example_Nova_ArrayDemo_native_Nova_construct)(example_Nova_ArrayDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_ArrayDemo
{
example_Nova_ArrayDemo_native_Nova_construct ArrayDemo;
} example_native_ArrayDemo;
typedef example_Nova_example_ArrayDemoFunctionMap* (*example_Nova_example_ArrayDemoFunctionMap_native_Nova_construct)(example_Nova_example_ArrayDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_ArrayDemoFunctionMap
{
example_Nova_example_ArrayDemoFunctionMap_native_Nova_construct example_ArrayDemoFunctionMap;
} example_native_example_ArrayDemoFunctionMap;

typedef example_Nova_BodyBuilder* (*example_Nova_BodyBuilder_native_Nova_construct)(example_Nova_BodyBuilder*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*);

typedef struct example_native_BodyBuilder
{
example_Nova_BodyBuilder_native_Nova_construct BodyBuilder;
} example_native_BodyBuilder;
typedef example_Nova_example_BodyBuilderFunctionMap* (*example_Nova_example_BodyBuilderFunctionMap_native_Nova_construct)(example_Nova_example_BodyBuilderFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_BodyBuilderFunctionMap
{
example_Nova_example_BodyBuilderFunctionMap_native_Nova_construct example_BodyBuilderFunctionMap;
} example_native_example_BodyBuilderFunctionMap;

typedef void (*example_Nova_ClosureDemo_native_static_Nova_main)(example_Nova_ClosureDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_ClosureDemo* (*example_Nova_ClosureDemo_native_Nova_construct)(example_Nova_ClosureDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_ClosureDemo
{
example_Nova_ClosureDemo_native_Nova_construct ClosureDemo;
} example_native_ClosureDemo;
typedef example_Nova_example_ClosureDemoFunctionMap* (*example_Nova_example_ClosureDemoFunctionMap_native_Nova_construct)(example_Nova_example_ClosureDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_ClosureDemoFunctionMap
{
example_Nova_example_ClosureDemoFunctionMap_native_Nova_construct example_ClosureDemoFunctionMap;
} example_native_example_ClosureDemoFunctionMap;

typedef example_Nova_Dog* (*example_Nova_Dog_native_Nova_construct)(example_Nova_Dog*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_Dog
{
example_Nova_Dog_native_Nova_construct Dog;
} example_native_Dog;
typedef example_Nova_example_DogFunctionMap* (*example_Nova_example_DogFunctionMap_native_Nova_construct)(example_Nova_example_DogFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_DogFunctionMap
{
example_Nova_example_DogFunctionMap_native_Nova_construct example_DogFunctionMap;
} example_native_example_DogFunctionMap;

typedef void (*example_Nova_ExceptionHandlingDemo_native_static_Nova_main)(example_Nova_ExceptionHandlingDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_ExceptionHandlingDemo* (*example_Nova_ExceptionHandlingDemo_native_Nova_construct)(example_Nova_ExceptionHandlingDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_ExceptionHandlingDemo
{
example_Nova_ExceptionHandlingDemo_native_Nova_construct ExceptionHandlingDemo;
} example_native_ExceptionHandlingDemo;
typedef example_Nova_example_ExceptionHandlingDemoFunctionMap* (*example_Nova_example_ExceptionHandlingDemoFunctionMap_native_Nova_construct)(example_Nova_example_ExceptionHandlingDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_ExceptionHandlingDemoFunctionMap
{
example_Nova_example_ExceptionHandlingDemoFunctionMap_native_Nova_construct example_ExceptionHandlingDemoFunctionMap;
} example_native_example_ExceptionHandlingDemoFunctionMap;

typedef void (*example_Nova_FileTest_native_static_Nova_main)(example_Nova_FileTest*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_FileTest* (*example_Nova_FileTest_native_Nova_construct)(example_Nova_FileTest*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_FileTest
{
example_Nova_FileTest_native_Nova_construct FileTest;
} example_native_FileTest;
typedef example_Nova_example_FileTestFunctionMap* (*example_Nova_example_FileTestFunctionMap_native_Nova_construct)(example_Nova_example_FileTestFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_FileTestFunctionMap
{
example_Nova_example_FileTestFunctionMap_native_Nova_construct example_FileTestFunctionMap;
} example_native_example_FileTestFunctionMap;

typedef void (*example_Nova_GenericDemo_native_static_Nova_main)(example_Nova_GenericDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_GenericDemo* (*example_Nova_GenericDemo_native_Nova_construct)(example_Nova_GenericDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_GenericDemo
{
example_Nova_GenericDemo_native_Nova_construct GenericDemo;
} example_native_GenericDemo;
typedef example_Nova_example_GenericDemoFunctionMap* (*example_Nova_example_GenericDemoFunctionMap_native_Nova_construct)(example_Nova_example_GenericDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_GenericDemoFunctionMap
{
example_Nova_example_GenericDemoFunctionMap_native_Nova_construct example_GenericDemoFunctionMap;
} example_native_example_GenericDemoFunctionMap;

typedef void (*example_Nova_HashMapDemo_native_static_Nova_main)(example_Nova_HashMapDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_HashMapDemo* (*example_Nova_HashMapDemo_native_Nova_construct)(example_Nova_HashMapDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_HashMapDemo
{
example_Nova_HashMapDemo_native_Nova_construct HashMapDemo;
} example_native_HashMapDemo;
typedef example_Nova_example_HashMapDemoFunctionMap* (*example_Nova_example_HashMapDemoFunctionMap_native_Nova_construct)(example_Nova_example_HashMapDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_HashMapDemoFunctionMap
{
example_Nova_example_HashMapDemoFunctionMap_native_Nova_construct example_HashMapDemoFunctionMap;
} example_native_example_HashMapDemoFunctionMap;

typedef void (*example_Nova_HashSetDemo_native_static_Nova_main)(example_Nova_HashSetDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_HashSetDemo* (*example_Nova_HashSetDemo_native_Nova_construct)(example_Nova_HashSetDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_HashSetDemo
{
example_Nova_HashSetDemo_native_Nova_construct HashSetDemo;
} example_native_HashSetDemo;
typedef example_Nova_example_HashSetDemoFunctionMap* (*example_Nova_example_HashSetDemoFunctionMap_native_Nova_construct)(example_Nova_example_HashSetDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_HashSetDemoFunctionMap
{
example_Nova_example_HashSetDemoFunctionMap_native_Nova_construct example_HashSetDemoFunctionMap;
} example_native_example_HashSetDemoFunctionMap;

typedef void (*example_Nova_IntegerTest_native_static_Nova_main)(example_Nova_IntegerTest*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_IntegerTest* (*example_Nova_IntegerTest_native_Nova_construct)(example_Nova_IntegerTest*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_IntegerTest
{
example_Nova_IntegerTest_native_Nova_construct IntegerTest;
} example_native_IntegerTest;
typedef example_Nova_example_IntegerTestFunctionMap* (*example_Nova_example_IntegerTestFunctionMap_native_Nova_construct)(example_Nova_example_IntegerTestFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_IntegerTestFunctionMap
{
example_Nova_example_IntegerTestFunctionMap_native_Nova_construct example_IntegerTestFunctionMap;
} example_native_example_IntegerTestFunctionMap;

typedef void (*example_Nova_Lab_native_static_Nova_main)(example_Nova_Lab*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_Lab* (*example_Nova_Lab_native_Nova_construct)(example_Nova_Lab*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_Lab
{
example_Nova_Lab_native_Nova_construct Lab;
} example_native_Lab;
typedef example_Nova_example_LabFunctionMap* (*example_Nova_example_LabFunctionMap_native_Nova_construct)(example_Nova_example_LabFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_LabFunctionMap
{
example_Nova_example_LabFunctionMap_native_Nova_construct example_LabFunctionMap;
} example_native_example_LabFunctionMap;

typedef void (*example_Nova_MathDemo_native_static_Nova_main)(example_Nova_MathDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_MathDemo* (*example_Nova_MathDemo_native_Nova_construct)(example_Nova_MathDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_MathDemo
{
example_Nova_MathDemo_native_Nova_construct MathDemo;
} example_native_MathDemo;
typedef example_Nova_example_MathDemoFunctionMap* (*example_Nova_example_MathDemoFunctionMap_native_Nova_construct)(example_Nova_example_MathDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_MathDemoFunctionMap
{
example_Nova_example_MathDemoFunctionMap_native_Nova_construct example_MathDemoFunctionMap;
} example_native_example_MathDemoFunctionMap;

typedef example_Nova_NonWholeDivisionException* (*example_Nova_NonWholeDivisionException_native_Nova_construct)(example_Nova_NonWholeDivisionException*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_NonWholeDivisionException
{
example_Nova_NonWholeDivisionException_native_Nova_construct NonWholeDivisionException;
} example_native_NonWholeDivisionException;
typedef example_Nova_example_NonWholeDivisionExceptionFunctionMap* (*example_Nova_example_NonWholeDivisionExceptionFunctionMap_native_Nova_construct)(example_Nova_example_NonWholeDivisionExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_NonWholeDivisionExceptionFunctionMap
{
example_Nova_example_NonWholeDivisionExceptionFunctionMap_native_Nova_construct example_NonWholeDivisionExceptionFunctionMap;
} example_native_example_NonWholeDivisionExceptionFunctionMap;

typedef void (*example_Nova_Person_native_Nova_sayHello)(example_Nova_Person*, nova_exception_Nova_ExceptionData*);
typedef example_Nova_Person* (*example_Nova_Person_native_Nova_construct)(example_Nova_Person*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);

typedef struct example_native_Person
{
example_Nova_Person_native_Nova_sayHello sayHello;
example_Nova_Person_native_Nova_construct Person;
} example_native_Person;
typedef example_Nova_example_PersonFunctionMap* (*example_Nova_example_PersonFunctionMap_native_Nova_construct)(example_Nova_example_PersonFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_PersonFunctionMap
{
example_Nova_example_PersonFunctionMap_native_Nova_construct example_PersonFunctionMap;
} example_native_example_PersonFunctionMap;

typedef int (*example_Nova_Polygon_native_Nova_numberSides)(example_Nova_Polygon*, nova_exception_Nova_ExceptionData*);
typedef double (*example_Nova_Polygon_native_Nova_calculateArea)(example_Nova_Polygon*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_Polygon
{
example_Nova_Polygon_native_Nova_numberSides numberSides;
example_Nova_Polygon_native_Nova_calculateArea calculateArea;
} example_native_Polygon;

typedef void (*example_Nova_PolymorphismDemo_native_static_Nova_main)(example_Nova_PolymorphismDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_PolymorphismDemo* (*example_Nova_PolymorphismDemo_native_Nova_construct)(example_Nova_PolymorphismDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_PolymorphismDemo
{
example_Nova_PolymorphismDemo_native_Nova_construct PolymorphismDemo;
} example_native_PolymorphismDemo;
typedef example_Nova_example_PolymorphismDemoFunctionMap* (*example_Nova_example_PolymorphismDemoFunctionMap_native_Nova_construct)(example_Nova_example_PolymorphismDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_PolymorphismDemoFunctionMap
{
example_Nova_example_PolymorphismDemoFunctionMap_native_Nova_construct example_PolymorphismDemoFunctionMap;
} example_native_example_PolymorphismDemoFunctionMap;

typedef void (*example_Nova_QueueDemo_native_static_Nova_main)(example_Nova_QueueDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_QueueDemo* (*example_Nova_QueueDemo_native_Nova_construct)(example_Nova_QueueDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_QueueDemo
{
example_Nova_QueueDemo_native_Nova_construct QueueDemo;
} example_native_QueueDemo;
typedef example_Nova_example_QueueDemoFunctionMap* (*example_Nova_example_QueueDemoFunctionMap_native_Nova_construct)(example_Nova_example_QueueDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_QueueDemoFunctionMap
{
example_Nova_example_QueueDemoFunctionMap_native_Nova_construct example_QueueDemoFunctionMap;
} example_native_example_QueueDemoFunctionMap;

typedef example_Nova_Spider* (*example_Nova_Spider_native_Nova_construct)(example_Nova_Spider*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_Spider
{
example_Nova_Spider_native_Nova_construct Spider;
} example_native_Spider;
typedef example_Nova_example_SpiderFunctionMap* (*example_Nova_example_SpiderFunctionMap_native_Nova_construct)(example_Nova_example_SpiderFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_SpiderFunctionMap
{
example_Nova_example_SpiderFunctionMap_native_Nova_construct example_SpiderFunctionMap;
} example_native_example_SpiderFunctionMap;

typedef example_Nova_Square* (*example_Nova_Square_native_Nova_construct)(example_Nova_Square*, nova_exception_Nova_ExceptionData*, int);

typedef struct example_native_Square
{
example_Nova_Square_native_Nova_construct Square;
} example_native_Square;
typedef example_Nova_example_SquareFunctionMap* (*example_Nova_example_SquareFunctionMap_native_Nova_construct)(example_Nova_example_SquareFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_SquareFunctionMap
{
example_Nova_example_SquareFunctionMap_native_Nova_construct example_SquareFunctionMap;
} example_native_example_SquareFunctionMap;

typedef void (*example_Nova_SvgChart_native_static_Nova_main)(example_Nova_SvgChart*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_SvgChart* (*example_Nova_SvgChart_native_Nova_construct)(example_Nova_SvgChart*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_SvgChart
{
example_Nova_SvgChart_native_Nova_construct SvgChart;
} example_native_SvgChart;
typedef example_Nova_example_SvgChartFunctionMap* (*example_Nova_example_SvgChartFunctionMap_native_Nova_construct)(example_Nova_example_SvgChartFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_SvgChartFunctionMap
{
example_Nova_example_SvgChartFunctionMap_native_Nova_construct example_SvgChartFunctionMap;
} example_native_example_SvgChartFunctionMap;

typedef void (*example_Nova_SvgFractal_native_static_Nova_main)(example_Nova_SvgFractal*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_SvgFractal* (*example_Nova_SvgFractal_native_Nova_construct)(example_Nova_SvgFractal*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_SvgFractal
{
example_Nova_SvgFractal_native_Nova_construct SvgFractal;
} example_native_SvgFractal;
typedef example_Nova_example_SvgFractalFunctionMap* (*example_Nova_example_SvgFractalFunctionMap_native_Nova_construct)(example_Nova_example_SvgFractalFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_SvgFractalFunctionMap
{
example_Nova_example_SvgFractalFunctionMap_native_Nova_construct example_SvgFractalFunctionMap;
} example_native_example_SvgFractalFunctionMap;

typedef example_Nova_T1* (*example_Nova_T1_native_Nova_construct)(example_Nova_T1*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_T1
{
example_Nova_T1_native_Nova_construct T1;
} example_native_T1;
typedef example_Nova_example_T1FunctionMap* (*example_Nova_example_T1FunctionMap_native_Nova_construct)(example_Nova_example_T1FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_T1FunctionMap
{
example_Nova_example_T1FunctionMap_native_Nova_construct example_T1FunctionMap;
} example_native_example_T1FunctionMap;

typedef example_Nova_T2* (*example_Nova_T2_native_Nova_construct)(example_Nova_T2*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_T2
{
example_Nova_T2_native_Nova_construct T2;
} example_native_T2;
typedef example_Nova_example_T2FunctionMap* (*example_Nova_example_T2FunctionMap_native_Nova_construct)(example_Nova_example_T2FunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_T2FunctionMap
{
example_Nova_example_T2FunctionMap_native_Nova_construct example_T2FunctionMap;
} example_native_example_T2FunctionMap;

typedef void (*example_Nova_Test_native_static_Nova_main)(example_Nova_Test*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_Test* (*example_Nova_Test_native_Nova_construct)(example_Nova_Test*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_Test
{
example_Nova_Test_native_Nova_construct Test;
} example_native_Test;
typedef example_Nova_example_TestFunctionMap* (*example_Nova_example_TestFunctionMap_native_Nova_construct)(example_Nova_example_TestFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_TestFunctionMap
{
example_Nova_example_TestFunctionMap_native_Nova_construct example_TestFunctionMap;
} example_native_example_TestFunctionMap;

typedef void (*example_Nova_ThreadDemo_native_static_Nova_main)(example_Nova_ThreadDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_Nova_ThreadDemo* (*example_Nova_ThreadDemo_native_Nova_construct)(example_Nova_ThreadDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_ThreadDemo
{
example_Nova_ThreadDemo_native_Nova_construct ThreadDemo;
} example_native_ThreadDemo;
typedef example_Nova_example_ThreadDemoFunctionMap* (*example_Nova_example_ThreadDemoFunctionMap_native_Nova_construct)(example_Nova_example_ThreadDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_ThreadDemoFunctionMap
{
example_Nova_example_ThreadDemoFunctionMap_native_Nova_construct example_ThreadDemoFunctionMap;
} example_native_example_ThreadDemoFunctionMap;

typedef example_Nova_ThreadDemoImplementation* (*example_Nova_ThreadDemoImplementation_native_Nova_construct)(example_Nova_ThreadDemoImplementation*, nova_exception_Nova_ExceptionData*, long_long, nova_Nova_String*);

typedef struct example_native_ThreadDemoImplementation
{
example_Nova_ThreadDemoImplementation_native_Nova_construct ThreadDemoImplementation;
} example_native_ThreadDemoImplementation;
typedef example_Nova_example_ThreadDemoImplementationFunctionMap* (*example_Nova_example_ThreadDemoImplementationFunctionMap_native_Nova_construct)(example_Nova_example_ThreadDemoImplementationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_native_example_ThreadDemoImplementationFunctionMap
{
example_Nova_example_ThreadDemoImplementationFunctionMap_native_Nova_construct example_ThreadDemoImplementationFunctionMap;
} example_native_example_ThreadDemoImplementationFunctionMap;

typedef void (*example_ackermann_Nova_Ackermann_native_static_Nova_main)(example_ackermann_Nova_Ackermann*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef int (*example_ackermann_Nova_Ackermann_native_static_Nova_run)(example_ackermann_Nova_Ackermann*, nova_exception_Nova_ExceptionData*, int, int);
typedef int (*example_ackermann_Nova_Ackermann_native_static_Nova_run2)(example_ackermann_Nova_Ackermann*, nova_exception_Nova_ExceptionData*, int, int);
typedef example_ackermann_Nova_Ackermann* (*example_ackermann_Nova_Ackermann_native_Nova_construct)(example_ackermann_Nova_Ackermann*, nova_exception_Nova_ExceptionData*);

typedef struct example_ackermann_native_Ackermann
{
example_ackermann_Nova_Ackermann_native_Nova_construct Ackermann;
} example_ackermann_native_Ackermann;
typedef example_ackermann_Nova_example_ackermann_AckermannFunctionMap* (*example_ackermann_Nova_example_ackermann_AckermannFunctionMap_native_Nova_construct)(example_ackermann_Nova_example_ackermann_AckermannFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_ackermann_native_example_ackermann_AckermannFunctionMap
{
example_ackermann_Nova_example_ackermann_AckermannFunctionMap_native_Nova_construct example_ackermann_AckermannFunctionMap;
} example_ackermann_native_example_ackermann_AckermannFunctionMap;

typedef example_copy_Nova_Dog* (*example_copy_Nova_Dog_native_Nova_construct)(example_copy_Nova_Dog*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct example_copy_native_Dog
{
example_copy_Nova_Dog_native_Nova_construct Dog;
} example_copy_native_Dog;
typedef example_copy_Nova_example_copy_DogFunctionMap* (*example_copy_Nova_example_copy_DogFunctionMap_native_Nova_construct)(example_copy_Nova_example_copy_DogFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_copy_native_example_copy_DogFunctionMap
{
example_copy_Nova_example_copy_DogFunctionMap_native_Nova_construct example_copy_DogFunctionMap;
} example_copy_native_example_copy_DogFunctionMap;

typedef void (*example_database_Nova_DatabaseDemo_native_static_Nova_main)(example_database_Nova_DatabaseDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_database_Nova_DatabaseDemo* (*example_database_Nova_DatabaseDemo_native_Nova_construct)(example_database_Nova_DatabaseDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_database_native_DatabaseDemo
{
example_database_Nova_DatabaseDemo_native_Nova_construct DatabaseDemo;
} example_database_native_DatabaseDemo;
typedef example_database_Nova_example_database_DatabaseDemoFunctionMap* (*example_database_Nova_example_database_DatabaseDemoFunctionMap_native_Nova_construct)(example_database_Nova_example_database_DatabaseDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_database_native_example_database_DatabaseDemoFunctionMap
{
example_database_Nova_example_database_DatabaseDemoFunctionMap_native_Nova_construct example_database_DatabaseDemoFunctionMap;
} example_database_native_example_database_DatabaseDemoFunctionMap;

typedef void (*example_network_Nova_ClientDemo_native_static_Nova_main)(example_network_Nova_ClientDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_network_Nova_ClientDemo* (*example_network_Nova_ClientDemo_native_Nova_construct)(example_network_Nova_ClientDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_network_native_ClientDemo
{
example_network_Nova_ClientDemo_native_Nova_construct ClientDemo;
} example_network_native_ClientDemo;
typedef example_network_Nova_example_network_ClientDemoFunctionMap* (*example_network_Nova_example_network_ClientDemoFunctionMap_native_Nova_construct)(example_network_Nova_example_network_ClientDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_network_native_example_network_ClientDemoFunctionMap
{
example_network_Nova_example_network_ClientDemoFunctionMap_native_Nova_construct example_network_ClientDemoFunctionMap;
} example_network_native_example_network_ClientDemoFunctionMap;

typedef example_network_Nova_ConnectionThread* (*example_network_Nova_ConnectionThread_native_Nova_construct)(example_network_Nova_ConnectionThread*, nova_exception_Nova_ExceptionData*, nova_network_Nova_ConnectionSocket*);

typedef struct example_network_native_ConnectionThread
{
example_network_Nova_ConnectionThread_native_Nova_construct ConnectionThread;
} example_network_native_ConnectionThread;
typedef example_network_Nova_example_network_ConnectionThreadFunctionMap* (*example_network_Nova_example_network_ConnectionThreadFunctionMap_native_Nova_construct)(example_network_Nova_example_network_ConnectionThreadFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_network_native_example_network_ConnectionThreadFunctionMap
{
example_network_Nova_example_network_ConnectionThreadFunctionMap_native_Nova_construct example_network_ConnectionThreadFunctionMap;
} example_network_native_example_network_ConnectionThreadFunctionMap;

typedef example_network_Nova_OutputThread* (*example_network_Nova_OutputThread_native_Nova_construct)(example_network_Nova_OutputThread*, nova_exception_Nova_ExceptionData*, nova_network_Nova_ServerSocket*, nova_network_Nova_ConnectionSocket*);

typedef struct example_network_native_OutputThread
{
example_network_Nova_OutputThread_native_Nova_construct OutputThread;
} example_network_native_OutputThread;
typedef example_network_Nova_example_network_OutputThreadFunctionMap* (*example_network_Nova_example_network_OutputThreadFunctionMap_native_Nova_construct)(example_network_Nova_example_network_OutputThreadFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_network_native_example_network_OutputThreadFunctionMap
{
example_network_Nova_example_network_OutputThreadFunctionMap_native_Nova_construct example_network_OutputThreadFunctionMap;
} example_network_native_example_network_OutputThreadFunctionMap;

typedef void (*example_network_Nova_ServerDemo_native_static_Nova_main)(example_network_Nova_ServerDemo*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef example_network_Nova_ServerDemo* (*example_network_Nova_ServerDemo_native_Nova_construct)(example_network_Nova_ServerDemo*, nova_exception_Nova_ExceptionData*);

typedef struct example_network_native_ServerDemo
{
example_network_Nova_ServerDemo_native_Nova_construct ServerDemo;
} example_network_native_ServerDemo;
typedef example_network_Nova_example_network_ServerDemoFunctionMap* (*example_network_Nova_example_network_ServerDemoFunctionMap_native_Nova_construct)(example_network_Nova_example_network_ServerDemoFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct example_network_native_example_network_ServerDemoFunctionMap
{
example_network_Nova_example_network_ServerDemoFunctionMap_native_Nova_construct example_network_ServerDemoFunctionMap;
} example_network_native_example_network_ServerDemoFunctionMap;

typedef stabilitytest_Nova_AssignmentStability* (*stabilitytest_Nova_AssignmentStability_native_Nova_construct)(stabilitytest_Nova_AssignmentStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_AssignmentStability
{
stabilitytest_Nova_AssignmentStability_native_Nova_construct AssignmentStability;
} stabilitytest_native_AssignmentStability;
typedef stabilitytest_Nova_stabilitytest_AssignmentStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_AssignmentStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_AssignmentStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_AssignmentStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_AssignmentStabilityFunctionMap_native_Nova_construct stabilitytest_AssignmentStabilityFunctionMap;
} stabilitytest_native_stabilitytest_AssignmentStabilityFunctionMap;

typedef stabilitytest_Nova_ClassWithProperties* (*stabilitytest_Nova_ClassWithProperties_native_Nova_construct)(stabilitytest_Nova_ClassWithProperties*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_ClassWithProperties
{
stabilitytest_Nova_ClassWithProperties_native_Nova_construct ClassWithProperties;
} stabilitytest_native_ClassWithProperties;
typedef stabilitytest_Nova_stabilitytest_ClassWithPropertiesFunctionMap* (*stabilitytest_Nova_stabilitytest_ClassWithPropertiesFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ClassWithPropertiesFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ClassWithPropertiesFunctionMap
{
stabilitytest_Nova_stabilitytest_ClassWithPropertiesFunctionMap_native_Nova_construct stabilitytest_ClassWithPropertiesFunctionMap;
} stabilitytest_native_stabilitytest_ClassWithPropertiesFunctionMap;

typedef stabilitytest_Nova_ClientThread* (*stabilitytest_Nova_ClientThread_native_Nova_construct)(stabilitytest_Nova_ClientThread*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*, int);

typedef struct stabilitytest_native_ClientThread
{
stabilitytest_Nova_ClientThread_native_Nova_construct ClientThread;
} stabilitytest_native_ClientThread;
typedef stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap* (*stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ClientThreadFunctionMap
{
stabilitytest_Nova_stabilitytest_ClientThreadFunctionMap_native_Nova_construct stabilitytest_ClientThreadFunctionMap;
} stabilitytest_native_stabilitytest_ClientThreadFunctionMap;

typedef stabilitytest_Nova_ClosureStability* (*stabilitytest_Nova_ClosureStability_native_Nova_construct)(stabilitytest_Nova_ClosureStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_ClosureStability
{
stabilitytest_Nova_ClosureStability_native_Nova_construct ClosureStability;
} stabilitytest_native_ClosureStability;
typedef stabilitytest_Nova_stabilitytest_ClosureStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_ClosureStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ClosureStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ClosureStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_ClosureStabilityFunctionMap_native_Nova_construct stabilitytest_ClosureStabilityFunctionMap;
} stabilitytest_native_stabilitytest_ClosureStabilityFunctionMap;

typedef stabilitytest_Nova_ExceptionStability* (*stabilitytest_Nova_ExceptionStability_native_Nova_construct)(stabilitytest_Nova_ExceptionStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_ExceptionStability
{
stabilitytest_Nova_ExceptionStability_native_Nova_construct ExceptionStability;
} stabilitytest_native_ExceptionStability;
typedef stabilitytest_Nova_stabilitytest_ExceptionStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_ExceptionStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ExceptionStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ExceptionStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_ExceptionStabilityFunctionMap_native_Nova_construct stabilitytest_ExceptionStabilityFunctionMap;
} stabilitytest_native_stabilitytest_ExceptionStabilityFunctionMap;

typedef stabilitytest_Nova_FileStability* (*stabilitytest_Nova_FileStability_native_Nova_construct)(stabilitytest_Nova_FileStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_FileStability
{
stabilitytest_Nova_FileStability_native_Nova_construct FileStability;
} stabilitytest_native_FileStability;
typedef stabilitytest_Nova_stabilitytest_FileStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_FileStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_FileStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_FileStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_FileStabilityFunctionMap_native_Nova_construct stabilitytest_FileStabilityFunctionMap;
} stabilitytest_native_stabilitytest_FileStabilityFunctionMap;

typedef stabilitytest_Nova_InnerClassStability* (*stabilitytest_Nova_InnerClassStability_native_Nova_construct)(stabilitytest_Nova_InnerClassStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_InnerClassStability
{
stabilitytest_Nova_InnerClassStability_native_Nova_construct InnerClassStability;
} stabilitytest_native_InnerClassStability;
typedef void (*stabilitytest_Nova_MyOuter_native_Nova_test)(stabilitytest_Nova_MyOuter*, nova_exception_Nova_ExceptionData*);
typedef stabilitytest_Nova_MyOuter* (*stabilitytest_Nova_MyOuter_native_Nova_construct)(stabilitytest_Nova_MyOuter*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_MyOuter
{
stabilitytest_Nova_MyOuter_native_Nova_test test;
stabilitytest_Nova_MyOuter_native_Nova_construct MyOuter;
} stabilitytest_native_MyOuter;
typedef stabilitytest_Nova_stabilitytest_InnerClassStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_InnerClassStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_InnerClassStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_InnerClassStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_InnerClassStabilityFunctionMap_native_Nova_construct stabilitytest_InnerClassStabilityFunctionMap;
} stabilitytest_native_stabilitytest_InnerClassStabilityFunctionMap;
typedef stabilitytest_Nova_stabilitytest_InnerClassStability_MyOuterFunctionMap* (*stabilitytest_Nova_stabilitytest_InnerClassStability_MyOuterFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_InnerClassStability_MyOuterFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_InnerClassStability_MyOuterFunctionMap
{
stabilitytest_Nova_stabilitytest_InnerClassStability_MyOuterFunctionMap_native_Nova_construct stabilitytest_InnerClassStability_MyOuterFunctionMap;
} stabilitytest_native_stabilitytest_InnerClassStability_MyOuterFunctionMap;
typedef stabilitytest_Nova_MyInner* (*stabilitytest_Nova_MyInner_native_Nova_construct)(stabilitytest_Nova_MyInner*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct stabilitytest_native_MyInner
{
stabilitytest_Nova_MyInner_native_Nova_construct MyInner;
} stabilitytest_native_MyInner;
typedef stabilitytest_Nova_stabilitytest_InnerClassStability_MyInnerFunctionMap* (*stabilitytest_Nova_stabilitytest_InnerClassStability_MyInnerFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_InnerClassStability_MyInnerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_InnerClassStability_MyInnerFunctionMap
{
stabilitytest_Nova_stabilitytest_InnerClassStability_MyInnerFunctionMap_native_Nova_construct stabilitytest_InnerClassStability_MyInnerFunctionMap;
} stabilitytest_native_stabilitytest_InnerClassStability_MyInnerFunctionMap;

typedef stabilitytest_Nova_LambdaStability* (*stabilitytest_Nova_LambdaStability_native_Nova_construct)(stabilitytest_Nova_LambdaStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_LambdaStability
{
stabilitytest_Nova_LambdaStability_native_Nova_construct LambdaStability;
} stabilitytest_native_LambdaStability;
typedef stabilitytest_Nova_stabilitytest_LambdaStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_LambdaStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_LambdaStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_LambdaStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_LambdaStabilityFunctionMap_native_Nova_construct stabilitytest_LambdaStabilityFunctionMap;
} stabilitytest_native_stabilitytest_LambdaStabilityFunctionMap;

typedef stabilitytest_Nova_NetworkStability* (*stabilitytest_Nova_NetworkStability_native_Nova_construct)(stabilitytest_Nova_NetworkStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_NetworkStability
{
stabilitytest_Nova_NetworkStability_native_Nova_construct NetworkStability;
} stabilitytest_native_NetworkStability;
typedef stabilitytest_Nova_stabilitytest_NetworkStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_NetworkStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_NetworkStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_NetworkStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_NetworkStabilityFunctionMap_native_Nova_construct stabilitytest_NetworkStabilityFunctionMap;
} stabilitytest_native_stabilitytest_NetworkStabilityFunctionMap;

typedef stabilitytest_Nova_Node* (*stabilitytest_Nova_Node_native_Nova_construct)(stabilitytest_Nova_Node*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_Node
{
stabilitytest_Nova_Node_native_Nova_construct Node;
} stabilitytest_native_Node;
typedef stabilitytest_Nova_stabilitytest_NodeFunctionMap* (*stabilitytest_Nova_stabilitytest_NodeFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_NodeFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_NodeFunctionMap
{
stabilitytest_Nova_stabilitytest_NodeFunctionMap_native_Nova_construct stabilitytest_NodeFunctionMap;
} stabilitytest_native_stabilitytest_NodeFunctionMap;

typedef stabilitytest_Nova_PolymorphicSubClass* (*stabilitytest_Nova_PolymorphicSubClass_native_Nova_construct)(stabilitytest_Nova_PolymorphicSubClass*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_PolymorphicSubClass
{
stabilitytest_Nova_PolymorphicSubClass_native_Nova_construct PolymorphicSubClass;
} stabilitytest_native_PolymorphicSubClass;
typedef stabilitytest_Nova_stabilitytest_PolymorphicSubClassFunctionMap* (*stabilitytest_Nova_stabilitytest_PolymorphicSubClassFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_PolymorphicSubClassFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_PolymorphicSubClassFunctionMap
{
stabilitytest_Nova_stabilitytest_PolymorphicSubClassFunctionMap_native_Nova_construct stabilitytest_PolymorphicSubClassFunctionMap;
} stabilitytest_native_stabilitytest_PolymorphicSubClassFunctionMap;

typedef stabilitytest_Nova_PolymorphicSubClass* (*stabilitytest_Nova_PolymorphicSuperClass_native_Nova_giveBirth)(stabilitytest_Nova_PolymorphicSuperClass*, nova_exception_Nova_ExceptionData*);
typedef stabilitytest_Nova_PolymorphicSuperClass* (*stabilitytest_Nova_PolymorphicSuperClass_native_Nova_construct)(stabilitytest_Nova_PolymorphicSuperClass*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_PolymorphicSuperClass
{
stabilitytest_Nova_PolymorphicSuperClass_native_Nova_giveBirth giveBirth;
stabilitytest_Nova_PolymorphicSuperClass_native_Nova_construct PolymorphicSuperClass;
} stabilitytest_native_PolymorphicSuperClass;
typedef stabilitytest_Nova_stabilitytest_PolymorphicSuperClassFunctionMap* (*stabilitytest_Nova_stabilitytest_PolymorphicSuperClassFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_PolymorphicSuperClassFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_PolymorphicSuperClassFunctionMap
{
stabilitytest_Nova_stabilitytest_PolymorphicSuperClassFunctionMap_native_Nova_construct stabilitytest_PolymorphicSuperClassFunctionMap;
} stabilitytest_native_stabilitytest_PolymorphicSuperClassFunctionMap;

typedef stabilitytest_Nova_PolymorphismStability* (*stabilitytest_Nova_PolymorphismStability_native_Nova_construct)(stabilitytest_Nova_PolymorphismStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_PolymorphismStability
{
stabilitytest_Nova_PolymorphismStability_native_Nova_construct PolymorphismStability;
} stabilitytest_native_PolymorphismStability;
typedef stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_PolymorphismStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_native_Nova_construct stabilitytest_PolymorphismStabilityFunctionMap;
} stabilitytest_native_stabilitytest_PolymorphismStabilityFunctionMap;

typedef stabilitytest_Nova_RegexStability* (*stabilitytest_Nova_RegexStability_native_Nova_construct)(stabilitytest_Nova_RegexStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_RegexStability
{
stabilitytest_Nova_RegexStability_native_Nova_construct RegexStability;
} stabilitytest_native_RegexStability;
typedef stabilitytest_Nova_stabilitytest_RegexStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_RegexStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_RegexStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_RegexStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_RegexStabilityFunctionMap_native_Nova_construct stabilitytest_RegexStabilityFunctionMap;
} stabilitytest_native_stabilitytest_RegexStabilityFunctionMap;

typedef stabilitytest_Nova_StabilityExceptionHandler* (*stabilitytest_Nova_StabilityExceptionHandler_native_Nova_construct)(stabilitytest_Nova_StabilityExceptionHandler*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_StabilityExceptionHandler
{
stabilitytest_Nova_StabilityExceptionHandler_native_Nova_construct StabilityExceptionHandler;
} stabilitytest_native_StabilityExceptionHandler;
typedef stabilitytest_Nova_stabilitytest_StabilityExceptionHandlerFunctionMap* (*stabilitytest_Nova_stabilitytest_StabilityExceptionHandlerFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_StabilityExceptionHandlerFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_StabilityExceptionHandlerFunctionMap
{
stabilitytest_Nova_stabilitytest_StabilityExceptionHandlerFunctionMap_native_Nova_construct stabilitytest_StabilityExceptionHandlerFunctionMap;
} stabilitytest_native_stabilitytest_StabilityExceptionHandlerFunctionMap;

typedef void (*stabilitytest_Nova_StabilityTest_native_static_Nova_main)(stabilitytest_Nova_StabilityTest*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
typedef void (*stabilitytest_Nova_StabilityTest_native_Nova_fail)(stabilitytest_Nova_StabilityTest*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
typedef stabilitytest_Nova_StabilityTest* (*stabilitytest_Nova_StabilityTest_native_Nova_construct)(stabilitytest_Nova_StabilityTest*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_StabilityTest
{
stabilitytest_Nova_StabilityTest_native_Nova_fail fail;
stabilitytest_Nova_StabilityTest_native_Nova_construct StabilityTest;
} stabilitytest_native_StabilityTest;
typedef stabilitytest_Nova_stabilitytest_StabilityTestFunctionMap* (*stabilitytest_Nova_stabilitytest_StabilityTestFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_StabilityTestFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_StabilityTestFunctionMap
{
stabilitytest_Nova_stabilitytest_StabilityTestFunctionMap_native_Nova_construct stabilitytest_StabilityTestFunctionMap;
} stabilitytest_native_stabilitytest_StabilityTestFunctionMap;

typedef void (*stabilitytest_Nova_StabilityTestCase_native_Nova_test)(stabilitytest_Nova_StabilityTestCase*, nova_exception_Nova_ExceptionData*);
typedef stabilitytest_Nova_StabilityTestCase* (*stabilitytest_Nova_StabilityTestCase_native_Nova_construct)(stabilitytest_Nova_StabilityTestCase*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_StabilityTestCase
{
stabilitytest_Nova_StabilityTestCase_native_Nova_test test;
stabilitytest_Nova_StabilityTestCase_native_Nova_construct StabilityTestCase;
} stabilitytest_native_StabilityTestCase;
typedef stabilitytest_Nova_stabilitytest_StabilityTestCaseFunctionMap* (*stabilitytest_Nova_stabilitytest_StabilityTestCaseFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_StabilityTestCaseFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_StabilityTestCaseFunctionMap
{
stabilitytest_Nova_stabilitytest_StabilityTestCaseFunctionMap_native_Nova_construct stabilitytest_StabilityTestCaseFunctionMap;
} stabilitytest_native_stabilitytest_StabilityTestCaseFunctionMap;

typedef stabilitytest_Nova_StabilityTestException* (*stabilitytest_Nova_StabilityTestException_native_Nova_construct)(stabilitytest_Nova_StabilityTestException*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_StabilityTestException
{
stabilitytest_Nova_StabilityTestException_native_Nova_construct StabilityTestException;
} stabilitytest_native_StabilityTestException;
typedef stabilitytest_Nova_stabilitytest_StabilityTestExceptionFunctionMap* (*stabilitytest_Nova_stabilitytest_StabilityTestExceptionFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_StabilityTestExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_StabilityTestExceptionFunctionMap
{
stabilitytest_Nova_stabilitytest_StabilityTestExceptionFunctionMap_native_Nova_construct stabilitytest_StabilityTestExceptionFunctionMap;
} stabilitytest_native_stabilitytest_StabilityTestExceptionFunctionMap;

typedef stabilitytest_Nova_StaticImportStability* (*stabilitytest_Nova_StaticImportStability_native_Nova_construct)(stabilitytest_Nova_StaticImportStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_StaticImportStability
{
stabilitytest_Nova_StaticImportStability_native_Nova_construct StaticImportStability;
} stabilitytest_native_StaticImportStability;
typedef stabilitytest_Nova_stabilitytest_StaticImportStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_StaticImportStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_StaticImportStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_StaticImportStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_StaticImportStabilityFunctionMap_native_Nova_construct stabilitytest_StaticImportStabilityFunctionMap;
} stabilitytest_native_stabilitytest_StaticImportStabilityFunctionMap;

typedef stabilitytest_Nova_SyntaxStability* (*stabilitytest_Nova_SyntaxStability_native_Nova_construct)(stabilitytest_Nova_SyntaxStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_SyntaxStability
{
stabilitytest_Nova_SyntaxStability_native_Nova_construct SyntaxStability;
} stabilitytest_native_SyntaxStability;
typedef stabilitytest_Nova_stabilitytest_SyntaxStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_SyntaxStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_SyntaxStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_SyntaxStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_SyntaxStabilityFunctionMap_native_Nova_construct stabilitytest_SyntaxStabilityFunctionMap;
} stabilitytest_native_stabilitytest_SyntaxStabilityFunctionMap;

typedef stabilitytest_Nova_ThreadImplementation* (*stabilitytest_Nova_ThreadImplementation_native_Nova_construct)(stabilitytest_Nova_ThreadImplementation*, nova_exception_Nova_ExceptionData*, int, int);

typedef struct stabilitytest_native_ThreadImplementation
{
stabilitytest_Nova_ThreadImplementation_native_Nova_construct ThreadImplementation;
} stabilitytest_native_ThreadImplementation;
typedef stabilitytest_Nova_stabilitytest_ThreadImplementationFunctionMap* (*stabilitytest_Nova_stabilitytest_ThreadImplementationFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ThreadImplementationFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ThreadImplementationFunctionMap
{
stabilitytest_Nova_stabilitytest_ThreadImplementationFunctionMap_native_Nova_construct stabilitytest_ThreadImplementationFunctionMap;
} stabilitytest_native_stabilitytest_ThreadImplementationFunctionMap;

typedef stabilitytest_Nova_ThreadStability* (*stabilitytest_Nova_ThreadStability_native_Nova_construct)(stabilitytest_Nova_ThreadStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_ThreadStability
{
stabilitytest_Nova_ThreadStability_native_Nova_construct ThreadStability;
} stabilitytest_native_ThreadStability;
typedef stabilitytest_Nova_stabilitytest_ThreadStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_ThreadStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ThreadStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ThreadStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_ThreadStabilityFunctionMap_native_Nova_construct stabilitytest_ThreadStabilityFunctionMap;
} stabilitytest_native_stabilitytest_ThreadStabilityFunctionMap;

typedef stabilitytest_Nova_TimeStability* (*stabilitytest_Nova_TimeStability_native_Nova_construct)(stabilitytest_Nova_TimeStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_TimeStability
{
stabilitytest_Nova_TimeStability_native_Nova_construct TimeStability;
} stabilitytest_native_TimeStability;
typedef stabilitytest_Nova_stabilitytest_TimeStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_TimeStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_TimeStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_TimeStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_TimeStabilityFunctionMap_native_Nova_construct stabilitytest_TimeStabilityFunctionMap;
} stabilitytest_native_stabilitytest_TimeStabilityFunctionMap;

typedef stabilitytest_Nova_ToStringStability* (*stabilitytest_Nova_ToStringStability_native_Nova_construct)(stabilitytest_Nova_ToStringStability*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_ToStringStability
{
stabilitytest_Nova_ToStringStability_native_Nova_construct ToStringStability;
} stabilitytest_native_ToStringStability;
typedef stabilitytest_Nova_stabilitytest_ToStringStabilityFunctionMap* (*stabilitytest_Nova_stabilitytest_ToStringStabilityFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_ToStringStabilityFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_ToStringStabilityFunctionMap
{
stabilitytest_Nova_stabilitytest_ToStringStabilityFunctionMap_native_Nova_construct stabilitytest_ToStringStabilityFunctionMap;
} stabilitytest_native_stabilitytest_ToStringStabilityFunctionMap;

typedef stabilitytest_Nova_UnstableException* (*stabilitytest_Nova_UnstableException_native_Nova_construct)(stabilitytest_Nova_UnstableException*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);

typedef struct stabilitytest_native_UnstableException
{
stabilitytest_Nova_UnstableException_native_Nova_construct UnstableException;
} stabilitytest_native_UnstableException;
typedef stabilitytest_Nova_stabilitytest_UnstableExceptionFunctionMap* (*stabilitytest_Nova_stabilitytest_UnstableExceptionFunctionMap_native_Nova_construct)(stabilitytest_Nova_stabilitytest_UnstableExceptionFunctionMap*, nova_exception_Nova_ExceptionData*);

typedef struct stabilitytest_native_stabilitytest_UnstableExceptionFunctionMap
{
stabilitytest_Nova_stabilitytest_UnstableExceptionFunctionMap_native_Nova_construct stabilitytest_UnstableExceptionFunctionMap;
} stabilitytest_native_stabilitytest_UnstableExceptionFunctionMap;


typedef struct nova_env
{
nova_native_Object nova_Object;
nova_native_String nova_String;
nova_native_nova_StringFunctionMap nova_nova_StringFunctionMap;
nova_native_Substring nova_Substring;
nova_native_nova_SubstringFunctionMap nova_nova_SubstringFunctionMap;
nova_native_System nova_System;
nova_native_nova_SystemFunctionMap nova_nova_SystemFunctionMap;
nova_ar_native_ImageTracker nova_ar_ImageTracker;
nova_ar_native_nova_ar_ImageTrackerFunctionMap nova_ar_nova_ar_ImageTrackerFunctionMap;
nova_ar_native_TrackPoint nova_ar_TrackPoint;
nova_ar_native_nova_ar_TrackPointFunctionMap nova_ar_nova_ar_TrackPointFunctionMap;
nova_database_native_DBConnector nova_database_DBConnector;
nova_database_native_nova_database_DBConnectorFunctionMap nova_database_nova_database_DBConnectorFunctionMap;
nova_database_native_ResultSet nova_database_ResultSet;
nova_database_native_nova_database_ResultSetFunctionMap nova_database_nova_database_ResultSetFunctionMap;
nova_datastruct_native_BinaryNode nova_datastruct_BinaryNode;
nova_datastruct_native_nova_datastruct_BinaryNodeFunctionMap nova_datastruct_nova_datastruct_BinaryNodeFunctionMap;
nova_datastruct_native_BinaryTree nova_datastruct_BinaryTree;
nova_datastruct_native_nova_datastruct_BinaryTreeFunctionMap nova_datastruct_nova_datastruct_BinaryTreeFunctionMap;
nova_datastruct_native_Bounds nova_datastruct_Bounds;
nova_datastruct_native_nova_datastruct_BoundsFunctionMap nova_datastruct_nova_datastruct_BoundsFunctionMap;
nova_datastruct_native_Comparable nova_datastruct_Comparable;
nova_datastruct_native_HashMap nova_datastruct_HashMap;
nova_datastruct_native_nova_datastruct_HashMapFunctionMap nova_datastruct_nova_datastruct_HashMapFunctionMap;
nova_datastruct_native_HashSet nova_datastruct_HashSet;
nova_datastruct_native_nova_datastruct_HashSetFunctionMap nova_datastruct_nova_datastruct_HashSetFunctionMap;
nova_datastruct_native_ImmutableHashMap nova_datastruct_ImmutableHashMap;
nova_datastruct_native_nova_datastruct_ImmutableHashMapFunctionMap nova_datastruct_nova_datastruct_ImmutableHashMapFunctionMap;
nova_datastruct_native_Node nova_datastruct_Node;
nova_datastruct_native_nova_datastruct_NodeFunctionMap nova_datastruct_nova_datastruct_NodeFunctionMap;
nova_datastruct_native_Pair nova_datastruct_Pair;
nova_datastruct_native_nova_datastruct_PairFunctionMap nova_datastruct_nova_datastruct_PairFunctionMap;
nova_datastruct_native_ReversibleHashMap nova_datastruct_ReversibleHashMap;
nova_datastruct_native_nova_datastruct_ReversibleHashMapFunctionMap nova_datastruct_nova_datastruct_ReversibleHashMapFunctionMap;
nova_datastruct_native_Tree nova_datastruct_Tree;
nova_datastruct_native_nova_datastruct_TreeFunctionMap nova_datastruct_nova_datastruct_TreeFunctionMap;
nova_datastruct_native_Tuple nova_datastruct_Tuple;
nova_datastruct_native_nova_datastruct_TupleFunctionMap nova_datastruct_nova_datastruct_TupleFunctionMap;
nova_datastruct_native_Tuple2 nova_datastruct_Tuple2;
nova_datastruct_native_nova_datastruct_Tuple2FunctionMap nova_datastruct_nova_datastruct_Tuple2FunctionMap;
nova_datastruct_list_native_Array nova_datastruct_list_Array;
nova_datastruct_list_native_nova_datastruct_list_ArrayFunctionMap nova_datastruct_list_nova_datastruct_list_ArrayFunctionMap;
nova_datastruct_list_native_ArrayIterator nova_datastruct_list_ArrayIterator;
nova_datastruct_list_native_nova_datastruct_list_ArrayIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_ArrayIteratorFunctionMap;
nova_datastruct_list_native_CharArray nova_datastruct_list_CharArray;
nova_datastruct_list_native_nova_datastruct_list_CharArrayFunctionMap nova_datastruct_list_nova_datastruct_list_CharArrayFunctionMap;
nova_datastruct_list_native_CharArrayIterator nova_datastruct_list_CharArrayIterator;
nova_datastruct_list_native_nova_datastruct_list_CharArrayIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_CharArrayIteratorFunctionMap;
nova_datastruct_list_native_CompiledList nova_datastruct_list_CompiledList;
nova_datastruct_list_native_nova_datastruct_list_CompiledListFunctionMap nova_datastruct_list_nova_datastruct_list_CompiledListFunctionMap;
nova_datastruct_list_native_DoubleArray nova_datastruct_list_DoubleArray;
nova_datastruct_list_native_nova_datastruct_list_DoubleArrayFunctionMap nova_datastruct_list_nova_datastruct_list_DoubleArrayFunctionMap;
nova_datastruct_list_native_DoubleArrayIterator nova_datastruct_list_DoubleArrayIterator;
nova_datastruct_list_native_nova_datastruct_list_DoubleArrayIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_DoubleArrayIteratorFunctionMap;
nova_datastruct_list_native_EmptyStackException nova_datastruct_list_EmptyStackException;
nova_datastruct_list_native_nova_datastruct_list_EmptyStackExceptionFunctionMap nova_datastruct_list_nova_datastruct_list_EmptyStackExceptionFunctionMap;
nova_datastruct_list_native_ImmutableArray nova_datastruct_list_ImmutableArray;
nova_datastruct_list_native_nova_datastruct_list_ImmutableArrayFunctionMap nova_datastruct_list_nova_datastruct_list_ImmutableArrayFunctionMap;
nova_datastruct_list_native_ImmutableArrayIterator nova_datastruct_list_ImmutableArrayIterator;
nova_datastruct_list_native_nova_datastruct_list_ImmutableArrayIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_ImmutableArrayIteratorFunctionMap;
nova_datastruct_list_native_ImmutableCharArray nova_datastruct_list_ImmutableCharArray;
nova_datastruct_list_native_nova_datastruct_list_ImmutableCharArrayFunctionMap nova_datastruct_list_nova_datastruct_list_ImmutableCharArrayFunctionMap;
nova_datastruct_list_native_ImmutableCharArrayIterator nova_datastruct_list_ImmutableCharArrayIterator;
nova_datastruct_list_native_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_ImmutableCharArrayIteratorFunctionMap;
nova_datastruct_list_native_IntArray nova_datastruct_list_IntArray;
nova_datastruct_list_native_nova_datastruct_list_IntArrayFunctionMap nova_datastruct_list_nova_datastruct_list_IntArrayFunctionMap;
nova_datastruct_list_native_IntArrayIterator nova_datastruct_list_IntArrayIterator;
nova_datastruct_list_native_nova_datastruct_list_IntArrayIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_IntArrayIteratorFunctionMap;
nova_datastruct_list_native_IntRange nova_datastruct_list_IntRange;
nova_datastruct_list_native_nova_datastruct_list_IntRangeFunctionMap nova_datastruct_list_nova_datastruct_list_IntRangeFunctionMap;
nova_datastruct_list_native_IntRangeIterator nova_datastruct_list_IntRangeIterator;
nova_datastruct_list_native_nova_datastruct_list_IntRangeIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_IntRangeIteratorFunctionMap;
nova_datastruct_list_native_Iterable nova_datastruct_list_Iterable;
nova_datastruct_list_native_Iterator nova_datastruct_list_Iterator;
nova_datastruct_list_native_LinkedList nova_datastruct_list_LinkedList;
nova_datastruct_list_native_nova_datastruct_list_LinkedListFunctionMap nova_datastruct_list_nova_datastruct_list_LinkedListFunctionMap;
nova_datastruct_list_native_LinkedListIterator nova_datastruct_list_LinkedListIterator;
nova_datastruct_list_native_nova_datastruct_list_LinkedListIteratorFunctionMap nova_datastruct_list_nova_datastruct_list_LinkedListIteratorFunctionMap;
nova_datastruct_list_native_List nova_datastruct_list_List;
nova_datastruct_list_native_ListNode nova_datastruct_list_ListNode;
nova_datastruct_list_native_nova_datastruct_list_ListNodeFunctionMap nova_datastruct_list_nova_datastruct_list_ListNodeFunctionMap;
nova_datastruct_list_native_NoSuchElementException nova_datastruct_list_NoSuchElementException;
nova_datastruct_list_native_nova_datastruct_list_NoSuchElementExceptionFunctionMap nova_datastruct_list_nova_datastruct_list_NoSuchElementExceptionFunctionMap;
nova_datastruct_list_native_OrderedList nova_datastruct_list_OrderedList;
nova_datastruct_list_native_Queue nova_datastruct_list_Queue;
nova_datastruct_list_native_nova_datastruct_list_QueueFunctionMap nova_datastruct_list_nova_datastruct_list_QueueFunctionMap;
nova_datastruct_list_native_Stack nova_datastruct_list_Stack;
nova_datastruct_list_native_nova_datastruct_list_StackFunctionMap nova_datastruct_list_nova_datastruct_list_StackFunctionMap;
nova_datastruct_list_native_StringCharArray nova_datastruct_list_StringCharArray;
nova_datastruct_list_native_nova_datastruct_list_StringCharArrayFunctionMap nova_datastruct_list_nova_datastruct_list_StringCharArrayFunctionMap;
nova_datastruct_list_native_SubstringCharArray nova_datastruct_list_SubstringCharArray;
nova_datastruct_list_native_nova_datastruct_list_SubstringCharArrayFunctionMap nova_datastruct_list_nova_datastruct_list_SubstringCharArrayFunctionMap;
nova_exception_native_Backtraces nova_exception_Backtraces;
nova_exception_native_nova_exception_BacktracesFunctionMap nova_exception_nova_exception_BacktracesFunctionMap;
nova_exception_native_CaughtException nova_exception_CaughtException;
nova_exception_native_nova_exception_CaughtExceptionFunctionMap nova_exception_nova_exception_CaughtExceptionFunctionMap;
nova_exception_native_DivideByZeroException nova_exception_DivideByZeroException;
nova_exception_native_nova_exception_DivideByZeroExceptionFunctionMap nova_exception_nova_exception_DivideByZeroExceptionFunctionMap;
nova_exception_native_Exception nova_exception_Exception;
nova_exception_native_nova_exception_ExceptionFunctionMap nova_exception_nova_exception_ExceptionFunctionMap;
nova_exception_native_ExceptionData nova_exception_ExceptionData;
nova_exception_native_nova_exception_ExceptionDataFunctionMap nova_exception_nova_exception_ExceptionDataFunctionMap;
nova_exception_native_InvalidArgumentException nova_exception_InvalidArgumentException;
nova_exception_native_nova_exception_InvalidArgumentExceptionFunctionMap nova_exception_nova_exception_InvalidArgumentExceptionFunctionMap;
nova_exception_native_InvalidOperationException nova_exception_InvalidOperationException;
nova_exception_native_nova_exception_InvalidOperationExceptionFunctionMap nova_exception_nova_exception_InvalidOperationExceptionFunctionMap;
nova_exception_native_UnimplementedOperationException nova_exception_UnimplementedOperationException;
nova_exception_native_nova_exception_UnimplementedOperationExceptionFunctionMap nova_exception_nova_exception_UnimplementedOperationExceptionFunctionMap;
nova_gc_native_GC nova_gc_GC;
nova_gc_native_nova_gc_GCFunctionMap nova_gc_nova_gc_GCFunctionMap;
nova_io_native_Console nova_io_Console;
nova_io_native_nova_io_ConsoleFunctionMap nova_io_nova_io_ConsoleFunctionMap;
nova_io_native_File nova_io_File;
nova_io_native_nova_io_FileFunctionMap nova_io_nova_io_FileFunctionMap;
nova_io_native_FileNotFoundException nova_io_FileNotFoundException;
nova_io_native_nova_io_FileNotFoundExceptionFunctionMap nova_io_nova_io_FileNotFoundExceptionFunctionMap;
nova_io_native_FileReader nova_io_FileReader;
nova_io_native_nova_io_FileReaderFunctionMap nova_io_nova_io_FileReaderFunctionMap;
nova_io_native_FileWriter nova_io_FileWriter;
nova_io_native_nova_io_FileWriterFunctionMap nova_io_nova_io_FileWriterFunctionMap;
nova_io_native_InputStream nova_io_InputStream;
nova_io_native_OutputStream nova_io_OutputStream;
nova_io_native_nova_io_OutputStreamFunctionMap nova_io_nova_io_OutputStreamFunctionMap;
nova_io_native_StreamReader nova_io_StreamReader;
nova_io_native_nova_io_StreamReaderFunctionMap nova_io_nova_io_StreamReaderFunctionMap;
nova_math_native_ArithmeticSequence nova_math_ArithmeticSequence;
nova_math_native_nova_math_ArithmeticSequenceFunctionMap nova_math_nova_math_ArithmeticSequenceFunctionMap;
nova_math_native_Diekstra nova_math_Diekstra;
nova_math_native_nova_math_DiekstraFunctionMap nova_math_nova_math_DiekstraFunctionMap;
nova_math_native_GeometricSequence nova_math_GeometricSequence;
nova_math_native_nova_math_GeometricSequenceFunctionMap nova_math_nova_math_GeometricSequenceFunctionMap;
nova_math_native_Graph nova_math_Graph;
nova_math_native_nova_math_GraphFunctionMap nova_math_nova_math_GraphFunctionMap;
nova_math_native_InvalidNumericStatementException nova_math_InvalidNumericStatementException;
nova_math_native_nova_math_InvalidNumericStatementExceptionFunctionMap nova_math_nova_math_InvalidNumericStatementExceptionFunctionMap;
nova_math_native_Math nova_math_Math;
nova_math_native_nova_math_MathFunctionMap nova_math_nova_math_MathFunctionMap;
nova_math_native_Matrix nova_math_Matrix;
nova_math_native_nova_math_MatrixFunctionMap nova_math_nova_math_MatrixFunctionMap;
nova_math_native_NumericOperand nova_math_NumericOperand;
nova_math_native_nova_math_NumericOperandFunctionMap nova_math_nova_math_NumericOperandFunctionMap;
nova_math_native_NumericOperation nova_math_NumericOperation;
nova_math_native_nova_math_NumericOperationFunctionMap nova_math_nova_math_NumericOperationFunctionMap;
nova_math_native_NumericStatement nova_math_NumericStatement;
nova_math_native_nova_math_NumericStatementFunctionMap nova_math_nova_math_NumericStatementFunctionMap;
nova_math_native_NumericTree nova_math_NumericTree;
nova_math_native_nova_math_NumericTreeFunctionMap nova_math_nova_math_NumericTreeFunctionMap;
nova_math_native_Polynomial nova_math_Polynomial;
nova_math_native_nova_math_PolynomialFunctionMap nova_math_nova_math_PolynomialFunctionMap;
nova_math_native_Sequence nova_math_Sequence;
nova_math_native_nova_math_SequenceFunctionMap nova_math_nova_math_SequenceFunctionMap;
nova_math_native_Statement nova_math_Statement;
nova_math_native_nova_math_StatementFunctionMap nova_math_nova_math_StatementFunctionMap;
nova_math_native_StatementComponent nova_math_StatementComponent;
nova_math_native_nova_math_StatementComponentFunctionMap nova_math_nova_math_StatementComponentFunctionMap;
nova_math_native_VariableOperand nova_math_VariableOperand;
nova_math_native_nova_math_VariableOperandFunctionMap nova_math_nova_math_VariableOperandFunctionMap;
nova_math_native_Vector nova_math_Vector;
nova_math_native_nova_math_VectorFunctionMap nova_math_nova_math_VectorFunctionMap;
nova_math_native_Vector2D nova_math_Vector2D;
nova_math_native_nova_math_Vector2DFunctionMap nova_math_nova_math_Vector2DFunctionMap;
nova_math_native_Vector3D nova_math_Vector3D;
nova_math_native_nova_math_Vector3DFunctionMap nova_math_nova_math_Vector3DFunctionMap;
nova_math_native_Vector4D nova_math_Vector4D;
nova_math_native_nova_math_Vector4DFunctionMap nova_math_nova_math_Vector4DFunctionMap;
nova_math_calculus_native_Calculus nova_math_calculus_Calculus;
nova_math_calculus_native_nova_math_calculus_CalculusFunctionMap nova_math_calculus_nova_math_calculus_CalculusFunctionMap;
nova_math_huffman_native_HuffmanTree nova_math_huffman_HuffmanTree;
nova_math_huffman_native_nova_math_huffman_HuffmanTreeFunctionMap nova_math_huffman_nova_math_huffman_HuffmanTreeFunctionMap;
nova_math_logic_native_Conclusion nova_math_logic_Conclusion;
nova_math_logic_native_nova_math_logic_ConclusionFunctionMap nova_math_logic_nova_math_logic_ConclusionFunctionMap;
nova_math_logic_native_Hypothesis nova_math_logic_Hypothesis;
nova_math_logic_native_nova_math_logic_HypothesisFunctionMap nova_math_logic_nova_math_logic_HypothesisFunctionMap;
nova_math_logic_native_InvalidFormulaException nova_math_logic_InvalidFormulaException;
nova_math_logic_native_nova_math_logic_InvalidFormulaExceptionFunctionMap nova_math_logic_nova_math_logic_InvalidFormulaExceptionFunctionMap;
nova_math_logic_native_LogicalConnective nova_math_logic_LogicalConnective;
nova_math_logic_native_nova_math_logic_LogicalConnectiveFunctionMap nova_math_logic_nova_math_logic_LogicalConnectiveFunctionMap;
nova_math_logic_native_LogicalStatement nova_math_logic_LogicalStatement;
nova_math_logic_native_nova_math_logic_LogicalStatementFunctionMap nova_math_logic_nova_math_logic_LogicalStatementFunctionMap;
nova_math_logic_native_StatementComponent nova_math_logic_StatementComponent;
nova_math_logic_native_nova_math_logic_StatementComponentFunctionMap nova_math_logic_nova_math_logic_StatementComponentFunctionMap;
nova_math_logic_native_StatementGroup nova_math_logic_StatementGroup;
nova_math_logic_native_nova_math_logic_StatementGroupFunctionMap nova_math_logic_nova_math_logic_StatementGroupFunctionMap;
nova_math_logic_native_StatementLetter nova_math_logic_StatementLetter;
nova_math_logic_native_nova_math_logic_StatementLetterFunctionMap nova_math_logic_nova_math_logic_StatementLetterFunctionMap;
nova_math_logic_native_WFF nova_math_logic_WFF;
nova_math_logic_native_nova_math_logic_WFFFunctionMap nova_math_logic_nova_math_logic_WFFFunctionMap;
nova_meta_native_Class nova_meta_Class;
nova_meta_native_nova_meta_ClassFunctionMap nova_meta_nova_meta_ClassFunctionMap;
nova_meta_native_Field nova_meta_Field;
nova_meta_native_nova_meta_FieldFunctionMap nova_meta_nova_meta_FieldFunctionMap;
nova_meta_native_FunctionMap nova_meta_FunctionMap;
nova_meta_native_nova_meta_FunctionMapFunctionMap nova_meta_nova_meta_FunctionMapFunctionMap;
nova_meta_native_GenericArgument nova_meta_GenericArgument;
nova_meta_native_nova_meta_GenericArgumentFunctionMap nova_meta_nova_meta_GenericArgumentFunctionMap;
nova_meta_native_GenericParameter nova_meta_GenericParameter;
nova_meta_native_nova_meta_GenericParameterFunctionMap nova_meta_nova_meta_GenericParameterFunctionMap;
nova_meta_native_Type nova_meta_Type;
nova_meta_native_nova_meta_TypeFunctionMap nova_meta_nova_meta_TypeFunctionMap;
nova_network_native_ClientSocket nova_network_ClientSocket;
nova_network_native_nova_network_ClientSocketFunctionMap nova_network_nova_network_ClientSocketFunctionMap;
nova_network_native_ConnectionSocket nova_network_ConnectionSocket;
nova_network_native_nova_network_ConnectionSocketFunctionMap nova_network_nova_network_ConnectionSocketFunctionMap;
nova_network_native_NetworkInputStream nova_network_NetworkInputStream;
nova_network_native_nova_network_NetworkInputStreamFunctionMap nova_network_nova_network_NetworkInputStreamFunctionMap;
nova_network_native_NetworkOutputStream nova_network_NetworkOutputStream;
nova_network_native_nova_network_NetworkOutputStreamFunctionMap nova_network_nova_network_NetworkOutputStreamFunctionMap;
nova_network_native_ServerSocket nova_network_ServerSocket;
nova_network_native_nova_network_ServerSocketFunctionMap nova_network_nova_network_ServerSocketFunctionMap;
nova_network_native_Socket nova_network_Socket;
nova_network_native_nova_network_SocketFunctionMap nova_network_nova_network_SocketFunctionMap;
nova_operators_native_EqualsOperator nova_operators_EqualsOperator;
nova_operators_native_MultiplyEqualsOperator nova_operators_MultiplyEqualsOperator;
nova_operators_native_MultiplyOperator nova_operators_MultiplyOperator;
nova_operators_native_NotEqualToOperator nova_operators_NotEqualToOperator;
nova_operators_native_PlusEqualsOperator nova_operators_PlusEqualsOperator;
nova_operators_native_PlusOperator nova_operators_PlusOperator;
nova_primitive_native_Bool nova_primitive_Bool;
nova_primitive_native_nova_primitive_BoolFunctionMap nova_primitive_nova_primitive_BoolFunctionMap;
nova_primitive_native_Null nova_primitive_Null;
nova_primitive_native_nova_primitive_NullFunctionMap nova_primitive_nova_primitive_NullFunctionMap;
nova_primitive_native_Primitive nova_primitive_Primitive;
nova_primitive_native_nova_primitive_PrimitiveFunctionMap nova_primitive_nova_primitive_PrimitiveFunctionMap;
nova_primitive_number_native_Byte nova_primitive_number_Byte;
nova_primitive_number_native_nova_primitive_number_ByteFunctionMap nova_primitive_number_nova_primitive_number_ByteFunctionMap;
nova_primitive_number_native_Char nova_primitive_number_Char;
nova_primitive_number_native_nova_primitive_number_CharFunctionMap nova_primitive_number_nova_primitive_number_CharFunctionMap;
nova_primitive_number_native_Double nova_primitive_number_Double;
nova_primitive_number_native_nova_primitive_number_DoubleFunctionMap nova_primitive_number_nova_primitive_number_DoubleFunctionMap;
nova_primitive_number_native_Float nova_primitive_number_Float;
nova_primitive_number_native_nova_primitive_number_FloatFunctionMap nova_primitive_number_nova_primitive_number_FloatFunctionMap;
nova_primitive_number_native_Int nova_primitive_number_Int;
nova_primitive_number_native_nova_primitive_number_IntFunctionMap nova_primitive_number_nova_primitive_number_IntFunctionMap;
nova_primitive_number_native_Integer nova_primitive_number_Integer;
nova_primitive_number_native_Long nova_primitive_number_Long;
nova_primitive_number_native_nova_primitive_number_LongFunctionMap nova_primitive_number_nova_primitive_number_LongFunctionMap;
nova_primitive_number_native_Number nova_primitive_number_Number;
nova_primitive_number_native_nova_primitive_number_NumberFunctionMap nova_primitive_number_nova_primitive_number_NumberFunctionMap;
nova_primitive_number_native_RealNumber nova_primitive_number_RealNumber;
nova_primitive_number_native_Short nova_primitive_number_Short;
nova_primitive_number_native_nova_primitive_number_ShortFunctionMap nova_primitive_number_nova_primitive_number_ShortFunctionMap;
nova_process_native_Process nova_process_Process;
nova_process_native_nova_process_ProcessFunctionMap nova_process_nova_process_ProcessFunctionMap;
nova_regex_native_Match nova_regex_Match;
nova_regex_native_nova_regex_MatchFunctionMap nova_regex_nova_regex_MatchFunctionMap;
nova_regex_native_Pattern nova_regex_Pattern;
nova_regex_native_nova_regex_PatternFunctionMap nova_regex_nova_regex_PatternFunctionMap;
nova_regex_native_Regex nova_regex_Regex;
nova_regex_native_nova_regex_RegexFunctionMap nova_regex_nova_regex_RegexFunctionMap;
nova_security_native_MD5 nova_security_MD5;
nova_security_native_nova_security_MD5FunctionMap nova_security_nova_security_MD5FunctionMap;
nova_security_native_Sha256 nova_security_Sha256;
nova_security_native_nova_security_Sha256FunctionMap nova_security_nova_security_Sha256FunctionMap;
nova_star_native_Frame nova_star_Frame;
nova_star_native_nova_star_FrameFunctionMap nova_star_nova_star_FrameFunctionMap;
nova_star_native_Window nova_star_Window;
nova_star_native_nova_star_WindowFunctionMap nova_star_nova_star_WindowFunctionMap;
nova_star_native_WindowThread nova_star_WindowThread;
nova_star_native_nova_star_WindowThreadFunctionMap nova_star_nova_star_WindowThreadFunctionMap;
nova_thread_native_Thread nova_thread_Thread;
nova_thread_native_nova_thread_ThreadFunctionMap nova_thread_nova_thread_ThreadFunctionMap;
nova_thread_native_UncaughtExceptionHandler nova_thread_UncaughtExceptionHandler;
nova_thread_native_nova_thread_UncaughtExceptionHandlerFunctionMap nova_thread_nova_thread_UncaughtExceptionHandlerFunctionMap;
nova_thread_async_native_Async nova_thread_async_Async;
nova_thread_async_native_nova_thread_async_AsyncFunctionMap nova_thread_async_nova_thread_async_AsyncFunctionMap;
nova_thread_async_native_Task nova_thread_async_Task;
nova_thread_async_native_nova_thread_async_TaskFunctionMap nova_thread_async_nova_thread_async_TaskFunctionMap;
nova_time_native_CumulativeTimer nova_time_CumulativeTimer;
nova_time_native_nova_time_CumulativeTimerFunctionMap nova_time_nova_time_CumulativeTimerFunctionMap;
nova_time_native_Date nova_time_Date;
nova_time_native_nova_time_DateFunctionMap nova_time_nova_time_DateFunctionMap;
nova_time_native_Time nova_time_Time;
nova_time_native_nova_time_TimeFunctionMap nova_time_nova_time_TimeFunctionMap;
nova_time_native_Timer nova_time_Timer;
nova_time_native_nova_time_TimerFunctionMap nova_time_nova_time_TimerFunctionMap;
nova_web_js_json_native_Json nova_web_js_json_Json;
nova_web_js_json_native_nova_web_js_json_JsonFunctionMap nova_web_js_json_nova_web_js_json_JsonFunctionMap;
nova_web_svg_native_Svg nova_web_svg_Svg;
nova_web_svg_native_nova_web_svg_SvgFunctionMap nova_web_svg_nova_web_svg_SvgFunctionMap;
nova_web_svg_native_SvgCircle nova_web_svg_SvgCircle;
nova_web_svg_native_nova_web_svg_SvgCircleFunctionMap nova_web_svg_nova_web_svg_SvgCircleFunctionMap;
nova_web_svg_native_SvgComponent nova_web_svg_SvgComponent;
nova_web_svg_native_nova_web_svg_SvgComponentFunctionMap nova_web_svg_nova_web_svg_SvgComponentFunctionMap;
nova_web_svg_native_SvgComponentList nova_web_svg_SvgComponentList;
nova_web_svg_native_nova_web_svg_SvgComponentListFunctionMap nova_web_svg_nova_web_svg_SvgComponentListFunctionMap;
nova_web_svg_native_SvgComponentNode nova_web_svg_SvgComponentNode;
nova_web_svg_native_nova_web_svg_SvgComponentNodeFunctionMap nova_web_svg_nova_web_svg_SvgComponentNodeFunctionMap;
nova_web_svg_native_SvgMainComponent nova_web_svg_SvgMainComponent;
nova_web_svg_native_nova_web_svg_SvgMainComponentFunctionMap nova_web_svg_nova_web_svg_SvgMainComponentFunctionMap;
nova_web_svg_no3_native_No3 nova_web_svg_no3_No3;
nova_web_svg_no3_native_nova_web_svg_no3_No3FunctionMap nova_web_svg_no3_nova_web_svg_no3_No3FunctionMap;
nova_web_svg_no3_native_No3Node nova_web_svg_no3_No3Node;
nova_web_svg_no3_native_nova_web_svg_no3_No3NodeFunctionMap nova_web_svg_no3_nova_web_svg_no3_No3NodeFunctionMap;
nova_web_svg_no3_native_No3Select nova_web_svg_no3_No3Select;
nova_web_svg_no3_native_nova_web_svg_no3_No3SelectFunctionMap nova_web_svg_no3_nova_web_svg_no3_No3SelectFunctionMap;
nova_web_svg_no3_native_No3SelectAll nova_web_svg_no3_No3SelectAll;
nova_web_svg_no3_native_nova_web_svg_no3_No3SelectAllFunctionMap nova_web_svg_no3_nova_web_svg_no3_No3SelectAllFunctionMap;
spectra_native_InvalidParseException spectra_InvalidParseException;
spectra_native_spectra_InvalidParseExceptionFunctionMap spectra_spectra_InvalidParseExceptionFunctionMap;
spectra_native_Spectra spectra_Spectra;
spectra_native_spectra_SpectraFunctionMap spectra_spectra_SpectraFunctionMap;
spectra_native_SyntaxErrorException spectra_SyntaxErrorException;
spectra_native_spectra_SyntaxErrorExceptionFunctionMap spectra_spectra_SyntaxErrorExceptionFunctionMap;
spectra_native_SyntaxMessage spectra_SyntaxMessage;
spectra_native_spectra_SyntaxMessageFunctionMap spectra_spectra_SyntaxMessageFunctionMap;
spectra_engines_native_CodeGeneratorEngine spectra_engines_CodeGeneratorEngine;
spectra_engines_native_spectra_engines_CodeGeneratorEngineFunctionMap spectra_engines_spectra_engines_CodeGeneratorEngineFunctionMap;
spectra_error_native_UnimplementedOperationException spectra_error_UnimplementedOperationException;
spectra_error_native_spectra_error_UnimplementedOperationExceptionFunctionMap spectra_error_spectra_error_UnimplementedOperationExceptionFunctionMap;
spectra_tree_native_AnnotationSearchResult spectra_tree_AnnotationSearchResult;
spectra_tree_native_spectra_tree_AnnotationSearchResultFunctionMap spectra_tree_spectra_tree_AnnotationSearchResultFunctionMap;
spectra_tree_native_StatementIterator spectra_tree_StatementIterator;
spectra_tree_native_spectra_tree_StatementIteratorFunctionMap spectra_tree_spectra_tree_StatementIteratorFunctionMap;
spectra_tree_native_SyntaxTree spectra_tree_SyntaxTree;
spectra_tree_native_spectra_tree_SyntaxTreeFunctionMap spectra_tree_spectra_tree_SyntaxTreeFunctionMap;
spectra_tree_nodes_native_Abstractable spectra_tree_nodes_Abstractable;
spectra_tree_nodes_native_Accessible spectra_tree_nodes_Accessible;
spectra_tree_nodes_native_ArgumentList spectra_tree_nodes_ArgumentList;
spectra_tree_nodes_native_spectra_tree_nodes_ArgumentListFunctionMap spectra_tree_nodes_spectra_tree_nodes_ArgumentListFunctionMap;
spectra_tree_nodes_native_Cast spectra_tree_nodes_Cast;
spectra_tree_nodes_native_spectra_tree_nodes_CastFunctionMap spectra_tree_nodes_spectra_tree_nodes_CastFunctionMap;
spectra_tree_nodes_native_ClassDeclaration spectra_tree_nodes_ClassDeclaration;
spectra_tree_nodes_native_spectra_tree_nodes_ClassDeclarationFunctionMap spectra_tree_nodes_spectra_tree_nodes_ClassDeclarationFunctionMap;
spectra_tree_nodes_native_Identifier spectra_tree_nodes_Identifier;
spectra_tree_nodes_native_spectra_tree_nodes_IdentifierFunctionMap spectra_tree_nodes_spectra_tree_nodes_IdentifierFunctionMap;
spectra_tree_nodes_native_Import spectra_tree_nodes_Import;
spectra_tree_nodes_native_spectra_tree_nodes_ImportFunctionMap spectra_tree_nodes_spectra_tree_nodes_ImportFunctionMap;
spectra_tree_nodes_native_ImportList spectra_tree_nodes_ImportList;
spectra_tree_nodes_native_spectra_tree_nodes_ImportListFunctionMap spectra_tree_nodes_spectra_tree_nodes_ImportListFunctionMap;
spectra_tree_nodes_native_InterfaceDeclaration spectra_tree_nodes_InterfaceDeclaration;
spectra_tree_nodes_native_spectra_tree_nodes_InterfaceDeclarationFunctionMap spectra_tree_nodes_spectra_tree_nodes_InterfaceDeclarationFunctionMap;
spectra_tree_nodes_native_Listener spectra_tree_nodes_Listener;
spectra_tree_nodes_native_Literal spectra_tree_nodes_Literal;
spectra_tree_nodes_native_spectra_tree_nodes_LiteralFunctionMap spectra_tree_nodes_spectra_tree_nodes_LiteralFunctionMap;
spectra_tree_nodes_native_Node spectra_tree_nodes_Node;
spectra_tree_nodes_native_spectra_tree_nodes_NodeFunctionMap spectra_tree_nodes_spectra_tree_nodes_NodeFunctionMap;
spectra_tree_nodes_native_NodeList spectra_tree_nodes_NodeList;
spectra_tree_nodes_native_spectra_tree_nodes_NodeListFunctionMap spectra_tree_nodes_spectra_tree_nodes_NodeListFunctionMap;
spectra_tree_nodes_native_NovaFile spectra_tree_nodes_NovaFile;
spectra_tree_nodes_native_spectra_tree_nodes_NovaFileFunctionMap spectra_tree_nodes_spectra_tree_nodes_NovaFileFunctionMap;
spectra_tree_nodes_native_NumericRange spectra_tree_nodes_NumericRange;
spectra_tree_nodes_native_spectra_tree_nodes_NumericRangeFunctionMap spectra_tree_nodes_spectra_tree_nodes_NumericRangeFunctionMap;
spectra_tree_nodes_native_Package spectra_tree_nodes_Package;
spectra_tree_nodes_native_spectra_tree_nodes_PackageFunctionMap spectra_tree_nodes_spectra_tree_nodes_PackageFunctionMap;
spectra_tree_nodes_native_PlaceholderValue spectra_tree_nodes_PlaceholderValue;
spectra_tree_nodes_native_spectra_tree_nodes_PlaceholderValueFunctionMap spectra_tree_nodes_spectra_tree_nodes_PlaceholderValueFunctionMap;
spectra_tree_nodes_native_Priority spectra_tree_nodes_Priority;
spectra_tree_nodes_native_spectra_tree_nodes_PriorityFunctionMap spectra_tree_nodes_spectra_tree_nodes_PriorityFunctionMap;
spectra_tree_nodes_native_Program spectra_tree_nodes_Program;
spectra_tree_nodes_native_spectra_tree_nodes_ProgramFunctionMap spectra_tree_nodes_spectra_tree_nodes_ProgramFunctionMap;
spectra_tree_nodes_native_Return spectra_tree_nodes_Return;
spectra_tree_nodes_native_spectra_tree_nodes_ReturnFunctionMap spectra_tree_nodes_spectra_tree_nodes_ReturnFunctionMap;
spectra_tree_nodes_native_Scope spectra_tree_nodes_Scope;
spectra_tree_nodes_native_spectra_tree_nodes_ScopeFunctionMap spectra_tree_nodes_spectra_tree_nodes_ScopeFunctionMap;
spectra_tree_nodes_native_Skeleton spectra_tree_nodes_Skeleton;
spectra_tree_nodes_native_spectra_tree_nodes_SkeletonFunctionMap spectra_tree_nodes_spectra_tree_nodes_SkeletonFunctionMap;
spectra_tree_nodes_native_StaticClassReference spectra_tree_nodes_StaticClassReference;
spectra_tree_nodes_native_spectra_tree_nodes_StaticClassReferenceFunctionMap spectra_tree_nodes_spectra_tree_nodes_StaticClassReferenceFunctionMap;
spectra_tree_nodes_native_Type spectra_tree_nodes_Type;
spectra_tree_nodes_native_spectra_tree_nodes_TypeFunctionMap spectra_tree_nodes_spectra_tree_nodes_TypeFunctionMap;
spectra_tree_nodes_native_ValidationResult spectra_tree_nodes_ValidationResult;
spectra_tree_nodes_native_spectra_tree_nodes_ValidationResultFunctionMap spectra_tree_nodes_spectra_tree_nodes_ValidationResultFunctionMap;
spectra_tree_nodes_native_Value spectra_tree_nodes_Value;
spectra_tree_nodes_native_spectra_tree_nodes_ValueFunctionMap spectra_tree_nodes_spectra_tree_nodes_ValueFunctionMap;
spectra_tree_nodes_annotations_native_AbstractAnnotation spectra_tree_nodes_annotations_AbstractAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_AbstractAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_Annotatable spectra_tree_nodes_annotations_Annotatable;
spectra_tree_nodes_annotations_native_Annotation spectra_tree_nodes_annotations_Annotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_AnnotationFunctionMap;
spectra_tree_nodes_annotations_native_AutoFinalAnnotation spectra_tree_nodes_annotations_AutoFinalAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_AutoFinalAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_AutoPureAnnotation spectra_tree_nodes_annotations_AutoPureAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_AutoPureAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_FinalAnnotation spectra_tree_nodes_annotations_FinalAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_FinalAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_ImmutableAnnotation spectra_tree_nodes_annotations_ImmutableAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_ImmutableAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_ImpureAnnotation spectra_tree_nodes_annotations_ImpureAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_ImpureAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_Modifier spectra_tree_nodes_annotations_Modifier;
spectra_tree_nodes_annotations_native_NativeAnnotation spectra_tree_nodes_annotations_NativeAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_NativeAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_OverrideAnnotation spectra_tree_nodes_annotations_OverrideAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_OverrideAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_PrivateAnnotation spectra_tree_nodes_annotations_PrivateAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_PrivateAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_PublicAnnotation spectra_tree_nodes_annotations_PublicAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_PublicAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_PureAnnotation spectra_tree_nodes_annotations_PureAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_PureAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_PureAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_StaticAnnotation spectra_tree_nodes_annotations_StaticAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_StaticAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_TargetAnnotation spectra_tree_nodes_annotations_TargetAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_TargetAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_VarAnnotation spectra_tree_nodes_annotations_VarAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_VarAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_VarAnnotationFunctionMap;
spectra_tree_nodes_annotations_native_VisibilityModifier spectra_tree_nodes_annotations_VisibilityModifier;
spectra_tree_nodes_annotations_native_VisibleAnnotation spectra_tree_nodes_annotations_VisibleAnnotation;
spectra_tree_nodes_annotations_native_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap spectra_tree_nodes_annotations_spectra_tree_nodes_annotations_VisibleAnnotationFunctionMap;
spectra_tree_nodes_arrays_native_ArrayAccess spectra_tree_nodes_arrays_ArrayAccess;
spectra_tree_nodes_arrays_native_spectra_tree_nodes_arrays_ArrayAccessFunctionMap spectra_tree_nodes_arrays_spectra_tree_nodes_arrays_ArrayAccessFunctionMap;
spectra_tree_nodes_controlstructures_native_ControlStructure spectra_tree_nodes_controlstructures_ControlStructure;
spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap spectra_tree_nodes_controlstructures_spectra_tree_nodes_controlstructures_ControlStructureFunctionMap;
spectra_tree_nodes_controlstructures_native_ElseStatement spectra_tree_nodes_controlstructures_ElseStatement;
spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap spectra_tree_nodes_controlstructures_spectra_tree_nodes_controlstructures_ElseStatementFunctionMap;
spectra_tree_nodes_controlstructures_native_IfStatement spectra_tree_nodes_controlstructures_IfStatement;
spectra_tree_nodes_controlstructures_native_spectra_tree_nodes_controlstructures_IfStatementFunctionMap spectra_tree_nodes_controlstructures_spectra_tree_nodes_controlstructures_IfStatementFunctionMap;
spectra_tree_nodes_controlstructures_loops_native_ForEachLoop spectra_tree_nodes_controlstructures_loops_ForEachLoop;
spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap spectra_tree_nodes_controlstructures_loops_spectra_tree_nodes_controlstructures_loops_ForEachLoopFunctionMap;
spectra_tree_nodes_controlstructures_loops_native_Loop spectra_tree_nodes_controlstructures_loops_Loop;
spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap spectra_tree_nodes_controlstructures_loops_spectra_tree_nodes_controlstructures_loops_LoopFunctionMap;
spectra_tree_nodes_controlstructures_loops_native_WhileLoop spectra_tree_nodes_controlstructures_loops_WhileLoop;
spectra_tree_nodes_controlstructures_loops_native_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap spectra_tree_nodes_controlstructures_loops_spectra_tree_nodes_controlstructures_loops_WhileLoopFunctionMap;
spectra_tree_nodes_exceptionhandling_native_Catch spectra_tree_nodes_exceptionhandling_Catch;
spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_CatchFunctionMap spectra_tree_nodes_exceptionhandling_spectra_tree_nodes_exceptionhandling_CatchFunctionMap;
spectra_tree_nodes_exceptionhandling_native_ExceptionHandler spectra_tree_nodes_exceptionhandling_ExceptionHandler;
spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap spectra_tree_nodes_exceptionhandling_spectra_tree_nodes_exceptionhandling_ExceptionHandlerFunctionMap;
spectra_tree_nodes_exceptionhandling_native_Throw spectra_tree_nodes_exceptionhandling_Throw;
spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap spectra_tree_nodes_exceptionhandling_spectra_tree_nodes_exceptionhandling_ThrowFunctionMap;
spectra_tree_nodes_exceptionhandling_native_Try spectra_tree_nodes_exceptionhandling_Try;
spectra_tree_nodes_exceptionhandling_native_spectra_tree_nodes_exceptionhandling_TryFunctionMap spectra_tree_nodes_exceptionhandling_spectra_tree_nodes_exceptionhandling_TryFunctionMap;
spectra_tree_nodes_functions_native_AccessorFunction spectra_tree_nodes_functions_AccessorFunction;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_AccessorFunctionFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_AccessorFunctionFunctionMap;
spectra_tree_nodes_functions_native_ArrayInstantiation spectra_tree_nodes_functions_ArrayInstantiation;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_ArrayInstantiationFunctionMap;
spectra_tree_nodes_functions_native_BodyFunction spectra_tree_nodes_functions_BodyFunction;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_BodyFunctionFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_BodyFunctionFunctionMap;
spectra_tree_nodes_functions_native_CallableFunction spectra_tree_nodes_functions_CallableFunction;
spectra_tree_nodes_functions_native_Constructor spectra_tree_nodes_functions_Constructor;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ConstructorFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_ConstructorFunctionMap;
spectra_tree_nodes_functions_native_FunctionArgumentList spectra_tree_nodes_functions_FunctionArgumentList;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_FunctionArgumentListFunctionMap;
spectra_tree_nodes_functions_native_FunctionCall spectra_tree_nodes_functions_FunctionCall;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionCallFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_FunctionCallFunctionMap;
spectra_tree_nodes_functions_native_FunctionDeclaration spectra_tree_nodes_functions_FunctionDeclaration;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_FunctionDeclarationFunctionMap;
spectra_tree_nodes_functions_native_InitializationFunction spectra_tree_nodes_functions_InitializationFunction;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_InitializationFunctionFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_InitializationFunctionFunctionMap;
spectra_tree_nodes_functions_native_Instantiation spectra_tree_nodes_functions_Instantiation;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_InstantiationFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_InstantiationFunctionMap;
spectra_tree_nodes_functions_native_MutatorFunction spectra_tree_nodes_functions_MutatorFunction;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_MutatorFunctionFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_MutatorFunctionFunctionMap;
spectra_tree_nodes_functions_native_ObjectNotation spectra_tree_nodes_functions_ObjectNotation;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ObjectNotationFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_ObjectNotationFunctionMap;
spectra_tree_nodes_functions_native_ObjectNotationProperty spectra_tree_nodes_functions_ObjectNotationProperty;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_ObjectNotationPropertyFunctionMap;
spectra_tree_nodes_functions_native_Parameter spectra_tree_nodes_functions_Parameter;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ParameterFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_ParameterFunctionMap;
spectra_tree_nodes_functions_native_ParameterList spectra_tree_nodes_functions_ParameterList;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_ParameterListFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_ParameterListFunctionMap;
spectra_tree_nodes_functions_native_PropertyFunction spectra_tree_nodes_functions_PropertyFunction;
spectra_tree_nodes_functions_native_spectra_tree_nodes_functions_PropertyFunctionFunctionMap spectra_tree_nodes_functions_spectra_tree_nodes_functions_PropertyFunctionFunctionMap;
spectra_tree_nodes_functions_closures_native_ClosureContext spectra_tree_nodes_functions_closures_ClosureContext;
spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap spectra_tree_nodes_functions_closures_spectra_tree_nodes_functions_closures_ClosureContextFunctionMap;
spectra_tree_nodes_functions_closures_native_ClosureDeclaration spectra_tree_nodes_functions_closures_ClosureDeclaration;
spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap spectra_tree_nodes_functions_closures_spectra_tree_nodes_functions_closures_ClosureDeclarationFunctionMap;
spectra_tree_nodes_functions_closures_native_ClosureParameter spectra_tree_nodes_functions_closures_ClosureParameter;
spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap spectra_tree_nodes_functions_closures_spectra_tree_nodes_functions_closures_ClosureParameterFunctionMap;
spectra_tree_nodes_functions_closures_native_LambdaExpression spectra_tree_nodes_functions_closures_LambdaExpression;
spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap spectra_tree_nodes_functions_closures_spectra_tree_nodes_functions_closures_LambdaExpressionFunctionMap;
spectra_tree_nodes_functions_closures_native_LambdaParameter spectra_tree_nodes_functions_closures_LambdaParameter;
spectra_tree_nodes_functions_closures_native_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap spectra_tree_nodes_functions_closures_spectra_tree_nodes_functions_closures_LambdaParameterFunctionMap;
spectra_tree_nodes_generics_native_GenericArgument spectra_tree_nodes_generics_GenericArgument;
spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericArgumentFunctionMap spectra_tree_nodes_generics_spectra_tree_nodes_generics_GenericArgumentFunctionMap;
spectra_tree_nodes_generics_native_GenericCompatible spectra_tree_nodes_generics_GenericCompatible;
spectra_tree_nodes_generics_native_GenericParameter spectra_tree_nodes_generics_GenericParameter;
spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericParameterFunctionMap spectra_tree_nodes_generics_spectra_tree_nodes_generics_GenericParameterFunctionMap;
spectra_tree_nodes_generics_native_GenericType spectra_tree_nodes_generics_GenericType;
spectra_tree_nodes_generics_native_spectra_tree_nodes_generics_GenericTypeFunctionMap spectra_tree_nodes_generics_spectra_tree_nodes_generics_GenericTypeFunctionMap;
spectra_tree_nodes_operations_native_Assignable spectra_tree_nodes_operations_Assignable;
spectra_tree_nodes_operations_native_Assignment spectra_tree_nodes_operations_Assignment;
spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_AssignmentFunctionMap spectra_tree_nodes_operations_spectra_tree_nodes_operations_AssignmentFunctionMap;
spectra_tree_nodes_operations_native_ElvisOperation spectra_tree_nodes_operations_ElvisOperation;
spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_ElvisOperationFunctionMap spectra_tree_nodes_operations_spectra_tree_nodes_operations_ElvisOperationFunctionMap;
spectra_tree_nodes_operations_native_Operation spectra_tree_nodes_operations_Operation;
spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_OperationFunctionMap spectra_tree_nodes_operations_spectra_tree_nodes_operations_OperationFunctionMap;
spectra_tree_nodes_operations_native_Operator spectra_tree_nodes_operations_Operator;
spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_OperatorFunctionMap spectra_tree_nodes_operations_spectra_tree_nodes_operations_OperatorFunctionMap;
spectra_tree_nodes_operations_native_TernaryOperation spectra_tree_nodes_operations_TernaryOperation;
spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_TernaryOperationFunctionMap spectra_tree_nodes_operations_spectra_tree_nodes_operations_TernaryOperationFunctionMap;
spectra_tree_nodes_operations_native_UnaryOperation spectra_tree_nodes_operations_UnaryOperation;
spectra_tree_nodes_operations_native_spectra_tree_nodes_operations_UnaryOperationFunctionMap spectra_tree_nodes_operations_spectra_tree_nodes_operations_UnaryOperationFunctionMap;
spectra_tree_nodes_variables_native_ArrayBracketOverload spectra_tree_nodes_variables_ArrayBracketOverload;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_ArrayBracketOverloadFunctionMap;
spectra_tree_nodes_variables_native_FieldDeclaration spectra_tree_nodes_variables_FieldDeclaration;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_FieldDeclarationFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_FieldDeclarationFunctionMap;
spectra_tree_nodes_variables_native_ImplicitDeclaration spectra_tree_nodes_variables_ImplicitDeclaration;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_ImplicitDeclarationFunctionMap;
spectra_tree_nodes_variables_native_InstanceDeclaration spectra_tree_nodes_variables_InstanceDeclaration;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_InstanceDeclarationFunctionMap;
spectra_tree_nodes_variables_native_LocalDeclaration spectra_tree_nodes_variables_LocalDeclaration;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_LocalDeclarationFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_LocalDeclarationFunctionMap;
spectra_tree_nodes_variables_native_Variable spectra_tree_nodes_variables_Variable;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_VariableFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_VariableFunctionMap;
spectra_tree_nodes_variables_native_VariableDeclaration spectra_tree_nodes_variables_VariableDeclaration;
spectra_tree_nodes_variables_native_spectra_tree_nodes_variables_VariableDeclarationFunctionMap spectra_tree_nodes_variables_spectra_tree_nodes_variables_VariableDeclarationFunctionMap;
spectra_util_native_Bounds spectra_util_Bounds;
spectra_util_native_spectra_util_BoundsFunctionMap spectra_util_spectra_util_BoundsFunctionMap;
spectra_util_native_CompilerStringFunctions spectra_util_CompilerStringFunctions;
spectra_util_native_FileUtils spectra_util_FileUtils;
spectra_util_native_spectra_util_FileUtilsFunctionMap spectra_util_spectra_util_FileUtilsFunctionMap;
spectra_util_native_Location spectra_util_Location;
spectra_util_native_spectra_util_LocationFunctionMap spectra_util_spectra_util_LocationFunctionMap;
spectra_util_native_OS spectra_util_OS;
spectra_util_native_spectra_util_OSFunctionMap spectra_util_spectra_util_OSFunctionMap;
spectra_util_native_SyntaxUtils spectra_util_SyntaxUtils;
spectra_util_native_spectra_util_SyntaxUtilsFunctionMap spectra_util_spectra_util_SyntaxUtilsFunctionMap;
example_native_Animal example_Animal;
example_native_example_AnimalFunctionMap example_example_AnimalFunctionMap;
example_native_ArrayDemo example_ArrayDemo;
example_native_example_ArrayDemoFunctionMap example_example_ArrayDemoFunctionMap;
example_native_BodyBuilder example_BodyBuilder;
example_native_example_BodyBuilderFunctionMap example_example_BodyBuilderFunctionMap;
example_native_ClosureDemo example_ClosureDemo;
example_native_example_ClosureDemoFunctionMap example_example_ClosureDemoFunctionMap;
example_native_Dog example_Dog;
example_native_example_DogFunctionMap example_example_DogFunctionMap;
example_native_ExceptionHandlingDemo example_ExceptionHandlingDemo;
example_native_example_ExceptionHandlingDemoFunctionMap example_example_ExceptionHandlingDemoFunctionMap;
example_native_FileTest example_FileTest;
example_native_example_FileTestFunctionMap example_example_FileTestFunctionMap;
example_native_GenericDemo example_GenericDemo;
example_native_example_GenericDemoFunctionMap example_example_GenericDemoFunctionMap;
example_native_HashMapDemo example_HashMapDemo;
example_native_example_HashMapDemoFunctionMap example_example_HashMapDemoFunctionMap;
example_native_HashSetDemo example_HashSetDemo;
example_native_example_HashSetDemoFunctionMap example_example_HashSetDemoFunctionMap;
example_native_IntegerTest example_IntegerTest;
example_native_example_IntegerTestFunctionMap example_example_IntegerTestFunctionMap;
example_native_Lab example_Lab;
example_native_example_LabFunctionMap example_example_LabFunctionMap;
example_native_MathDemo example_MathDemo;
example_native_example_MathDemoFunctionMap example_example_MathDemoFunctionMap;
example_native_NonWholeDivisionException example_NonWholeDivisionException;
example_native_example_NonWholeDivisionExceptionFunctionMap example_example_NonWholeDivisionExceptionFunctionMap;
example_native_Person example_Person;
example_native_example_PersonFunctionMap example_example_PersonFunctionMap;
example_native_Polygon example_Polygon;
example_native_PolymorphismDemo example_PolymorphismDemo;
example_native_example_PolymorphismDemoFunctionMap example_example_PolymorphismDemoFunctionMap;
example_native_QueueDemo example_QueueDemo;
example_native_example_QueueDemoFunctionMap example_example_QueueDemoFunctionMap;
example_native_Spider example_Spider;
example_native_example_SpiderFunctionMap example_example_SpiderFunctionMap;
example_native_Square example_Square;
example_native_example_SquareFunctionMap example_example_SquareFunctionMap;
example_native_SvgChart example_SvgChart;
example_native_example_SvgChartFunctionMap example_example_SvgChartFunctionMap;
example_native_SvgFractal example_SvgFractal;
example_native_example_SvgFractalFunctionMap example_example_SvgFractalFunctionMap;
example_native_T1 example_T1;
example_native_example_T1FunctionMap example_example_T1FunctionMap;
example_native_T2 example_T2;
example_native_example_T2FunctionMap example_example_T2FunctionMap;
example_native_Test example_Test;
example_native_example_TestFunctionMap example_example_TestFunctionMap;
example_native_ThreadDemo example_ThreadDemo;
example_native_example_ThreadDemoFunctionMap example_example_ThreadDemoFunctionMap;
example_native_ThreadDemoImplementation example_ThreadDemoImplementation;
example_native_example_ThreadDemoImplementationFunctionMap example_example_ThreadDemoImplementationFunctionMap;
example_ackermann_native_Ackermann example_ackermann_Ackermann;
example_ackermann_native_example_ackermann_AckermannFunctionMap example_ackermann_example_ackermann_AckermannFunctionMap;
example_copy_native_Dog example_copy_Dog;
example_copy_native_example_copy_DogFunctionMap example_copy_example_copy_DogFunctionMap;
example_database_native_DatabaseDemo example_database_DatabaseDemo;
example_database_native_example_database_DatabaseDemoFunctionMap example_database_example_database_DatabaseDemoFunctionMap;
example_network_native_ClientDemo example_network_ClientDemo;
example_network_native_example_network_ClientDemoFunctionMap example_network_example_network_ClientDemoFunctionMap;
example_network_native_ConnectionThread example_network_ConnectionThread;
example_network_native_example_network_ConnectionThreadFunctionMap example_network_example_network_ConnectionThreadFunctionMap;
example_network_native_OutputThread example_network_OutputThread;
example_network_native_example_network_OutputThreadFunctionMap example_network_example_network_OutputThreadFunctionMap;
example_network_native_ServerDemo example_network_ServerDemo;
example_network_native_example_network_ServerDemoFunctionMap example_network_example_network_ServerDemoFunctionMap;
stabilitytest_native_AssignmentStability stabilitytest_AssignmentStability;
stabilitytest_native_stabilitytest_AssignmentStabilityFunctionMap stabilitytest_stabilitytest_AssignmentStabilityFunctionMap;
stabilitytest_native_ClassWithProperties stabilitytest_ClassWithProperties;
stabilitytest_native_stabilitytest_ClassWithPropertiesFunctionMap stabilitytest_stabilitytest_ClassWithPropertiesFunctionMap;
stabilitytest_native_ClientThread stabilitytest_ClientThread;
stabilitytest_native_stabilitytest_ClientThreadFunctionMap stabilitytest_stabilitytest_ClientThreadFunctionMap;
stabilitytest_native_ClosureStability stabilitytest_ClosureStability;
stabilitytest_native_stabilitytest_ClosureStabilityFunctionMap stabilitytest_stabilitytest_ClosureStabilityFunctionMap;
stabilitytest_native_ExceptionStability stabilitytest_ExceptionStability;
stabilitytest_native_stabilitytest_ExceptionStabilityFunctionMap stabilitytest_stabilitytest_ExceptionStabilityFunctionMap;
stabilitytest_native_FileStability stabilitytest_FileStability;
stabilitytest_native_stabilitytest_FileStabilityFunctionMap stabilitytest_stabilitytest_FileStabilityFunctionMap;
stabilitytest_native_InnerClassStability stabilitytest_InnerClassStability;
stabilitytest_native_MyOuter stabilitytest_MyOuter;
stabilitytest_native_stabilitytest_InnerClassStabilityFunctionMap stabilitytest_stabilitytest_InnerClassStabilityFunctionMap;
stabilitytest_native_stabilitytest_InnerClassStability_MyOuterFunctionMap stabilitytest_stabilitytest_InnerClassStability_MyOuterFunctionMap;
stabilitytest_native_MyInner stabilitytest_MyInner;
stabilitytest_native_stabilitytest_InnerClassStability_MyInnerFunctionMap stabilitytest_stabilitytest_InnerClassStability_MyInnerFunctionMap;
stabilitytest_native_LambdaStability stabilitytest_LambdaStability;
stabilitytest_native_stabilitytest_LambdaStabilityFunctionMap stabilitytest_stabilitytest_LambdaStabilityFunctionMap;
stabilitytest_native_NetworkStability stabilitytest_NetworkStability;
stabilitytest_native_stabilitytest_NetworkStabilityFunctionMap stabilitytest_stabilitytest_NetworkStabilityFunctionMap;
stabilitytest_native_Node stabilitytest_Node;
stabilitytest_native_stabilitytest_NodeFunctionMap stabilitytest_stabilitytest_NodeFunctionMap;
stabilitytest_native_PolymorphicSubClass stabilitytest_PolymorphicSubClass;
stabilitytest_native_stabilitytest_PolymorphicSubClassFunctionMap stabilitytest_stabilitytest_PolymorphicSubClassFunctionMap;
stabilitytest_native_PolymorphicSuperClass stabilitytest_PolymorphicSuperClass;
stabilitytest_native_stabilitytest_PolymorphicSuperClassFunctionMap stabilitytest_stabilitytest_PolymorphicSuperClassFunctionMap;
stabilitytest_native_PolymorphismStability stabilitytest_PolymorphismStability;
stabilitytest_native_stabilitytest_PolymorphismStabilityFunctionMap stabilitytest_stabilitytest_PolymorphismStabilityFunctionMap;
stabilitytest_native_RegexStability stabilitytest_RegexStability;
stabilitytest_native_stabilitytest_RegexStabilityFunctionMap stabilitytest_stabilitytest_RegexStabilityFunctionMap;
stabilitytest_native_StabilityExceptionHandler stabilitytest_StabilityExceptionHandler;
stabilitytest_native_stabilitytest_StabilityExceptionHandlerFunctionMap stabilitytest_stabilitytest_StabilityExceptionHandlerFunctionMap;
stabilitytest_native_StabilityTest stabilitytest_StabilityTest;
stabilitytest_native_stabilitytest_StabilityTestFunctionMap stabilitytest_stabilitytest_StabilityTestFunctionMap;
stabilitytest_native_StabilityTestCase stabilitytest_StabilityTestCase;
stabilitytest_native_stabilitytest_StabilityTestCaseFunctionMap stabilitytest_stabilitytest_StabilityTestCaseFunctionMap;
stabilitytest_native_StabilityTestException stabilitytest_StabilityTestException;
stabilitytest_native_stabilitytest_StabilityTestExceptionFunctionMap stabilitytest_stabilitytest_StabilityTestExceptionFunctionMap;
stabilitytest_native_StaticImportStability stabilitytest_StaticImportStability;
stabilitytest_native_stabilitytest_StaticImportStabilityFunctionMap stabilitytest_stabilitytest_StaticImportStabilityFunctionMap;
stabilitytest_native_SyntaxStability stabilitytest_SyntaxStability;
stabilitytest_native_stabilitytest_SyntaxStabilityFunctionMap stabilitytest_stabilitytest_SyntaxStabilityFunctionMap;
stabilitytest_native_ThreadImplementation stabilitytest_ThreadImplementation;
stabilitytest_native_stabilitytest_ThreadImplementationFunctionMap stabilitytest_stabilitytest_ThreadImplementationFunctionMap;
stabilitytest_native_ThreadStability stabilitytest_ThreadStability;
stabilitytest_native_stabilitytest_ThreadStabilityFunctionMap stabilitytest_stabilitytest_ThreadStabilityFunctionMap;
stabilitytest_native_TimeStability stabilitytest_TimeStability;
stabilitytest_native_stabilitytest_TimeStabilityFunctionMap stabilitytest_stabilitytest_TimeStabilityFunctionMap;
stabilitytest_native_ToStringStability stabilitytest_ToStringStability;
stabilitytest_native_stabilitytest_ToStringStabilityFunctionMap stabilitytest_stabilitytest_ToStringStabilityFunctionMap;
stabilitytest_native_UnstableException stabilitytest_UnstableException;
stabilitytest_native_stabilitytest_UnstableExceptionFunctionMap stabilitytest_stabilitytest_UnstableExceptionFunctionMap;
} nova_env;

extern nova_env novaEnv;


#endif
