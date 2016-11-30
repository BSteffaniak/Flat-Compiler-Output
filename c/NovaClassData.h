#ifndef NOVA_CLASS_DATA
#define NOVA_CLASS_DATA

typedef struct NovaClassData NovaClassData;

typedef struct nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable;
typedef struct nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable;
typedef struct nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator;
typedef struct nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List;
typedef struct nova_io_vtable_InputStream nova_io_vtable_InputStream;
typedef struct nova_operators_vtable_Equals nova_operators_vtable_Equals;
typedef struct nova_operators_vtable_Multiply nova_operators_vtable_Multiply;
typedef struct nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer;
typedef struct nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber;
typedef struct compiler_tree_nodes_vtable_Abstractable compiler_tree_nodes_vtable_Abstractable;
typedef struct compiler_tree_nodes_vtable_Accessible compiler_tree_nodes_vtable_Accessible;
typedef struct compiler_tree_nodes_vtable_Listener compiler_tree_nodes_vtable_Listener;
typedef struct compiler_tree_nodes_annotations_vtable_Annotatable compiler_tree_nodes_annotations_vtable_Annotatable;
typedef struct compiler_tree_nodes_functions_vtable_CallableFunction compiler_tree_nodes_functions_vtable_CallableFunction;
typedef struct compiler_tree_nodes_generics_vtable_GenericCompatible compiler_tree_nodes_generics_vtable_GenericCompatible;
typedef struct compiler_tree_nodes_operations_vtable_Assignable compiler_tree_nodes_operations_vtable_Assignable;
extern nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable_value_default;
extern nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable_value_default;
extern nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator_value_default;
extern nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List_value_default;
extern nova_io_vtable_InputStream nova_io_vtable_InputStream_value_default;
extern nova_operators_vtable_Equals nova_operators_vtable_Equals_value_default;
extern nova_operators_vtable_Multiply nova_operators_vtable_Multiply_value_default;
extern nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer_value_default;
extern nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber_value_default;
extern compiler_tree_nodes_vtable_Abstractable compiler_tree_nodes_vtable_Abstractable_value_default;
extern compiler_tree_nodes_vtable_Accessible compiler_tree_nodes_vtable_Accessible_value_default;
extern compiler_tree_nodes_vtable_Listener compiler_tree_nodes_vtable_Listener_value_default;
extern compiler_tree_nodes_annotations_vtable_Annotatable compiler_tree_nodes_annotations_vtable_Annotatable_value_default;
extern compiler_tree_nodes_functions_vtable_CallableFunction compiler_tree_nodes_functions_vtable_CallableFunction_value_default;
extern compiler_tree_nodes_generics_vtable_GenericCompatible compiler_tree_nodes_generics_vtable_GenericCompatible_value_default;
extern compiler_tree_nodes_operations_vtable_Assignable compiler_tree_nodes_operations_vtable_Assignable_value_default;

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
#include <compiler/compiler_Nova_Compiler.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/engines/compiler_engines_Nova_CodeGeneratorEngine.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/compiler_tree_Nova_AnnotationSearchResult.h>
#include <compiler/tree/compiler_tree_Nova_StatementIterator.h>
#include <compiler/tree/compiler_tree_Nova_SyntaxTree.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Abstractable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ArgumentList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ImportList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_InterfaceDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Listener.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NumericRange.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Package.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Priority.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Return.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Skeleton.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_NativeAnnotation.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_OverrideAnnotation.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_TargetAnnotation.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/controlstructures/compiler_tree_nodes_controlstructures_Nova_ControlStructure.h>
#include <compiler/tree/nodes/controlstructures/compiler_tree_nodes_controlstructures_Nova_ElseStatement.h>
#include <compiler/tree/nodes/controlstructures/compiler_tree_nodes_controlstructures_Nova_IfStatement.h>
#include <compiler/tree/nodes/controlstructures/loops/compiler_tree_nodes_controlstructures_loops_Nova_ForEachLoop.h>
#include <compiler/tree/nodes/controlstructures/loops/compiler_tree_nodes_controlstructures_loops_Nova_Loop.h>
#include <compiler/tree/nodes/controlstructures/loops/compiler_tree_nodes_controlstructures_loops_Nova_WhileLoop.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Catch.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_ExceptionHandler.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Throw.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_AccessorFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_BodyFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_CallableFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Constructor.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_InitializationFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_MutatorFunction.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Parameter.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_ParameterList.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_PropertyFunction.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureContext.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureParameter.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericArgument.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericCompatible.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericParameter.h>
#include <compiler/tree/nodes/generics/compiler_tree_nodes_generics_Nova_GenericType.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignable.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignment.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_ElvisOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operator.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_TernaryOperation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_UnaryOperation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_ArrayBracketOverload.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_FieldDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_ImplicitDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/util/compiler_util_Nova_Bounds.h>
#include <compiler/util/compiler_util_Nova_CompilerStringFunctions.h>
#include <compiler/util/compiler_util_Nova_FileUtils.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/util/compiler_util_Nova_OS.h>
#include <compiler/util/compiler_util_Nova_SyntaxUtils.h>

