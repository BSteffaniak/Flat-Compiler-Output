#include "MainFunction.h"

void novaInitProgramData(void* this)
{
novaEnv.example_Animal.getNumLegs = example_Nova_Animal_VTable_val.example_Nova_Animal_virtual_Nova_getNumLegs;
novaEnv.example_Animal.getNumEyes = example_Nova_Animal_VTable_val.example_Nova_Animal_virtual_Nova_getNumEyes;
novaEnv.example_Animal.getDescription = example_Nova_Animal_VTable_val.example_Nova_Animal_virtual_Nova_getDescription;
novaEnv.example_Person.sayHello = example_Nova_Person_VTable_val.example_Nova_Person_virtual_Nova_sayHello;
novaEnv.example_Polygon.numberSides = example_Nova_Polygon_VTable_val.itable.example_Nova_Polygon_virtual_Nova_numberSides;
novaEnv.example_Polygon.calculateArea = example_Nova_Polygon_VTable_val.itable.example_Nova_Polygon_virtual_Nova_calculateArea;
novaEnv.novex_nest_TestRunner.runTests = novex_nest_Nova_TestRunner_VTable_val.itable.novex_nest_Nova_TestRunner_virtual_Nova_runTests;
novaEnv.nova_Object.toString = nova_Nova_Object_VTable_val.nova_Nova_Object_virtual_Nova_toString;
novaEnv.nova_String.concat = nova_Nova_String_VTable_val.nova_Nova_String_virtual_Nova_concat;
novaEnv.nova_String.substring = nova_Nova_String_VTable_val.nova_Nova_String_virtual_Nova_substring;
novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Nova_Comparable_VTable_val.itable.nova_datastruct_Nova_Comparable_virtual1_Nova_compareTo;
novaEnv.nova_datastruct_HashMap.add = nova_datastruct_Nova_HashMap_VTable_val.nova_datastruct_Nova_HashMap_virtual_Nova_add;
novaEnv.nova_datastruct_list_List.toArray = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray;
novaEnv.nova_datastruct_list_List.contains__nova_Object = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_contains;
novaEnv.nova_datastruct_list_List.forEach__void = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_forEach;
novaEnv.nova_datastruct_list_List.map__nova_Object = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_map;
novaEnv.nova_datastruct_list_List.any__nova_primitive_Bool = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_any;
novaEnv.nova_datastruct_list_List.all__nova_primitive_Bool__nova_primitive_Bool = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_all;
novaEnv.nova_datastruct_list_List.filter__nova_primitive_Bool = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_filter;
novaEnv.nova_datastruct_list_List.take = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_take;
novaEnv.nova_datastruct_list_List.skip = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_skip;
novaEnv.nova_datastruct_list_List.firstWhere__nova_primitive_Bool = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual1_Nova_firstWhere;
novaEnv.nova_datastruct_list_List.reverse = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse;
novaEnv.nova_datastruct_list_List.join = nova_datastruct_list_Nova_List_VTable_val.itable.nova_datastruct_list_Nova_List_virtual_Nova_join;
novaEnv.nova_io_InputStream.readString = nova_io_Nova_InputStream_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readString;
novaEnv.nova_io_InputStream.readBytes = nova_io_Nova_InputStream_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readBytes;
novaEnv.nova_io_OutputStream.write = nova_io_Nova_OutputStream_VTable_val.itable.nova_io_Nova_OutputStream_virtual_Nova_write;
novaEnv.nova_io_OutputStream.writeLine = nova_io_Nova_OutputStream_VTable_val.itable.nova_io_Nova_OutputStream_virtual_Nova_writeLine;
novaEnv.nova_operators_EqualsOperator.equals__nova_Object = nova_operators_Nova_EqualsOperator_VTable_val.itable.nova_operators_Nova_EqualsOperator_virtual1_Nova_equals;
novaEnv.nova_operators_GreaterThanOperator.greaterThan__nova_Object = nova_operators_Nova_GreaterThanOperator_VTable_val.itable.nova_operators_Nova_GreaterThanOperator_virtual1_Nova_greaterThan;
novaEnv.nova_operators_GreaterThanOrEqualToOperator.greaterThanOrEqualTo__nova_Object = nova_operators_Nova_GreaterThanOrEqualToOperator_VTable_val.itable.nova_operators_Nova_GreaterThanOrEqualToOperator_virtual1_Nova_greaterThanOrEqualTo;
novaEnv.nova_operators_LessThanOperator.lessThan__nova_Object = nova_operators_Nova_LessThanOperator_VTable_val.itable.nova_operators_Nova_LessThanOperator_virtual1_Nova_lessThan;
novaEnv.nova_operators_LessThanOrEqualToOperator.lessThanOrEqualTo__nova_Object = nova_operators_Nova_LessThanOrEqualToOperator_VTable_val.itable.nova_operators_Nova_LessThanOrEqualToOperator_virtual1_Nova_lessThanOrEqualTo;
novaEnv.nova_operators_MinusEqualsOperator.minusEquals__nova_Object = nova_operators_Nova_MinusEqualsOperator_VTable_val.itable.nova_operators_Nova_MinusEqualsOperator_virtual1_Nova_minusEquals;
novaEnv.nova_operators_MinusOperator.minus__nova_Object = nova_operators_Nova_MinusOperator_VTable_val.itable.nova_operators_Nova_MinusOperator_virtual1_Nova_minus;
novaEnv.nova_operators_MultiplyEqualsOperator.multiplyEquals__nova_Object = nova_operators_Nova_MultiplyEqualsOperator_VTable_val.itable.nova_operators_Nova_MultiplyEqualsOperator_virtual1_Nova_multiplyEquals;
novaEnv.nova_operators_MultiplyOperator.multiply__nova_Object = nova_operators_Nova_MultiplyOperator_VTable_val.itable.nova_operators_Nova_MultiplyOperator_virtual1_Nova_multiply;
novaEnv.nova_operators_NotEqualToOperator.notEqualTo__nova_Object = nova_operators_Nova_NotEqualToOperator_VTable_val.itable.nova_operators_Nova_NotEqualToOperator_virtual1_Nova_notEqualTo;
novaEnv.nova_operators_PlusEqualsOperator.plusEquals__nova_Object = nova_operators_Nova_PlusEqualsOperator_VTable_val.itable.nova_operators_Nova_PlusEqualsOperator_virtual1_Nova_plusEquals;
novaEnv.nova_operators_PlusOperator.plus__nova_Object = nova_operators_Nova_PlusOperator_VTable_val.itable.nova_operators_Nova_PlusOperator_virtual1_Nova_plus;
novaEnv.nova_primitive_number_Number.plusInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_plusInteger;
novaEnv.nova_primitive_number_Number.plusReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_plusReal;
novaEnv.nova_primitive_number_Number.plusEqualsInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_plusEqualsInteger;
novaEnv.nova_primitive_number_Number.plusEqualsReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_plusEqualsReal;
novaEnv.nova_primitive_number_Number.minusInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_minusInteger;
novaEnv.nova_primitive_number_Number.minusReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_minusReal;
novaEnv.nova_primitive_number_Number.minusEqualsInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_minusEqualsInteger;
novaEnv.nova_primitive_number_Number.minusEqualsReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_minusEqualsReal;
novaEnv.nova_primitive_number_Number.multiplyInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_multiplyInteger;
novaEnv.nova_primitive_number_Number.multiplyReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_multiplyReal;
novaEnv.nova_primitive_number_Number.multiplyEqualsInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_multiplyEqualsInteger;
novaEnv.nova_primitive_number_Number.multiplyEqualsReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_multiplyEqualsReal;
novaEnv.nova_primitive_number_Number.compareToInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_compareToInteger;
novaEnv.nova_primitive_number_Number.compareToReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_compareToReal;
novaEnv.nova_primitive_number_Number.equalsInteger = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_equalsInteger;
novaEnv.nova_primitive_number_Number.equalsReal = nova_primitive_number_Nova_Number_VTable_val.nova_primitive_number_Nova_Number_virtual_Nova_equalsReal;
novaEnv.nova_star_UIComponent.onAdded = nova_star_Nova_UIComponent_VTable_val.nova_star_Nova_UIComponent_virtual_Nova_onAdded;
novaEnv.nova_star_UIComponent.draw = nova_star_Nova_UIComponent_VTable_val.nova_star_Nova_UIComponent_virtual_Nova_draw;
novaEnv.nova_star_UIComponent.searchActionTarget = nova_star_Nova_UIComponent_VTable_val.nova_star_Nova_UIComponent_virtual_Nova_searchActionTarget;
novaEnv.nova_star_UIComponent.paint = nova_star_Nova_UIComponent_VTable_val.nova_star_Nova_UIComponent_virtual_Nova_paint;
novaEnv.nova_thread_Thread.run = nova_thread_Nova_Thread_VTable_val.nova_thread_Nova_Thread_virtual_Nova_run;
novaEnv.nova_thread_UncaughtExceptionHandler.uncaughtException = nova_thread_Nova_UncaughtExceptionHandler_VTable_val.nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException;
novaEnv.nova_time_Timer.stop = nova_time_Nova_Timer_VTable_val.nova_time_Nova_Timer_virtual_Nova_stop;
novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_Nova_SvgComponent_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_Nova_No3Node_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;

// plumbercalc/pipes/Fitting
plumbercalc_pipes_Nova_Fitting_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/pipes/Fitting")),
0);

// plumbercalc/pipes/Fraction
plumbercalc_pipes_Nova_Fraction_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/pipes/Fraction")),
0);

// plumbercalc/pipes/Pipe
plumbercalc_pipes_Nova_Pipe_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/pipes/Pipe")),
0);

// plumbercalc/pipes/TeeFitting
plumbercalc_pipes_Nova_TeeFitting_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/pipes/TeeFitting")),
0);

// plumbercalc/pipes/Units
plumbercalc_pipes_Nova_Units_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/pipes/Units")),
0);

// plumbercalc/tests/AllTestsRunner
plumbercalc_tests_Nova_AllTestsRunner_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/tests/AllTestsRunner")),
0);

// plumbercalc/tests/FractionTests
plumbercalc_tests_Nova_FractionTests_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/tests/FractionTests")),
0);

// plumbercalc/tests/PipeTests
plumbercalc_tests_Nova_PipeTests_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/tests/PipeTests")),
0);

// plumbercalc/tests/UnitConversionTests
plumbercalc_tests_Nova_UnitConversionTests_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("plumbercalc/tests/UnitConversionTests")),
0);

// example/Animal
example_Nova_Animal_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Animal")),
0);

// example/ArrayDemo
example_Nova_ArrayDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ArrayDemo")),
0);

// example/BodyBuilder
example_Nova_BodyBuilder_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/BodyBuilder")),
0);

// example/ClosureDemo
example_Nova_ClosureDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ClosureDemo")),
0);

// example/Dog
example_Nova_Dog_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Dog")),
0);

// example/ExceptionHandlingDemo
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ExceptionHandlingDemo")),
0);

// example/FileTest
example_Nova_FileTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/FileTest")),
0);

// example/GenericDemo
example_Nova_GenericDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/GenericDemo")),
0);

// example/HashMapDemo
example_Nova_HashMapDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashMapDemo")),
0);

// example/HashSetDemo
example_Nova_HashSetDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashSetDemo")),
0);

// example/IntegerTest
example_Nova_IntegerTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/IntegerTest")),
0);

// example/Lab
example_Nova_Lab_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Lab")),
0);

// example/MathDemo
example_Nova_MathDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/MathDemo")),
0);

// example/NestTest
example_Nova_NestTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NestTest")),
0);

// example/NonWholeDivisionException
example_Nova_NonWholeDivisionException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NonWholeDivisionException")),
0);

// example/Person
example_Nova_Person_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Person")),
0);

// example/Polygon
example_Nova_Polygon_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Polygon")),
1);

// example/PolymorphismDemo
example_Nova_PolymorphismDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/PolymorphismDemo")),
0);

// example/QueueDemo
example_Nova_QueueDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/QueueDemo")),
0);

// example/Spider
example_Nova_Spider_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Spider")),
0);

// example/Square
example_Nova_Square_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Square")),
0);

// example/SvgChart
example_Nova_SvgChart_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgChart")),
0);

// example/SvgFractal
example_Nova_SvgFractal_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgFractal")),
0);

// example/T1
example_Nova_T1_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T1")),
0);

// example/T2
example_Nova_T2_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T2")),
0);

// example/Test
example_Nova_Test_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Test")),
0);

// example/ThreadDemo
example_Nova_ThreadDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemo")),
0);

// example/ThreadDemoImplementation
example_Nova_ThreadDemoImplementation_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemoImplementation")),
0);

// example/ackermann/Ackermann
example_ackermann_Nova_Ackermann_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ackermann/Ackermann")),
0);

// example/copy/Dog
example_copy_Nova_Dog_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/copy/Dog")),
0);

// example/database/DatabaseDemo
example_database_Nova_DatabaseDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/database/DatabaseDemo")),
0);

// example/network/ClientDemo
example_network_Nova_ClientDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ClientDemo")),
0);

// example/network/ConnectionThread
example_network_Nova_ConnectionThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ConnectionThread")),
0);

// example/network/OutputThread
example_network_Nova_OutputThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/OutputThread")),
0);

// example/network/ServerDemo
example_network_Nova_ServerDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ServerDemo")),
0);

// stabilitytest/AssignmentStability
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/AssignmentStability")),
0);

// stabilitytest/BoundedIntervalStability
stabilitytest_Nova_BoundedIntervalStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/BoundedIntervalStability")),
0);

