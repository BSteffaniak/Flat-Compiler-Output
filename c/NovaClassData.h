#ifndef NOVA_CLASS_DATA
#define NOVA_CLASS_DATA

typedef struct NovaClassData NovaClassData;

typedef struct nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable;
typedef struct nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable;
typedef struct nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator;
typedef struct nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List;
typedef struct nova_datastruct_list_vtable_OrderedList nova_datastruct_list_vtable_OrderedList;
typedef struct nova_io_vtable_InputStream nova_io_vtable_InputStream;
typedef struct nova_operators_vtable_EqualsOperator nova_operators_vtable_EqualsOperator;
typedef struct nova_operators_vtable_MultiplyEqualsOperator nova_operators_vtable_MultiplyEqualsOperator;
typedef struct nova_operators_vtable_MultiplyOperator nova_operators_vtable_MultiplyOperator;
typedef struct nova_operators_vtable_NotEqualToOperator nova_operators_vtable_NotEqualToOperator;
typedef struct nova_operators_vtable_PlusEqualsOperator nova_operators_vtable_PlusEqualsOperator;
typedef struct nova_operators_vtable_PlusOperator nova_operators_vtable_PlusOperator;
typedef struct nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer;
typedef struct nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber;
typedef struct spectra_tree_nodes_vtable_Abstractable spectra_tree_nodes_vtable_Abstractable;
typedef struct spectra_tree_nodes_vtable_Accessible spectra_tree_nodes_vtable_Accessible;
typedef struct spectra_tree_nodes_vtable_Listener spectra_tree_nodes_vtable_Listener;
typedef struct spectra_tree_nodes_annotations_vtable_Annotatable spectra_tree_nodes_annotations_vtable_Annotatable;
typedef struct spectra_tree_nodes_annotations_vtable_Modifier spectra_tree_nodes_annotations_vtable_Modifier;
typedef struct spectra_tree_nodes_annotations_vtable_VisibilityModifier spectra_tree_nodes_annotations_vtable_VisibilityModifier;
typedef struct spectra_tree_nodes_functions_vtable_CallableFunction spectra_tree_nodes_functions_vtable_CallableFunction;
typedef struct spectra_tree_nodes_generics_vtable_GenericCompatible spectra_tree_nodes_generics_vtable_GenericCompatible;
typedef struct spectra_tree_nodes_operations_vtable_Assignable spectra_tree_nodes_operations_vtable_Assignable;
extern nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable_value_default;
extern nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable_value_default;
extern nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator_value_default;
extern nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List_value_default;
extern nova_datastruct_list_vtable_OrderedList nova_datastruct_list_vtable_OrderedList_value_default;
extern nova_io_vtable_InputStream nova_io_vtable_InputStream_value_default;
extern nova_operators_vtable_EqualsOperator nova_operators_vtable_EqualsOperator_value_default;
extern nova_operators_vtable_MultiplyEqualsOperator nova_operators_vtable_MultiplyEqualsOperator_value_default;
extern nova_operators_vtable_MultiplyOperator nova_operators_vtable_MultiplyOperator_value_default;
extern nova_operators_vtable_NotEqualToOperator nova_operators_vtable_NotEqualToOperator_value_default;
extern nova_operators_vtable_PlusEqualsOperator nova_operators_vtable_PlusEqualsOperator_value_default;
extern nova_operators_vtable_PlusOperator nova_operators_vtable_PlusOperator_value_default;
extern nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer_value_default;
extern nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber_value_default;
extern spectra_tree_nodes_vtable_Abstractable spectra_tree_nodes_vtable_Abstractable_value_default;
extern spectra_tree_nodes_vtable_Accessible spectra_tree_nodes_vtable_Accessible_value_default;
extern spectra_tree_nodes_vtable_Listener spectra_tree_nodes_vtable_Listener_value_default;
extern spectra_tree_nodes_annotations_vtable_Annotatable spectra_tree_nodes_annotations_vtable_Annotatable_value_default;
extern spectra_tree_nodes_annotations_vtable_Modifier spectra_tree_nodes_annotations_vtable_Modifier_value_default;
extern spectra_tree_nodes_annotations_vtable_VisibilityModifier spectra_tree_nodes_annotations_vtable_VisibilityModifier_value_default;
extern spectra_tree_nodes_functions_vtable_CallableFunction spectra_tree_nodes_functions_vtable_CallableFunction_value_default;
extern spectra_tree_nodes_generics_vtable_GenericCompatible spectra_tree_nodes_generics_vtable_GenericCompatible_value_default;
extern spectra_tree_nodes_operations_vtable_Assignable spectra_tree_nodes_operations_vtable_Assignable_value_default;

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
#include <nova/serialization/nova_serialization_Nova_JsonSerializer.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ArrayType.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_TraitDeclaration.h>
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