struct nova_datastruct_vtable_Comparable {
char x;
};

struct nova_datastruct_list_vtable_Iterable {
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
};

struct nova_datastruct_list_vtable_Iterator {
char (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
};

struct nova_datastruct_list_vtable_List {
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_virtual_Nova_toArray)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_contains)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_map)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_any)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_all)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_filter)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual_Nova_take)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual_Nova_skip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure24_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_Nova_String* (*nova_datastruct_list_Nova_List_virtual_Nova_join)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
int (*nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
int (*nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
};

struct nova_io_vtable_InputStream {
char x;
};

struct nova_operators_vtable_Equals {
char x;
};

struct nova_operators_vtable_Multiply {
char x;
};

struct nova_primitive_number_vtable_Integer {
char x;
};

struct nova_primitive_number_vtable_RealNumber {
char x;
};

struct compiler_tree_nodes_vtable_Abstractable {
char (*compiler_tree_nodes_Nova_Abstractable_virtual_Mutator0_Nova_isAbstract)(compiler_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, char);
char (*compiler_tree_nodes_Nova_Abstractable_virtual_Accessor1_Nova_isAbstract)(compiler_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*);
};

struct compiler_tree_nodes_vtable_Accessible {
compiler_tree_nodes_Nova_Accessible* (*compiler_tree_nodes_Nova_Accessible_virtual_Mutator0_Nova_accessedNode)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Accessible*);
compiler_tree_nodes_Nova_Accessible* (*compiler_tree_nodes_Nova_Accessible_virtual_Accessor1_Nova_accessedNode)(compiler_tree_nodes_Nova_Accessible*, nova_exception_Nova_ExceptionData*);
};

struct compiler_tree_nodes_vtable_Listener {
char x;
};

struct compiler_tree_nodes_annotations_vtable_Annotatable {
char x;
};

struct compiler_tree_nodes_functions_vtable_CallableFunction {
compiler_tree_nodes_functions_Nova_Parameter* (*compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Nova_parseParameter)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
compiler_tree_nodes_functions_Nova_ParameterList* (*compiler_tree_nodes_functions_Nova_CallableFunction_virtual_Accessor_Nova_parameterList)(compiler_tree_nodes_functions_Nova_CallableFunction*, nova_exception_Nova_ExceptionData*);
};

struct compiler_tree_nodes_generics_vtable_GenericCompatible {
nova_datastruct_list_Nova_Array* (*compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*);
nova_datastruct_list_Nova_Array* (*compiler_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters)(compiler_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*);
};

struct compiler_tree_nodes_operations_vtable_Assignable {
void (*compiler_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned)(compiler_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Value*);
};