// stabilitytest/ClassWithProperties
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClassWithProperties")),
0);

// stabilitytest/ClientThread
stabilitytest_Nova_ClientThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClientThread")),
0);

// stabilitytest/ClosureStability
stabilitytest_Nova_ClosureStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClosureStability")),
0);

// stabilitytest/ExceptionStability
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExceptionStability")),
0);

// stabilitytest/ExternalInnerClassStability
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExternalInnerClassStability")),
0);

// stabilitytest/FancyOutputStreamTests
stabilitytest_Nova_FancyOutputStreamTests_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/FancyOutputStreamTests")),
0);

// stabilitytest/FileStability
stabilitytest_Nova_FileStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/FileStability")),
0);

// stabilitytest/FirstClassFunctionStability
stabilitytest_Nova_FirstClassFunctionStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/FirstClassFunctionStability")),
0);

// stabilitytest/InnerClassStability
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability")),
0);

// stabilitytest/InnerClassStability.MyOuter
stabilitytest_Nova_MyOuter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyOuter")),
0);

// stabilitytest/InnerClassStability.MyInner
stabilitytest_Nova_MyInner_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyInner")),
0);

// stabilitytest/IntervalStability
stabilitytest_Nova_IntervalStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/IntervalStability")),
0);

// stabilitytest/LambdaStability
stabilitytest_Nova_LambdaStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/LambdaStability")),
0);

// stabilitytest/LibraryLoadingStability
stabilitytest_Nova_LibraryLoadingStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/LibraryLoadingStability")),
0);

// stabilitytest/NetworkStability
stabilitytest_Nova_NetworkStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/NetworkStability")),
0);

// stabilitytest/Node
stabilitytest_Nova_Node_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/Node")),
0);

// stabilitytest/PolymorphicSubClass
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSubClass")),
0);

// stabilitytest/PolymorphicSuperClass
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSuperClass")),
0);

// stabilitytest/PolymorphismStability
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphismStability")),
0);

// stabilitytest/PrimitiveOverloadStability
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PrimitiveOverloadStability")),
0);

// stabilitytest/RegexStability
stabilitytest_Nova_RegexStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/RegexStability")),
0);

// stabilitytest/StabilityExceptionHandler
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityExceptionHandler")),
0);

// stabilitytest/StabilityTest
stabilitytest_Nova_StabilityTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTest")),
0);

// stabilitytest/StabilityTestCase
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestCase")),
0);

// stabilitytest/StabilityTestException
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestException")),
0);

// stabilitytest/StaticImportStability
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StaticImportStability")),
0);

// stabilitytest/SyntaxStability
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/SyntaxStability")),
0);

// stabilitytest/ThreadImplementation
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadImplementation")),
0);

// stabilitytest/ThreadStability
stabilitytest_Nova_ThreadStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadStability")),
0);

// stabilitytest/TimeStability
stabilitytest_Nova_TimeStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/TimeStability")),
0);

// stabilitytest/ToStringStability
stabilitytest_Nova_ToStringStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ToStringStability")),
0);

// stabilitytest/UnstableException
stabilitytest_Nova_UnstableException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/UnstableException")),
0);

// novex/nest/InvalidAssertionException
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/InvalidAssertionException")),
0);

// novex/nest/Nest
novex_nest_Nova_Nest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest")),
0);

// novex/nest/Nest.Nest1Bool
novex_nest_Bool_Nova_Nest1Bool_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Bool")),
0);

// novex/nest/Nest.Nest1Int
novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Int")),
0);

// novex/nest/Nest.Nest1Double
novex_nest_Double_Nova_Nest1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Double")),
0);

// novex/nest/Nest.Nest1Char
novex_nest_Char_Nova_Nest1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Char")),
0);

// novex/nest/Nest.Nest1Long
novex_nest_Long_Nova_Nest1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Long")),
0);

// novex/nest/Nest.Nest1Byte
novex_nest_Byte_Nova_Nest1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Byte")),
0);

// novex/nest/NestException
novex_nest_Nova_NestException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/NestException")),
0);

// novex/nest/TestCase
novex_nest_Nova_TestCase_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestCase")),
0);

// novex/nest/TestResult
novex_nest_Nova_TestResult_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestResult")),
0);

// novex/nest/TestRunner
novex_nest_Nova_TestRunner_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestRunner")),
1);

// novex/nest/TestRunnerModel
novex_nest_Nova_TestRunnerModel_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestRunnerModel")),
0);

// novex/nest/TestSuite
novex_nest_Nova_TestSuite_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestSuite")),
0);

// novex/nest/TestSuiteRunner
novex_nest_Nova_TestSuiteRunner_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestSuiteRunner")),
1);

// novex/nest/TestSuiteRunnerModel
novex_nest_Nova_TestSuiteRunnerModel_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestSuiteRunnerModel")),
0);

// novex/nest/ui/ResultBar
novex_nest_ui_Nova_ResultBar_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/ui/ResultBar")),
0);

// novex/nest/ui/ResultWindow
novex_nest_ui_Nova_ResultWindow_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/ui/ResultWindow")),
0);

// nova/Object
nova_Nova_Object_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/Object")),
0);

// nova/String
nova_Nova_String_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/String")),
0);

// nova/Substring
nova_Nova_Substring_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/Substring")),
0);

// nova/System
nova_Nova_System_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/System")),
0);

// nova/ar/ImageTracker
nova_ar_Nova_ImageTracker_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/ImageTracker")),
0);

// nova/ar/TrackPoint
nova_ar_Nova_TrackPoint_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/TrackPoint")),
0);

// nova/database/DBConnector
nova_database_Nova_DBConnector_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/DBConnector")),
0);

// nova/database/ResultSet
nova_database_Nova_ResultSet_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/ResultSet")),
0);

// nova/datastruct/BinaryNode
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryNode")),
0);

// nova/datastruct/BinaryTree
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryTree")),
0);

// nova/datastruct/Bounds
nova_datastruct_Nova_Bounds_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Bounds")),
0);

// nova/datastruct/Comparable
nova_datastruct_Nova_Comparable_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Comparable")),
1);

// nova/datastruct/HashMap
nova_datastruct_Nova_HashMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap")),
0);

// nova/datastruct/HashMap.HashMapIterator
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIterator")),
0);

// nova/datastruct/HashMap.HashMap1Long
nova_datastruct_Long_V_Nova_HashMap1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMap1Long")),
0);

// nova/datastruct/HashMap.HashMapIterator1Long
nova_datastruct_Long_V_Nova_HashMapIterator1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIterator1Long")),
0);

// nova/datastruct/HashMap.HashMap1Int
nova_datastruct_Int_V_Nova_HashMap1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMap1Int")),
0);

// nova/datastruct/HashMap.HashMapIterator1Int
nova_datastruct_Int_V_Nova_HashMapIterator1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIterator1Int")),
0);

// nova/datastruct/HashMap.HashMap1Int2Int
nova_datastruct_Int_Int_Nova_HashMap1Int2Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMap1Int2Int")),
0);

// nova/datastruct/HashMap.HashMapIterator1Int2Int
nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIterator1Int2Int")),
0);

// nova/datastruct/HashSet
nova_datastruct_Nova_HashSet_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashSet")),
0);

// nova/datastruct/ImmutableHashMap
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap")),
0);

// nova/datastruct/ImmutableHashMap.ImmutableHashMap1Long
nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap.ImmutableHashMap1Long")),
0);

// nova/datastruct/ImmutableHashMap.ImmutableHashMap1Int
nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap.ImmutableHashMap1Int")),
0);

// nova/datastruct/ImmutableHashMap.ImmutableHashMap1Int2Int
nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap.ImmutableHashMap1Int2Int")),
0);

// nova/datastruct/Node
nova_datastruct_Nova_Node_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Node")),
0);

// nova/datastruct/Pair
nova_datastruct_Nova_Pair_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair")),
0);

// nova/datastruct/Pair.Pair1Int2Int
nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair.Pair1Int2Int")),
0);

// nova/datastruct/Pair.Pair1Long
nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair.Pair1Long")),
0);

// nova/datastruct/Pair.Pair1Int
nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair.Pair1Int")),
0);

// nova/datastruct/ReversibleHashMap
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ReversibleHashMap")),
0);

// nova/datastruct/Tree
nova_datastruct_Nova_Tree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tree")),
0);

// nova/datastruct/Tuple
nova_datastruct_Nova_Tuple_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple")),
0);

// nova/datastruct/Tuple2
nova_datastruct_Nova_Tuple2_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple2")),
0);

// nova/datastruct/Tuple2.Tuple22Int
nova_datastruct_A_Int_Nova_Tuple22Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple2.Tuple22Int")),
0);

// nova/datastruct/list/Array
nova_datastruct_list_Nova_Array_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array")),
0);

// nova/datastruct/list/Array.Array1Double
nova_datastruct_list_Double_Nova_Array1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.Array1Double")),
0);

// nova/datastruct/list/Array.Array1Char
nova_datastruct_list_Char_Nova_Array1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.Array1Char")),
0);

// nova/datastruct/list/Array.Array1Int
nova_datastruct_list_Int_Nova_Array1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.Array1Int")),
0);

// nova/datastruct/list/Array.Array1Byte
nova_datastruct_list_Byte_Nova_Array1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.Array1Byte")),
0);

// nova/datastruct/list/Array.Array1Long
nova_datastruct_list_Long_Nova_Array1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.Array1Long")),
0);

// nova/datastruct/list/ArrayIterator
nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator")),
0);

// nova/datastruct/list/ArrayIterator.ArrayIterator1Double
nova_datastruct_list_Double_Nova_ArrayIterator1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIterator1Double")),
0);

// nova/datastruct/list/ArrayIterator.ArrayIterator1Char
nova_datastruct_list_Char_Nova_ArrayIterator1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIterator1Char")),
0);

// nova/datastruct/list/ArrayIterator.ArrayIterator1Int
nova_datastruct_list_Int_Nova_ArrayIterator1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIterator1Int")),
0);

// nova/datastruct/list/ArrayIterator.ArrayIterator1Byte
nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIterator1Byte")),
0);

// nova/datastruct/list/ArrayIterator.ArrayIterator1Long
nova_datastruct_list_Long_Nova_ArrayIterator1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIterator1Long")),
0);

// nova/datastruct/list/CharArray
nova_datastruct_list_Nova_CharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArray")),
0);

// nova/datastruct/list/CharArrayIterator
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArrayIterator")),
0);

// nova/datastruct/list/CompiledList
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CompiledList")),
0);

// nova/datastruct/list/DoubleArray
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArray")),
0);

// nova/datastruct/list/DoubleArrayIterator
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArrayIterator")),
0);

// nova/datastruct/list/EmptyStackException
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/EmptyStackException")),
0);

// nova/datastruct/list/ImmutableArray
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray")),
0);

// nova/datastruct/list/ImmutableArray.ImmutableArray1Double
nova_datastruct_list_Double_Nova_ImmutableArray1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArray1Double")),
0);

// nova/datastruct/list/ImmutableArray.ImmutableArray1Char
nova_datastruct_list_Char_Nova_ImmutableArray1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArray1Char")),
0);

// nova/datastruct/list/ImmutableArray.ImmutableArray1Int
nova_datastruct_list_Int_Nova_ImmutableArray1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArray1Int")),
0);

// nova/datastruct/list/ImmutableArray.ImmutableArray1Byte
nova_datastruct_list_Byte_Nova_ImmutableArray1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArray1Byte")),
0);

// nova/datastruct/list/ImmutableArray.ImmutableArray1Long
nova_datastruct_list_Long_Nova_ImmutableArray1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArray1Long")),
0);

// nova/datastruct/list/ImmutableArrayIterator
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator")),
0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Double
nova_datastruct_list_Double_Nova_ImmutableArrayIterator1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Double")),
0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Char
nova_datastruct_list_Char_Nova_ImmutableArrayIterator1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Char")),
0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Int
nova_datastruct_list_Int_Nova_ImmutableArrayIterator1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Int")),
0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Byte
nova_datastruct_list_Byte_Nova_ImmutableArrayIterator1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Byte")),
0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Long
nova_datastruct_list_Long_Nova_ImmutableArrayIterator1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIterator1Long")),
0);

// nova/datastruct/list/ImmutableCharArray
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArray")),
0);

// nova/datastruct/list/ImmutableCharArrayIterator
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArrayIterator")),
0);

// nova/datastruct/list/IntArray
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArray")),
0);

// nova/datastruct/list/IntArrayIterator
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArrayIterator")),
0);

// nova/datastruct/list/IntRange
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRange")),
0);

// nova/datastruct/list/IntRangeIterator
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRangeIterator")),
0);

// nova/datastruct/list/Iterable
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable")),
1);

// nova/datastruct/list/Iterable.Iterable1Double
nova_datastruct_list_Double_Nova_Iterable1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.Iterable1Double")),
1);

// nova/datastruct/list/Iterable.Iterable1Char
nova_datastruct_list_Char_Nova_Iterable1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.Iterable1Char")),
1);

// nova/datastruct/list/Iterable.Iterable1Int
nova_datastruct_list_Int_Nova_Iterable1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.Iterable1Int")),
1);

// nova/datastruct/list/Iterable.Iterable1Byte
nova_datastruct_list_Byte_Nova_Iterable1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.Iterable1Byte")),
1);