struct nova_datastruct_vtable_Comparable {
char x;
};

struct nova_datastruct_list_vtable_Iterable {
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Mutator_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Iterator*);
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
int (*nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
int (*nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Mutator_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Iterator*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Mutator_Nova_first)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Mutator_Nova_last)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
};

struct nova_datastruct_list_vtable_OrderedList {
char x;
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

struct spectra_tree_nodes_vtable_Abstractable {
char (*spectra_tree_nodes_Nova_Abstractable_virtual_Accessor_Nova_isAbstract)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_Nova_Abstractable_virtual_Mutator_Nova_isAbstract)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, char);
};

struct spectra_tree_nodes_vtable_Accessible {
char (*spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_safeNavigation)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_safeNavigation)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, char);
spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_virtual_Accessor_Nova_accessedNode)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Accessible_virtual_Mutator_Nova_accessedNode)(spectra_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Accessible*);
};

struct spectra_tree_nodes_vtable_Listener {
char x;
};

struct spectra_tree_nodes_annotations_vtable_Annotatable {
char x;
};

struct spectra_tree_nodes_annotations_vtable_Modifier {
nova_Nova_String* (*spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_Nova_aliasUsed)(spectra_tree_nodes_annotations_Nova_Modifier*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator_Nova_aliasUsed)(spectra_tree_nodes_annotations_Nova_Modifier*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
};

struct spectra_tree_nodes_annotations_vtable_VisibilityModifier {
char x;
};

struct spectra_tree_nodes_functions_vtable_CallableFunction {
spectra_tree_nodes_functions_Nova_Parameter* (*spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
char (*spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameters)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
spectra_tree_nodes_functions_Nova_ParameterList* (*spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_functions_Nova_ParameterList* (*spectra_tree_nodes_functions_Nova_CallableFunction_virtual_Mutator_Nova_parameterList)(spectra_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_ParameterList*);
};

struct spectra_tree_nodes_generics_vtable_GenericCompatible {
nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Array* (*spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
};

struct spectra_tree_nodes_operations_vtable_Assignable {
void (*spectra_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned)(spectra_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*);
};



struct NovaClassData {
nova_datastruct_vtable_Comparable* nova_datastruct_vtable_Comparable_value;
nova_datastruct_list_vtable_Iterable* nova_datastruct_list_vtable_Iterable_value;
nova_datastruct_list_vtable_Iterator* nova_datastruct_list_vtable_Iterator_value;
nova_datastruct_list_vtable_List* nova_datastruct_list_vtable_List_value;
nova_datastruct_list_vtable_OrderedList* nova_datastruct_list_vtable_OrderedList_value;
nova_io_vtable_InputStream* nova_io_vtable_InputStream_value;
nova_operators_vtable_EqualsOperator* nova_operators_vtable_EqualsOperator_value;
nova_operators_vtable_MultiplyEqualsOperator* nova_operators_vtable_MultiplyEqualsOperator_value;
nova_operators_vtable_MultiplyOperator* nova_operators_vtable_MultiplyOperator_value;
nova_operators_vtable_NotEqualToOperator* nova_operators_vtable_NotEqualToOperator_value;
nova_operators_vtable_PlusEqualsOperator* nova_operators_vtable_PlusEqualsOperator_value;
nova_operators_vtable_PlusOperator* nova_operators_vtable_PlusOperator_value;
nova_primitive_number_vtable_Integer* nova_primitive_number_vtable_Integer_value;
nova_primitive_number_vtable_RealNumber* nova_primitive_number_vtable_RealNumber_value;
spectra_tree_nodes_vtable_Abstractable* spectra_tree_nodes_vtable_Abstractable_value;
spectra_tree_nodes_vtable_Accessible* spectra_tree_nodes_vtable_Accessible_value;
spectra_tree_nodes_vtable_Listener* spectra_tree_nodes_vtable_Listener_value;
spectra_tree_nodes_annotations_vtable_Annotatable* spectra_tree_nodes_annotations_vtable_Annotatable_value;
spectra_tree_nodes_annotations_vtable_Modifier* spectra_tree_nodes_annotations_vtable_Modifier_value;
spectra_tree_nodes_annotations_vtable_VisibilityModifier* spectra_tree_nodes_annotations_vtable_VisibilityModifier_value;
spectra_tree_nodes_functions_vtable_CallableFunction* spectra_tree_nodes_functions_vtable_CallableFunction_value;
spectra_tree_nodes_generics_vtable_GenericCompatible* spectra_tree_nodes_generics_vtable_GenericCompatible_value;
spectra_tree_nodes_operations_vtable_Assignable* spectra_tree_nodes_operations_vtable_Assignable_value;

nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_concat)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_substring)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
nova_Nova_String* (*nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_concat)(nova_Nova_StringFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, nova_Nova_String*);
nova_Nova_String* (*nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_substring)(nova_Nova_StringFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int, int);
nova_Nova_String* (*nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_toString)(nova_Nova_StringFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_datastruct_Nova_Node* (*nova_datastruct_Nova_NodeFunctionMap_virtualfunctionMapNode_static_Nova_construct)(nova_datastruct_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int);
nova_Nova_Object* (*nova_datastruct_Nova_HashMap_virtual_Nova_add)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMapFunctionMap_virtualfunctionMapHashMap0_static_Nova_construct)(nova_datastruct_Nova_HashMapFunctionMap*, nova_exception_Nova_ExceptionData*, int, int);
nova_Nova_Object* (*nova_datastruct_Nova_HashMapFunctionMap_virtualfunctionMap_Nova_add)(nova_datastruct_Nova_HashMapFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_HashMap*, nova_Nova_Object*, nova_Nova_Object*);
nova_datastruct_Nova_Tree* (*nova_datastruct_Nova_TreeFunctionMap_virtualfunctionMapTree_static_Nova_construct)(nova_datastruct_Nova_TreeFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Node*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_virtual_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object** (*nova_datastruct_list_Nova_Array_virtual_Nova_cloneData)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_virtual_Nova_clone)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_get)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_set)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMapArray0_static_Nova_construct)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMapArray1_static_Nova_construct)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, int, int);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMapArray2_static_Nova_construct)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object**, int);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMap_Nova_addUnique)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, nova_Nova_Object*);
nova_Nova_Object** (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMap_Nova_cloneData)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMap_Nova_clone)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
nova_Nova_Object* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMap_Nova_get)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMap_Nova_set)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*, int, nova_Nova_Object*);
nova_exception_Nova_Exception* (*nova_exception_Nova_ExceptionFunctionMap_virtualfunctionMapException_static_Nova_construct)(nova_exception_Nova_ExceptionFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
char (*nova_io_Nova_OutputStream_virtual_Nova_write)(nova_io_Nova_OutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
char (*nova_io_Nova_OutputStreamFunctionMap_virtualfunctionMap_Nova_write)(nova_io_Nova_OutputStreamFunctionMap*, nova_exception_Nova_ExceptionData*, nova_io_Nova_OutputStream*, nova_Nova_String*);
nova_math_Nova_NumericOperand* (*nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMapNumericOperand_static_Nova_construct)(nova_math_Nova_NumericOperandFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_String* (*nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMap_Nova_toString)(nova_math_Nova_NumericOperandFunctionMap*, nova_exception_Nova_ExceptionData*, nova_math_Nova_NumericOperand*);
double (*nova_math_Nova_Vector_virtual_Nova_dotProduct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*);
double (*nova_math_Nova_VectorFunctionMap_virtualfunctionMap_Nova_dotProduct)(nova_math_Nova_VectorFunctionMap*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*, nova_math_Nova_Vector*);
nova_math_logic_Nova_LogicalStatement* (*nova_math_logic_Nova_LogicalStatementFunctionMap_virtualfunctionMapLogicalStatement_static_Nova_construct)(nova_math_logic_Nova_LogicalStatementFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_math_logic_Nova_StatementComponent* (*nova_math_logic_Nova_StatementComponentFunctionMap_virtualfunctionMapStatementComponent_static_Nova_construct)(nova_math_logic_Nova_StatementComponentFunctionMap*, nova_exception_Nova_ExceptionData*);
nova_primitive_Nova_Primitive* (*nova_primitive_Nova_PrimitiveFunctionMap_virtualfunctionMapPrimitive_static_Nova_construct)(nova_primitive_Nova_PrimitiveFunctionMap*, nova_exception_Nova_ExceptionData*);
char (*nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, nova_primitive_number_Nova_Number*);
void (*nova_thread_Nova_Thread_virtual_Nova_run)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
void (*nova_thread_Nova_ThreadFunctionMap_virtualfunctionMap_Nova_run)(nova_thread_Nova_ThreadFunctionMap*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread*);
nova_time_Nova_Timer* (*nova_time_Nova_Timer_virtual_Nova_stop)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
long_long (*nova_time_Nova_Timer_virtual_Accessor_Nova_duration)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
nova_time_Nova_Timer* (*nova_time_Nova_TimerFunctionMap_virtualfunctionMapTimer_static_Nova_construct)(nova_time_Nova_TimerFunctionMap*, nova_exception_Nova_ExceptionData*);
nova_time_Nova_Timer* (*nova_time_Nova_TimerFunctionMap_virtualfunctionMap_Nova_stop)(nova_time_Nova_TimerFunctionMap*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer*);
void (*nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
nova_web_svg_Nova_SvgComponent* (*nova_web_svg_Nova_SvgComponentFunctionMap_virtualfunctionMapSvgComponent_static_Nova_construct)(nova_web_svg_Nova_SvgComponentFunctionMap*, nova_exception_Nova_ExceptionData*);
void (*nova_web_svg_Nova_SvgComponentFunctionMap_virtualfunctionMap_Nova_generateOutput)(nova_web_svg_Nova_SvgComponentFunctionMap*, nova_exception_Nova_ExceptionData*, nova_web_svg_Nova_SvgComponent*, nova_io_Nova_FileWriter*);
nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_web_svg_no3_Nova_No3NodeFunctionMap_virtualfunctionMap_Nova_toJs)(nova_web_svg_no3_Nova_No3NodeFunctionMap*, nova_exception_Nova_ExceptionData*, nova_web_svg_no3_Nova_No3Node*);
void (*spectra_engines_Nova_CodeGeneratorEngine_virtual_Nova_writeFiles)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
void (*spectra_engines_Nova_CodeGeneratorEngine_virtual_Nova_insertMainMethod)(spectra_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
spectra_tree_nodes_Nova_Accessible* (*spectra_tree_nodes_Nova_Value_virtual_Accessor_Nova_returnedNode)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_cloneTo)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMapNode_static_Nova_construct)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*);
nova_Nova_String* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toString)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_virtual_static_Nova_parse)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
char (*spectra_tree_nodes_Nova_Type_virtual_Nova_isValid)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
nova_Nova_String* (*spectra_tree_nodes_Nova_Type_virtual_Nova_writeNova)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Type_virtual_Nova_cloneTo)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*);
char (*spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isPrimitiveType)(spectra_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_static_Nova_parse)(spectra_tree_nodes_Nova_TypeFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
char (*spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_isValid)(spectra_tree_nodes_Nova_TypeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*, spectra_tree_nodes_Nova_Node*);
nova_Nova_String* (*spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_writeNova)(spectra_tree_nodes_Nova_TypeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*);
spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMap_Nova_cloneTo)(spectra_tree_nodes_Nova_TypeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Type*, spectra_tree_nodes_Nova_Type*);
spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_Value_virtual0_static_Nova_parse)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
nova_Nova_String* (*spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_ValueFunctionMap_virtualfunctionMapValue_static_Nova_construct)(spectra_tree_nodes_Nova_ValueFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_Nova_Type*);
spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_ValueFunctionMap_virtualfunctionMap0_static_Nova_parse)(spectra_tree_nodes_Nova_ValueFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
nova_Nova_String* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeNova)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
void (*spectra_tree_nodes_Nova_Node_virtual_Nova_addChild)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
char (*spectra_tree_nodes_Nova_Node_virtual_Nova_replace)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
spectra_tree_nodes_variables_Nova_VariableDeclaration* (*spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
char (*spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*spectra_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers)(spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*spectra_tree_nodes_Nova_Node_virtual_Nova_toNova)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*spectra_tree_nodes_Nova_ClassDeclaration_virtual_Accessor_Nova_identifier)(spectra_tree_nodes_Nova_ClassDeclaration*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_ClassDeclaration* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPrivate)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPublic)(spectra_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
void (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_addChild)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
char (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_replace)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
spectra_tree_nodes_variables_Nova_VariableDeclaration* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_findVariableDeclaration)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, nova_Nova_String*, int);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parseStatement)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_generateTemporaryScopeNode)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
char (*spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_virtualfunctionMap_Nova_parseModifier)(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_variables_Nova_VariableDeclaration*, nova_Nova_String*);
char (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_validateTypes)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
char (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholders)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
nova_Nova_String* (*spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_virtualfunctionMap_Nova_writeModifiers)(spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_variables_Nova_VariableDeclaration*);
nova_Nova_String* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toNova)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
void (*spectra_tree_nodes_Nova_Node_virtual_Nova_onAdded)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
char (*spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NodeList*);
nova_Nova_String* (*spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Scope* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Scope* (*spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Scope*);
int (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Program* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_functions_Nova_Instantiation* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_functions_closures_Nova_LambdaExpression* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_NovaFile* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_functions_Nova_FunctionCall* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_functions_Nova_FunctionDeclaration* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_exceptionhandling_Nova_Try* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
void (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_onAdded)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
char (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholderChildren)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_NodeList*);
nova_Nova_String* (*spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeAnnotationSeparator)(spectra_tree_nodes_Nova_NodeFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
spectra_tree_nodes_variables_Nova_Variable* (*spectra_tree_nodes_variables_Nova_VariableFunctionMap_virtualfunctionMapVariable_static_Nova_construct)(spectra_tree_nodes_variables_Nova_VariableFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, spectra_tree_nodes_variables_Nova_VariableDeclaration*);
spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_TypeFunctionMap_virtualfunctionMapType_static_Nova_construct)(spectra_tree_nodes_Nova_TypeFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
char (*spectra_tree_nodes_Nova_Value_virtual_Nova_parseType)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*spectra_tree_nodes_Nova_Value_virtual_Nova_writeType)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
char (*spectra_tree_nodes_Nova_ValueFunctionMap_virtualfunctionMap_Nova_parseType)(spectra_tree_nodes_Nova_ValueFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*, nova_Nova_String*);
nova_Nova_String* (*spectra_tree_nodes_Nova_ValueFunctionMap_virtualfunctionMap_Nova_writeType)(spectra_tree_nodes_Nova_ValueFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*);
spectra_tree_nodes_controlstructures_loops_Nova_Loop* (*spectra_tree_nodes_controlstructures_loops_Nova_Loop_virtual_static_Nova_parse)(spectra_tree_nodes_controlstructures_loops_Nova_Loop*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
spectra_tree_nodes_controlstructures_loops_Nova_Loop* (*spectra_tree_nodes_controlstructures_loops_Nova_LoopFunctionMap_virtualfunctionMap_static_Nova_parse)(spectra_tree_nodes_controlstructures_loops_Nova_LoopFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionDeclaration_virtual_Nova_writeReturnType)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionDeclarationFunctionMap_virtualfunctionMap_Nova_writeReturnType)(spectra_tree_nodes_functions_Nova_FunctionDeclarationFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_FunctionDeclaration*);
nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionCall_virtual_Nova_writeName)(spectra_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_virtualfunctionMap_Nova_writeName)(spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_functions_Nova_FunctionCall*);
char (*spectra_tree_nodes_operations_Nova_AssignmentFunctionMap_virtualfunctionMap_Nova_parseAssignedNode)(spectra_tree_nodes_operations_Nova_AssignmentFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_operations_Nova_Assignment*, nova_Nova_String*);
char (*spectra_tree_nodes_operations_Nova_AssignmentFunctionMap_virtualfunctionMap_Nova_parseAssignment)(spectra_tree_nodes_operations_Nova_AssignmentFunctionMap*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_operations_Nova_Assignment*, nova_Nova_String*);
char (*spectra_tree_nodes_variables_Nova_LocalDeclaration_virtual_Accessor_Nova_isImplicit)(spectra_tree_nodes_variables_Nova_LocalDeclaration*, nova_exception_Nova_ExceptionData*);
};

#endif