struct NovaClassData {
nova_datastruct_vtable_Comparable* nova_datastruct_vtable_Comparable_value;
nova_datastruct_list_vtable_Iterable* nova_datastruct_list_vtable_Iterable_value;
nova_datastruct_list_vtable_Iterator* nova_datastruct_list_vtable_Iterator_value;
nova_datastruct_list_vtable_List* nova_datastruct_list_vtable_List_value;
nova_io_vtable_InputStream* nova_io_vtable_InputStream_value;
nova_operators_vtable_Equals* nova_operators_vtable_Equals_value;
nova_operators_vtable_Multiply* nova_operators_vtable_Multiply_value;
nova_primitive_number_vtable_Integer* nova_primitive_number_vtable_Integer_value;
nova_primitive_number_vtable_RealNumber* nova_primitive_number_vtable_RealNumber_value;
compiler_tree_nodes_vtable_Abstractable* compiler_tree_nodes_vtable_Abstractable_value;
compiler_tree_nodes_vtable_Accessible* compiler_tree_nodes_vtable_Accessible_value;
compiler_tree_nodes_vtable_Listener* compiler_tree_nodes_vtable_Listener_value;
compiler_tree_nodes_annotations_vtable_Annotatable* compiler_tree_nodes_annotations_vtable_Annotatable_value;
compiler_tree_nodes_functions_vtable_CallableFunction* compiler_tree_nodes_functions_vtable_CallableFunction_value;
compiler_tree_nodes_generics_vtable_GenericCompatible* compiler_tree_nodes_generics_vtable_GenericCompatible_value;
compiler_tree_nodes_operations_vtable_Assignable* compiler_tree_nodes_operations_vtable_Assignable_value;

nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_concat)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_substring)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
nova_Nova_Object* (*nova_datastruct_Nova_HashMap_virtual_Nova_put)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, nova_Nova_Object*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_virtual_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_get)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_set)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_first)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
char (*nova_io_Nova_OutputStream_virtual_Nova_write)(nova_io_Nova_OutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
double (*nova_math_Nova_Vector_virtual_Nova_dotProduct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*);
char (*nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, nova_primitive_number_Nova_Number*);
void (*nova_thread_Nova_Thread_virtual_Nova_run)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
void (*nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);
void (*compiler_engines_Nova_CodeGeneratorEngine_virtual_Nova_writeFiles)(compiler_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
void (*compiler_engines_Nova_CodeGeneratorEngine_virtual_Nova_insertMainMethod)(compiler_engines_Nova_CodeGeneratorEngine*, nova_exception_Nova_ExceptionData*);
void (*compiler_tree_nodes_Nova_Node_virtual_Nova_addChild)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*);
char (*compiler_tree_nodes_Nova_Node_virtual_Nova_replace)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*, compiler_tree_nodes_Nova_Node*);
compiler_tree_nodes_variables_Nova_VariableDeclaration* (*compiler_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_parseStatement)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, compiler_tree_nodes_Nova_Node*, compiler_util_Nova_Location*, int);
compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_Nova_Value* (*compiler_tree_nodes_Nova_Value_virtual0_static_Nova_parse)(compiler_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, compiler_tree_nodes_Nova_Node*, compiler_util_Nova_Location*, int);
char (*compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier)(compiler_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
char (*compiler_tree_nodes_Nova_Node_virtual_Nova_validateTypes)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*compiler_tree_nodes_variables_Nova_VariableDeclaration_virtual_Nova_writeModifiers)(compiler_tree_nodes_variables_Nova_VariableDeclaration*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*compiler_tree_nodes_Nova_Node_virtual_Nova_toNova)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*);
compiler_tree_nodes_Nova_ClassDeclaration* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPrivate)(compiler_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_variables_Nova_InstanceDeclaration_virtual_Accessor_Nova_isPublic)(compiler_tree_nodes_variables_Nova_InstanceDeclaration*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*compiler_tree_nodes_Nova_Node_virtual_Nova_writeNova)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*compiler_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_Nova_Scope* (*compiler_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Scope*);
compiler_tree_nodes_Nova_Program* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_Nova_NovaFile* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_functions_Nova_FunctionDeclaration* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_exceptionhandling_Nova_Try* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_Nova_Scope* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_Nova_Type* (*compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type)(compiler_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_Nova_Type_virtual_Accessor_Nova_isGeneric)(compiler_tree_nodes_Nova_Type*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_Nova_Value_virtual_Nova_parseType)(compiler_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*compiler_tree_nodes_Nova_Value_virtual_Nova_writeType)(compiler_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable)(compiler_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
compiler_tree_nodes_controlstructures_loops_Nova_Loop* (*compiler_tree_nodes_controlstructures_loops_Nova_Loop_virtual_static_Nova_parse)(compiler_tree_nodes_controlstructures_loops_Nova_Loop*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, compiler_tree_nodes_Nova_Node*, compiler_util_Nova_Location*, int);
nova_Nova_String* (*compiler_tree_nodes_functions_Nova_FunctionDeclaration_virtual_Nova_writeReturnType)(compiler_tree_nodes_functions_Nova_FunctionDeclaration*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*compiler_tree_nodes_functions_Nova_FunctionCall_virtual_Nova_writeName)(compiler_tree_nodes_functions_Nova_FunctionCall*, nova_exception_Nova_ExceptionData*);
char (*compiler_tree_nodes_variables_Nova_LocalDeclaration_virtual_Accessor_Nova_isImplicit)(compiler_tree_nodes_variables_Nova_LocalDeclaration*, nova_exception_Nova_ExceptionData*);
};

#endif