// nova/datastruct/list/Iterable.Iterable1Long
nova_datastruct_list_Long_Nova_Iterable1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.Iterable1Long")),
1);

// nova/datastruct/list/Iterator
nova_datastruct_list_Nova_Iterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator")),
1);

// nova/datastruct/list/Iterator.Iterator1Double
nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.Iterator1Double")),
1);

// nova/datastruct/list/Iterator.Iterator1Char
nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.Iterator1Char")),
1);

// nova/datastruct/list/Iterator.Iterator1Int
nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.Iterator1Int")),
1);

// nova/datastruct/list/Iterator.Iterator1Byte
nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.Iterator1Byte")),
1);

// nova/datastruct/list/Iterator.Iterator1Long
nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.Iterator1Long")),
1);

// nova/datastruct/list/LinkedList
nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedList")),
0);

// nova/datastruct/list/LinkedListIterator
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedListIterator")),
0);

// nova/datastruct/list/List
nova_datastruct_list_Nova_List_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List")),
1);

// nova/datastruct/list/List.List1Double
nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.List1Double")),
1);

// nova/datastruct/list/List.List1Char
nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.List1Char")),
1);

// nova/datastruct/list/List.List1Int
nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.List1Int")),
1);

// nova/datastruct/list/List.List1Byte
nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.List1Byte")),
1);

// nova/datastruct/list/List.List1Long
nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.List1Long")),
1);

// nova/datastruct/list/ListNode
nova_datastruct_list_Nova_ListNode_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ListNode")),
0);

// nova/datastruct/list/NoSuchElementException
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/NoSuchElementException")),
0);

// nova/datastruct/list/OrderedList
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList")),
1);

// nova/datastruct/list/OrderedList.OrderedList1Double
nova_datastruct_list_Double_Nova_OrderedList1Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedList1Double")),
1);

// nova/datastruct/list/OrderedList.OrderedList1Char
nova_datastruct_list_Char_Nova_OrderedList1Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedList1Char")),
1);

// nova/datastruct/list/OrderedList.OrderedList1Int
nova_datastruct_list_Int_Nova_OrderedList1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedList1Int")),
1);

// nova/datastruct/list/OrderedList.OrderedList1Byte
nova_datastruct_list_Byte_Nova_OrderedList1Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedList1Byte")),
1);

// nova/datastruct/list/OrderedList.OrderedList1Long
nova_datastruct_list_Long_Nova_OrderedList1Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedList1Long")),
1);

// nova/datastruct/list/Queue
nova_datastruct_list_Nova_Queue_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Queue")),
0);

// nova/datastruct/list/Stack
nova_datastruct_list_Nova_Stack_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Stack")),
0);

// nova/datastruct/list/StringCharArray
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/StringCharArray")),
0);

// nova/datastruct/list/SubstringCharArray
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/SubstringCharArray")),
0);

// nova/exception/Backtraces
nova_exception_Nova_Backtraces_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Backtraces")),
0);

// nova/exception/CaughtException
nova_exception_Nova_CaughtException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/CaughtException")),
0);

// nova/exception/DivideByZeroException
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/DivideByZeroException")),
0);

// nova/exception/Exception
nova_exception_Nova_Exception_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Exception")),
0);

// nova/exception/ExceptionData
nova_exception_Nova_ExceptionData_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/ExceptionData")),
0);

// nova/exception/InvalidArgumentException
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidArgumentException")),
0);

// nova/exception/InvalidOperationException
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidOperationException")),
0);

// nova/exception/NullAccessException
nova_exception_Nova_NullAccessException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/NullAccessException")),
0);

// nova/exception/StackTrace
nova_exception_Nova_StackTrace_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/StackTrace")),
0);

// nova/exception/UnimplementedForTargetException
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedForTargetException")),
0);

// nova/exception/UnimplementedOperationException
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedOperationException")),
0);

// nova/gc/GC
nova_gc_Nova_GC_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/gc/GC")),
0);

// nova/io/ClosedStreamException
nova_io_Nova_ClosedStreamException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/ClosedStreamException")),
0);

// nova/io/Console
nova_io_Nova_Console_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Console")),
0);

// nova/io/Curl
nova_io_Nova_Curl_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Curl")),
0);

// nova/io/EmptyOutputStream
nova_io_Nova_EmptyOutputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/EmptyOutputStream")),
0);

// nova/io/FancyOutputStream
nova_io_Nova_FancyOutputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FancyOutputStream")),
0);

// nova/io/File
nova_io_Nova_File_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/File")),
0);

// nova/io/FileNotFoundException
nova_io_Nova_FileNotFoundException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileNotFoundException")),
0);

// nova/io/FileReader
nova_io_Nova_FileReader_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileReader")),
0);

// nova/io/FileWriter
nova_io_Nova_FileWriter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileWriter")),
0);

// nova/io/InputStream
nova_io_Nova_InputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/InputStream")),
1);

// nova/io/OutputStream
nova_io_Nova_OutputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/OutputStream")),
1);

// nova/io/StreamReader
nova_io_Nova_StreamReader_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StreamReader")),
0);

// nova/io/StringBuilder
nova_io_Nova_StringBuilder_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StringBuilder")),
0);

// nova/math/ArithmeticSequence
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/ArithmeticSequence")),
0);

// nova/math/Diekstra
nova_math_Nova_Diekstra_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Diekstra")),
0);

// nova/math/GeometricSequence
nova_math_Nova_GeometricSequence_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/GeometricSequence")),
0);

// nova/math/Graph
nova_math_Nova_Graph_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Graph")),
0);

// nova/math/InvalidNumericStatementException
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/InvalidNumericStatementException")),
0);

// nova/math/Math
nova_math_Nova_Math_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Math")),
0);

// nova/math/Matrix
nova_math_Nova_Matrix_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Matrix")),
0);

// nova/math/NumericOperand
nova_math_Nova_NumericOperand_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperand")),
0);

// nova/math/NumericOperation
nova_math_Nova_NumericOperation_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperation")),
0);

// nova/math/NumericStatement
nova_math_Nova_NumericStatement_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericStatement")),
0);

// nova/math/NumericTree
nova_math_Nova_NumericTree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericTree")),
0);

// nova/math/Polynomial
nova_math_Nova_Polynomial_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Polynomial")),
0);

// nova/math/Sequence
nova_math_Nova_Sequence_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Sequence")),
0);

// nova/math/Statement
nova_math_Nova_Statement_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Statement")),
0);

// nova/math/StatementComponent
nova_math_Nova_StatementComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/StatementComponent")),
0);

// nova/math/VariableOperand
nova_math_Nova_VariableOperand_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/VariableOperand")),
0);

// nova/math/Vector
nova_math_Nova_Vector_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector")),
0);

// nova/math/Vector2D
nova_math_Nova_Vector2D_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector2D")),
0);

// nova/math/Vector3D
nova_math_Nova_Vector3D_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector3D")),
0);

// nova/math/Vector4D
nova_math_Nova_Vector4D_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector4D")),
0);

// nova/math/calculus/Calculus
nova_math_calculus_Nova_Calculus_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/calculus/Calculus")),
0);

// nova/math/huffman/HuffmanTree
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/huffman/HuffmanTree")),
0);

// nova/math/logic/Conclusion
nova_math_logic_Nova_Conclusion_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Conclusion")),
0);

// nova/math/logic/Hypothesis
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Hypothesis")),
0);

// nova/math/logic/InvalidFormulaException
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/InvalidFormulaException")),
0);

// nova/math/logic/LogicalConnective
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalConnective")),
0);

// nova/math/logic/LogicalStatement
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalStatement")),
0);

// nova/math/logic/StatementComponent
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementComponent")),
0);

// nova/math/logic/StatementGroup
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementGroup")),
0);

// nova/math/logic/StatementLetter
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementLetter")),
0);

// nova/math/logic/WFF
nova_math_logic_Nova_WFF_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/WFF")),
0);

// nova/meta/Class
nova_meta_Nova_Class_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Class")),
0);

// nova/meta/Field
nova_meta_Nova_Field_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Field")),
0);

// nova/meta/FunctionMap
nova_meta_Nova_FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/FunctionMap")),
0);

// nova/meta/GenericArgument
nova_meta_Nova_GenericArgument_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericArgument")),
0);

// nova/meta/GenericParameter
nova_meta_Nova_GenericParameter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericParameter")),
0);

// nova/meta/InvalidLibraryException
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/InvalidLibraryException")),
0);

// nova/meta/Library
nova_meta_Nova_Library_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Library")),
0);

// nova/meta/PropertyMap
nova_meta_Nova_PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/PropertyMap")),
0);

// nova/meta/Type
nova_meta_Nova_Type_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Type")),
0);

// nova/network/ClientSocket
nova_network_Nova_ClientSocket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ClientSocket")),
0);

// nova/network/ConnectionSocket
nova_network_Nova_ConnectionSocket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ConnectionSocket")),
0);

// nova/network/NetworkInputStream
nova_network_Nova_NetworkInputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkInputStream")),
0);

// nova/network/NetworkOutputStream
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkOutputStream")),
0);

// nova/network/ServerSocket
nova_network_Nova_ServerSocket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ServerSocket")),
0);

// nova/network/Socket
nova_network_Nova_Socket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/Socket")),
0);

// nova/operators/EqualsOperator
nova_operators_Nova_EqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/EqualsOperator")),
1);

// nova/operators/GreaterThanOperator
nova_operators_Nova_GreaterThanOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/GreaterThanOperator")),
1);

// nova/operators/GreaterThanOrEqualToOperator
nova_operators_Nova_GreaterThanOrEqualToOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/GreaterThanOrEqualToOperator")),
1);

// nova/operators/LessThanOperator
nova_operators_Nova_LessThanOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/LessThanOperator")),
1);

// nova/operators/LessThanOrEqualToOperator
nova_operators_Nova_LessThanOrEqualToOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/LessThanOrEqualToOperator")),
1);

// nova/operators/MinusEqualsOperator
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusEqualsOperator")),
1);

// nova/operators/MinusOperator
nova_operators_Nova_MinusOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusOperator")),
1);

// nova/operators/MultiplyEqualsOperator
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyEqualsOperator")),
1);

// nova/operators/MultiplyOperator
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyOperator")),
1);

// nova/operators/NotEqualToOperator
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/NotEqualToOperator")),
1);

// nova/operators/PlusEqualsOperator
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusEqualsOperator")),
1);

// nova/operators/PlusOperator
nova_operators_Nova_PlusOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusOperator")),
1);

// nova/package/Package
nova_package_Nova_Package_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/package/Package")),
0);

// nova/primitive/Bool
nova_primitive_Nova_Bool_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Bool")),
0);

// nova/primitive/Null
nova_primitive_Nova_Null_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Null")),
0);

// nova/primitive/Primitive
nova_primitive_Nova_Primitive_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Primitive")),
0);

// nova/primitive/number/Byte
nova_primitive_number_Nova_Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Byte")),
0);

// nova/primitive/number/Char
nova_primitive_number_Nova_Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Char")),
0);

// nova/primitive/number/Double
nova_primitive_number_Nova_Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Double")),
0);

// nova/primitive/number/Float
nova_primitive_number_Nova_Float_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Float")),
0);

// nova/primitive/number/Int
nova_primitive_number_Nova_Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Int")),
0);

// nova/primitive/number/Integer
nova_primitive_number_Nova_Integer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Integer")),
1);

// nova/primitive/number/Long
nova_primitive_number_Nova_Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Long")),
0);

// nova/primitive/number/Number
nova_primitive_number_Nova_Number_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Number")),
0);

// nova/primitive/number/RealNumber
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/RealNumber")),
1);

// nova/primitive/number/Short
nova_primitive_number_Nova_Short_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Short")),
0);

// nova/process/Process
nova_process_Nova_Process_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/process/Process")),
0);

// nova/regex/Match
nova_regex_Nova_Match_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Match")),
0);

// nova/regex/Pattern
nova_regex_Nova_Pattern_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Pattern")),
0);

// nova/regex/Regex
nova_regex_Nova_Regex_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Regex")),
0);

// nova/security/MD5
nova_security_Nova_MD5_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/MD5")),
0);

// nova/security/Sha256
nova_security_Nova_Sha256_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/Sha256")),
0);

// nova/serialization/JsonSerializer
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/JsonSerializer")),
0);

// nova/serialization/JsonSerializer.InvalidParseException
nova_serialization_Nova_InvalidParseException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/JsonSerializer.InvalidParseException")),
0);

// nova/serialization/JsonSerializer.MissingMatchingTokenException
nova_serialization_Nova_MissingMatchingTokenException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/JsonSerializer.MissingMatchingTokenException")),
0);

// nova/serialization/SyntaxStringFunctions
nova_serialization_Nova_SyntaxStringFunctions_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/SyntaxStringFunctions")),
0);

// nova/star/Button
nova_star_Nova_Button_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Button")),
0);

// nova/star/Color
nova_star_Nova_Color_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Color")),
0);

// nova/star/Frame
nova_star_Nova_Frame_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Frame")),
0);

// nova/star/ImmutableColor
nova_star_Nova_ImmutableColor_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/ImmutableColor")),
0);

// nova/star/Label
nova_star_Nova_Label_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Label")),
0);

// nova/star/Panel
nova_star_Nova_Panel_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Panel")),
0);

// nova/star/Screen
nova_star_Nova_Screen_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Screen")),
0);

// nova/star/ScrollBar
nova_star_Nova_ScrollBar_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/ScrollBar")),
0);

// nova/star/UIAction
nova_star_Nova_UIAction_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/UIAction")),
1);

// nova/star/UIComponent
nova_star_Nova_UIComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/UIComponent")),
0);

// nova/star/UIParent
nova_star_Nova_UIParent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/UIParent")),
1);

// nova/star/Window
nova_star_Nova_Window_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Window")),
0);

// nova/star/WindowThread
nova_star_Nova_WindowThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/WindowThread")),
0);

// nova/thread/Thread
nova_thread_Nova_Thread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/Thread")),
0);

// nova/thread/ThreadLocal
nova_thread_Nova_ThreadLocal_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/ThreadLocal")),
0);

// nova/thread/UncaughtExceptionHandler
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/UncaughtExceptionHandler")),
0);

// nova/thread/async/Async
nova_thread_async_Nova_Async_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Async")),
0);

// nova/thread/async/Task
nova_thread_async_Nova_Task_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Task")),
0);

// nova/time/BoundedInterval
nova_time_Nova_BoundedInterval_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/BoundedInterval")),
0);

// nova/time/BoundlessInterval
nova_time_Nova_BoundlessInterval_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/BoundlessInterval")),
0);

// nova/time/CumulativeTimer
nova_time_Nova_CumulativeTimer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/CumulativeTimer")),
0);

// nova/time/Date
nova_time_Nova_Date_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Date")),
0);

// nova/time/DateTime
nova_time_Nova_DateTime_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/DateTime")),
0);

// nova/time/DateTime.InvalidDateException
nova_time_Nova_InvalidDateException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/DateTime.InvalidDateException")),
0);

// nova/time/DateTime.InvalidDateFormatException
nova_time_Nova_InvalidDateFormatException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/DateTime.InvalidDateFormatException")),
0);

// nova/time/DateTime.Calculator
nova_time_Nova_Calculator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/DateTime.Calculator")),
0);

// nova/time/Interval
nova_time_Nova_Interval_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Interval")),
0);

// nova/time/Interval.IntervalException
nova_time_Nova_IntervalException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Interval.IntervalException")),
0);

// nova/time/Interval.InvalidIntervalException
nova_time_Nova_InvalidIntervalException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Interval.InvalidIntervalException")),
0);

// nova/time/Interval.NoGapException
nova_time_Nova_NoGapException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Interval.NoGapException")),
0);

// nova/time/Time
nova_time_Nova_Time_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Time")),
0);

// nova/time/Timer
nova_time_Nova_Timer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Timer")),
0);

// nova/web/js/json/Json
nova_web_js_json_Nova_Json_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/js/json/Json")),
0);

// nova/web/svg/Svg
nova_web_svg_Nova_Svg_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/Svg")),
0);

// nova/web/svg/SvgCircle
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgCircle")),
0);

// nova/web/svg/SvgComponent
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponent")),
0);

// nova/web/svg/SvgComponentList
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentList")),
0);

// nova/web/svg/SvgComponentNode
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentNode")),
0);

// nova/web/svg/SvgMainComponent
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgMainComponent")),
0);

// nova/web/svg/no3/No3
nova_web_svg_no3_Nova_No3_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3")),
0);

// nova/web/svg/no3/No3Node
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Node")),
0);

// nova/web/svg/no3/No3Select
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Select")),
0);

// nova/web/svg/no3/No3SelectAll
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3SelectAll")),
0);



nova_Nova_Object** nova_class_interfaces;

plumbercalc_pipes_Nova_Fitting_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
plumbercalc_pipes_Nova_Fitting_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
plumbercalc_pipes_Nova_Fraction_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 8);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperator_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_MinusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
plumbercalc_pipes_Nova_Fraction_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 8);
plumbercalc_pipes_Nova_Pipe_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
plumbercalc_pipes_Nova_Pipe_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
plumbercalc_pipes_Nova_TeeFitting_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = plumbercalc_pipes_Nova_Fitting_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
plumbercalc_pipes_Nova_TeeFitting_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
plumbercalc_pipes_Nova_Units_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
plumbercalc_pipes_Nova_Units_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
plumbercalc_tests_Nova_AllTestsRunner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
plumbercalc_tests_Nova_AllTestsRunner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
plumbercalc_tests_Nova_FractionTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
plumbercalc_tests_Nova_FractionTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
plumbercalc_tests_Nova_PipeTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
plumbercalc_tests_Nova_PipeTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
plumbercalc_tests_Nova_UnitConversionTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
plumbercalc_tests_Nova_UnitConversionTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
example_Nova_Animal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Animal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ArrayDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ArrayDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_BodyBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_Person_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_BodyBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ClosureDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ClosureDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_Animal_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_FileTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_FileTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_GenericDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_GenericDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashMapDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashMapDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashSetDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashSetDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_IntegerTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_IntegerTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Lab_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Lab_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_MathDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_MathDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NestTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
example_Nova_NestTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
example_Nova_NonWholeDivisionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NonWholeDivisionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Person_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Person_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Polygon_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Polygon_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PolymorphismDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PolymorphismDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_QueueDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_QueueDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Spider_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_Animal_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Spider_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Square_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)example_Nova_Polygon_VTable_val.classInstance;
example_Nova_Square_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
example_Nova_SvgChart_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgChart_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SvgFractal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgFractal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T1_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T1_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_T1_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Test_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Test_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemoImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemoImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_ackermann_Nova_Ackermann_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_ackermann_Nova_Ackermann_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_copy_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_copy_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_database_Nova_DatabaseDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_database_Nova_DatabaseDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ClientDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ClientDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ConnectionThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ConnectionThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_OutputThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_OutputThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ServerDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ServerDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_BoundedIntervalStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_BoundedIntervalStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClientThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClientThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClosureStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_ClosureStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_FancyOutputStreamTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_FancyOutputStreamTests_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_FileStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_FileStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_FirstClassFunctionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_FirstClassFunctionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_MyOuter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyOuter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyInner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyInner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_IntervalStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_IntervalStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_LambdaStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_LambdaStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_LibraryLoadingStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_LibraryLoadingStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_NetworkStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_NetworkStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_RegexStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_RegexStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_StabilityTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_ThreadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_TimeStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_TimeStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_ToStringStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
stabilitytest_Nova_ToStringStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
stabilitytest_Nova_UnstableException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_UnstableException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = novex_nest_Nova_NestException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_Nest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_Nest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Bool_Nova_Nest1Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Bool_Nova_Nest1Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Double_Nova_Nest1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Double_Nova_Nest1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Char_Nova_Nest1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Char_Nova_Nest1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Long_Nova_Nest1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Long_Nova_Nest1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Byte_Nova_Nest1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Byte_Nova_Nest1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_NestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_NestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperator_VTable_val.classInstance;
novex_nest_Nova_TestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
novex_nest_Nova_TestResult_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestResult_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestRunner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestRunner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestRunnerModel_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestRunnerModel_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestSuite_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestSuite_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestSuiteRunner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)novex_nest_Nova_TestRunner_VTable_val.classInstance;
novex_nest_Nova_TestSuiteRunner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
novex_nest_Nova_TestSuiteRunnerModel_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = novex_nest_Nova_TestRunnerModel_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestSuiteRunnerModel_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_ui_Nova_ResultBar_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_Panel_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_ui_Nova_ResultBar_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_ui_Nova_ResultWindow_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_Window_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_ui_Nova_ResultWindow_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_Nova_Object_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_Object_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_Nova_String_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_Nova_String_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_Nova_Substring_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_String_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_Substring_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_Nova_System_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_System_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_ImageTracker_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_ImageTracker_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_TrackPoint_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_TrackPoint_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_DBConnector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_DBConnector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_ResultSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_ResultSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Node_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tree_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Bounds_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Bounds_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Comparable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Comparable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_HashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_HashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Long_V_Nova_HashMap1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Long_V_Nova_HashMap1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Long_V_Nova_HashMapIterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_Long_V_Nova_HashMapIterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Int_V_Nova_HashMap1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Int_V_Nova_HashMap1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Int_V_Nova_HashMapIterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_Int_V_Nova_HashMapIterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Int_Int_Nova_HashMap1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Int_Int_Nova_HashMap1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_HashSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_HashSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Pair_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Pair_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Tree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Tree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Tuple_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_Tuple_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_Tuple2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tuple_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Tuple2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_A_Int_Nova_Tuple22Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tuple_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_A_Int_Nova_Tuple22Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_Array_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_datastruct_list_Nova_Array_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_datastruct_list_Double_Nova_Array1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_OrderedList1Double_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_datastruct_list_Double_Nova_Array1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_datastruct_list_Char_Nova_Array1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_OrderedList1Char_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_datastruct_list_Char_Nova_Array1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_datastruct_list_Int_Nova_Array1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_OrderedList1Int_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_datastruct_list_Int_Nova_Array1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_datastruct_list_Byte_Nova_Array1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_OrderedList1Byte_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_datastruct_list_Byte_Nova_Array1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_datastruct_list_Long_Nova_Array1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_OrderedList1Long_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_datastruct_list_Long_Nova_Array1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Double_Nova_ArrayIterator1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance;
nova_datastruct_list_Double_Nova_ArrayIterator1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Char_Nova_ArrayIterator1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance;
nova_datastruct_list_Char_Nova_ArrayIterator1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Int_Nova_ArrayIterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance;
nova_datastruct_list_Int_Nova_ArrayIterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance;
nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Long_Nova_ArrayIterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance;
nova_datastruct_list_Long_Nova_ArrayIterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_CharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_CharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Double_Nova_ImmutableArray1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance;
nova_datastruct_list_Double_Nova_ImmutableArray1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Char_Nova_ImmutableArray1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance;
nova_datastruct_list_Char_Nova_ImmutableArray1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Int_Nova_ImmutableArray1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance;
nova_datastruct_list_Int_Nova_ImmutableArray1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Byte_Nova_ImmutableArray1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance;
nova_datastruct_list_Byte_Nova_ImmutableArray1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Long_Nova_ImmutableArray1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance;
nova_datastruct_list_Long_Nova_ImmutableArray1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Double_Nova_ImmutableArrayIterator1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance;
nova_datastruct_list_Double_Nova_ImmutableArrayIterator1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Char_Nova_ImmutableArrayIterator1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance;
nova_datastruct_list_Char_Nova_ImmutableArrayIterator1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Int_Nova_ImmutableArrayIterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance;
nova_datastruct_list_Int_Nova_ImmutableArrayIterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Byte_Nova_ImmutableArrayIterator1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance;
nova_datastruct_list_Byte_Nova_ImmutableArrayIterator1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Long_Nova_ImmutableArrayIterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance;
nova_datastruct_list_Long_Nova_ImmutableArrayIterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Double_Nova_Iterable1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Double_Nova_Iterable1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Char_Nova_Iterable1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Char_Nova_Iterable1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Int_Nova_Iterable1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Int_Nova_Iterable1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Byte_Nova_Iterable1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Byte_Nova_Iterable1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Long_Nova_Iterable1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Long_Nova_Iterable1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_Iterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_Iterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_List_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterable_VTable_val.classInstance;
nova_datastruct_list_Nova_List_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_Iterable1Double_VTable_val.classInstance;
nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_Iterable1Char_VTable_val.classInstance;
nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_Iterable1Int_VTable_val.classInstance;
nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_Iterable1Byte_VTable_val.classInstance;
nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_Iterable1Long_VTable_val.classInstance;
nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ListNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ListNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Double_Nova_OrderedList1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance;
nova_datastruct_list_Double_Nova_OrderedList1Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Char_Nova_OrderedList1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance;
nova_datastruct_list_Char_Nova_OrderedList1Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Int_Nova_OrderedList1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance;
nova_datastruct_list_Int_Nova_OrderedList1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Byte_Nova_OrderedList1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance;
nova_datastruct_list_Byte_Nova_OrderedList1Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Long_Nova_OrderedList1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance;
nova_datastruct_list_Long_Nova_OrderedList1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_Queue_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_Queue_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_Stack_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_Stack_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_Backtraces_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_Backtraces_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_CaughtException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_CaughtException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_Exception_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_Exception_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_ExceptionData_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_ExceptionData_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_NullAccessException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_NullAccessException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_StackTrace_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_StackTrace_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_gc_Nova_GC_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_gc_Nova_GC_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_ClosedStreamException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_ClosedStreamException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_Console_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_Console_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_Curl_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_Curl_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_EmptyOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_io_Nova_EmptyOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FancyOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_io_Nova_FancyOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_File_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_File_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileNotFoundException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_FileNotFoundException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStream_VTable_val.classInstance;
nova_io_Nova_FileReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FileWriter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_io_Nova_FileWriter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_InputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_InputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_OutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_OutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_StreamReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_StreamReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_StringBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_io_Nova_StringBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Sequence_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Diekstra_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Diekstra_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_GeometricSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_GeometricSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Graph_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Graph_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Math_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Math_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Matrix_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_math_Nova_Matrix_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_math_Nova_NumericOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericOperation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_NumericOperand_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Statement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Polynomial_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Polynomial_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Sequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Sequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Statement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Statement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_VariableOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_VariableOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector2D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Vector_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector2D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector3D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Vector_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector3D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector4D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Vector_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector4D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_calculus_Nova_Calculus_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_calculus_Nova_Calculus_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tree_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_Conclusion_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_Conclusion_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Statement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_WFF_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_WFF_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Class_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Class_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Field_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Field_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericArgument_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericArgument_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericParameter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericParameter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Library_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Library_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Type_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Type_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ClientSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_Socket_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ClientSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ConnectionSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_Socket_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ConnectionSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_NetworkInputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStream_VTable_val.classInstance;
nova_network_Nova_NetworkInputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_ServerSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_Socket_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ServerSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_Socket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_Socket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_EqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_EqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_GreaterThanOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_GreaterThanOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_GreaterThanOrEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_GreaterThanOrEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_LessThanOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_LessThanOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_LessThanOrEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_LessThanOrEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_package_Nova_Package_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_package_Nova_Package_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_Nova_Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_Primitive_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_primitive_Nova_Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_Nova_Null_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_String_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_Nova_Null_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_Nova_Primitive_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_Nova_Primitive_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumber_VTable_val.classInstance;
nova_primitive_number_Nova_Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_Float_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumber_VTable_val.classInstance;
nova_primitive_number_Nova_Float_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_Integer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_Integer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_Number_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_Primitive_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 8);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_MinusOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperator_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_primitive_number_Nova_Number_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 8);
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_Short_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Short_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_process_Nova_Process_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_process_Nova_Process_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_Match_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_Match_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_Pattern_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_Pattern_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_Regex_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_Regex_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_MD5_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_MD5_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_Sha256_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_Sha256_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_InvalidParseException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_InvalidParseException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_MissingMatchingTokenException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_serialization_Nova_InvalidParseException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_MissingMatchingTokenException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_SyntaxStringFunctions_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_SyntaxStringFunctions_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Button_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_Panel_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_star_Nova_UIAction_VTable_val.classInstance;
nova_star_Nova_Button_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_star_Nova_Color_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Color_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Frame_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_Panel_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Frame_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_ImmutableColor_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_ImmutableColor_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Label_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_UIComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Label_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Panel_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_UIComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_star_Nova_UIParent_VTable_val.classInstance;
nova_star_Nova_Panel_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_star_Nova_Screen_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Screen_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_ScrollBar_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_UIComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_ScrollBar_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_UIAction_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_UIComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_UIAction_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_UIComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_UIComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_UIParent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_star_Nova_UIComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_UIParent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Window_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Window_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_WindowThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_WindowThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_Thread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_Thread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_ThreadLocal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_ThreadLocal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_Async_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_Async_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_Task_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_Task_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_BoundedInterval_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_Interval_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_BoundedInterval_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_BoundlessInterval_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_Interval_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_BoundlessInterval_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_CumulativeTimer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_Timer_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_CumulativeTimer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Date_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Date_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_DateTime_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 5);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_LessThanOperator_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_LessThanOrEqualToOperator_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_GreaterThanOperator_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_GreaterThanOrEqualToOperator_VTable_val.classInstance;
nova_time_Nova_DateTime_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 5);
nova_time_Nova_InvalidDateException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_InvalidDateException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_InvalidDateFormatException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_InvalidDateException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_InvalidDateFormatException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Calculator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Calculator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Interval_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Interval_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_IntervalException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_IntervalException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_InvalidIntervalException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_IntervalException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_InvalidIntervalException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_NoGapException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_IntervalException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_NoGapException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Time_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Time_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Timer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Timer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_js_json_Nova_Json_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_js_json_Nova_Json_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_Svg_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_Svg_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);


nova_meta_Nova_Class** nova_all_classes = NOVA_MALLOC(sizeof(nova_meta_Nova_Class*) * 349);
nova_all_classes[0] = plumbercalc_pipes_Nova_Fitting_VTable_val.classInstance;
nova_all_classes[1] = plumbercalc_pipes_Nova_Fraction_VTable_val.classInstance;
nova_all_classes[2] = plumbercalc_pipes_Nova_Pipe_VTable_val.classInstance;
nova_all_classes[3] = plumbercalc_pipes_Nova_TeeFitting_VTable_val.classInstance;
nova_all_classes[4] = plumbercalc_pipes_Nova_Units_VTable_val.classInstance;
nova_all_classes[5] = plumbercalc_tests_Nova_AllTestsRunner_VTable_val.classInstance;
nova_all_classes[6] = plumbercalc_tests_Nova_FractionTests_VTable_val.classInstance;
nova_all_classes[7] = plumbercalc_tests_Nova_PipeTests_VTable_val.classInstance;
nova_all_classes[8] = plumbercalc_tests_Nova_UnitConversionTests_VTable_val.classInstance;
nova_all_classes[9] = example_Nova_Animal_VTable_val.classInstance;
nova_all_classes[10] = example_Nova_ArrayDemo_VTable_val.classInstance;
nova_all_classes[11] = example_Nova_BodyBuilder_VTable_val.classInstance;
nova_all_classes[12] = example_Nova_ClosureDemo_VTable_val.classInstance;
nova_all_classes[13] = example_Nova_Dog_VTable_val.classInstance;
nova_all_classes[14] = example_Nova_ExceptionHandlingDemo_VTable_val.classInstance;
nova_all_classes[15] = example_Nova_FileTest_VTable_val.classInstance;
nova_all_classes[16] = example_Nova_GenericDemo_VTable_val.classInstance;
nova_all_classes[17] = example_Nova_HashMapDemo_VTable_val.classInstance;
nova_all_classes[18] = example_Nova_HashSetDemo_VTable_val.classInstance;
nova_all_classes[19] = example_Nova_IntegerTest_VTable_val.classInstance;
nova_all_classes[20] = example_Nova_Lab_VTable_val.classInstance;
nova_all_classes[21] = example_Nova_MathDemo_VTable_val.classInstance;
nova_all_classes[22] = example_Nova_NestTest_VTable_val.classInstance;
nova_all_classes[23] = example_Nova_NonWholeDivisionException_VTable_val.classInstance;
nova_all_classes[24] = example_Nova_Person_VTable_val.classInstance;
nova_all_classes[25] = example_Nova_Polygon_VTable_val.classInstance;
nova_all_classes[26] = example_Nova_PolymorphismDemo_VTable_val.classInstance;
nova_all_classes[27] = example_Nova_QueueDemo_VTable_val.classInstance;
nova_all_classes[28] = example_Nova_Spider_VTable_val.classInstance;
nova_all_classes[29] = example_Nova_Square_VTable_val.classInstance;
nova_all_classes[30] = example_Nova_SvgChart_VTable_val.classInstance;
nova_all_classes[31] = example_Nova_SvgFractal_VTable_val.classInstance;
nova_all_classes[32] = example_Nova_T1_VTable_val.classInstance;
nova_all_classes[33] = example_Nova_T2_VTable_val.classInstance;
nova_all_classes[34] = example_Nova_Test_VTable_val.classInstance;
nova_all_classes[35] = example_Nova_ThreadDemo_VTable_val.classInstance;
nova_all_classes[36] = example_Nova_ThreadDemoImplementation_VTable_val.classInstance;
nova_all_classes[37] = example_ackermann_Nova_Ackermann_VTable_val.classInstance;
nova_all_classes[38] = example_copy_Nova_Dog_VTable_val.classInstance;
nova_all_classes[39] = example_database_Nova_DatabaseDemo_VTable_val.classInstance;
nova_all_classes[40] = example_network_Nova_ClientDemo_VTable_val.classInstance;
nova_all_classes[41] = example_network_Nova_ConnectionThread_VTable_val.classInstance;
nova_all_classes[42] = example_network_Nova_OutputThread_VTable_val.classInstance;
nova_all_classes[43] = example_network_Nova_ServerDemo_VTable_val.classInstance;
nova_all_classes[44] = stabilitytest_Nova_AssignmentStability_VTable_val.classInstance;
nova_all_classes[45] = stabilitytest_Nova_BoundedIntervalStability_VTable_val.classInstance;
nova_all_classes[46] = stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance;
nova_all_classes[47] = stabilitytest_Nova_ClientThread_VTable_val.classInstance;
nova_all_classes[48] = stabilitytest_Nova_ClosureStability_VTable_val.classInstance;
nova_all_classes[49] = stabilitytest_Nova_ExceptionStability_VTable_val.classInstance;
nova_all_classes[50] = stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance;
nova_all_classes[51] = stabilitytest_Nova_FancyOutputStreamTests_VTable_val.classInstance;
nova_all_classes[52] = stabilitytest_Nova_FileStability_VTable_val.classInstance;
nova_all_classes[53] = stabilitytest_Nova_FirstClassFunctionStability_VTable_val.classInstance;
nova_all_classes[54] = stabilitytest_Nova_InnerClassStability_VTable_val.classInstance;
nova_all_classes[55] = stabilitytest_Nova_MyOuter_VTable_val.classInstance;
nova_all_classes[56] = stabilitytest_Nova_MyInner_VTable_val.classInstance;
nova_all_classes[57] = stabilitytest_Nova_IntervalStability_VTable_val.classInstance;
nova_all_classes[58] = stabilitytest_Nova_LambdaStability_VTable_val.classInstance;
nova_all_classes[59] = stabilitytest_Nova_LibraryLoadingStability_VTable_val.classInstance;
nova_all_classes[60] = stabilitytest_Nova_NetworkStability_VTable_val.classInstance;
nova_all_classes[61] = stabilitytest_Nova_Node_VTable_val.classInstance;
nova_all_classes[62] = stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance;
nova_all_classes[63] = stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance;
nova_all_classes[64] = stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance;
nova_all_classes[65] = stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance;
nova_all_classes[66] = stabilitytest_Nova_RegexStability_VTable_val.classInstance;
nova_all_classes[67] = stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance;
nova_all_classes[68] = stabilitytest_Nova_StabilityTest_VTable_val.classInstance;
nova_all_classes[69] = stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance;
nova_all_classes[70] = stabilitytest_Nova_StabilityTestException_VTable_val.classInstance;
nova_all_classes[71] = stabilitytest_Nova_StaticImportStability_VTable_val.classInstance;
nova_all_classes[72] = stabilitytest_Nova_SyntaxStability_VTable_val.classInstance;
nova_all_classes[73] = stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance;
nova_all_classes[74] = stabilitytest_Nova_ThreadStability_VTable_val.classInstance;
nova_all_classes[75] = stabilitytest_Nova_TimeStability_VTable_val.classInstance;
nova_all_classes[76] = stabilitytest_Nova_ToStringStability_VTable_val.classInstance;
nova_all_classes[77] = stabilitytest_Nova_UnstableException_VTable_val.classInstance;
nova_all_classes[78] = novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance;
nova_all_classes[79] = novex_nest_Nova_Nest_VTable_val.classInstance;
nova_all_classes[80] = novex_nest_Bool_Nova_Nest1Bool_VTable_val.classInstance;
nova_all_classes[81] = novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance;
nova_all_classes[82] = novex_nest_Double_Nova_Nest1Double_VTable_val.classInstance;
nova_all_classes[83] = novex_nest_Char_Nova_Nest1Char_VTable_val.classInstance;
nova_all_classes[84] = novex_nest_Long_Nova_Nest1Long_VTable_val.classInstance;
nova_all_classes[85] = novex_nest_Byte_Nova_Nest1Byte_VTable_val.classInstance;
nova_all_classes[86] = novex_nest_Nova_NestException_VTable_val.classInstance;
nova_all_classes[87] = novex_nest_Nova_TestCase_VTable_val.classInstance;
nova_all_classes[88] = novex_nest_Nova_TestResult_VTable_val.classInstance;
nova_all_classes[89] = novex_nest_Nova_TestRunner_VTable_val.classInstance;
nova_all_classes[90] = novex_nest_Nova_TestRunnerModel_VTable_val.classInstance;
nova_all_classes[91] = novex_nest_Nova_TestSuite_VTable_val.classInstance;
nova_all_classes[92] = novex_nest_Nova_TestSuiteRunner_VTable_val.classInstance;
nova_all_classes[93] = novex_nest_Nova_TestSuiteRunnerModel_VTable_val.classInstance;
nova_all_classes[94] = novex_nest_ui_Nova_ResultBar_VTable_val.classInstance;
nova_all_classes[95] = novex_nest_ui_Nova_ResultWindow_VTable_val.classInstance;
nova_all_classes[96] = nova_Nova_Object_VTable_val.classInstance;
nova_all_classes[97] = nova_Nova_String_VTable_val.classInstance;
nova_all_classes[98] = nova_Nova_Substring_VTable_val.classInstance;
nova_all_classes[99] = nova_Nova_System_VTable_val.classInstance;
nova_all_classes[100] = nova_ar_Nova_ImageTracker_VTable_val.classInstance;
nova_all_classes[101] = nova_ar_Nova_TrackPoint_VTable_val.classInstance;
nova_all_classes[102] = nova_database_Nova_DBConnector_VTable_val.classInstance;
nova_all_classes[103] = nova_database_Nova_ResultSet_VTable_val.classInstance;
nova_all_classes[104] = nova_datastruct_Nova_BinaryNode_VTable_val.classInstance;
nova_all_classes[105] = nova_datastruct_Nova_BinaryTree_VTable_val.classInstance;
nova_all_classes[106] = nova_datastruct_Nova_Bounds_VTable_val.classInstance;
nova_all_classes[107] = nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_all_classes[108] = nova_datastruct_Nova_HashMap_VTable_val.classInstance;
nova_all_classes[109] = nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance;
nova_all_classes[110] = nova_datastruct_Long_V_Nova_HashMap1Long_VTable_val.classInstance;
nova_all_classes[111] = nova_datastruct_Long_V_Nova_HashMapIterator1Long_VTable_val.classInstance;
nova_all_classes[112] = nova_datastruct_Int_V_Nova_HashMap1Int_VTable_val.classInstance;
nova_all_classes[113] = nova_datastruct_Int_V_Nova_HashMapIterator1Int_VTable_val.classInstance;
nova_all_classes[114] = nova_datastruct_Int_Int_Nova_HashMap1Int2Int_VTable_val.classInstance;
nova_all_classes[115] = nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_VTable_val.classInstance;
nova_all_classes[116] = nova_datastruct_Nova_HashSet_VTable_val.classInstance;
nova_all_classes[117] = nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance;
nova_all_classes[118] = nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_VTable_val.classInstance;
nova_all_classes[119] = nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_VTable_val.classInstance;
nova_all_classes[120] = nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_VTable_val.classInstance;
nova_all_classes[121] = nova_datastruct_Nova_Node_VTable_val.classInstance;
nova_all_classes[122] = nova_datastruct_Nova_Pair_VTable_val.classInstance;
nova_all_classes[123] = nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance;
nova_all_classes[124] = nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance;
nova_all_classes[125] = nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance;
nova_all_classes[126] = nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance;
nova_all_classes[127] = nova_datastruct_Nova_Tree_VTable_val.classInstance;
nova_all_classes[128] = nova_datastruct_Nova_Tuple_VTable_val.classInstance;
nova_all_classes[129] = nova_datastruct_Nova_Tuple2_VTable_val.classInstance;
nova_all_classes[130] = nova_datastruct_A_Int_Nova_Tuple22Int_VTable_val.classInstance;
nova_all_classes[131] = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_all_classes[132] = nova_datastruct_list_Double_Nova_Array1Double_VTable_val.classInstance;
nova_all_classes[133] = nova_datastruct_list_Char_Nova_Array1Char_VTable_val.classInstance;
nova_all_classes[134] = nova_datastruct_list_Int_Nova_Array1Int_VTable_val.classInstance;
nova_all_classes[135] = nova_datastruct_list_Byte_Nova_Array1Byte_VTable_val.classInstance;
nova_all_classes[136] = nova_datastruct_list_Long_Nova_Array1Long_VTable_val.classInstance;
nova_all_classes[137] = nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance;
nova_all_classes[138] = nova_datastruct_list_Double_Nova_ArrayIterator1Double_VTable_val.classInstance;
nova_all_classes[139] = nova_datastruct_list_Char_Nova_ArrayIterator1Char_VTable_val.classInstance;
nova_all_classes[140] = nova_datastruct_list_Int_Nova_ArrayIterator1Int_VTable_val.classInstance;
nova_all_classes[141] = nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_VTable_val.classInstance;
nova_all_classes[142] = nova_datastruct_list_Long_Nova_ArrayIterator1Long_VTable_val.classInstance;
nova_all_classes[143] = nova_datastruct_list_Nova_CharArray_VTable_val.classInstance;
nova_all_classes[144] = nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance;
nova_all_classes[145] = nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance;
nova_all_classes[146] = nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance;
nova_all_classes[147] = nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance;
nova_all_classes[148] = nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance;
nova_all_classes[149] = nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance;
nova_all_classes[150] = nova_datastruct_list_Double_Nova_ImmutableArray1Double_VTable_val.classInstance;
nova_all_classes[151] = nova_datastruct_list_Char_Nova_ImmutableArray1Char_VTable_val.classInstance;
nova_all_classes[152] = nova_datastruct_list_Int_Nova_ImmutableArray1Int_VTable_val.classInstance;
nova_all_classes[153] = nova_datastruct_list_Byte_Nova_ImmutableArray1Byte_VTable_val.classInstance;
nova_all_classes[154] = nova_datastruct_list_Long_Nova_ImmutableArray1Long_VTable_val.classInstance;
nova_all_classes[155] = nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance;
nova_all_classes[156] = nova_datastruct_list_Double_Nova_ImmutableArrayIterator1Double_VTable_val.classInstance;
nova_all_classes[157] = nova_datastruct_list_Char_Nova_ImmutableArrayIterator1Char_VTable_val.classInstance;
nova_all_classes[158] = nova_datastruct_list_Int_Nova_ImmutableArrayIterator1Int_VTable_val.classInstance;
nova_all_classes[159] = nova_datastruct_list_Byte_Nova_ImmutableArrayIterator1Byte_VTable_val.classInstance;
nova_all_classes[160] = nova_datastruct_list_Long_Nova_ImmutableArrayIterator1Long_VTable_val.classInstance;
nova_all_classes[161] = nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance;
nova_all_classes[162] = nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance;
nova_all_classes[163] = nova_datastruct_list_Nova_IntArray_VTable_val.classInstance;
nova_all_classes[164] = nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance;
nova_all_classes[165] = nova_datastruct_list_Nova_IntRange_VTable_val.classInstance;
nova_all_classes[166] = nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance;
nova_all_classes[167] = nova_datastruct_list_Nova_Iterable_VTable_val.classInstance;
nova_all_classes[168] = nova_datastruct_list_Double_Nova_Iterable1Double_VTable_val.classInstance;
nova_all_classes[169] = nova_datastruct_list_Char_Nova_Iterable1Char_VTable_val.classInstance;
nova_all_classes[170] = nova_datastruct_list_Int_Nova_Iterable1Int_VTable_val.classInstance;
nova_all_classes[171] = nova_datastruct_list_Byte_Nova_Iterable1Byte_VTable_val.classInstance;
nova_all_classes[172] = nova_datastruct_list_Long_Nova_Iterable1Long_VTable_val.classInstance;
nova_all_classes[173] = nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_all_classes[174] = nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance;
nova_all_classes[175] = nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance;
nova_all_classes[176] = nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance;
nova_all_classes[177] = nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance;
nova_all_classes[178] = nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance;
nova_all_classes[179] = nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance;
nova_all_classes[180] = nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance;
nova_all_classes[181] = nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_all_classes[182] = nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance;
nova_all_classes[183] = nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance;
nova_all_classes[184] = nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance;
nova_all_classes[185] = nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance;
nova_all_classes[186] = nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance;
nova_all_classes[187] = nova_datastruct_list_Nova_ListNode_VTable_val.classInstance;
nova_all_classes[188] = nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance;
nova_all_classes[189] = nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance;
nova_all_classes[190] = nova_datastruct_list_Double_Nova_OrderedList1Double_VTable_val.classInstance;
nova_all_classes[191] = nova_datastruct_list_Char_Nova_OrderedList1Char_VTable_val.classInstance;
nova_all_classes[192] = nova_datastruct_list_Int_Nova_OrderedList1Int_VTable_val.classInstance;
nova_all_classes[193] = nova_datastruct_list_Byte_Nova_OrderedList1Byte_VTable_val.classInstance;
nova_all_classes[194] = nova_datastruct_list_Long_Nova_OrderedList1Long_VTable_val.classInstance;
nova_all_classes[195] = nova_datastruct_list_Nova_Queue_VTable_val.classInstance;
nova_all_classes[196] = nova_datastruct_list_Nova_Stack_VTable_val.classInstance;
nova_all_classes[197] = nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance;
nova_all_classes[198] = nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance;
nova_all_classes[199] = nova_exception_Nova_Backtraces_VTable_val.classInstance;
nova_all_classes[200] = nova_exception_Nova_CaughtException_VTable_val.classInstance;
nova_all_classes[201] = nova_exception_Nova_DivideByZeroException_VTable_val.classInstance;
nova_all_classes[202] = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_all_classes[203] = nova_exception_Nova_ExceptionData_VTable_val.classInstance;
nova_all_classes[204] = nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance;
nova_all_classes[205] = nova_exception_Nova_InvalidOperationException_VTable_val.classInstance;
nova_all_classes[206] = nova_exception_Nova_NullAccessException_VTable_val.classInstance;
nova_all_classes[207] = nova_exception_Nova_StackTrace_VTable_val.classInstance;
nova_all_classes[208] = nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance;
nova_all_classes[209] = nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance;
nova_all_classes[210] = nova_gc_Nova_GC_VTable_val.classInstance;
nova_all_classes[211] = nova_io_Nova_ClosedStreamException_VTable_val.classInstance;
nova_all_classes[212] = nova_io_Nova_Console_VTable_val.classInstance;
nova_all_classes[213] = nova_io_Nova_Curl_VTable_val.classInstance;
nova_all_classes[214] = nova_io_Nova_EmptyOutputStream_VTable_val.classInstance;
nova_all_classes[215] = nova_io_Nova_FancyOutputStream_VTable_val.classInstance;
nova_all_classes[216] = nova_io_Nova_File_VTable_val.classInstance;
nova_all_classes[217] = nova_io_Nova_FileNotFoundException_VTable_val.classInstance;
nova_all_classes[218] = nova_io_Nova_FileReader_VTable_val.classInstance;
nova_all_classes[219] = nova_io_Nova_FileWriter_VTable_val.classInstance;
nova_all_classes[220] = nova_io_Nova_InputStream_VTable_val.classInstance;
nova_all_classes[221] = nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_all_classes[222] = nova_io_Nova_StreamReader_VTable_val.classInstance;
nova_all_classes[223] = nova_io_Nova_StringBuilder_VTable_val.classInstance;
nova_all_classes[224] = nova_math_Nova_ArithmeticSequence_VTable_val.classInstance;
nova_all_classes[225] = nova_math_Nova_Diekstra_VTable_val.classInstance;
nova_all_classes[226] = nova_math_Nova_GeometricSequence_VTable_val.classInstance;
nova_all_classes[227] = nova_math_Nova_Graph_VTable_val.classInstance;
nova_all_classes[228] = nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance;
nova_all_classes[229] = nova_math_Nova_Math_VTable_val.classInstance;
nova_all_classes[230] = nova_math_Nova_Matrix_VTable_val.classInstance;
nova_all_classes[231] = nova_math_Nova_NumericOperand_VTable_val.classInstance;
nova_all_classes[232] = nova_math_Nova_NumericOperation_VTable_val.classInstance;
nova_all_classes[233] = nova_math_Nova_NumericStatement_VTable_val.classInstance;
nova_all_classes[234] = nova_math_Nova_NumericTree_VTable_val.classInstance;
nova_all_classes[235] = nova_math_Nova_Polynomial_VTable_val.classInstance;
nova_all_classes[236] = nova_math_Nova_Sequence_VTable_val.classInstance;
nova_all_classes[237] = nova_math_Nova_Statement_VTable_val.classInstance;
nova_all_classes[238] = nova_math_Nova_StatementComponent_VTable_val.classInstance;
nova_all_classes[239] = nova_math_Nova_VariableOperand_VTable_val.classInstance;
nova_all_classes[240] = nova_math_Nova_Vector_VTable_val.classInstance;
nova_all_classes[241] = nova_math_Nova_Vector2D_VTable_val.classInstance;
nova_all_classes[242] = nova_math_Nova_Vector3D_VTable_val.classInstance;
nova_all_classes[243] = nova_math_Nova_Vector4D_VTable_val.classInstance;
nova_all_classes[244] = nova_math_calculus_Nova_Calculus_VTable_val.classInstance;
nova_all_classes[245] = nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance;
nova_all_classes[246] = nova_math_logic_Nova_Conclusion_VTable_val.classInstance;
nova_all_classes[247] = nova_math_logic_Nova_Hypothesis_VTable_val.classInstance;
nova_all_classes[248] = nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance;
nova_all_classes[249] = nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance;
nova_all_classes[250] = nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance;
nova_all_classes[251] = nova_math_logic_Nova_StatementComponent_VTable_val.classInstance;
nova_all_classes[252] = nova_math_logic_Nova_StatementGroup_VTable_val.classInstance;
nova_all_classes[253] = nova_math_logic_Nova_StatementLetter_VTable_val.classInstance;
nova_all_classes[254] = nova_math_logic_Nova_WFF_VTable_val.classInstance;
nova_all_classes[255] = nova_meta_Nova_Class_VTable_val.classInstance;
nova_all_classes[256] = nova_meta_Nova_Field_VTable_val.classInstance;
nova_all_classes[257] = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_all_classes[258] = nova_meta_Nova_GenericArgument_VTable_val.classInstance;
nova_all_classes[259] = nova_meta_Nova_GenericParameter_VTable_val.classInstance;
nova_all_classes[260] = nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance;
nova_all_classes[261] = nova_meta_Nova_Library_VTable_val.classInstance;
nova_all_classes[262] = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_all_classes[263] = nova_meta_Nova_Type_VTable_val.classInstance;
nova_all_classes[264] = nova_network_Nova_ClientSocket_VTable_val.classInstance;
nova_all_classes[265] = nova_network_Nova_ConnectionSocket_VTable_val.classInstance;
nova_all_classes[266] = nova_network_Nova_NetworkInputStream_VTable_val.classInstance;
nova_all_classes[267] = nova_network_Nova_NetworkOutputStream_VTable_val.classInstance;
nova_all_classes[268] = nova_network_Nova_ServerSocket_VTable_val.classInstance;
nova_all_classes[269] = nova_network_Nova_Socket_VTable_val.classInstance;
nova_all_classes[270] = nova_operators_Nova_EqualsOperator_VTable_val.classInstance;
nova_all_classes[271] = nova_operators_Nova_GreaterThanOperator_VTable_val.classInstance;
nova_all_classes[272] = nova_operators_Nova_GreaterThanOrEqualToOperator_VTable_val.classInstance;
nova_all_classes[273] = nova_operators_Nova_LessThanOperator_VTable_val.classInstance;
nova_all_classes[274] = nova_operators_Nova_LessThanOrEqualToOperator_VTable_val.classInstance;
nova_all_classes[275] = nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance;
nova_all_classes[276] = nova_operators_Nova_MinusOperator_VTable_val.classInstance;
nova_all_classes[277] = nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance;
nova_all_classes[278] = nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_all_classes[279] = nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance;
nova_all_classes[280] = nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_all_classes[281] = nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_all_classes[282] = nova_package_Nova_Package_VTable_val.classInstance;
nova_all_classes[283] = nova_primitive_Nova_Bool_VTable_val.classInstance;
nova_all_classes[284] = nova_primitive_Nova_Null_VTable_val.classInstance;
nova_all_classes[285] = nova_primitive_Nova_Primitive_VTable_val.classInstance;
nova_all_classes[286] = nova_primitive_number_Nova_Byte_VTable_val.classInstance;
nova_all_classes[287] = nova_primitive_number_Nova_Char_VTable_val.classInstance;
nova_all_classes[288] = nova_primitive_number_Nova_Double_VTable_val.classInstance;
nova_all_classes[289] = nova_primitive_number_Nova_Float_VTable_val.classInstance;
nova_all_classes[290] = nova_primitive_number_Nova_Int_VTable_val.classInstance;
nova_all_classes[291] = nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_all_classes[292] = nova_primitive_number_Nova_Long_VTable_val.classInstance;
nova_all_classes[293] = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_all_classes[294] = nova_primitive_number_Nova_RealNumber_VTable_val.classInstance;
nova_all_classes[295] = nova_primitive_number_Nova_Short_VTable_val.classInstance;
nova_all_classes[296] = nova_process_Nova_Process_VTable_val.classInstance;
nova_all_classes[297] = nova_regex_Nova_Match_VTable_val.classInstance;
nova_all_classes[298] = nova_regex_Nova_Pattern_VTable_val.classInstance;
nova_all_classes[299] = nova_regex_Nova_Regex_VTable_val.classInstance;
nova_all_classes[300] = nova_security_Nova_MD5_VTable_val.classInstance;
nova_all_classes[301] = nova_security_Nova_Sha256_VTable_val.classInstance;
nova_all_classes[302] = nova_serialization_Nova_JsonSerializer_VTable_val.classInstance;
nova_all_classes[303] = nova_serialization_Nova_InvalidParseException_VTable_val.classInstance;
nova_all_classes[304] = nova_serialization_Nova_MissingMatchingTokenException_VTable_val.classInstance;
nova_all_classes[305] = nova_serialization_Nova_SyntaxStringFunctions_VTable_val.classInstance;
nova_all_classes[306] = nova_star_Nova_Button_VTable_val.classInstance;
nova_all_classes[307] = nova_star_Nova_Color_VTable_val.classInstance;
nova_all_classes[308] = nova_star_Nova_Frame_VTable_val.classInstance;
nova_all_classes[309] = nova_star_Nova_ImmutableColor_VTable_val.classInstance;
nova_all_classes[310] = nova_star_Nova_Label_VTable_val.classInstance;
nova_all_classes[311] = nova_star_Nova_Panel_VTable_val.classInstance;
nova_all_classes[312] = nova_star_Nova_Screen_VTable_val.classInstance;
nova_all_classes[313] = nova_star_Nova_ScrollBar_VTable_val.classInstance;
nova_all_classes[314] = nova_star_Nova_UIAction_VTable_val.classInstance;
nova_all_classes[315] = nova_star_Nova_UIComponent_VTable_val.classInstance;
nova_all_classes[316] = nova_star_Nova_UIParent_VTable_val.classInstance;
nova_all_classes[317] = nova_star_Nova_Window_VTable_val.classInstance;
nova_all_classes[318] = nova_star_Nova_WindowThread_VTable_val.classInstance;
nova_all_classes[319] = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_all_classes[320] = nova_thread_Nova_ThreadLocal_VTable_val.classInstance;
nova_all_classes[321] = nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance;
nova_all_classes[322] = nova_thread_async_Nova_Async_VTable_val.classInstance;
nova_all_classes[323] = nova_thread_async_Nova_Task_VTable_val.classInstance;
nova_all_classes[324] = nova_time_Nova_BoundedInterval_VTable_val.classInstance;
nova_all_classes[325] = nova_time_Nova_BoundlessInterval_VTable_val.classInstance;
nova_all_classes[326] = nova_time_Nova_CumulativeTimer_VTable_val.classInstance;
nova_all_classes[327] = nova_time_Nova_Date_VTable_val.classInstance;
nova_all_classes[328] = nova_time_Nova_DateTime_VTable_val.classInstance;
nova_all_classes[329] = nova_time_Nova_InvalidDateException_VTable_val.classInstance;
nova_all_classes[330] = nova_time_Nova_InvalidDateFormatException_VTable_val.classInstance;
nova_all_classes[331] = nova_time_Nova_Calculator_VTable_val.classInstance;
nova_all_classes[332] = nova_time_Nova_Interval_VTable_val.classInstance;
nova_all_classes[333] = nova_time_Nova_IntervalException_VTable_val.classInstance;
nova_all_classes[334] = nova_time_Nova_InvalidIntervalException_VTable_val.classInstance;
nova_all_classes[335] = nova_time_Nova_NoGapException_VTable_val.classInstance;
nova_all_classes[336] = nova_time_Nova_Time_VTable_val.classInstance;
nova_all_classes[337] = nova_time_Nova_Timer_VTable_val.classInstance;
nova_all_classes[338] = nova_web_js_json_Nova_Json_VTable_val.classInstance;
nova_all_classes[339] = nova_web_svg_Nova_Svg_VTable_val.classInstance;
nova_all_classes[340] = nova_web_svg_Nova_SvgCircle_VTable_val.classInstance;
nova_all_classes[341] = nova_web_svg_Nova_SvgComponent_VTable_val.classInstance;
nova_all_classes[342] = nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance;
nova_all_classes[343] = nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance;
nova_all_classes[344] = nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance;
nova_all_classes[345] = nova_web_svg_no3_Nova_No3_VTable_val.classInstance;
nova_all_classes[346] = nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance;
nova_all_classes[347] = nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance;
nova_all_classes[348] = nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance;
nova_meta_Nova_Class_Nova_ALL = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_all_classes, 349);


}

void novaCallStaticBlocks(void* this)
{
plumbercalc_pipes_Nova_Fitting_Nova_init_static();
plumbercalc_pipes_Nova_Fraction_Nova_init_static();
plumbercalc_pipes_Nova_Pipe_Nova_init_static();
plumbercalc_pipes_Nova_TeeFitting_Nova_init_static();
plumbercalc_pipes_Nova_Units_Nova_init_static();
plumbercalc_tests_Nova_AllTestsRunner_Nova_init_static();
plumbercalc_tests_Nova_FractionTests_Nova_init_static();
plumbercalc_tests_Nova_PipeTests_Nova_init_static();
plumbercalc_tests_Nova_UnitConversionTests_Nova_init_static();
example_Nova_Animal_Nova_init_static();
example_Nova_ArrayDemo_Nova_init_static();
example_Nova_BodyBuilder_Nova_init_static();
example_Nova_ClosureDemo_Nova_init_static();
example_Nova_Dog_Nova_init_static();
example_Nova_ExceptionHandlingDemo_Nova_init_static();
example_Nova_FileTest_Nova_init_static();
example_Nova_GenericDemo_Nova_init_static();
example_Nova_HashMapDemo_Nova_init_static();
example_Nova_HashSetDemo_Nova_init_static();
example_Nova_IntegerTest_Nova_init_static();
example_Nova_Lab_Nova_init_static();
example_Nova_MathDemo_Nova_init_static();
example_Nova_NestTest_Nova_init_static();
example_Nova_NonWholeDivisionException_Nova_init_static();
example_Nova_Person_Nova_init_static();
example_Nova_Polygon_Nova_init_static();
example_Nova_PolymorphismDemo_Nova_init_static();
example_Nova_QueueDemo_Nova_init_static();
example_Nova_Spider_Nova_init_static();
example_Nova_Square_Nova_init_static();
example_Nova_SvgChart_Nova_init_static();
example_Nova_SvgFractal_Nova_init_static();
example_Nova_T1_Nova_init_static();
example_Nova_T2_Nova_init_static();
example_Nova_Test_Nova_init_static();
example_Nova_ThreadDemo_Nova_init_static();
example_Nova_ThreadDemoImplementation_Nova_init_static();
example_ackermann_Nova_Ackermann_Nova_init_static();
example_copy_Nova_Dog_Nova_init_static();
example_database_Nova_DatabaseDemo_Nova_init_static();
example_network_Nova_ClientDemo_Nova_init_static();
example_network_Nova_ConnectionThread_Nova_init_static();
example_network_Nova_OutputThread_Nova_init_static();
example_network_Nova_ServerDemo_Nova_init_static();
stabilitytest_Nova_AssignmentStability_Nova_init_static();
stabilitytest_Nova_BoundedIntervalStability_Nova_init_static();
stabilitytest_Nova_ClassWithProperties_Nova_init_static();
stabilitytest_Nova_ClientThread_Nova_init_static();
stabilitytest_Nova_ClosureStability_Nova_init_static();
stabilitytest_Nova_ExceptionStability_Nova_init_static();
stabilitytest_Nova_ExternalInnerClassStability_Nova_init_static();
stabilitytest_Nova_FancyOutputStreamTests_Nova_init_static();
stabilitytest_Nova_FileStability_Nova_init_static();
stabilitytest_Nova_FirstClassFunctionStability_Nova_init_static();
stabilitytest_Nova_InnerClassStability_Nova_init_static();
stabilitytest_Nova_MyOuter_Nova_init_static();
stabilitytest_Nova_MyInner_Nova_init_static();
stabilitytest_Nova_IntervalStability_Nova_init_static();
stabilitytest_Nova_LambdaStability_Nova_init_static();
stabilitytest_Nova_LibraryLoadingStability_Nova_init_static();
stabilitytest_Nova_NetworkStability_Nova_init_static();
stabilitytest_Nova_Node_Nova_init_static();
stabilitytest_Nova_PolymorphicSubClass_Nova_init_static();
stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static();
stabilitytest_Nova_PolymorphismStability_Nova_init_static();
stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static();
stabilitytest_Nova_RegexStability_Nova_init_static();
stabilitytest_Nova_StabilityExceptionHandler_Nova_init_static();
stabilitytest_Nova_StabilityTest_Nova_init_static();
stabilitytest_Nova_StabilityTestCase_Nova_init_static();
stabilitytest_Nova_StabilityTestException_Nova_init_static();
stabilitytest_Nova_StaticImportStability_Nova_init_static();
stabilitytest_Nova_SyntaxStability_Nova_init_static();
stabilitytest_Nova_ThreadImplementation_Nova_init_static();
stabilitytest_Nova_ThreadStability_Nova_init_static();
stabilitytest_Nova_TimeStability_Nova_init_static();
stabilitytest_Nova_ToStringStability_Nova_init_static();
stabilitytest_Nova_UnstableException_Nova_init_static();
novex_nest_Nova_InvalidAssertionException_Nova_init_static();
novex_nest_Nova_Nest_Nova_init_static();
novex_nest_Bool_Nova_Nest1Bool_Nova_init_static();
novex_nest_Int_Nova_Nest1Int_Nova_init_static();
novex_nest_Double_Nova_Nest1Double_Nova_init_static();
novex_nest_Char_Nova_Nest1Char_Nova_init_static();
novex_nest_Long_Nova_Nest1Long_Nova_init_static();
novex_nest_Byte_Nova_Nest1Byte_Nova_init_static();
novex_nest_Nova_NestException_Nova_init_static();
novex_nest_Nova_TestCase_Nova_init_static();
novex_nest_Nova_TestResult_Nova_init_static();
novex_nest_Nova_TestRunner_Nova_init_static();
novex_nest_Nova_TestRunnerModel_Nova_init_static();
novex_nest_Nova_TestSuite_Nova_init_static();
novex_nest_Nova_TestSuiteRunner_Nova_init_static();
novex_nest_Nova_TestSuiteRunnerModel_Nova_init_static();
novex_nest_ui_Nova_ResultBar_Nova_init_static();
novex_nest_ui_Nova_ResultWindow_Nova_init_static();
nova_Nova_Object_Nova_init_static();
nova_Nova_String_Nova_init_static();
nova_Nova_Substring_Nova_init_static();
nova_Nova_System_Nova_init_static();
nova_ar_Nova_ImageTracker_Nova_init_static();
nova_ar_Nova_TrackPoint_Nova_init_static();
nova_database_Nova_DBConnector_Nova_init_static();
nova_database_Nova_ResultSet_Nova_init_static();
nova_datastruct_Nova_BinaryNode_Nova_init_static();
nova_datastruct_Nova_BinaryTree_Nova_init_static();
nova_datastruct_Nova_Bounds_Nova_init_static();
nova_datastruct_Nova_Comparable_Nova_init_static();
nova_datastruct_Nova_HashMap_Nova_init_static();
nova_datastruct_Nova_HashMapIterator_Nova_init_static();
nova_datastruct_Long_V_Nova_HashMap1Long_Nova_init_static();
nova_datastruct_Long_V_Nova_HashMapIterator1Long_Nova_init_static();
nova_datastruct_Int_V_Nova_HashMap1Int_Nova_init_static();
nova_datastruct_Int_V_Nova_HashMapIterator1Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_HashMap1Int2Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_Nova_init_static();
nova_datastruct_Nova_HashSet_Nova_init_static();
nova_datastruct_Nova_ImmutableHashMap_Nova_init_static();
nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_Nova_init_static();
nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_Nova_init_static();
nova_datastruct_Nova_Node_Nova_init_static();
nova_datastruct_Nova_Pair_Nova_init_static();
nova_datastruct_Int_Int_Nova_Pair1Int2Int_Nova_init_static();
nova_datastruct_Long_Value_Nova_Pair1Long_Nova_init_static();
nova_datastruct_Int_Value_Nova_Pair1Int_Nova_init_static();
nova_datastruct_Nova_ReversibleHashMap_Nova_init_static();
nova_datastruct_Nova_Tree_Nova_init_static();
nova_datastruct_Nova_Tuple_Nova_init_static();
nova_datastruct_Nova_Tuple2_Nova_init_static();
nova_datastruct_A_Int_Nova_Tuple22Int_Nova_init_static();
nova_datastruct_list_Nova_Array_Nova_init_static();
nova_datastruct_list_Double_Nova_Array1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_Array1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_Array1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_Array1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_Array1Long_Nova_init_static();
nova_datastruct_list_Nova_ArrayIterator_Nova_init_static();
nova_datastruct_list_Double_Nova_ArrayIterator1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_ArrayIterator1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_ArrayIterator1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_ArrayIterator1Long_Nova_init_static();
nova_datastruct_list_Nova_CharArray_Nova_init_static();
nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_CompiledList_Nova_init_static();
nova_datastruct_list_Nova_DoubleArray_Nova_init_static();
nova_datastruct_list_Nova_DoubleArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_EmptyStackException_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArray_Nova_init_static();
nova_datastruct_list_Double_Nova_ImmutableArray1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_ImmutableArray1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_ImmutableArray1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_ImmutableArray1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_ImmutableArray1Long_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_init_static();
nova_datastruct_list_Double_Nova_ImmutableArrayIterator1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_ImmutableArrayIterator1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_ImmutableArrayIterator1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_ImmutableArrayIterator1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_ImmutableArrayIterator1Long_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArray_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_IntArray_Nova_init_static();
nova_datastruct_list_Nova_IntArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_IntRange_Nova_init_static();
nova_datastruct_list_Nova_IntRangeIterator_Nova_init_static();
nova_datastruct_list_Nova_Iterable_Nova_init_static();
nova_datastruct_list_Double_Nova_Iterable1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_Iterable1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_Iterable1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_Iterable1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_Iterable1Long_Nova_init_static();
nova_datastruct_list_Nova_Iterator_Nova_init_static();
nova_datastruct_list_Double_Nova_Iterator1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_Iterator1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_Iterator1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_Iterator1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_Iterator1Long_Nova_init_static();
nova_datastruct_list_Nova_LinkedList_Nova_init_static();
nova_datastruct_list_Nova_LinkedListIterator_Nova_init_static();
nova_datastruct_list_Nova_List_Nova_init_static();
nova_datastruct_list_Double_Nova_List1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_List1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_List1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_List1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_List1Long_Nova_init_static();
nova_datastruct_list_Nova_ListNode_Nova_init_static();
nova_datastruct_list_Nova_NoSuchElementException_Nova_init_static();
nova_datastruct_list_Nova_OrderedList_Nova_init_static();
nova_datastruct_list_Double_Nova_OrderedList1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_OrderedList1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_OrderedList1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_OrderedList1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_OrderedList1Long_Nova_init_static();
nova_datastruct_list_Nova_Queue_Nova_init_static();
nova_datastruct_list_Nova_Stack_Nova_init_static();
nova_datastruct_list_Nova_StringCharArray_Nova_init_static();
nova_datastruct_list_Nova_SubstringCharArray_Nova_init_static();
nova_exception_Nova_Backtraces_Nova_init_static();
nova_exception_Nova_CaughtException_Nova_init_static();
nova_exception_Nova_DivideByZeroException_Nova_init_static();
nova_exception_Nova_Exception_Nova_init_static();
nova_exception_Nova_ExceptionData_Nova_init_static();
nova_exception_Nova_InvalidArgumentException_Nova_init_static();
nova_exception_Nova_InvalidOperationException_Nova_init_static();
nova_exception_Nova_NullAccessException_Nova_init_static();
nova_exception_Nova_StackTrace_Nova_init_static();
nova_exception_Nova_UnimplementedForTargetException_Nova_init_static();
nova_exception_Nova_UnimplementedOperationException_Nova_init_static();
nova_gc_Nova_GC_Nova_init_static();
nova_io_Nova_ClosedStreamException_Nova_init_static();
nova_io_Nova_Console_Nova_init_static();
nova_io_Nova_Curl_Nova_init_static();
nova_io_Nova_EmptyOutputStream_Nova_init_static();
nova_io_Nova_FancyOutputStream_Nova_init_static();
nova_io_Nova_File_Nova_init_static();
nova_io_Nova_FileNotFoundException_Nova_init_static();
nova_io_Nova_FileReader_Nova_init_static();
nova_io_Nova_FileWriter_Nova_init_static();
nova_io_Nova_InputStream_Nova_init_static();
nova_io_Nova_OutputStream_Nova_init_static();
nova_io_Nova_StreamReader_Nova_init_static();
nova_io_Nova_StringBuilder_Nova_init_static();
nova_math_Nova_ArithmeticSequence_Nova_init_static();
nova_math_Nova_Diekstra_Nova_init_static();
nova_math_Nova_GeometricSequence_Nova_init_static();
nova_math_Nova_Graph_Nova_init_static();
nova_math_Nova_InvalidNumericStatementException_Nova_init_static();
nova_math_Nova_Math_Nova_init_static();
nova_math_Nova_Matrix_Nova_init_static();
nova_math_Nova_NumericOperand_Nova_init_static();
nova_math_Nova_NumericOperation_Nova_init_static();
nova_math_Nova_NumericStatement_Nova_init_static();
nova_math_Nova_NumericTree_Nova_init_static();
nova_math_Nova_Polynomial_Nova_init_static();
nova_math_Nova_Sequence_Nova_init_static();
nova_math_Nova_Statement_Nova_init_static();
nova_math_Nova_StatementComponent_Nova_init_static();
nova_math_Nova_VariableOperand_Nova_init_static();
nova_math_Nova_Vector_Nova_init_static();
nova_math_Nova_Vector2D_Nova_init_static();
nova_math_Nova_Vector3D_Nova_init_static();
nova_math_Nova_Vector4D_Nova_init_static();
nova_math_calculus_Nova_Calculus_Nova_init_static();
nova_math_huffman_Nova_HuffmanTree_Nova_init_static();
nova_math_logic_Nova_Conclusion_Nova_init_static();
nova_math_logic_Nova_Hypothesis_Nova_init_static();
nova_math_logic_Nova_InvalidFormulaException_Nova_init_static();
nova_math_logic_Nova_LogicalConnective_Nova_init_static();
nova_math_logic_Nova_LogicalStatement_Nova_init_static();
nova_math_logic_Nova_StatementComponent_Nova_init_static();
nova_math_logic_Nova_StatementGroup_Nova_init_static();
nova_math_logic_Nova_StatementLetter_Nova_init_static();
nova_math_logic_Nova_WFF_Nova_init_static();
nova_meta_Nova_Class_Nova_init_static();
nova_meta_Nova_Field_Nova_init_static();
nova_meta_Nova_FunctionMap_Nova_init_static();
nova_meta_Nova_GenericArgument_Nova_init_static();
nova_meta_Nova_GenericParameter_Nova_init_static();
nova_meta_Nova_InvalidLibraryException_Nova_init_static();
nova_meta_Nova_Library_Nova_init_static();
nova_meta_Nova_PropertyMap_Nova_init_static();
nova_meta_Nova_Type_Nova_init_static();
nova_network_Nova_ClientSocket_Nova_init_static();
nova_network_Nova_ConnectionSocket_Nova_init_static();
nova_network_Nova_NetworkInputStream_Nova_init_static();
nova_network_Nova_NetworkOutputStream_Nova_init_static();
nova_network_Nova_ServerSocket_Nova_init_static();
nova_network_Nova_Socket_Nova_init_static();
nova_operators_Nova_EqualsOperator_Nova_init_static();
nova_operators_Nova_GreaterThanOperator_Nova_init_static();
nova_operators_Nova_GreaterThanOrEqualToOperator_Nova_init_static();
nova_operators_Nova_LessThanOperator_Nova_init_static();
nova_operators_Nova_LessThanOrEqualToOperator_Nova_init_static();
nova_operators_Nova_MinusEqualsOperator_Nova_init_static();
nova_operators_Nova_MinusOperator_Nova_init_static();
nova_operators_Nova_MultiplyEqualsOperator_Nova_init_static();
nova_operators_Nova_MultiplyOperator_Nova_init_static();
nova_operators_Nova_NotEqualToOperator_Nova_init_static();
nova_operators_Nova_PlusEqualsOperator_Nova_init_static();
nova_operators_Nova_PlusOperator_Nova_init_static();
nova_package_Nova_Package_Nova_init_static();
nova_primitive_Nova_Bool_Nova_init_static();
nova_primitive_Nova_Null_Nova_init_static();
nova_primitive_Nova_Primitive_Nova_init_static();
nova_primitive_number_Nova_Byte_Nova_init_static();
nova_primitive_number_Nova_Char_Nova_init_static();
nova_primitive_number_Nova_Double_Nova_init_static();
nova_primitive_number_Nova_Float_Nova_init_static();
nova_primitive_number_Nova_Int_Nova_init_static();
nova_primitive_number_Nova_Integer_Nova_init_static();
nova_primitive_number_Nova_Long_Nova_init_static();
nova_primitive_number_Nova_Number_Nova_init_static();
nova_primitive_number_Nova_RealNumber_Nova_init_static();
nova_primitive_number_Nova_Short_Nova_init_static();
nova_process_Nova_Process_Nova_init_static();
nova_regex_Nova_Match_Nova_init_static();
nova_regex_Nova_Pattern_Nova_init_static();
nova_regex_Nova_Regex_Nova_init_static();
nova_security_Nova_MD5_Nova_init_static();
nova_security_Nova_Sha256_Nova_init_static();
nova_serialization_Nova_JsonSerializer_Nova_init_static();
nova_serialization_Nova_InvalidParseException_Nova_init_static();
nova_serialization_Nova_MissingMatchingTokenException_Nova_init_static();
nova_serialization_Nova_SyntaxStringFunctions_Nova_init_static();
nova_star_Nova_Button_Nova_init_static();
nova_star_Nova_Color_Nova_init_static();
nova_star_Nova_Frame_Nova_init_static();
nova_star_Nova_ImmutableColor_Nova_init_static();
nova_star_Nova_Label_Nova_init_static();
nova_star_Nova_Panel_Nova_init_static();
nova_star_Nova_Screen_Nova_init_static();
nova_star_Nova_ScrollBar_Nova_init_static();
nova_star_Nova_UIAction_Nova_init_static();
nova_star_Nova_UIComponent_Nova_init_static();
nova_star_Nova_UIParent_Nova_init_static();
nova_star_Nova_Window_Nova_init_static();
nova_star_Nova_WindowThread_Nova_init_static();
nova_thread_Nova_Thread_Nova_init_static();
nova_thread_Nova_ThreadLocal_Nova_init_static();
nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static();
nova_thread_async_Nova_Async_Nova_init_static();
nova_thread_async_Nova_Task_Nova_init_static();
nova_time_Nova_BoundedInterval_Nova_init_static();
nova_time_Nova_BoundlessInterval_Nova_init_static();
nova_time_Nova_CumulativeTimer_Nova_init_static();
nova_time_Nova_Date_Nova_init_static();
nova_time_Nova_DateTime_Nova_init_static();
nova_time_Nova_InvalidDateException_Nova_init_static();
nova_time_Nova_InvalidDateFormatException_Nova_init_static();
nova_time_Nova_Calculator_Nova_init_static();
nova_time_Nova_Interval_Nova_init_static();
nova_time_Nova_IntervalException_Nova_init_static();
nova_time_Nova_InvalidIntervalException_Nova_init_static();
nova_time_Nova_NoGapException_Nova_init_static();
nova_time_Nova_Time_Nova_init_static();
nova_time_Nova_Timer_Nova_init_static();
nova_web_js_json_Nova_Json_Nova_init_static();
nova_web_svg_Nova_Svg_Nova_init_static();
nova_web_svg_Nova_SvgCircle_Nova_init_static();
nova_web_svg_Nova_SvgComponent_Nova_init_static();
nova_web_svg_Nova_SvgComponentList_Nova_init_static();
nova_web_svg_Nova_SvgComponentNode_Nova_init_static();
nova_web_svg_Nova_SvgMainComponent_Nova_init_static();
nova_web_svg_no3_Nova_No3_Nova_init_static();
nova_web_svg_no3_Nova_No3Node_Nova_init_static();
nova_web_svg_no3_Nova_No3Select_Nova_init_static();
nova_web_svg_no3_Nova_No3SelectAll_Nova_init_static();

}

int main(int argc, char** argvs)
{
nova_gc_Nova_GC_static_Nova_init((nova_gc_Nova_GC*)(0));

return nova_Nova_System_static_Nova_runMain(0, argc, argvs, (nova_Nova_System_closure1028_Nova_mainFunc)&stabilitytest_Nova_StabilityTest_static_Nova_main, 0, 0, (nova_Nova_System_closure1029_Nova_initialize)&novaInitProgramData, 0, 0, (nova_Nova_System_closure1030_Nova_callStaticBlocks)&novaCallStaticBlocks, 0, 0);
}
