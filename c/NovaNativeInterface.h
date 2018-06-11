#ifndef NOVA_NATIVE_INTERFACE
#define NOVA_NATIVE_INTERFACE

#include <NovaOutput.h>
#include <ExceptionHandler.h>
#include <nova/NativeObject.h>
#include <nova/NativeSystem.h>
#include <nova/database/NativeDBConnector.h>
#include <nova/gc/NativeGC.h>
#include <nova/io/NativeConsole.h>
#include <nova/io/NativeFile.h>
#include <nova/meta/NativeLibrary.h>
#include <nova/network/NativeClientSocket.h>
#include <nova/network/NativeSocket.h>
#include <nova/network/NativeServerSocket.h>
#include <nova/security/NativeMD5.h>
#include <nova/star/NativeScrollBar.h>
#include <nova/star/NativeWindow.h>
#include <nova/thread/NativeThread.h>
#include <nova/time/NativeDate.h>
#include <nova/time/NativeTime.h>


typedef struct plumbercalc_pipes_native_Fitting
{
} plumbercalc_pipes_native_Fitting;

typedef void (*plumbercalc_pipes_Nova_Fraction_native_Nova_simplify)(plumbercalc_pipes_Nova_Fraction*);
typedef plumbercalc_pipes_Nova_Fraction* (*plumbercalc_pipes_Nova_Fraction_native_Nova_divide)(plumbercalc_pipes_Nova_Fraction*, plumbercalc_pipes_Nova_Fraction*);
typedef plumbercalc_pipes_Nova_Fraction* (*plumbercalc_pipes_Nova_Fraction_native_Nova_divideEquals)(plumbercalc_pipes_Nova_Fraction*, plumbercalc_pipes_Nova_Fraction*);
typedef plumbercalc_pipes_Nova_Fraction* (*plumbercalc_pipes_Nova_Fraction_native_Nova_construct)(plumbercalc_pipes_Nova_Fraction*, int, int);

typedef struct plumbercalc_pipes_native_Fraction
{
plumbercalc_pipes_Nova_Fraction_native_Nova_simplify simplify;
plumbercalc_pipes_Nova_Fraction_native_Nova_divide divide;
plumbercalc_pipes_Nova_Fraction_native_Nova_divideEquals divideEquals;
plumbercalc_pipes_Nova_Fraction_native_Nova_construct Fraction;
} plumbercalc_pipes_native_Fraction;

typedef plumbercalc_pipes_Nova_Pipe* (*plumbercalc_pipes_Nova_Pipe_native_Nova_construct)(plumbercalc_pipes_Nova_Pipe*, double, double, double);

typedef struct plumbercalc_pipes_native_Pipe
{
plumbercalc_pipes_Nova_Pipe_native_Nova_construct Pipe;
} plumbercalc_pipes_native_Pipe;


typedef struct plumbercalc_pipes_native_TeeFitting
{
} plumbercalc_pipes_native_TeeFitting;

typedef double (*plumbercalc_pipes_Nova_Units_native_static_Nova_toInches)(plumbercalc_pipes_Nova_Units*, double);
typedef double (*plumbercalc_pipes_Nova_Units_native_static_Nova_toFeet)(plumbercalc_pipes_Nova_Units*, double);
typedef double (*plumbercalc_pipes_Nova_Units_native_static_Nova_remainingInches)(plumbercalc_pipes_Nova_Units*, double);

typedef struct plumbercalc_pipes_native_Units
{
} plumbercalc_pipes_native_Units;

typedef void (*plumbercalc_tests_Nova_AllTestsRunner_native_static_Nova_main)(plumbercalc_tests_Nova_AllTestsRunner*, nova_datastruct_list_Nova_Array*);

typedef struct plumbercalc_tests_native_AllTestsRunner
{
} plumbercalc_tests_native_AllTestsRunner;


typedef struct plumbercalc_tests_native_FractionTests
{
} plumbercalc_tests_native_FractionTests;


typedef struct plumbercalc_tests_native_PipeTests
{
} plumbercalc_tests_native_PipeTests;


typedef struct plumbercalc_tests_native_UnitConversionTests
{
} plumbercalc_tests_native_UnitConversionTests;

typedef int (*example_Nova_Animal_native_Nova_getNumLegs)(example_Nova_Animal*);
typedef int (*example_Nova_Animal_native_Nova_getNumEyes)(example_Nova_Animal*);
typedef nova_Nova_String* (*example_Nova_Animal_native_Nova_getDescription)(example_Nova_Animal*);

typedef struct example_native_Animal
{
example_Nova_Animal_native_Nova_getNumLegs getNumLegs;
example_Nova_Animal_native_Nova_getNumEyes getNumEyes;
example_Nova_Animal_native_Nova_getDescription getDescription;
} example_native_Animal;

typedef void (*example_Nova_ArrayDemo_native_static_Nova_main)(example_Nova_ArrayDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_ArrayDemo
{
} example_native_ArrayDemo;

typedef example_Nova_BodyBuilder* (*example_Nova_BodyBuilder_native_Nova_construct)(example_Nova_BodyBuilder*, int, nova_Nova_String*);

typedef struct example_native_BodyBuilder
{
example_Nova_BodyBuilder_native_Nova_construct BodyBuilder;
} example_native_BodyBuilder;

typedef void (*example_Nova_ClosureDemo_native_static_Nova_main)(example_Nova_ClosureDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_ClosureDemo
{
} example_native_ClosureDemo;


typedef struct example_native_Dog
{
} example_native_Dog;

typedef void (*example_Nova_ExceptionHandlingDemo_native_static_Nova_main)(example_Nova_ExceptionHandlingDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_ExceptionHandlingDemo
{
} example_native_ExceptionHandlingDemo;

typedef void (*example_Nova_FileTest_native_static_Nova_main)(example_Nova_FileTest*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_FileTest
{
} example_native_FileTest;

typedef void (*example_Nova_GenericDemo_native_static_Nova_main)(example_Nova_GenericDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_GenericDemo
{
} example_native_GenericDemo;

typedef void (*example_Nova_HashMapDemo_native_static_Nova_main)(example_Nova_HashMapDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_HashMapDemo
{
} example_native_HashMapDemo;

typedef void (*example_Nova_HashSetDemo_native_static_Nova_main)(example_Nova_HashSetDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_HashSetDemo
{
} example_native_HashSetDemo;

typedef void (*example_Nova_IntegerTest_native_static_Nova_main)(example_Nova_IntegerTest*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_IntegerTest
{
} example_native_IntegerTest;

typedef void (*example_Nova_Lab_native_static_Nova_main)(example_Nova_Lab*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_Lab
{
} example_native_Lab;

typedef void (*example_Nova_MathDemo_native_static_Nova_main)(example_Nova_MathDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_MathDemo
{
} example_native_MathDemo;

typedef void (*example_Nova_NestTest_native_static_Nova_main)(example_Nova_NestTest*, nova_datastruct_list_Nova_Array*);
typedef void (*example_Nova_NestTest_native_Nova_testPrimitiveComparison)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);
typedef void (*example_Nova_NestTest_native_Nova_testPrimitiveNotComparison)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);
typedef void (*example_Nova_NestTest_native_Nova_testNoMessageGiven)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);
typedef void (*example_Nova_NestTest_native_Nova_beforeTest)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);
typedef void (*example_Nova_NestTest_native_Nova_afterTest)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);
typedef void (*example_Nova_NestTest_native_Nova_beforeClass)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);
typedef void (*example_Nova_NestTest_native_Nova_afterClass)(example_Nova_NestTest*, nova_io_Nova_OutputStream*);

typedef struct example_native_NestTest
{
example_Nova_NestTest_native_Nova_testPrimitiveComparison testPrimitiveComparison;
example_Nova_NestTest_native_Nova_testPrimitiveNotComparison testPrimitiveNotComparison;
example_Nova_NestTest_native_Nova_testNoMessageGiven testNoMessageGiven;
example_Nova_NestTest_native_Nova_beforeTest beforeTest;
example_Nova_NestTest_native_Nova_afterTest afterTest;
example_Nova_NestTest_native_Nova_beforeClass beforeClass;
example_Nova_NestTest_native_Nova_afterClass afterClass;
} example_native_NestTest;

typedef example_Nova_NonWholeDivisionException* (*example_Nova_NonWholeDivisionException_native_Nova_construct)(example_Nova_NonWholeDivisionException*);

typedef struct example_native_NonWholeDivisionException
{
example_Nova_NonWholeDivisionException_native_Nova_construct NonWholeDivisionException;
} example_native_NonWholeDivisionException;

typedef void (*example_Nova_Person_native_Nova_sayHello)(example_Nova_Person*);
typedef example_Nova_Person* (*example_Nova_Person_native_Nova_construct)(example_Nova_Person*, nova_Nova_String*, int);

typedef struct example_native_Person
{
example_Nova_Person_native_Nova_sayHello sayHello;
example_Nova_Person_native_Nova_construct Person;
} example_native_Person;

typedef int (*example_Nova_Polygon_native_Nova_numberSides)(example_Nova_Polygon*);
typedef double (*example_Nova_Polygon_native_Nova_calculateArea)(example_Nova_Polygon*);

typedef struct example_native_Polygon
{
example_Nova_Polygon_native_Nova_numberSides numberSides;
example_Nova_Polygon_native_Nova_calculateArea calculateArea;
} example_native_Polygon;

typedef void (*example_Nova_PolymorphismDemo_native_static_Nova_main)(example_Nova_PolymorphismDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_PolymorphismDemo
{
} example_native_PolymorphismDemo;

typedef void (*example_Nova_QueueDemo_native_static_Nova_main)(example_Nova_QueueDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_QueueDemo
{
} example_native_QueueDemo;


typedef struct example_native_Spider
{
} example_native_Spider;

typedef example_Nova_Square* (*example_Nova_Square_native_Nova_construct)(example_Nova_Square*, int);

typedef struct example_native_Square
{
example_Nova_Square_native_Nova_construct Square;
} example_native_Square;

typedef void (*example_Nova_SvgChart_native_static_Nova_main)(example_Nova_SvgChart*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_SvgChart
{
} example_native_SvgChart;

typedef void (*example_Nova_SvgFractal_native_static_Nova_main)(example_Nova_SvgFractal*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_SvgFractal
{
} example_native_SvgFractal;


typedef struct example_native_T1
{
} example_native_T1;


typedef struct example_native_T2
{
} example_native_T2;

typedef void (*example_Nova_Test_native_static_Nova_main)(example_Nova_Test*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_Test
{
} example_native_Test;

typedef void (*example_Nova_ThreadDemo_native_static_Nova_main)(example_Nova_ThreadDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_native_ThreadDemo
{
} example_native_ThreadDemo;

typedef example_Nova_ThreadDemoImplementation* (*example_Nova_ThreadDemoImplementation_native_Nova_construct)(example_Nova_ThreadDemoImplementation*, long_long, nova_Nova_String*);

typedef struct example_native_ThreadDemoImplementation
{
example_Nova_ThreadDemoImplementation_native_Nova_construct ThreadDemoImplementation;
} example_native_ThreadDemoImplementation;

typedef void (*example_ackermann_Nova_Ackermann_native_static_Nova_main)(example_ackermann_Nova_Ackermann*, nova_datastruct_list_Nova_Array*);
typedef int (*example_ackermann_Nova_Ackermann_native_static_Nova_run)(example_ackermann_Nova_Ackermann*, int, int);
typedef int (*example_ackermann_Nova_Ackermann_native_static_Nova_run2)(example_ackermann_Nova_Ackermann*, int, int);

typedef struct example_ackermann_native_Ackermann
{
} example_ackermann_native_Ackermann;

typedef example_copy_Nova_Dog* (*example_copy_Nova_Dog_native_Nova_construct)(example_copy_Nova_Dog*, int, int);

typedef struct example_copy_native_Dog
{
example_copy_Nova_Dog_native_Nova_construct Dog;
} example_copy_native_Dog;

typedef void (*example_database_Nova_DatabaseDemo_native_static_Nova_main)(example_database_Nova_DatabaseDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_database_native_DatabaseDemo
{
} example_database_native_DatabaseDemo;

typedef void (*example_network_Nova_ClientDemo_native_static_Nova_main)(example_network_Nova_ClientDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_network_native_ClientDemo
{
} example_network_native_ClientDemo;

typedef example_network_Nova_ConnectionThread* (*example_network_Nova_ConnectionThread_native_Nova_construct)(example_network_Nova_ConnectionThread*, nova_network_Nova_ConnectionSocket*);

typedef struct example_network_native_ConnectionThread
{
example_network_Nova_ConnectionThread_native_Nova_construct ConnectionThread;
} example_network_native_ConnectionThread;

typedef example_network_Nova_OutputThread* (*example_network_Nova_OutputThread_native_Nova_construct)(example_network_Nova_OutputThread*, nova_network_Nova_ServerSocket*, nova_network_Nova_ConnectionSocket*);

typedef struct example_network_native_OutputThread
{
example_network_Nova_OutputThread_native_Nova_construct OutputThread;
} example_network_native_OutputThread;

typedef void (*example_network_Nova_ServerDemo_native_static_Nova_main)(example_network_Nova_ServerDemo*, nova_datastruct_list_Nova_Array*);

typedef struct example_network_native_ServerDemo
{
} example_network_native_ServerDemo;


typedef struct stabilitytest_native_AssignmentStability
{
} stabilitytest_native_AssignmentStability;


typedef struct stabilitytest_native_BoundedIntervalStability
{
} stabilitytest_native_BoundedIntervalStability;


typedef struct stabilitytest_native_BoundlessIntervalStability
{
} stabilitytest_native_BoundlessIntervalStability;


typedef struct stabilitytest_native_ClassWithProperties
{
} stabilitytest_native_ClassWithProperties;

typedef stabilitytest_Nova_ClientThread* (*stabilitytest_Nova_ClientThread_native_Nova_construct)(stabilitytest_Nova_ClientThread*, int, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_ClientThread
{
stabilitytest_Nova_ClientThread_native_Nova_construct ClientThread;
} stabilitytest_native_ClientThread;


typedef struct stabilitytest_native_ClosureStability
{
} stabilitytest_native_ClosureStability;

typedef void (*stabilitytest_Nova_ExceptionStability_native_Nova_test)(stabilitytest_Nova_ExceptionStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_ExceptionStability
{
stabilitytest_Nova_ExceptionStability_native_Nova_test test;
} stabilitytest_native_ExceptionStability;

typedef void (*stabilitytest_Nova_ExternalInnerClassStability_native_Nova_test)(stabilitytest_Nova_ExternalInnerClassStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_ExternalInnerClassStability
{
stabilitytest_Nova_ExternalInnerClassStability_native_Nova_test test;
} stabilitytest_native_ExternalInnerClassStability;


typedef struct stabilitytest_native_FancyOutputStreamTests
{
} stabilitytest_native_FancyOutputStreamTests;


typedef struct stabilitytest_native_FileStability
{
} stabilitytest_native_FileStability;


typedef struct stabilitytest_native_FirstClassFunctionStability
{
} stabilitytest_native_FirstClassFunctionStability;

typedef void (*stabilitytest_Nova_InnerClassStability_native_Nova_test)(stabilitytest_Nova_InnerClassStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_InnerClassStability
{
stabilitytest_Nova_InnerClassStability_native_Nova_test test;
} stabilitytest_native_InnerClassStability;
typedef void (*stabilitytest_Nova_MyOuter_native_Nova_test)(stabilitytest_Nova_MyOuter*);

typedef struct stabilitytest_native_MyOuter
{
stabilitytest_Nova_MyOuter_native_Nova_test test;
} stabilitytest_native_MyOuter;
typedef stabilitytest_Nova_MyInner* (*stabilitytest_Nova_MyInner_native_Nova_construct)(stabilitytest_Nova_MyInner*, int, int);

typedef struct stabilitytest_native_MyInner
{
stabilitytest_Nova_MyInner_native_Nova_construct MyInner;
} stabilitytest_native_MyInner;


typedef struct stabilitytest_native_IntervalStability
{
} stabilitytest_native_IntervalStability;


typedef struct stabilitytest_native_LambdaStability
{
} stabilitytest_native_LambdaStability;


typedef struct stabilitytest_native_LibraryLoadingStability
{
} stabilitytest_native_LibraryLoadingStability;

typedef void (*stabilitytest_Nova_NetworkStability_native_Nova_test)(stabilitytest_Nova_NetworkStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_NetworkStability
{
stabilitytest_Nova_NetworkStability_native_Nova_test test;
} stabilitytest_native_NetworkStability;


typedef struct stabilitytest_native_Node
{
} stabilitytest_native_Node;


typedef struct stabilitytest_native_PolymorphicSubClass
{
} stabilitytest_native_PolymorphicSubClass;

typedef stabilitytest_Nova_PolymorphicSubClass* (*stabilitytest_Nova_PolymorphicSuperClass_native_Nova_giveBirth)(stabilitytest_Nova_PolymorphicSuperClass*);

typedef struct stabilitytest_native_PolymorphicSuperClass
{
stabilitytest_Nova_PolymorphicSuperClass_native_Nova_giveBirth giveBirth;
} stabilitytest_native_PolymorphicSuperClass;


typedef struct stabilitytest_native_PolymorphismStability
{
} stabilitytest_native_PolymorphismStability;

typedef void (*stabilitytest_Nova_PrimitiveOverloadStability_native_Nova_test)(stabilitytest_Nova_PrimitiveOverloadStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_PrimitiveOverloadStability
{
stabilitytest_Nova_PrimitiveOverloadStability_native_Nova_test test;
} stabilitytest_native_PrimitiveOverloadStability;


typedef struct stabilitytest_native_RegexStability
{
} stabilitytest_native_RegexStability;


typedef struct stabilitytest_native_StabilityExceptionHandler
{
} stabilitytest_native_StabilityExceptionHandler;

typedef void (*stabilitytest_Nova_StabilityTest_native_static_Nova_main)(stabilitytest_Nova_StabilityTest*, nova_datastruct_list_Nova_Array*);

typedef struct stabilitytest_native_StabilityTest
{
} stabilitytest_native_StabilityTest;

typedef void (*stabilitytest_Nova_StabilityTestCase_native_Nova_test)(stabilitytest_Nova_StabilityTestCase*);
typedef stabilitytest_Nova_StabilityTestCase* (*stabilitytest_Nova_StabilityTestCase_native_Nova_construct)(stabilitytest_Nova_StabilityTestCase*, stabilitytest_Nova_StabilityTest*);

typedef struct stabilitytest_native_StabilityTestCase
{
stabilitytest_Nova_StabilityTestCase_native_Nova_construct StabilityTestCase;
} stabilitytest_native_StabilityTestCase;

typedef stabilitytest_Nova_StabilityTestException* (*stabilitytest_Nova_StabilityTestException_native_Nova_construct)(stabilitytest_Nova_StabilityTestException*);

typedef struct stabilitytest_native_StabilityTestException
{
stabilitytest_Nova_StabilityTestException_native_Nova_construct StabilityTestException;
} stabilitytest_native_StabilityTestException;

typedef void (*stabilitytest_Nova_StaticImportStability_native_Nova_test)(stabilitytest_Nova_StaticImportStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_StaticImportStability
{
stabilitytest_Nova_StaticImportStability_native_Nova_test test;
} stabilitytest_native_StaticImportStability;


typedef struct stabilitytest_native_SyntaxStability
{
} stabilitytest_native_SyntaxStability;

typedef stabilitytest_Nova_ThreadImplementation* (*stabilitytest_Nova_ThreadImplementation_native_Nova_construct)(stabilitytest_Nova_ThreadImplementation*, int, int);

typedef struct stabilitytest_native_ThreadImplementation
{
stabilitytest_Nova_ThreadImplementation_native_Nova_construct ThreadImplementation;
} stabilitytest_native_ThreadImplementation;

typedef void (*stabilitytest_Nova_ThreadStability_native_Nova_test)(stabilitytest_Nova_ThreadStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_ThreadStability
{
stabilitytest_Nova_ThreadStability_native_Nova_test test;
} stabilitytest_native_ThreadStability;

typedef void (*stabilitytest_Nova_TimeStability_native_Nova_test)(stabilitytest_Nova_TimeStability*, nova_io_Nova_OutputStream*);

typedef struct stabilitytest_native_TimeStability
{
stabilitytest_Nova_TimeStability_native_Nova_test test;
} stabilitytest_native_TimeStability;


typedef struct stabilitytest_native_ToStringStability
{
} stabilitytest_native_ToStringStability;


typedef struct stabilitytest_native_UnstableException
{
} stabilitytest_native_UnstableException;


typedef struct novex_nest_native_InvalidAssertionException
{
} novex_nest_native_InvalidAssertionException;

typedef char (*novex_nest_Nova_Nest_native_Nova_toBe)(novex_nest_Nova_Nest*, nova_Nova_Object*, nova_Nova_String*);
typedef char (*novex_nest_Nova_Nest_native_Nova_toNotBe)(novex_nest_Nova_Nest*, nova_Nova_Object*, nova_Nova_String*);
typedef char (*novex_nest_Nova_Nest_native_Nova_toBeWithinToleranceOf)(novex_nest_Nova_Nest*, double, double, nova_Nova_String*);
typedef void (*novex_nest_Nova_Nest_native_Nova_toThrow)(novex_nest_Nova_Nest*, nova_meta_Nova_Class*, nova_Nova_String*, int);
typedef void (*novex_nest_Nova_Nest_native_Nova_toNotThrow)(novex_nest_Nova_Nest*, nova_meta_Nova_Class*, nova_Nova_String*, int);
typedef void (*novex_nest_Nova_Nest_native_static_Nova_fail)(novex_nest_Nova_Nest*, nova_Nova_String*);
typedef novex_nest_Nova_Nest* (*novex_nest_Nova_Nest_native0_static_Nova_expect)(novex_nest_Nova_Nest*, nova_Nova_Object*);
typedef novex_nest_Nova_Nest* (*novex_nest_Nova_Nest_native1_static_Nova_expect)(novex_nest_Nova_Nest*, novex_nest_Nova_Nest_closure956_Nova_func novex_nest_Nova_Nest_Nova_func, void* novex_nest_Nova_Nest_ref_Nova_func, void* novex_nest_Nova_Nest_context_Nova_func);
typedef void (*novex_nest_Nova_Nest_native_static_Nova_test)(novex_nest_Nova_Nest*, nova_Nova_String*, novex_nest_Nova_Nest_closure961_Nova_testCode novex_nest_Nova_Nest_Nova_testCode, void* novex_nest_Nova_Nest_ref_Nova_testCode, void* novex_nest_Nova_Nest_context_Nova_testCode);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool2_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool3_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int4_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int5_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int6_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int7_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int8_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int9_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int10_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int11_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int12_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int13_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int14_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int15_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int16_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int17_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int18_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int19_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int20_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int21_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int22_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int23_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int24_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int25_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int26_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int27_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int28_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int29_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int30_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int31_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int32_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int33_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int34_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int35_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double36_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double37_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double38_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double39_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double40_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double41_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double42_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int43_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int44_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool45_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool46_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool47_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool48_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool49_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int50_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int51_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool52_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool53_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool54_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool55_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool56_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int57_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int58_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Char_Nova_Nest1Char* (*novex_nest_Nova_Nest_native_char_Nest1Char59_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int60_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool61_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int62_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Char_Nova_Nest1Char* (*novex_nest_Nova_Nest_native_char_Nest1Char63_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int64_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool65_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int66_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Char_Nova_Nest1Char* (*novex_nest_Nova_Nest_native_char_Nest1Char67_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int68_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool69_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool70_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool71_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool72_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool73_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool74_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool75_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool76_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool77_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool78_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool79_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool80_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool81_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool82_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool83_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool84_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int85_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int86_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool87_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool88_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool89_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool90_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool91_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool92_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool93_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool94_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool95_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool96_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int97_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int98_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int99_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int100_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int101_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool102_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool103_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int104_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool105_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long106_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long107_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int108_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long109_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int110_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long111_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int112_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int113_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int114_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int115_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long116_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long117_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int118_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long119_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int120_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long121_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int122_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long123_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int124_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int125_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int126_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int127_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long128_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long129_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int130_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long131_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int132_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long133_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int134_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long135_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int136_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int137_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int138_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int139_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long140_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long141_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int142_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long143_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int144_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long145_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int146_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long147_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int148_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int149_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int150_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int151_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long152_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long153_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int154_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long155_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int156_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int157_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int158_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int159_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long160_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long161_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int162_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long163_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int164_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int165_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int166_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int167_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long168_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long169_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int170_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long171_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int172_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int173_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int174_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int175_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long176_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long177_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int178_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long179_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int180_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int181_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int182_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int183_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long184_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long185_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int186_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long187_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int188_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int189_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int190_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int191_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long192_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long193_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int194_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long195_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int196_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int197_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int198_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int199_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool200_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool201_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool202_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool203_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool204_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool205_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool206_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool207_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool208_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool209_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool210_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool211_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool212_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool213_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool214_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool215_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool216_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool217_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool218_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool219_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool220_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool221_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long222_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long223_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long224_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Byte_Nova_Nest1Byte* (*novex_nest_Nova_Nest_native_char_Nest1Byte225_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Double_Nova_Nest1Double* (*novex_nest_Nova_Nest_native_double_Nest1Double226_static_Nova_expect)(novex_nest_Nova_Nest*, double);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool227_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool228_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool229_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool230_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool231_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool232_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool233_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool234_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool235_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool236_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool237_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool238_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool239_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool240_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool241_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool242_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool243_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool244_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool245_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool246_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool247_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool248_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool249_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool250_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool251_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool252_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool253_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool254_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool255_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool256_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool257_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool258_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool259_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool260_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long261_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int262_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int263_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int264_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long265_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int266_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int267_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int268_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long269_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int270_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int271_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int272_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Long_Nova_Nest1Long* (*novex_nest_Nova_Nest_native_long_long_Nest1Long273_static_Nova_expect)(novex_nest_Nova_Nest*, long_long);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int274_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int275_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Int_Nova_Nest1Int* (*novex_nest_Nova_Nest_native_int_Nest1Int276_static_Nova_expect)(novex_nest_Nova_Nest*, int);
typedef novex_nest_Byte_Nova_Nest1Byte* (*novex_nest_Nova_Nest_native_char_Nest1Byte277_static_Nova_expect)(novex_nest_Nova_Nest*, char);
typedef novex_nest_Float_Nova_Nest1Float* (*novex_nest_Nova_Nest_native_float_Nest1Float278_static_Nova_expect)(novex_nest_Nova_Nest*, float);
typedef novex_nest_Float_Nova_Nest1Float* (*novex_nest_Nova_Nest_native_float_Nest1Float279_static_Nova_expect)(novex_nest_Nova_Nest*, float);
typedef novex_nest_Bool_Nova_Nest1Bool* (*novex_nest_Nova_Nest_native_char_Nest1Bool280_static_Nova_expect)(novex_nest_Nova_Nest*, char);

typedef struct novex_nest_native_Nest
{
novex_nest_Nova_Nest_native_Nova_toBe toBe;
novex_nest_Nova_Nest_native_Nova_toNotBe toNotBe;
novex_nest_Nova_Nest_native_Nova_toBeWithinToleranceOf toBeWithinToleranceOf;
novex_nest_Nova_Nest_native_Nova_toThrow toThrow;
novex_nest_Nova_Nest_native_Nova_toNotThrow toNotThrow;
} novex_nest_native_Nest;


typedef struct novex_nest_native_NestException
{
} novex_nest_native_NestException;

typedef novex_nest_Nova_TestCase* (*novex_nest_Nova_TestCase_native_Nova_construct)(novex_nest_Nova_TestCase*, nova_Nova_String*, nova_Nova_String*);

typedef struct novex_nest_native_TestCase
{
novex_nest_Nova_TestCase_native_Nova_construct TestCase;
} novex_nest_native_TestCase;

typedef novex_nest_Nova_TestResult* (*novex_nest_Nova_TestResult_native_Nova_construct)(novex_nest_Nova_TestResult*, char, nova_time_Nova_Timer*, novex_nest_Nova_TestCase*);

typedef struct novex_nest_native_TestResult
{
novex_nest_Nova_TestResult_native_Nova_construct TestResult;
} novex_nest_native_TestResult;

typedef void (*novex_nest_Nova_TestRunner_native_Nova_runTests)(novex_nest_Nova_TestRunner*, novex_nest_Nova_TestRunner_closure1058_Nova_onResult novex_nest_Nova_TestRunner_Nova_onResult, void* novex_nest_Nova_TestRunner_ref_Nova_onResult, void* novex_nest_Nova_TestRunner_context_Nova_onResult, nova_io_Nova_OutputStream*);

typedef struct novex_nest_native_TestRunner
{
novex_nest_Nova_TestRunner_native_Nova_runTests runTests;
} novex_nest_native_TestRunner;

typedef novex_nest_Nova_TestRunnerModel* (*novex_nest_Nova_TestRunnerModel_native_Nova_construct)(novex_nest_Nova_TestRunnerModel*, nova_datastruct_list_Nova_Array*, nova_Nova_String*);

typedef struct novex_nest_native_TestRunnerModel
{
novex_nest_Nova_TestRunnerModel_native_Nova_construct TestRunnerModel;
} novex_nest_native_TestRunnerModel;

typedef novex_nest_Nova_TestSuite* (*novex_nest_Nova_TestSuite_native_Nova_construct)(novex_nest_Nova_TestSuite*, nova_datastruct_list_Nova_Array*);

typedef struct novex_nest_native_TestSuite
{
novex_nest_Nova_TestSuite_native_Nova_construct TestSuite;
} novex_nest_native_TestSuite;


typedef struct novex_nest_native_TestSuiteRunner
{
} novex_nest_native_TestSuiteRunner;

typedef novex_nest_Nova_TestSuiteRunnerModel* (*novex_nest_Nova_TestSuiteRunnerModel_native_Nova_construct)(novex_nest_Nova_TestSuiteRunnerModel*, nova_datastruct_list_Nova_Array*);

typedef struct novex_nest_native_TestSuiteRunnerModel
{
novex_nest_Nova_TestSuiteRunnerModel_native_Nova_construct TestSuiteRunnerModel;
} novex_nest_native_TestSuiteRunnerModel;

typedef novex_nest_ui_Nova_ResultBar* (*novex_nest_ui_Nova_ResultBar_native_Nova_construct)(novex_nest_ui_Nova_ResultBar*, int, int, int, int, int);

typedef struct novex_nest_ui_native_ResultBar
{
novex_nest_ui_Nova_ResultBar_native_Nova_construct ResultBar;
} novex_nest_ui_native_ResultBar;

typedef novex_nest_ui_Nova_ResultWindow* (*novex_nest_ui_Nova_ResultWindow_native_Nova_construct)(novex_nest_ui_Nova_ResultWindow*, novex_nest_Nova_TestRunner*, nova_io_Nova_OutputStream*);

typedef struct novex_nest_ui_native_ResultWindow
{
novex_nest_ui_Nova_ResultWindow_native_Nova_construct ResultWindow;
} novex_nest_ui_native_ResultWindow;


typedef struct novex_nest_native_EmbeddedNestTest
{
} novex_nest_native_EmbeddedNestTest;


typedef struct novex_nest_native_TypeNestTest
{
} novex_nest_native_TypeNestTest;

typedef nova_Nova_Object* (*nova_Nova_Object_native_static_Nova_default)(nova_Nova_Object*);
typedef char (*nova_Nova_Object_native_Nova_equals)(nova_Nova_Object*, nova_Nova_Object*);
typedef nova_Nova_String* (*nova_Nova_Object_native_Nova_toString)(nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_Nova_Object_native_Nova_construct)(nova_Nova_Object*);

typedef struct nova_native_Object
{
nova_Nova_Object_native_Nova_equals equals;
nova_Nova_Object_native_Nova_toString toString;
nova_Nova_Object_native_Nova_construct Object;
} nova_native_Object;

typedef wchar_t* (*nova_Nova_String_native_Nova_toWide)(nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_concat)(nova_Nova_String*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_repeat)(nova_Nova_String*, int);
typedef nova_Nova_String* (*nova_Nova_String_native0_Nova_replace)(nova_Nova_String*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native1_Nova_replace)(nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef char (*nova_Nova_String_native0_Nova_startsWith)(nova_Nova_String*, char);
typedef char (*nova_Nova_String_native1_Nova_startsWith)(nova_Nova_String*, nova_Nova_String*);
typedef char (*nova_Nova_String_native2_Nova_startsWith)(nova_Nova_String*, nova_regex_Nova_Pattern*);
typedef char (*nova_Nova_String_native0_Nova_contains)(nova_Nova_String*, char);
typedef char (*nova_Nova_String_native1_Nova_contains)(nova_Nova_String*, nova_Nova_String*);
typedef char (*nova_Nova_String_native2_Nova_contains)(nova_Nova_String*, nova_regex_Nova_Pattern*);
typedef char (*nova_Nova_String_native0_Nova_endsWith)(nova_Nova_String*, char);
typedef char (*nova_Nova_String_native1_Nova_endsWith)(nova_Nova_String*, nova_Nova_String*);
typedef char (*nova_Nova_String_native2_Nova_endsWith)(nova_Nova_String*, nova_regex_Nova_Pattern*);
typedef char (*nova_Nova_String_native_Nova_matches)(nova_Nova_String*, nova_regex_Nova_Pattern*);
typedef int (*nova_Nova_String_native0_Nova_indexOf)(nova_Nova_String*, nova_regex_Nova_Pattern*, int, int, int);
typedef int (*nova_Nova_String_native1_Nova_indexOf)(nova_Nova_String*, char, int, int, int);
typedef int (*nova_Nova_String_native2_Nova_indexOf)(nova_Nova_String*, nova_Nova_String*, int, int, int);
typedef int (*nova_Nova_String_native0_Nova_lastIndexOf)(nova_Nova_String*, char, int, int);
typedef int (*nova_Nova_String_native1_Nova_lastIndexOf)(nova_Nova_String*, nova_Nova_String*, int, int);
typedef char (*nova_Nova_String_native_Nova_validateSubstringBounds)(nova_Nova_String*, int, int, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_substring)(nova_Nova_String*, int, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_trimStart)(nova_Nova_String*, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_trimEnd)(nova_Nova_String*, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_trimEnds)(nova_Nova_String*, int, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_trim)(nova_Nova_String*, int, int, nova_datastruct_list_Char_Nova_Array1Char*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_toLowerCase)(nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_toUpperCase)(nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_capitalize)(nova_Nova_String*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_transform)(nova_Nova_String*, nova_Nova_String_closure1059_Nova_transform nova_Nova_String_Nova_transform, void* nova_Nova_String_ref_Nova_transform, void* nova_Nova_String_context_Nova_transform);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_getStringBetween)(nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_reverse)(nova_Nova_String*, int);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_surroundWith)(nova_Nova_String*, nova_Nova_String*, int);
typedef nova_datastruct_list_Nova_Array* (*nova_Nova_String_native_Nova_split)(nova_Nova_String*, nova_regex_Nova_Pattern*);
typedef nova_Nova_String* (*nova_Nova_String_native_Nova_getGroupedChars)(nova_Nova_String*, nova_datastruct_list_Char_Nova_Array1Char*, int, int, int);
typedef char (*nova_Nova_String_native_Nova_get)(nova_Nova_String*, int);
typedef char (*nova_Nova_String_native_Nova_set)(nova_Nova_String*, int, char);
typedef nova_Nova_String* (*nova_Nova_String_native0_Nova_construct)(nova_Nova_String*, char);
typedef nova_Nova_String* (*nova_Nova_String_native1_Nova_construct)(nova_Nova_String*, char*);
typedef nova_Nova_String* (*nova_Nova_String_native2_Nova_construct)(nova_Nova_String*, char*, int);
typedef nova_Nova_String* (*nova_Nova_String_native3_Nova_construct)(nova_Nova_String*, nova_datastruct_list_Char_Nova_Array1Char*);
typedef nova_Nova_String* (*nova_Nova_String_native4_Nova_construct)(nova_Nova_String*, nova_datastruct_list_Nova_StringCharArray*);

typedef struct nova_native_String
{
nova_Nova_String_native_Nova_toWide toWide;
nova_Nova_String_native_Nova_concat concat;
nova_Nova_String_native_Nova_repeat repeat;
nova_Nova_String_native0_Nova_replace replace__nova_regex_Pattern__nova_String;
nova_Nova_String_native1_Nova_replace replace__nova_String__nova_String;
nova_Nova_String_native0_Nova_startsWith startsWith__nova_primitive_number_Char;
nova_Nova_String_native1_Nova_startsWith startsWith__nova_String;
nova_Nova_String_native2_Nova_startsWith startsWith__nova_regex_Pattern;
nova_Nova_String_native0_Nova_contains contains__nova_primitive_number_Char;
nova_Nova_String_native1_Nova_contains contains__nova_String;
nova_Nova_String_native2_Nova_contains contains__nova_regex_Pattern;
nova_Nova_String_native0_Nova_endsWith endsWith__nova_primitive_number_Char;
nova_Nova_String_native1_Nova_endsWith endsWith__nova_String;
nova_Nova_String_native2_Nova_endsWith endsWith__nova_regex_Pattern;
nova_Nova_String_native_Nova_matches matches;
nova_Nova_String_native0_Nova_indexOf indexOf__nova_regex_Pattern__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native1_Nova_indexOf indexOf__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native2_Nova_indexOf indexOf__nova_String__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native0_Nova_lastIndexOf lastIndexOf__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native1_Nova_lastIndexOf lastIndexOf__nova_String__nova_primitive_number_Int__nova_primitive_number_Int;
nova_Nova_String_native_Nova_validateSubstringBounds validateSubstringBounds;
nova_Nova_String_native_Nova_substring substring;
nova_Nova_String_native_Nova_trimStart trimStart;
nova_Nova_String_native_Nova_trimEnd trimEnd;
nova_Nova_String_native_Nova_trimEnds trimEnds;
nova_Nova_String_native_Nova_trim trim;
nova_Nova_String_native_Nova_toLowerCase toLowerCase;
nova_Nova_String_native_Nova_toUpperCase toUpperCase;
nova_Nova_String_native_Nova_capitalize capitalize;
nova_Nova_String_native_Nova_transform transform;
nova_Nova_String_native_Nova_getStringBetween getStringBetween;
nova_Nova_String_native_Nova_reverse reverse;
nova_Nova_String_native_Nova_surroundWith surroundWith;
nova_Nova_String_native_Nova_split split;
nova_Nova_String_native_Nova_getGroupedChars getGroupedChars;
nova_Nova_String_native_Nova_get get;
nova_Nova_String_native_Nova_set set;
nova_Nova_String_native0_Nova_construct String__nova_primitive_number_Char;
nova_Nova_String_native1_Nova_construct String__Array1d_nova_primitive_number_Char;
nova_Nova_String_native2_Nova_construct String__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
nova_Nova_String_native3_Nova_construct String__nova_datastruct_list_Char_Array1Char;
nova_Nova_String_native4_Nova_construct String__nova_datastruct_list_StringCharArray;
} nova_native_String;

typedef nova_Nova_Substring* (*nova_Nova_Substring_native_Nova_construct)(nova_Nova_Substring*, nova_Nova_String*, int, int);

typedef struct nova_native_Substring
{
nova_Nova_Substring_native_Nova_construct Substring;
} nova_native_Substring;

typedef void (*nova_Nova_System_native0_static_Nova_exit)(nova_Nova_System*, int);
typedef void (*nova_Nova_System_native1_static_Nova_exit)(nova_Nova_System*, int, nova_Nova_String*);
typedef void (*nova_Nova_System_native2_static_Nova_exit)(nova_Nova_System*, int, nova_Nova_String*, char);
typedef nova_process_Nova_Process* (*nova_Nova_System_native0_static_Nova_execute)(nova_Nova_System*, nova_Nova_String*);
typedef nova_process_Nova_Process* (*nova_Nova_System_native1_static_Nova_execute)(nova_Nova_System*, nova_datastruct_list_Nova_Array*);
typedef int (*nova_Nova_System_native_static_Nova_runMain)(nova_Nova_System*, int, char**, nova_Nova_System_closure1061_Nova_mainFunc nova_Nova_System_Nova_mainFunc, void* nova_Nova_System_ref_Nova_mainFunc, void* nova_Nova_System_context_Nova_mainFunc, nova_Nova_System_closure1062_Nova_initialize nova_Nova_System_Nova_initialize, void* nova_Nova_System_ref_Nova_initialize, void* nova_Nova_System_context_Nova_initialize, nova_Nova_System_closure1063_Nova_callStaticBlocks nova_Nova_System_Nova_callStaticBlocks, void* nova_Nova_System_ref_Nova_callStaticBlocks, void* nova_Nova_System_context_Nova_callStaticBlocks);

typedef struct nova_native_System
{
} nova_native_System;


typedef struct nova_ar_native_ImageTracker
{
} nova_ar_native_ImageTracker;


typedef struct nova_ar_native_TrackPoint
{
} nova_ar_native_TrackPoint;

typedef void (*nova_database_Nova_DBConnector_native0_Nova_connect)(nova_database_Nova_DBConnector*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef void (*nova_database_Nova_DBConnector_native1_Nova_connect)(nova_database_Nova_DBConnector*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef void (*nova_database_Nova_DBConnector_native2_Nova_connect)(nova_database_Nova_DBConnector*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, int, nova_Nova_String*, int);
typedef void (*nova_database_Nova_DBConnector_native_Nova_updateError)(nova_database_Nova_DBConnector*);
typedef void (*nova_database_Nova_DBConnector_native_Nova_changeUser)(nova_database_Nova_DBConnector*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);
typedef nova_database_Nova_ResultSet* (*nova_database_Nova_DBConnector_native_Nova_query)(nova_database_Nova_DBConnector*, nova_Nova_String*);
typedef void (*nova_database_Nova_DBConnector_native_Nova_close)(nova_database_Nova_DBConnector*);

typedef struct nova_database_native_DBConnector
{
nova_database_Nova_DBConnector_native0_Nova_connect connect__nova_String__nova_String__nova_String;
nova_database_Nova_DBConnector_native1_Nova_connect connect__nova_String__nova_String__nova_String__nova_String;
nova_database_Nova_DBConnector_native2_Nova_connect connect__nova_String__nova_String__nova_String__nova_String__nova_primitive_number_Int__nova_String__nova_primitive_number_Int;
nova_database_Nova_DBConnector_native_Nova_updateError updateError;
nova_database_Nova_DBConnector_native_Nova_changeUser changeUser;
nova_database_Nova_DBConnector_native_Nova_query query;
nova_database_Nova_DBConnector_native_Nova_close close;
} nova_database_native_DBConnector;

typedef nova_database_Nova_ResultSet* (*nova_database_Nova_ResultSet_native_Nova_construct)(nova_database_Nova_ResultSet*, nova_datastruct_list_Nova_Array*, int);

typedef struct nova_database_native_ResultSet
{
nova_database_Nova_ResultSet_native_Nova_construct ResultSet;
} nova_database_native_ResultSet;

typedef void (*nova_datastruct_Nova_BinaryNode_native_Nova_addChild)(nova_datastruct_Nova_BinaryNode*, nova_datastruct_Nova_Comparable*);
typedef nova_datastruct_Nova_BinaryNode* (*nova_datastruct_Nova_BinaryNode_native0_Nova_construct)(nova_datastruct_Nova_BinaryNode*, nova_datastruct_Nova_Comparable*);

typedef struct nova_datastruct_native_BinaryNode
{
nova_datastruct_Nova_BinaryNode_native_Nova_addChild addChild;
nova_datastruct_Nova_BinaryNode_native0_Nova_construct BinaryNode__nova_datastruct_Comparable;
} nova_datastruct_native_BinaryNode;

typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_addNode)(nova_datastruct_Nova_BinaryTree*, nova_datastruct_Nova_Comparable*);
typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_addNodes)(nova_datastruct_Nova_BinaryTree*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_Nova_BinaryTree* (*nova_datastruct_Nova_BinaryTree_native_Nova_construct)(nova_datastruct_Nova_BinaryTree*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_native_BinaryTree
{
nova_datastruct_Nova_BinaryTree_native_Nova_addNode addNode;
nova_datastruct_Nova_BinaryTree_native_Nova_addNodes addNodes;
nova_datastruct_Nova_BinaryTree_native_Nova_construct BinaryTree;
} nova_datastruct_native_BinaryTree;

typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractString)(nova_datastruct_Nova_Bounds*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractPreString)(nova_datastruct_Nova_Bounds*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_extractPostString)(nova_datastruct_Nova_Bounds*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_Nova_Bounds_native_Nova_trimString)(nova_datastruct_Nova_Bounds*, nova_Nova_String*);
typedef char (*nova_datastruct_Nova_Bounds_native_Nova_invalidate)(nova_datastruct_Nova_Bounds*);
typedef char (*nova_datastruct_Nova_Bounds_native_Nova_equals)(nova_datastruct_Nova_Bounds*, nova_datastruct_Nova_Bounds*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_cloneTo)(nova_datastruct_Nova_Bounds*, nova_datastruct_Nova_Bounds*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_clone)(nova_datastruct_Nova_Bounds*);
typedef nova_datastruct_Nova_Bounds* (*nova_datastruct_Nova_Bounds_native_Nova_construct)(nova_datastruct_Nova_Bounds*, int, int);

typedef struct nova_datastruct_native_Bounds
{
nova_datastruct_Nova_Bounds_native_Nova_extractString extractString;
nova_datastruct_Nova_Bounds_native_Nova_extractPreString extractPreString;
nova_datastruct_Nova_Bounds_native_Nova_extractPostString extractPostString;
nova_datastruct_Nova_Bounds_native_Nova_trimString trimString;
nova_datastruct_Nova_Bounds_native_Nova_invalidate invalidate;
nova_datastruct_Nova_Bounds_native_Nova_equals equals;
nova_datastruct_Nova_Bounds_native_Nova_cloneTo cloneTo;
nova_datastruct_Nova_Bounds_native_Nova_clone clone;
nova_datastruct_Nova_Bounds_native_Nova_construct Bounds;
} nova_datastruct_native_Bounds;

typedef int (*nova_datastruct_Nova_Comparable_native1_Nova_compareTo)(nova_datastruct_Nova_Comparable*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Comparable
{
nova_datastruct_Nova_Comparable_native1_Nova_compareTo compareTo__nova_Object;
} nova_datastruct_native_Comparable;

typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_add)(nova_datastruct_Nova_HashMap*, nova_operators_Nova_EqualsOperator*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_remove)(nova_datastruct_Nova_HashMap*, nova_operators_Nova_EqualsOperator*);
typedef char (*nova_datastruct_Nova_HashMap_native_Nova_containsKey)(nova_datastruct_Nova_HashMap*, nova_operators_Nova_EqualsOperator*);
typedef nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMap_native_Nova_clone)(nova_datastruct_Nova_HashMap*);
typedef nova_datastruct_Nova_ImmutableHashMap* (*nova_datastruct_Nova_HashMap_native_Nova_toImmutable)(nova_datastruct_Nova_HashMap*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_get)(nova_datastruct_Nova_HashMap*, nova_operators_Nova_EqualsOperator*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_native_Nova_set)(nova_datastruct_Nova_HashMap*, nova_operators_Nova_EqualsOperator*, nova_Nova_Object*);
typedef nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMap_native0_Nova_construct)(nova_datastruct_Nova_HashMap*, int, int);
typedef nova_datastruct_Nova_HashMap* (*nova_datastruct_Nova_HashMap_native1_Nova_construct)(nova_datastruct_Nova_HashMap*, nova_datastruct_Nova_HashMap*, int, int);

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
typedef nova_datastruct_Nova_HashMapIterator* (*nova_datastruct_Nova_HashMapIterator_native_Nova_reset)(nova_datastruct_Nova_HashMapIterator*);
typedef nova_datastruct_Nova_HashMapIterator* (*nova_datastruct_Nova_HashMapIterator_native_Nova_construct)(nova_datastruct_Nova_HashMapIterator*, nova_datastruct_Nova_HashMap*);

typedef struct nova_datastruct_native_HashMapIterator
{
nova_datastruct_Nova_HashMapIterator_native_Nova_reset reset;
nova_datastruct_Nova_HashMapIterator_native_Nova_construct HashMapIterator;
} nova_datastruct_native_HashMapIterator;

typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native_Nova_add)(nova_datastruct_Nova_HashSet*, nova_operators_Nova_EqualsOperator*);
typedef nova_operators_Nova_EqualsOperator* (*nova_datastruct_Nova_HashSet_native_Nova_get)(nova_datastruct_Nova_HashSet*, nova_operators_Nova_EqualsOperator*);
typedef nova_operators_Nova_EqualsOperator* (*nova_datastruct_Nova_HashSet_native_Nova_remove)(nova_datastruct_Nova_HashSet*, nova_operators_Nova_EqualsOperator*);
typedef nova_datastruct_Nova_HashSet* (*nova_datastruct_Nova_HashSet_native_Nova_construct)(nova_datastruct_Nova_HashSet*, int, int);

typedef struct nova_datastruct_native_HashSet
{
nova_datastruct_Nova_HashSet_native_Nova_add add;
nova_datastruct_Nova_HashSet_native_Nova_get get;
nova_datastruct_Nova_HashSet_native_Nova_remove remove;
nova_datastruct_Nova_HashSet_native_Nova_construct HashSet;
} nova_datastruct_native_HashSet;

typedef char (*nova_datastruct_Nova_ImmutableHashMap_native_Nova_containsKey)(nova_datastruct_Nova_ImmutableHashMap*, nova_operators_Nova_EqualsOperator*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_native_Nova_get)(nova_datastruct_Nova_ImmutableHashMap*, nova_operators_Nova_EqualsOperator*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_native_Nova_set)(nova_datastruct_Nova_ImmutableHashMap*, nova_operators_Nova_EqualsOperator*, nova_Nova_Object*);
typedef nova_datastruct_Nova_ImmutableHashMap* (*nova_datastruct_Nova_ImmutableHashMap_native0_Nova_construct)(nova_datastruct_Nova_ImmutableHashMap*, nova_datastruct_Nova_HashMap*);

typedef struct nova_datastruct_native_ImmutableHashMap
{
nova_datastruct_Nova_ImmutableHashMap_native_Nova_containsKey containsKey;
nova_datastruct_Nova_ImmutableHashMap_native_Nova_get get;
nova_datastruct_Nova_ImmutableHashMap_native_Nova_set set;
nova_datastruct_Nova_ImmutableHashMap_native0_Nova_construct ImmutableHashMap__nova_datastruct_HashMap;
} nova_datastruct_native_ImmutableHashMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_preorder)(nova_datastruct_Nova_Node*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_inorder)(nova_datastruct_Nova_Node*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_postorder)(nova_datastruct_Nova_Node*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Node_native0_Nova_levelorder)(nova_datastruct_Nova_Node*);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_get)(nova_datastruct_Nova_Node*, int);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_set)(nova_datastruct_Nova_Node*, int, nova_datastruct_Nova_Node*);
typedef nova_datastruct_Nova_Node* (*nova_datastruct_Nova_Node_native_Nova_construct)(nova_datastruct_Nova_Node*, nova_Nova_Object*, int);

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

typedef nova_datastruct_Nova_Pair* (*nova_datastruct_Nova_Pair_native_Nova_construct)(nova_datastruct_Nova_Pair*, nova_Nova_Object*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Pair
{
nova_datastruct_Nova_Pair_native_Nova_construct Pair;
} nova_datastruct_native_Pair;

typedef nova_operators_Nova_EqualsOperator* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_getKey)(nova_datastruct_Nova_ReversibleHashMap*, nova_operators_Nova_EqualsOperator*);
typedef nova_operators_Nova_EqualsOperator* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_getValue)(nova_datastruct_Nova_ReversibleHashMap*, nova_operators_Nova_EqualsOperator*);
typedef nova_datastruct_Nova_ReversibleHashMap* (*nova_datastruct_Nova_ReversibleHashMap_native_Nova_construct)(nova_datastruct_Nova_ReversibleHashMap*);

typedef struct nova_datastruct_native_ReversibleHashMap
{
nova_datastruct_Nova_ReversibleHashMap_native_Nova_getKey getKey;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_getValue getValue;
nova_datastruct_Nova_ReversibleHashMap_native_Nova_construct ReversibleHashMap;
} nova_datastruct_native_ReversibleHashMap;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_preorder)(nova_datastruct_Nova_Tree*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_inorder)(nova_datastruct_Nova_Tree*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_postorder)(nova_datastruct_Nova_Tree*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_Nova_Tree_native_Nova_levelorder)(nova_datastruct_Nova_Tree*);
typedef nova_datastruct_Nova_Tree* (*nova_datastruct_Nova_Tree_native_Nova_construct)(nova_datastruct_Nova_Tree*, nova_datastruct_Nova_Node*);

typedef struct nova_datastruct_native_Tree
{
nova_datastruct_Nova_Tree_native_Nova_preorder preorder;
nova_datastruct_Nova_Tree_native_Nova_inorder inorder;
nova_datastruct_Nova_Tree_native_Nova_postorder postorder;
nova_datastruct_Nova_Tree_native_Nova_levelorder levelorder;
nova_datastruct_Nova_Tree_native_Nova_construct Tree;
} nova_datastruct_native_Tree;

typedef nova_datastruct_Nova_Tuple* (*nova_datastruct_Nova_Tuple_native_Nova_construct)(nova_datastruct_Nova_Tuple*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_native_Tuple
{
nova_datastruct_Nova_Tuple_native_Nova_construct Tuple;
} nova_datastruct_native_Tuple;

typedef nova_datastruct_Nova_Tuple2* (*nova_datastruct_Nova_Tuple2_native_Nova_construct)(nova_datastruct_Nova_Tuple2*, nova_Nova_Object*, nova_Nova_Object*);

typedef struct nova_datastruct_native_Tuple2
{
nova_datastruct_Nova_Tuple2_native_Nova_construct Tuple2;
} nova_datastruct_native_Tuple2;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_fillRemaining)(nova_datastruct_list_Nova_Array*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_addAll)(nova_datastruct_list_Nova_Array*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_add)(nova_datastruct_list_Nova_Array*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_add)(nova_datastruct_list_Nova_Array*, int, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native0_Nova_remove)(nova_datastruct_list_Nova_Array*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native1_Nova_remove)(nova_datastruct_list_Nova_Array*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native_Nova_replace)(nova_datastruct_list_Nova_Array*, nova_Nova_Object*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_swap)(nova_datastruct_list_Nova_Array*, int, int);
typedef nova_Nova_Object** (*nova_datastruct_list_Nova_Array_native_Nova_cloneData)(nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native_Nova_clone)(nova_datastruct_list_Nova_Array*);
typedef long_long (*nova_datastruct_list_Nova_Array_native_Nova_sumSize)(nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_mergeSort)(nova_datastruct_list_Nova_Array*, nova_datastruct_list_Nova_Array_closure1169_Nova_comparator nova_datastruct_list_Nova_Array_Nova_comparator, void* nova_datastruct_list_Nova_Array_ref_Nova_comparator, void* nova_datastruct_list_Nova_Array_context_Nova_comparator);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_quickSort)(nova_datastruct_list_Nova_Array*, nova_datastruct_list_Nova_Array_closure1174_Nova_comparator nova_datastruct_list_Nova_Array_Nova_comparator, void* nova_datastruct_list_Nova_Array_ref_Nova_comparator, void* nova_datastruct_list_Nova_Array_context_Nova_comparator);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_mergeSort)(nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_quickSort)(nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native0_Nova_sort)(nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_sort)(nova_datastruct_list_Nova_Array*, nova_datastruct_list_Nova_Array_closure1185_Nova_comparator nova_datastruct_list_Nova_Array_Nova_comparator, void* nova_datastruct_list_Nova_Array_ref_Nova_comparator, void* nova_datastruct_list_Nova_Array_context_Nova_comparator);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_Array_native_Nova_toImmutable)(nova_datastruct_list_Nova_Array*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native_Nova_get)(nova_datastruct_list_Nova_Array*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native0_Nova_set)(nova_datastruct_list_Nova_Array*, int, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_native_int_int_E1_Nova_set)(nova_datastruct_list_Nova_Array*, int, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native1_Nova_construct)(nova_datastruct_list_Nova_Array*, int, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_native2_Nova_construct)(nova_datastruct_list_Nova_Array*, nova_Nova_Object**, int);

typedef struct nova_datastruct_list_native_Array
{
nova_datastruct_list_Nova_Array_native_Nova_fillRemaining fillRemaining;
nova_datastruct_list_Nova_Array_native_Nova_addAll addAll;
nova_datastruct_list_Nova_Array_native_Nova_addUnique addUnique;
nova_datastruct_list_Nova_Array_native0_Nova_add add__nova_Object;
nova_datastruct_list_Nova_Array_native1_Nova_add add__nova_primitive_number_Int__nova_Object;
nova_datastruct_list_Nova_Array_native0_Nova_remove remove__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native1_Nova_remove remove__nova_Object;
nova_datastruct_list_Nova_Array_native_Nova_replace replace;
nova_datastruct_list_Nova_Array_native_Nova_swap swap;
nova_datastruct_list_Nova_Array_native_Nova_cloneData cloneData;
nova_datastruct_list_Nova_Array_native_Nova_clone clone;
nova_datastruct_list_Nova_Array_native_Nova_sumSize sumSize;
nova_datastruct_list_Nova_Array_native0_Nova_mergeSort mergeSort__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native0_Nova_quickSort quickSort__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native1_Nova_mergeSort mergeSort;
nova_datastruct_list_Nova_Array_native1_Nova_quickSort quickSort;
nova_datastruct_list_Nova_Array_native0_Nova_sort sort;
nova_datastruct_list_Nova_Array_native1_Nova_sort sort__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native_Nova_toImmutable toImmutable;
nova_datastruct_list_Nova_Array_native_Nova_get get;
nova_datastruct_list_Nova_Array_native0_Nova_set set__nova_primitive_number_Int__nova_Object;
nova_datastruct_list_Nova_Array_native1_Nova_construct Array__nova_primitive_number_Int__nova_primitive_number_Int;
nova_datastruct_list_Nova_Array_native2_Nova_construct Array__Array1d_nova_Object__nova_primitive_number_Int;
} nova_datastruct_list_native_Array;

typedef nova_datastruct_list_Nova_ArrayIterator* (*nova_datastruct_list_Nova_ArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ArrayIterator*);
typedef nova_datastruct_list_Nova_ArrayIterator* (*nova_datastruct_list_Nova_ArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ArrayIterator*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_ArrayIterator
{
nova_datastruct_list_Nova_ArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ArrayIterator_native_Nova_construct ArrayIterator;
} nova_datastruct_list_native_ArrayIterator;


typedef struct nova_datastruct_list_native_CharArray
{
} nova_datastruct_list_native_CharArray;

typedef nova_datastruct_list_Nova_CharArrayIterator* (*nova_datastruct_list_Nova_CharArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_CharArrayIterator*);
typedef nova_datastruct_list_Nova_CharArrayIterator* (*nova_datastruct_list_Nova_CharArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_CharArrayIterator*, nova_datastruct_list_Nova_CharArray*, int);

typedef struct nova_datastruct_list_native_CharArrayIterator
{
nova_datastruct_list_Nova_CharArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_CharArrayIterator_native_Nova_construct CharArrayIterator;
} nova_datastruct_list_native_CharArrayIterator;


typedef struct nova_datastruct_list_native_CompiledList
{
} nova_datastruct_list_native_CompiledList;


typedef struct nova_datastruct_list_native_DoubleArray
{
} nova_datastruct_list_native_DoubleArray;

typedef nova_datastruct_list_Nova_DoubleArrayIterator* (*nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_DoubleArrayIterator*);
typedef nova_datastruct_list_Nova_DoubleArrayIterator* (*nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_DoubleArrayIterator*, nova_datastruct_list_Nova_DoubleArray*);

typedef struct nova_datastruct_list_native_DoubleArrayIterator
{
nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_DoubleArrayIterator_native_Nova_construct DoubleArrayIterator;
} nova_datastruct_list_native_DoubleArrayIterator;


typedef struct nova_datastruct_list_native_EmptyStackException
{
} nova_datastruct_list_native_EmptyStackException;

typedef int (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_indexOf)(nova_datastruct_list_Nova_ImmutableArray*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native0_Nova_add)(nova_datastruct_list_Nova_ImmutableArray*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_add)(nova_datastruct_list_Nova_ImmutableArray*, int, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native0_Nova_remove)(nova_datastruct_list_Nova_ImmutableArray*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_remove)(nova_datastruct_list_Nova_ImmutableArray*, int);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_toMutable)(nova_datastruct_list_Nova_ImmutableArray*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_get)(nova_datastruct_list_Nova_ImmutableArray*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_native_Nova_set)(nova_datastruct_list_Nova_ImmutableArray*, int, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native1_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_datastruct_list_Nova_ImmutableArray_native2_Nova_construct)(nova_datastruct_list_Nova_ImmutableArray*, nova_Nova_Object**, int);

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
nova_datastruct_list_Nova_ImmutableArray_native1_Nova_construct ImmutableArray__nova_datastruct_list_Array;
nova_datastruct_list_Nova_ImmutableArray_native2_Nova_construct ImmutableArray__Array1d_nova_Object__nova_primitive_number_Int;
} nova_datastruct_list_native_ImmutableArray;

typedef nova_datastruct_list_Nova_ImmutableArrayIterator* (*nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_ImmutableArrayIterator*);
typedef nova_datastruct_list_Nova_ImmutableArrayIterator* (*nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_ImmutableArrayIterator*, nova_datastruct_list_Nova_ImmutableArray*);

typedef struct nova_datastruct_list_native_ImmutableArrayIterator
{
nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_ImmutableArrayIterator_native_Nova_construct ImmutableArrayIterator;
} nova_datastruct_list_native_ImmutableArrayIterator;


typedef struct nova_datastruct_list_native_ImmutableCharArray
{
} nova_datastruct_list_native_ImmutableCharArray;


typedef struct nova_datastruct_list_native_ImmutableCharArrayIterator
{
} nova_datastruct_list_native_ImmutableCharArrayIterator;


typedef struct nova_datastruct_list_native_IntArray
{
} nova_datastruct_list_native_IntArray;

typedef nova_datastruct_list_Nova_IntArrayIterator* (*nova_datastruct_list_Nova_IntArrayIterator_native_Nova_reset)(nova_datastruct_list_Nova_IntArrayIterator*);
typedef nova_datastruct_list_Nova_IntArrayIterator* (*nova_datastruct_list_Nova_IntArrayIterator_native_Nova_construct)(nova_datastruct_list_Nova_IntArrayIterator*, nova_datastruct_list_Nova_IntArray*);

typedef struct nova_datastruct_list_native_IntArrayIterator
{
nova_datastruct_list_Nova_IntArrayIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_IntArrayIterator_native_Nova_construct IntArrayIterator;
} nova_datastruct_list_native_IntArrayIterator;

typedef nova_datastruct_list_Nova_IntRange* (*nova_datastruct_list_Nova_IntRange_native1_Nova_construct)(nova_datastruct_list_Nova_IntRange*, int, int);

typedef struct nova_datastruct_list_native_IntRange
{
nova_datastruct_list_Nova_IntRange_native1_Nova_construct IntRange__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_datastruct_list_native_IntRange;

typedef nova_datastruct_list_Nova_IntRangeIterator* (*nova_datastruct_list_Nova_IntRangeIterator_native_Nova_reset)(nova_datastruct_list_Nova_IntRangeIterator*);
typedef nova_datastruct_list_Nova_IntRangeIterator* (*nova_datastruct_list_Nova_IntRangeIterator_native_Nova_construct)(nova_datastruct_list_Nova_IntRangeIterator*, nova_datastruct_list_Nova_IntRange*);

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

typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_addAll)(nova_datastruct_list_Nova_LinkedList*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_add)(nova_datastruct_list_Nova_LinkedList*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_LinkedList_native_Nova_remove)(nova_datastruct_list_Nova_LinkedList*, nova_Nova_Object*);

typedef struct nova_datastruct_list_native_LinkedList
{
nova_datastruct_list_Nova_LinkedList_native_Nova_addAll addAll;
nova_datastruct_list_Nova_LinkedList_native_Nova_add add;
nova_datastruct_list_Nova_LinkedList_native_Nova_remove remove;
} nova_datastruct_list_native_LinkedList;

typedef nova_datastruct_list_Nova_LinkedListIterator* (*nova_datastruct_list_Nova_LinkedListIterator_native_Nova_reset)(nova_datastruct_list_Nova_LinkedListIterator*);
typedef nova_datastruct_list_Nova_LinkedListIterator* (*nova_datastruct_list_Nova_LinkedListIterator_native_Nova_construct)(nova_datastruct_list_Nova_LinkedListIterator*, nova_datastruct_list_Nova_LinkedList*);

typedef struct nova_datastruct_list_native_LinkedListIterator
{
nova_datastruct_list_Nova_LinkedListIterator_native_Nova_reset reset;
nova_datastruct_list_Nova_LinkedListIterator_native_Nova_construct LinkedListIterator;
} nova_datastruct_list_native_LinkedListIterator;

typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_native_Nova_toArray)(nova_datastruct_list_Nova_List*);
typedef char (*nova_datastruct_list_Nova_List_native1_Nova_contains)(nova_datastruct_list_Nova_List*, nova_Nova_Object*);
typedef char (*nova_datastruct_list_Nova_List_native_Nova_containsAny)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native1_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1333_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native1_Nova_map)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1334_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* nova_datastruct_list_Nova_List_context_Nova_mapFunc);
typedef char (*nova_datastruct_list_Nova_List_native1_Nova_any)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1335_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* nova_datastruct_list_Nova_List_context_Nova_anyFunc);
typedef char (*nova_datastruct_list_Nova_List_native1_Nova_all)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1336_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* nova_datastruct_list_Nova_List_context_Nova_allFunc, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native1_Nova_filter)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1337_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* nova_datastruct_list_Nova_List_context_Nova_filterFunc);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_filterNull)(nova_datastruct_list_Nova_List*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_filterEmpty)(nova_datastruct_list_Nova_List*);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_take)(nova_datastruct_list_Nova_List*, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_takeLast)(nova_datastruct_list_Nova_List*, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_skipLast)(nova_datastruct_list_Nova_List*, int);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_skip)(nova_datastruct_list_Nova_List*, int);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstOr)(nova_datastruct_list_Nova_List*, nova_Nova_Object*, nova_datastruct_list_Nova_List_closure1338_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstOrThrow)(nova_datastruct_list_Nova_List*, nova_exception_Nova_Exception*, nova_datastruct_list_Nova_List_closure1339_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native1_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1340_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_firstNonNull)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1341_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native0_Nova_zip)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1342_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* nova_datastruct_list_Nova_List_context_Nova_zipper);
typedef long_long (*nova_datastruct_list_Nova_List_native0_Nova_sum)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1343_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef double (*nova_datastruct_list_Nova_List_native1_Nova_sum)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1344_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef long_long (*nova_datastruct_list_Nova_List_native_Nova_min)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1345_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef long_long (*nova_datastruct_list_Nova_List_native_Nova_max)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1346_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func);
typedef nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_native_Nova_reverse)(nova_datastruct_list_Nova_List*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_native_Nova_reduce)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Nova_List_closure1347_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* nova_datastruct_list_Nova_List_context_Nova_func, nova_Nova_Object*);
typedef nova_Nova_String* (*nova_datastruct_list_Nova_List_native_Nova_join)(nova_datastruct_list_Nova_List*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_list_Nova_List_native_Nova_stitch)(nova_datastruct_list_Nova_List*, nova_Nova_String*);
typedef nova_Nova_String* (*nova_datastruct_list_Nova_List_native_Nova_toEnglish)(nova_datastruct_list_Nova_List*, nova_Nova_String*, int);
typedef nova_datastruct_list_Int_Nova_List1Int* (*nova_datastruct_list_Nova_List_native_Array1Byte_int_List1Int1_Nova_zip)(nova_datastruct_list_Nova_List*, nova_datastruct_list_Byte_Nova_Array1Byte*, nova_datastruct_list_Nova_List_closure344_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* nova_datastruct_list_Nova_List_context_Nova_zipper);

typedef struct nova_datastruct_list_native_List
{
nova_datastruct_list_Nova_List_native_Nova_toArray toArray;
nova_datastruct_list_Nova_List_native1_Nova_contains contains__nova_Object;
nova_datastruct_list_Nova_List_native_Nova_containsAny containsAny;
nova_datastruct_list_Nova_List_native1_Nova_forEach forEach__void;
nova_datastruct_list_Nova_List_native1_Nova_map map__nova_Object;
nova_datastruct_list_Nova_List_native1_Nova_any any__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native1_Nova_all all__nova_primitive_Bool__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native1_Nova_filter filter__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native_Nova_filterNull filterNull;
nova_datastruct_list_Nova_List_native_Nova_filterEmpty filterEmpty;
nova_datastruct_list_Nova_List_native_Nova_take take;
nova_datastruct_list_Nova_List_native_Nova_takeLast takeLast;
nova_datastruct_list_Nova_List_native_Nova_skipLast skipLast;
nova_datastruct_list_Nova_List_native_Nova_skip skip;
nova_datastruct_list_Nova_List_native_Nova_firstOr firstOr;
nova_datastruct_list_Nova_List_native_Nova_firstOrThrow firstOrThrow;
nova_datastruct_list_Nova_List_native1_Nova_firstWhere firstWhere__nova_primitive_Bool;
nova_datastruct_list_Nova_List_native_Nova_firstNonNull firstNonNull;
nova_datastruct_list_Nova_List_native0_Nova_zip zip__nova_datastruct_list_List__nova_Object;
nova_datastruct_list_Nova_List_native0_Nova_sum sum__nova_primitive_number_Long;
nova_datastruct_list_Nova_List_native1_Nova_sum sum__nova_primitive_number_Double;
nova_datastruct_list_Nova_List_native_Nova_min min;
nova_datastruct_list_Nova_List_native_Nova_max max;
nova_datastruct_list_Nova_List_native_Nova_reverse reverse;
nova_datastruct_list_Nova_List_native_Nova_reduce reduce;
nova_datastruct_list_Nova_List_native_Nova_join join;
nova_datastruct_list_Nova_List_native_Nova_stitch stitch;
nova_datastruct_list_Nova_List_native_Nova_toEnglish toEnglish;
} nova_datastruct_list_native_List;

typedef nova_datastruct_list_Nova_ListNode* (*nova_datastruct_list_Nova_ListNode_native_Nova_clone)(nova_datastruct_list_Nova_ListNode*);
typedef nova_datastruct_list_Nova_ListNode* (*nova_datastruct_list_Nova_ListNode_native_Nova_construct)(nova_datastruct_list_Nova_ListNode*, nova_Nova_Object*, nova_datastruct_list_Nova_ListNode*);

typedef struct nova_datastruct_list_native_ListNode
{
nova_datastruct_list_Nova_ListNode_native_Nova_clone clone;
nova_datastruct_list_Nova_ListNode_native_Nova_construct ListNode;
} nova_datastruct_list_native_ListNode;


typedef struct nova_datastruct_list_native_NoSuchElementException
{
} nova_datastruct_list_native_NoSuchElementException;

typedef char (*nova_datastruct_list_Nova_OrderedList_native_Nova_findIndex)(nova_datastruct_list_Nova_OrderedList*, nova_datastruct_list_Nova_OrderedList_closure1348_Nova_condition nova_datastruct_list_Nova_OrderedList_Nova_condition, void* nova_datastruct_list_Nova_OrderedList_ref_Nova_condition, void* nova_datastruct_list_Nova_OrderedList_context_Nova_condition, int);
typedef int (*nova_datastruct_list_Nova_OrderedList_native_Nova_indexOf)(nova_datastruct_list_Nova_OrderedList*, nova_Nova_Object*, int);

typedef struct nova_datastruct_list_native_OrderedList
{
nova_datastruct_list_Nova_OrderedList_native_Nova_findIndex findIndex;
nova_datastruct_list_Nova_OrderedList_native_Nova_indexOf indexOf;
} nova_datastruct_list_native_OrderedList;

typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Queue_native_Nova_dequeue)(nova_datastruct_list_Nova_Queue*);
typedef nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Queue_native_Nova_enqueue)(nova_datastruct_list_Nova_Queue*, nova_Nova_Object*);
typedef nova_datastruct_list_Nova_Queue* (*nova_datastruct_list_Nova_Queue_native1_Nova_construct)(nova_datastruct_list_Nova_Queue*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_Queue
{
nova_datastruct_list_Nova_Queue_native_Nova_dequeue dequeue;
nova_datastruct_list_Nova_Queue_native_Nova_enqueue enqueue;
nova_datastruct_list_Nova_Queue_native1_Nova_construct Queue__nova_datastruct_list_Array;
} nova_datastruct_list_native_Queue;

typedef void (*nova_datastruct_list_Nova_Stack_native_Nova_push)(nova_datastruct_list_Nova_Stack*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Stack_native_Nova_pop)(nova_datastruct_list_Nova_Stack*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Stack_native_Nova_peek)(nova_datastruct_list_Nova_Stack*);
typedef nova_datastruct_list_Nova_Stack* (*nova_datastruct_list_Nova_Stack_native1_Nova_construct)(nova_datastruct_list_Nova_Stack*, nova_datastruct_list_Nova_Array*);

typedef struct nova_datastruct_list_native_Stack
{
nova_datastruct_list_Nova_Stack_native_Nova_push push;
nova_datastruct_list_Nova_Stack_native_Nova_pop pop;
nova_datastruct_list_Nova_Stack_native_Nova_peek peek;
nova_datastruct_list_Nova_Stack_native1_Nova_construct Stack__nova_datastruct_list_Array;
} nova_datastruct_list_native_Stack;

typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native_Nova_reverse)(nova_datastruct_list_Nova_StringCharArray*);
typedef nova_datastruct_list_Char_Nova_Array1Char* (*nova_datastruct_list_Nova_StringCharArray_native_Nova_toCharArray)(nova_datastruct_list_Nova_StringCharArray*);
typedef char (*nova_datastruct_list_Nova_StringCharArray_native_Nova_get)(nova_datastruct_list_Nova_StringCharArray*, int);
typedef char (*nova_datastruct_list_Nova_StringCharArray_native_Nova_set)(nova_datastruct_list_Nova_StringCharArray*, int, char);
typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native0_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, nova_datastruct_list_Char_Nova_Array1Char*);
typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native1_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, int);
typedef nova_datastruct_list_Nova_StringCharArray* (*nova_datastruct_list_Nova_StringCharArray_native2_Nova_construct)(nova_datastruct_list_Nova_StringCharArray*, char*, int);

typedef struct nova_datastruct_list_native_StringCharArray
{
nova_datastruct_list_Nova_StringCharArray_native_Nova_reverse reverse;
nova_datastruct_list_Nova_StringCharArray_native_Nova_toCharArray toCharArray;
nova_datastruct_list_Nova_StringCharArray_native_Nova_get get;
nova_datastruct_list_Nova_StringCharArray_native_Nova_set set;
nova_datastruct_list_Nova_StringCharArray_native0_Nova_construct StringCharArray__nova_datastruct_list_Char_Array1Char;
nova_datastruct_list_Nova_StringCharArray_native1_Nova_construct StringCharArray__nova_primitive_number_Int;
nova_datastruct_list_Nova_StringCharArray_native2_Nova_construct StringCharArray__Array1d_nova_primitive_number_Char__nova_primitive_number_Int;
} nova_datastruct_list_native_StringCharArray;


typedef struct nova_datastruct_list_native_SubstringCharArray
{
} nova_datastruct_list_native_SubstringCharArray;


typedef struct nova_exception_native_Backtraces
{
} nova_exception_native_Backtraces;

typedef nova_exception_Nova_CaughtException* (*nova_exception_Nova_CaughtException_native_Nova_construct)(nova_exception_Nova_CaughtException*, nova_meta_Nova_Class*, int);

typedef struct nova_exception_native_CaughtException
{
nova_exception_Nova_CaughtException_native_Nova_construct CaughtException;
} nova_exception_native_CaughtException;

typedef nova_exception_Nova_DivideByZeroException* (*nova_exception_Nova_DivideByZeroException_native_Nova_construct)(nova_exception_Nova_DivideByZeroException*);

typedef struct nova_exception_native_DivideByZeroException
{
nova_exception_Nova_DivideByZeroException_native_Nova_construct DivideByZeroException;
} nova_exception_native_DivideByZeroException;

typedef void (*nova_exception_Nova_Exception_native_Nova_onThrown)(nova_exception_Nova_Exception*, char);
typedef char (*nova_exception_Nova_Exception_native_static_Nova_catchType)(nova_exception_Nova_Exception*, nova_exception_Nova_Exception_closure1349_Nova_func nova_exception_Nova_Exception_Nova_func, void* nova_exception_Nova_Exception_ref_Nova_func, void* nova_exception_Nova_Exception_context_Nova_func, nova_meta_Nova_Class*, int, int);
typedef nova_exception_Nova_Exception* (*nova_exception_Nova_Exception_native_Nova_construct)(nova_exception_Nova_Exception*, nova_Nova_String*);

typedef struct nova_exception_native_Exception
{
nova_exception_Nova_Exception_native_Nova_onThrown onThrown;
nova_exception_Nova_Exception_native_Nova_construct Exception;
} nova_exception_native_Exception;

typedef void (*nova_exception_Nova_ExceptionData_native_Nova_addCaught)(nova_exception_Nova_ExceptionData*, nova_meta_Nova_Class*, int);
typedef char (*nova_exception_Nova_ExceptionData_native_Nova_throwException)(nova_exception_Nova_ExceptionData*, nova_exception_Nova_ExceptionData**, nova_exception_Nova_Exception*, char);
typedef nova_exception_Nova_ExceptionData* (*nova_exception_Nova_ExceptionData_native_Nova_construct)(nova_exception_Nova_ExceptionData*, buffer*);

typedef struct nova_exception_native_ExceptionData
{
nova_exception_Nova_ExceptionData_native_Nova_addCaught addCaught;
nova_exception_Nova_ExceptionData_native_Nova_throwException throwException;
nova_exception_Nova_ExceptionData_native_Nova_construct ExceptionData;
} nova_exception_native_ExceptionData;


typedef struct nova_exception_native_InvalidArgumentException
{
} nova_exception_native_InvalidArgumentException;


typedef struct nova_exception_native_InvalidOperationException
{
} nova_exception_native_InvalidOperationException;


typedef struct nova_exception_native_NullAccessException
{
} nova_exception_native_NullAccessException;

typedef void (*nova_exception_Nova_StackTrace_native_Nova_trace)(nova_exception_Nova_StackTrace*);
typedef void (*nova_exception_Nova_StackTrace_native_static_Nova_trace)(nova_exception_Nova_StackTrace*);
typedef void (*nova_exception_Nova_StackTrace_native_static_Nova_callingTrace)(nova_exception_Nova_StackTrace*, int);
typedef nova_exception_Nova_StackTrace* (*nova_exception_Nova_StackTrace_native1_Nova_construct)(nova_exception_Nova_StackTrace*, NOVA_CODE_CONTEXT*);

typedef struct nova_exception_native_StackTrace
{
nova_exception_Nova_StackTrace_native_Nova_trace trace;
nova_exception_Nova_StackTrace_native1_Nova_construct StackTrace__NOVA_CODE_CONTEXT;
} nova_exception_native_StackTrace;


typedef struct nova_exception_native_UnimplementedForTargetException
{
} nova_exception_native_UnimplementedForTargetException;


typedef struct nova_exception_native_UnimplementedOperationException
{
} nova_exception_native_UnimplementedOperationException;

typedef void (*nova_gc_Nova_GC_native_static_Nova_init)(nova_gc_Nova_GC*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_collect)(nova_gc_Nova_GC*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_enableIncremental)(nova_gc_Nova_GC*);
typedef void (*nova_gc_Nova_GC_native_static_Nova_dump)(nova_gc_Nova_GC*);

typedef struct nova_gc_native_GC
{
} nova_gc_native_GC;


typedef struct nova_io_native_ClosedStreamException
{
} nova_io_native_ClosedStreamException;

typedef void (*nova_io_Nova_Console_native_static_Nova_log)(nova_io_Nova_Console*, nova_Nova_Object*);
typedef void (*nova_io_Nova_Console_native0_static_Nova_writeLine)(nova_io_Nova_Console*);
typedef void (*nova_io_Nova_Console_native1_static_Nova_writeLine)(nova_io_Nova_Console*, nova_Nova_String*);
typedef void (*nova_io_Nova_Console_native2_static_Nova_writeLine)(nova_io_Nova_Console*, nova_Nova_Object*);
typedef void (*nova_io_Nova_Console_native3_static_Nova_writeLine)(nova_io_Nova_Console*, double);
typedef void (*nova_io_Nova_Console_native4_static_Nova_writeLine)(nova_io_Nova_Console*, float);
typedef void (*nova_io_Nova_Console_native5_static_Nova_writeLine)(nova_io_Nova_Console*, long_long);
typedef void (*nova_io_Nova_Console_native6_static_Nova_writeLine)(nova_io_Nova_Console*, int);
typedef void (*nova_io_Nova_Console_native7_static_Nova_writeLine)(nova_io_Nova_Console*, short);
typedef void (*nova_io_Nova_Console_native8_static_Nova_writeLine)(nova_io_Nova_Console*, char);
typedef void (*nova_io_Nova_Console_native9_static_Nova_writeLine)(nova_io_Nova_Console*, char);
typedef void (*nova_io_Nova_Console_native0_static_Nova_write)(nova_io_Nova_Console*, nova_Nova_String*);
typedef void (*nova_io_Nova_Console_native1_static_Nova_write)(nova_io_Nova_Console*, nova_Nova_Object*);
typedef void (*nova_io_Nova_Console_native2_static_Nova_write)(nova_io_Nova_Console*, double);
typedef void (*nova_io_Nova_Console_native3_static_Nova_write)(nova_io_Nova_Console*, float);
typedef void (*nova_io_Nova_Console_native4_static_Nova_write)(nova_io_Nova_Console*, long_long);
typedef void (*nova_io_Nova_Console_native5_static_Nova_write)(nova_io_Nova_Console*, int);
typedef void (*nova_io_Nova_Console_native6_static_Nova_write)(nova_io_Nova_Console*, short);
typedef void (*nova_io_Nova_Console_native7_static_Nova_write)(nova_io_Nova_Console*, char);
typedef void (*nova_io_Nova_Console_native8_static_Nova_write)(nova_io_Nova_Console*, char);
typedef int (*nova_io_Nova_Console_native_static_Nova_readInt)(nova_io_Nova_Console*);
typedef double (*nova_io_Nova_Console_native_static_Nova_readDouble)(nova_io_Nova_Console*);
typedef char (*nova_io_Nova_Console_native_static_Nova_readChar)(nova_io_Nova_Console*);
typedef nova_Nova_String* (*nova_io_Nova_Console_native_static_Nova_readLine)(nova_io_Nova_Console*);
typedef nova_Nova_String* (*nova_io_Nova_Console_native_static_Nova_readPassword)(nova_io_Nova_Console*);
typedef void (*nova_io_Nova_Console_native_static_Nova_setEcho)(nova_io_Nova_Console*, char);
typedef void (*nova_io_Nova_Console_native_static_Nova_clearScreen)(nova_io_Nova_Console*);
typedef void (*nova_io_Nova_Console_native_static_Nova_waitForEnter)(nova_io_Nova_Console*);

typedef struct nova_io_native_Console
{
} nova_io_native_Console;


typedef struct nova_io_native_Curl
{
} nova_io_native_Curl;


typedef struct nova_io_native_EmptyOutputStream
{
} nova_io_native_EmptyOutputStream;

typedef nova_io_Nova_FancyOutputStream* (*nova_io_Nova_FancyOutputStream_native0_Nova_writeHeader)(nova_io_Nova_FancyOutputStream*, nova_Nova_Object*);
typedef nova_io_Nova_FancyOutputStream* (*nova_io_Nova_FancyOutputStream_native1_Nova_writeHeader)(nova_io_Nova_FancyOutputStream*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*, int);
typedef nova_io_Nova_FancyOutputStream* (*nova_io_Nova_FancyOutputStream_native_Nova_writeSeparator)(nova_io_Nova_FancyOutputStream*, nova_Nova_String*);
typedef nova_io_Nova_FancyOutputStream* (*nova_io_Nova_FancyOutputStream_native_Nova_construct)(nova_io_Nova_FancyOutputStream*, nova_io_Nova_OutputStream*, int, nova_Nova_String*);

typedef struct nova_io_native_FancyOutputStream
{
nova_io_Nova_FancyOutputStream_native0_Nova_writeHeader writeHeader__nova_Object;
nova_io_Nova_FancyOutputStream_native1_Nova_writeHeader writeHeader__nova_String__nova_String__nova_String__nova_primitive_Bool;
nova_io_Nova_FancyOutputStream_native_Nova_writeSeparator writeSeparator;
nova_io_Nova_FancyOutputStream_native_Nova_construct FancyOutputStream;
} nova_io_native_FancyOutputStream;

typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_File_native_Nova_getChildFiles)(nova_io_Nova_File*, int, int);
typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_File_native_Nova_directoryContents)(nova_io_Nova_File*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_io_Nova_File_native_Nova_listFiles)(nova_io_Nova_File*, nova_Nova_String*);
typedef nova_io_Nova_File* (*nova_io_Nova_File_native1_Nova_construct)(nova_io_Nova_File*, nova_Nova_String*);

typedef struct nova_io_native_File
{
nova_io_Nova_File_native_Nova_getChildFiles getChildFiles;
nova_io_Nova_File_native_Nova_directoryContents directoryContents;
nova_io_Nova_File_native_Nova_listFiles listFiles;
nova_io_Nova_File_native1_Nova_construct File__nova_String;
} nova_io_native_File;

typedef nova_io_Nova_FileNotFoundException* (*nova_io_Nova_FileNotFoundException_native_Nova_construct)(nova_io_Nova_FileNotFoundException*, nova_io_Nova_File*);

typedef struct nova_io_native_FileNotFoundException
{
nova_io_Nova_FileNotFoundException_native_Nova_construct FileNotFoundException;
} nova_io_native_FileNotFoundException;

typedef void (*nova_io_Nova_FileReader_native_Nova_open)(nova_io_Nova_FileReader*);
typedef nova_Nova_String* (*nova_io_Nova_FileReader_native_Nova_readAllContents)(nova_io_Nova_FileReader*);
typedef nova_Nova_String* (*nova_io_Nova_FileReader_native_Nova_readLine)(nova_io_Nova_FileReader*);
typedef char (*nova_io_Nova_FileReader_native_Nova_readChar)(nova_io_Nova_FileReader*);
typedef char (*nova_io_Nova_FileReader_native_Nova_close)(nova_io_Nova_FileReader*);
typedef nova_io_Nova_FileReader* (*nova_io_Nova_FileReader_native0_Nova_construct)(nova_io_Nova_FileReader*, nova_io_Nova_File*);
typedef nova_io_Nova_FileReader* (*nova_io_Nova_FileReader_native1_Nova_construct)(nova_io_Nova_FileReader*, FILE*);

typedef struct nova_io_native_FileReader
{
nova_io_Nova_FileReader_native_Nova_open open;
nova_io_Nova_FileReader_native_Nova_readAllContents readAllContents;
nova_io_Nova_FileReader_native_Nova_readLine readLine;
nova_io_Nova_FileReader_native_Nova_readChar readChar;
nova_io_Nova_FileReader_native_Nova_close close;
nova_io_Nova_FileReader_native0_Nova_construct FileReader__nova_io_File;
nova_io_Nova_FileReader_native1_Nova_construct FileReader__FILE;
} nova_io_native_FileReader;

typedef char (*nova_io_Nova_FileWriter_native_Nova_delete)(nova_io_Nova_FileWriter*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_reopen)(nova_io_Nova_FileWriter*);
typedef void (*nova_io_Nova_FileWriter_native_Nova_rewind)(nova_io_Nova_FileWriter*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_clearContents)(nova_io_Nova_FileWriter*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_create)(nova_io_Nova_FileWriter*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_flush)(nova_io_Nova_FileWriter*);
typedef char (*nova_io_Nova_FileWriter_native_Nova_close)(nova_io_Nova_FileWriter*);
typedef nova_io_Nova_FileWriter* (*nova_io_Nova_FileWriter_native0_Nova_construct)(nova_io_Nova_FileWriter*, nova_io_Nova_File*);
typedef nova_io_Nova_FileWriter* (*nova_io_Nova_FileWriter_native1_Nova_construct)(nova_io_Nova_FileWriter*, FILE*);
typedef nova_io_Nova_FileWriter* (*nova_io_Nova_FileWriter_native2_Nova_construct)(nova_io_Nova_FileWriter*, nova_Nova_String*);

typedef struct nova_io_native_FileWriter
{
nova_io_Nova_FileWriter_native_Nova_delete delete;
nova_io_Nova_FileWriter_native_Nova_reopen reopen;
nova_io_Nova_FileWriter_native_Nova_rewind rewind;
nova_io_Nova_FileWriter_native_Nova_clearContents clearContents;
nova_io_Nova_FileWriter_native_Nova_create create;
nova_io_Nova_FileWriter_native_Nova_flush flush;
nova_io_Nova_FileWriter_native_Nova_close close;
nova_io_Nova_FileWriter_native0_Nova_construct FileWriter__nova_io_File;
nova_io_Nova_FileWriter_native1_Nova_construct FileWriter__FILE;
nova_io_Nova_FileWriter_native2_Nova_construct FileWriter__nova_String;
} nova_io_native_FileWriter;

typedef nova_Nova_String* (*nova_io_Nova_InputStream_native_Nova_readString)(nova_io_Nova_InputStream*);
typedef nova_datastruct_list_Byte_Nova_Array1Byte* (*nova_io_Nova_InputStream_native_Nova_readBytes)(nova_io_Nova_InputStream*);

typedef struct nova_io_native_InputStream
{
nova_io_Nova_InputStream_native_Nova_readString readString;
nova_io_Nova_InputStream_native_Nova_readBytes readBytes;
} nova_io_native_InputStream;

typedef nova_io_Nova_OutputStream* (*nova_io_Nova_OutputStream_native_Nova_write)(nova_io_Nova_OutputStream*, nova_Nova_String*);
typedef nova_io_Nova_OutputStream* (*nova_io_Nova_OutputStream_native_Nova_writeLine)(nova_io_Nova_OutputStream*, nova_Nova_String*);

typedef struct nova_io_native_OutputStream
{
nova_io_Nova_OutputStream_native_Nova_write write;
nova_io_Nova_OutputStream_native_Nova_writeLine writeLine;
} nova_io_native_OutputStream;


typedef struct nova_io_native_StreamReader
{
} nova_io_native_StreamReader;

typedef nova_io_Nova_StringBuilder* (*nova_io_Nova_StringBuilder_native_Nova_construct)(nova_io_Nova_StringBuilder*, nova_Nova_String*);

typedef struct nova_io_native_StringBuilder
{
nova_io_Nova_StringBuilder_native_Nova_construct StringBuilder;
} nova_io_native_StringBuilder;

typedef nova_math_Nova_ArithmeticSequence* (*nova_math_Nova_ArithmeticSequence_native_Nova_construct)(nova_math_Nova_ArithmeticSequence*);

typedef struct nova_math_native_ArithmeticSequence
{
nova_math_Nova_ArithmeticSequence_native_Nova_construct ArithmeticSequence;
} nova_math_native_ArithmeticSequence;


typedef struct nova_math_native_Diekstra
{
} nova_math_native_Diekstra;


typedef struct nova_math_native_GeometricSequence
{
} nova_math_native_GeometricSequence;


typedef struct nova_math_native_Graph
{
} nova_math_native_Graph;


typedef struct nova_math_native_InvalidNumericStatementException
{
} nova_math_native_InvalidNumericStatementException;

typedef long_long (*nova_math_Nova_Math_native0_static_Nova_max)(nova_math_Nova_Math*, long_long, long_long);
typedef int (*nova_math_Nova_Math_native1_static_Nova_max)(nova_math_Nova_Math*, int, int);
typedef long_long (*nova_math_Nova_Math_native0_static_Nova_min)(nova_math_Nova_Math*, long_long, long_long);
typedef int (*nova_math_Nova_Math_native1_static_Nova_min)(nova_math_Nova_Math*, int, int);
typedef char (*nova_math_Nova_Math_native_static_Nova_sign)(nova_math_Nova_Math*, long_long);
typedef long_long (*nova_math_Nova_Math_native0_static_Nova_random)(nova_math_Nova_Math*, long_long);
typedef long_long (*nova_math_Nova_Math_native1_static_Nova_random)(nova_math_Nova_Math*, int);
typedef long_long (*nova_math_Nova_Math_native0_static_Nova_abs)(nova_math_Nova_Math*, long_long);
typedef int (*nova_math_Nova_Math_native1_static_Nova_abs)(nova_math_Nova_Math*, int);
typedef double (*nova_math_Nova_Math_native2_static_Nova_abs)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_sqrt)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_pow)(nova_math_Nova_Math*, double, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_sin)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_cos)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_tan)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_asin)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_acos)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_atan)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_round)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_floor)(nova_math_Nova_Math*, double);
typedef double (*nova_math_Nova_Math_native_static_Nova_ceil)(nova_math_Nova_Math*, double);
typedef int (*nova_math_Nova_Math_native_static_Nova_gcd)(nova_math_Nova_Math*, int, int);

typedef struct nova_math_native_Math
{
} nova_math_native_Math;

typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_clone)(nova_math_Nova_Matrix*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_static_Nova_identity)(nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_inverse)(nova_math_Nova_Matrix*);
typedef void (*nova_math_Nova_Matrix_native_Nova_swapRows)(nova_math_Nova_Matrix*, int, int);
typedef void (*nova_math_Nova_Matrix_native_Nova_multiplyRow)(nova_math_Nova_Matrix*, int, int, double);
typedef void (*nova_math_Nova_Matrix_native_Nova_addRow)(nova_math_Nova_Matrix*, int, int);
typedef void (*nova_math_Nova_Matrix_native_Nova_subtractRow)(nova_math_Nova_Matrix*, int, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_add)(nova_math_Nova_Matrix*, nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native3_Nova_plus)(nova_math_Nova_Matrix*, nova_math_Nova_Matrix*, char);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_subtract)(nova_math_Nova_Matrix*, nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native0_Nova_minus)(nova_math_Nova_Matrix*, nova_math_Nova_Matrix*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native1_Nova_minus)(nova_math_Nova_Matrix*, nova_math_Nova_Matrix*, char);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native_Nova_transpose)(nova_math_Nova_Matrix*);
typedef double (*nova_math_Nova_Matrix_native_Nova_determinant)(nova_math_Nova_Matrix*);
typedef double (*nova_math_Nova_Matrix_native_static_Nova_determinant)(nova_math_Nova_Matrix*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Double_Nova_Array1Double* (*nova_math_Nova_Matrix_native_Nova_get)(nova_math_Nova_Matrix*, int);
typedef nova_datastruct_list_Double_Nova_Array1Double* (*nova_math_Nova_Matrix_native_Nova_set)(nova_math_Nova_Matrix*, int, nova_datastruct_list_Double_Nova_Array1Double*);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native0_Nova_construct)(nova_math_Nova_Matrix*, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native1_Nova_construct)(nova_math_Nova_Matrix*, int, int);
typedef nova_math_Nova_Matrix* (*nova_math_Nova_Matrix_native2_Nova_construct)(nova_math_Nova_Matrix*, nova_datastruct_list_Nova_Array*);

typedef struct nova_math_native_Matrix
{
nova_math_Nova_Matrix_native_Nova_clone clone;
nova_math_Nova_Matrix_native_Nova_inverse inverse;
nova_math_Nova_Matrix_native_Nova_swapRows swapRows;
nova_math_Nova_Matrix_native_Nova_multiplyRow multiplyRow;
nova_math_Nova_Matrix_native_Nova_addRow addRow;
nova_math_Nova_Matrix_native_Nova_subtractRow subtractRow;
nova_math_Nova_Matrix_native_Nova_add add;
nova_math_Nova_Matrix_native3_Nova_plus plus__nova_math_Matrix__nova_primitive_Bool;
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

typedef nova_math_Nova_NumericOperand* (*nova_math_Nova_NumericOperand_native_Nova_construct)(nova_math_Nova_NumericOperand*, nova_Nova_Object*);

typedef struct nova_math_native_NumericOperand
{
nova_math_Nova_NumericOperand_native_Nova_construct NumericOperand;
} nova_math_native_NumericOperand;

typedef nova_math_Nova_NumericOperation* (*nova_math_Nova_NumericOperation_native0_Nova_construct)(nova_math_Nova_NumericOperation*, nova_Nova_String*);
typedef nova_math_Nova_NumericOperation* (*nova_math_Nova_NumericOperation_native1_Nova_construct)(nova_math_Nova_NumericOperation*, nova_Nova_String*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_math_native_NumericOperation
{
nova_math_Nova_NumericOperation_native0_Nova_construct NumericOperation__nova_String;
nova_math_Nova_NumericOperation_native1_Nova_construct NumericOperation__nova_String__nova_String__nova_String;
} nova_math_native_NumericOperation;

typedef nova_math_Nova_NumericStatement* (*nova_math_Nova_NumericStatement_native_Nova_construct)(nova_math_Nova_NumericStatement*, nova_Nova_String*);

typedef struct nova_math_native_NumericStatement
{
nova_math_Nova_NumericStatement_native_Nova_construct NumericStatement;
} nova_math_native_NumericStatement;

typedef nova_math_Nova_NumericTree* (*nova_math_Nova_NumericTree_native_Nova_construct)(nova_math_Nova_NumericTree*, nova_Nova_String*);

typedef struct nova_math_native_NumericTree
{
nova_math_Nova_NumericTree_native_Nova_construct NumericTree;
} nova_math_native_NumericTree;

typedef nova_math_Nova_Polynomial* (*nova_math_Nova_Polynomial_native_Nova_construct)(nova_math_Nova_Polynomial*, nova_Nova_String*);

typedef struct nova_math_native_Polynomial
{
nova_math_Nova_Polynomial_native_Nova_construct Polynomial;
} nova_math_native_Polynomial;

typedef double (*nova_math_Nova_Sequence_native_static_Nova_sum)(nova_math_Nova_Sequence*, int);
typedef nova_math_Nova_Sequence* (*nova_math_Nova_Sequence_native_Nova_construct)(nova_math_Nova_Sequence*, nova_datastruct_list_Double_Nova_Array1Double*);

typedef struct nova_math_native_Sequence
{
nova_math_Nova_Sequence_native_Nova_construct Sequence;
} nova_math_native_Sequence;


typedef struct nova_math_native_Statement
{
} nova_math_native_Statement;

typedef nova_math_Nova_StatementComponent* (*nova_math_Nova_StatementComponent_native_Nova_construct)(nova_math_Nova_StatementComponent*, nova_Nova_Object*, nova_math_Nova_StatementComponent*);

typedef struct nova_math_native_StatementComponent
{
nova_math_Nova_StatementComponent_native_Nova_construct StatementComponent;
} nova_math_native_StatementComponent;


typedef struct nova_math_native_VariableOperand
{
} nova_math_native_VariableOperand;

typedef long_long (*nova_math_Nova_Vector_native_Nova_dotProduct)(nova_math_Nova_Vector*, nova_math_Nova_Vector*);
typedef long_long (*nova_math_Nova_Vector_native_Nova_innerProduct)(nova_math_Nova_Vector*, nova_math_Nova_Vector*);
typedef nova_datastruct_list_Double_Nova_Array1Double* (*nova_math_Nova_Vector_native_Nova_scale)(nova_math_Nova_Vector*, double);
typedef nova_datastruct_list_Double_Nova_Array1Double* (*nova_math_Nova_Vector_native_Nova_normalize)(nova_math_Nova_Vector*);
typedef nova_math_Nova_Vector* (*nova_math_Nova_Vector_native0_Nova_construct)(nova_math_Nova_Vector*, int);
typedef nova_math_Nova_Vector* (*nova_math_Nova_Vector_native1_Nova_construct)(nova_math_Nova_Vector*, nova_datastruct_list_Double_Nova_Array1Double*);

typedef struct nova_math_native_Vector
{
nova_math_Nova_Vector_native_Nova_dotProduct dotProduct;
nova_math_Nova_Vector_native_Nova_innerProduct innerProduct;
nova_math_Nova_Vector_native_Nova_scale scale;
nova_math_Nova_Vector_native_Nova_normalize normalize;
nova_math_Nova_Vector_native0_Nova_construct Vector__nova_primitive_number_Int;
nova_math_Nova_Vector_native1_Nova_construct Vector__nova_datastruct_list_Double_Array1Double;
} nova_math_native_Vector;

typedef long_long (*nova_math_Nova_Vector2D_native_Nova_dotProduct)(nova_math_Nova_Vector2D*, nova_math_Nova_Vector3D*);
typedef nova_math_Nova_Vector2D* (*nova_math_Nova_Vector2D_native0_Nova_construct)(nova_math_Nova_Vector2D*);
typedef nova_math_Nova_Vector2D* (*nova_math_Nova_Vector2D_native1_Nova_construct)(nova_math_Nova_Vector2D*, double, double);

typedef struct nova_math_native_Vector2D
{
nova_math_Nova_Vector2D_native_Nova_dotProduct dotProduct;
nova_math_Nova_Vector2D_native0_Nova_construct Vector2D;
nova_math_Nova_Vector2D_native1_Nova_construct Vector2D__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector2D;

typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native_Nova_crossProduct)(nova_math_Nova_Vector3D*, nova_math_Nova_Vector3D*);
typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native0_Nova_construct)(nova_math_Nova_Vector3D*);
typedef nova_math_Nova_Vector3D* (*nova_math_Nova_Vector3D_native1_Nova_construct)(nova_math_Nova_Vector3D*, double, double, double);

typedef struct nova_math_native_Vector3D
{
nova_math_Nova_Vector3D_native_Nova_crossProduct crossProduct;
nova_math_Nova_Vector3D_native0_Nova_construct Vector3D;
nova_math_Nova_Vector3D_native1_Nova_construct Vector3D__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector3D;

typedef nova_math_Nova_Vector4D* (*nova_math_Nova_Vector4D_native0_Nova_construct)(nova_math_Nova_Vector4D*);
typedef nova_math_Nova_Vector4D* (*nova_math_Nova_Vector4D_native1_Nova_construct)(nova_math_Nova_Vector4D*, double, double, double, double);

typedef struct nova_math_native_Vector4D
{
nova_math_Nova_Vector4D_native0_Nova_construct Vector4D;
nova_math_Nova_Vector4D_native1_Nova_construct Vector4D__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double__nova_primitive_number_Double;
} nova_math_native_Vector4D;

typedef nova_math_Nova_NumericStatement* (*nova_math_calculus_Nova_Calculus_native_static_Nova_derivative)(nova_math_calculus_Nova_Calculus*, nova_math_Nova_NumericStatement*);

typedef struct nova_math_calculus_native_Calculus
{
} nova_math_calculus_native_Calculus;

typedef nova_math_huffman_Nova_HuffmanTree* (*nova_math_huffman_Nova_HuffmanTree_native_Nova_construct)(nova_math_huffman_Nova_HuffmanTree*);

typedef struct nova_math_huffman_native_HuffmanTree
{
nova_math_huffman_Nova_HuffmanTree_native_Nova_construct HuffmanTree;
} nova_math_huffman_native_HuffmanTree;


typedef struct nova_math_logic_native_Conclusion
{
} nova_math_logic_native_Conclusion;


typedef struct nova_math_logic_native_Hypothesis
{
} nova_math_logic_native_Hypothesis;


typedef struct nova_math_logic_native_InvalidFormulaException
{
} nova_math_logic_native_InvalidFormulaException;


typedef struct nova_math_logic_native_LogicalConnective
{
} nova_math_logic_native_LogicalConnective;

typedef nova_math_logic_Nova_LogicalStatement* (*nova_math_logic_Nova_LogicalStatement_native_Nova_construct)(nova_math_logic_Nova_LogicalStatement*, nova_Nova_String*);

typedef struct nova_math_logic_native_LogicalStatement
{
nova_math_logic_Nova_LogicalStatement_native_Nova_construct LogicalStatement;
} nova_math_logic_native_LogicalStatement;


typedef struct nova_math_logic_native_StatementComponent
{
} nova_math_logic_native_StatementComponent;

typedef nova_math_logic_Nova_StatementGroup* (*nova_math_logic_Nova_StatementGroup_native_Nova_construct)(nova_math_logic_Nova_StatementGroup*, nova_Nova_Object*, nova_datastruct_Nova_Bounds*);

typedef struct nova_math_logic_native_StatementGroup
{
nova_math_logic_Nova_StatementGroup_native_Nova_construct StatementGroup;
} nova_math_logic_native_StatementGroup;

typedef nova_math_logic_Nova_StatementLetter* (*nova_math_logic_Nova_StatementLetter_native_Nova_construct)(nova_math_logic_Nova_StatementLetter*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_math_logic_native_StatementLetter
{
nova_math_logic_Nova_StatementLetter_native_Nova_construct StatementLetter;
} nova_math_logic_native_StatementLetter;

typedef nova_math_logic_Nova_WFF* (*nova_math_logic_Nova_WFF_native_Nova_construct)(nova_math_logic_Nova_WFF*, nova_Nova_String*, nova_datastruct_list_Nova_Array*);

typedef struct nova_math_logic_native_WFF
{
nova_math_logic_Nova_WFF_native_Nova_construct WFF;
} nova_math_logic_native_WFF;

typedef char (*nova_meta_Nova_Class_native_Nova_isOfType)(nova_meta_Nova_Class*, nova_meta_Nova_Class*);
typedef nova_datastruct_list_Nova_ImmutableArray* (*nova_meta_Nova_Class_native_Nova_getClassesOfType)(nova_meta_Nova_Class*, nova_meta_Nova_Class*);
typedef nova_meta_Nova_Class* (*nova_meta_Nova_Class_native_Nova_construct)(nova_meta_Nova_Class*, nova_Nova_String*, char);

typedef struct nova_meta_native_Class
{
nova_meta_Nova_Class_native_Nova_isOfType isOfType;
nova_meta_Nova_Class_native_Nova_getClassesOfType getClassesOfType;
nova_meta_Nova_Class_native_Nova_construct Class;
} nova_meta_native_Class;

typedef nova_meta_Nova_Field* (*nova_meta_Nova_Field_native_Nova_construct)(nova_meta_Nova_Field*, nova_Nova_String*, nova_meta_Nova_Type*);

typedef struct nova_meta_native_Field
{
nova_meta_Nova_Field_native_Nova_construct Field;
} nova_meta_native_Field;


typedef struct nova_meta_native_FunctionMap
{
} nova_meta_native_FunctionMap;

typedef nova_meta_Nova_GenericArgument* (*nova_meta_Nova_GenericArgument_native_Nova_construct)(nova_meta_Nova_GenericArgument*, nova_meta_Nova_Type*);

typedef struct nova_meta_native_GenericArgument
{
nova_meta_Nova_GenericArgument_native_Nova_construct GenericArgument;
} nova_meta_native_GenericArgument;

typedef nova_meta_Nova_GenericParameter* (*nova_meta_Nova_GenericParameter_native_Nova_construct)(nova_meta_Nova_GenericParameter*, nova_meta_Nova_Type*, nova_meta_Nova_Type*);

typedef struct nova_meta_native_GenericParameter
{
nova_meta_Nova_GenericParameter_native_Nova_construct GenericParameter;
} nova_meta_native_GenericParameter;


typedef struct nova_meta_native_InvalidLibraryException
{
} nova_meta_native_InvalidLibraryException;

typedef nova_Nova_Object* (*nova_meta_Nova_Library_native_Nova_getInstance)(nova_meta_Nova_Library*, nova_Nova_String*);
typedef /*nova_meta_Nova_Library_closure1356_Nova_getConstructor*/nova_funcStruct* (*nova_meta_Nova_Library_native_Nova_getConstructor)(nova_meta_Nova_Library*, nova_Nova_String*);
typedef /*nova_meta_Nova_Library_closure13620_Nova_getFunction*/nova_funcStruct* (*nova_meta_Nova_Library_native0_Nova_getFunction)(nova_meta_Nova_Library*, nova_Nova_String*, nova_Nova_String*);
typedef /*nova_meta_Nova_Library_closure13661_Nova_getFunction*/nova_funcStruct* (*nova_meta_Nova_Library_native1_Nova_getFunction)(nova_meta_Nova_Library*, nova_Nova_String*, nova_Nova_Object*);
typedef nova_meta_Nova_Library* (*nova_meta_Nova_Library_native_Nova_load)(nova_meta_Nova_Library*);
typedef nova_meta_Nova_Library* (*nova_meta_Nova_Library_native_Nova_construct)(nova_meta_Nova_Library*, nova_Nova_String*);

typedef struct nova_meta_native_Library
{
nova_meta_Nova_Library_native_Nova_getInstance getInstance;
nova_meta_Nova_Library_native_Nova_getConstructor getConstructor;
nova_meta_Nova_Library_native0_Nova_getFunction getFunction__nova_String__nova_String;
nova_meta_Nova_Library_native1_Nova_getFunction getFunction__nova_String__nova_Object;
nova_meta_Nova_Library_native_Nova_load load;
nova_meta_Nova_Library_native_Nova_construct Library;
} nova_meta_native_Library;


typedef struct nova_meta_native_PropertyMap
{
} nova_meta_native_PropertyMap;

typedef nova_meta_Nova_Type* (*nova_meta_Nova_Type_native_Nova_construct)(nova_meta_Nova_Type*, nova_Nova_String*, nova_datastruct_list_Nova_ImmutableArray*);

typedef struct nova_meta_native_Type
{
nova_meta_Nova_Type_native_Nova_construct Type;
} nova_meta_native_Type;

typedef char (*nova_network_Nova_ClientSocket_native_Nova_connect)(nova_network_Nova_ClientSocket*, nova_Nova_String*, int);
typedef char (*nova_network_Nova_ClientSocket_native_Nova_close)(nova_network_Nova_ClientSocket*);
typedef nova_network_Nova_ClientSocket* (*nova_network_Nova_ClientSocket_native_Nova_construct)(nova_network_Nova_ClientSocket*);

typedef struct nova_network_native_ClientSocket
{
nova_network_Nova_ClientSocket_native_Nova_connect connect;
nova_network_Nova_ClientSocket_native_Nova_close close;
nova_network_Nova_ClientSocket_native_Nova_construct ClientSocket;
} nova_network_native_ClientSocket;

typedef void (*nova_network_Nova_ConnectionSocket_native_Nova_close)(nova_network_Nova_ConnectionSocket*);
typedef char (*nova_network_Nova_ConnectionSocket_native_Nova_validateConnection)(nova_network_Nova_ConnectionSocket*);
typedef nova_Nova_String* (*nova_network_Nova_ConnectionSocket_native0_Nova_readString)(nova_network_Nova_ConnectionSocket*);
typedef char (*nova_network_Nova_ConnectionSocket_native_Nova_write)(nova_network_Nova_ConnectionSocket*, nova_Nova_String*);
typedef nova_network_Nova_ConnectionSocket* (*nova_network_Nova_ConnectionSocket_native_Nova_construct)(nova_network_Nova_ConnectionSocket*, SOCKET_ID_TYPE);

typedef struct nova_network_native_ConnectionSocket
{
nova_network_Nova_ConnectionSocket_native_Nova_close close;
nova_network_Nova_ConnectionSocket_native_Nova_validateConnection validateConnection;
nova_network_Nova_ConnectionSocket_native0_Nova_readString readString;
nova_network_Nova_ConnectionSocket_native_Nova_write write;
nova_network_Nova_ConnectionSocket_native_Nova_construct ConnectionSocket;
} nova_network_native_ConnectionSocket;

typedef nova_network_Nova_NetworkInputStream* (*nova_network_Nova_NetworkInputStream_native_Nova_construct)(nova_network_Nova_NetworkInputStream*, nova_network_Nova_ConnectionSocket*);

typedef struct nova_network_native_NetworkInputStream
{
nova_network_Nova_NetworkInputStream_native_Nova_construct NetworkInputStream;
} nova_network_native_NetworkInputStream;

typedef nova_network_Nova_NetworkOutputStream* (*nova_network_Nova_NetworkOutputStream_native_Nova_construct)(nova_network_Nova_NetworkOutputStream*, nova_network_Nova_ConnectionSocket*);

typedef struct nova_network_native_NetworkOutputStream
{
nova_network_Nova_NetworkOutputStream_native_Nova_construct NetworkOutputStream;
} nova_network_native_NetworkOutputStream;

typedef nova_network_Nova_ServerSocket* (*nova_network_Nova_ServerSocket_native_Nova_start)(nova_network_Nova_ServerSocket*, int);
typedef char (*nova_network_Nova_ServerSocket_native_Nova_close)(nova_network_Nova_ServerSocket*);
typedef nova_network_Nova_ConnectionSocket* (*nova_network_Nova_ServerSocket_native_Nova_acceptClient)(nova_network_Nova_ServerSocket*);
typedef nova_network_Nova_ServerSocket* (*nova_network_Nova_ServerSocket_native_Nova_construct)(nova_network_Nova_ServerSocket*);

typedef struct nova_network_native_ServerSocket
{
nova_network_Nova_ServerSocket_native_Nova_start start;
nova_network_Nova_ServerSocket_native_Nova_close close;
nova_network_Nova_ServerSocket_native_Nova_acceptClient acceptClient;
nova_network_Nova_ServerSocket_native_Nova_construct ServerSocket;
} nova_network_native_ServerSocket;

typedef nova_network_Nova_Socket* (*nova_network_Nova_Socket_native_Nova_construct)(nova_network_Nova_Socket*, nova_Nova_String*, int);

typedef struct nova_network_native_Socket
{
nova_network_Nova_Socket_native_Nova_construct Socket;
} nova_network_native_Socket;

typedef char (*nova_operators_Nova_EqualsOperator_native1_Nova_equals)(nova_operators_Nova_EqualsOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_EqualsOperator
{
nova_operators_Nova_EqualsOperator_native1_Nova_equals equals__nova_Object;
} nova_operators_native_EqualsOperator;

typedef char (*nova_operators_Nova_GreaterThanOperator_native1_Nova_greaterThan)(nova_operators_Nova_GreaterThanOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_GreaterThanOperator
{
nova_operators_Nova_GreaterThanOperator_native1_Nova_greaterThan greaterThan__nova_Object;
} nova_operators_native_GreaterThanOperator;

typedef char (*nova_operators_Nova_GreaterThanOrEqualToOperator_native1_Nova_greaterThanOrEqualTo)(nova_operators_Nova_GreaterThanOrEqualToOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_GreaterThanOrEqualToOperator
{
nova_operators_Nova_GreaterThanOrEqualToOperator_native1_Nova_greaterThanOrEqualTo greaterThanOrEqualTo__nova_Object;
} nova_operators_native_GreaterThanOrEqualToOperator;

typedef char (*nova_operators_Nova_LessThanOperator_native1_Nova_lessThan)(nova_operators_Nova_LessThanOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_LessThanOperator
{
nova_operators_Nova_LessThanOperator_native1_Nova_lessThan lessThan__nova_Object;
} nova_operators_native_LessThanOperator;

typedef char (*nova_operators_Nova_LessThanOrEqualToOperator_native1_Nova_lessThanOrEqualTo)(nova_operators_Nova_LessThanOrEqualToOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_LessThanOrEqualToOperator
{
nova_operators_Nova_LessThanOrEqualToOperator_native1_Nova_lessThanOrEqualTo lessThanOrEqualTo__nova_Object;
} nova_operators_native_LessThanOrEqualToOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_MinusEqualsOperator_native1_Nova_minusEquals)(nova_operators_Nova_MinusEqualsOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_MinusEqualsOperator
{
nova_operators_Nova_MinusEqualsOperator_native1_Nova_minusEquals minusEquals__nova_Object;
} nova_operators_native_MinusEqualsOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_MinusOperator_native1_Nova_minus)(nova_operators_Nova_MinusOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_MinusOperator
{
nova_operators_Nova_MinusOperator_native1_Nova_minus minus__nova_Object;
} nova_operators_native_MinusOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_MultiplyEqualsOperator_native1_Nova_multiplyEquals)(nova_operators_Nova_MultiplyEqualsOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_MultiplyEqualsOperator
{
nova_operators_Nova_MultiplyEqualsOperator_native1_Nova_multiplyEquals multiplyEquals__nova_Object;
} nova_operators_native_MultiplyEqualsOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_MultiplyOperator_native1_Nova_multiply)(nova_operators_Nova_MultiplyOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_MultiplyOperator
{
nova_operators_Nova_MultiplyOperator_native1_Nova_multiply multiply__nova_Object;
} nova_operators_native_MultiplyOperator;

typedef char (*nova_operators_Nova_NotEqualToOperator_native1_Nova_notEqualTo)(nova_operators_Nova_NotEqualToOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_NotEqualToOperator
{
nova_operators_Nova_NotEqualToOperator_native1_Nova_notEqualTo notEqualTo__nova_Object;
} nova_operators_native_NotEqualToOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_PlusEqualsOperator_native1_Nova_plusEquals)(nova_operators_Nova_PlusEqualsOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_PlusEqualsOperator
{
nova_operators_Nova_PlusEqualsOperator_native1_Nova_plusEquals plusEquals__nova_Object;
} nova_operators_native_PlusEqualsOperator;

typedef nova_Nova_Object* (*nova_operators_Nova_PlusOperator_native1_Nova_plus)(nova_operators_Nova_PlusOperator*, nova_Nova_Object*);

typedef struct nova_operators_native_PlusOperator
{
nova_operators_Nova_PlusOperator_native1_Nova_plus plus__nova_Object;
} nova_operators_native_PlusOperator;


typedef struct nova_package_native_Package
{
} nova_package_native_Package;

typedef nova_Nova_String* (*nova_primitive_Nova_Bool_native_static_Nova_toString)(nova_primitive_Nova_Bool*, char);
typedef nova_primitive_Nova_Bool* (*nova_primitive_Nova_Bool_native_Nova_construct)(nova_primitive_Nova_Bool*, char);

typedef struct nova_primitive_native_Bool
{
nova_primitive_Nova_Bool_native_Nova_construct Bool;
} nova_primitive_native_Bool;

typedef nova_primitive_Nova_Null* (*nova_primitive_Nova_Null_native_Nova_construct)(nova_primitive_Nova_Null*);

typedef struct nova_primitive_native_Null
{
nova_primitive_Nova_Null_native_Nova_construct Null;
} nova_primitive_native_Null;


typedef struct nova_primitive_native_Primitive
{
} nova_primitive_native_Primitive;

typedef long_long (*nova_primitive_number_Nova_Byte_native_static_Nova_compareTo)(nova_primitive_number_Nova_Byte*, char, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Byte_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Byte*, char, double);
typedef long_long (*nova_primitive_number_Nova_Byte_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Byte*, char, long_long);
typedef char (*nova_primitive_number_Nova_Byte_native_static_Nova_equals)(nova_primitive_number_Nova_Byte*, char, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Byte_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Byte*, char, double);
typedef char (*nova_primitive_number_Nova_Byte_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Byte*, char, long_long);
typedef int (*nova_primitive_number_Nova_Byte_native_static_Nova_numDigits)(nova_primitive_number_Nova_Byte*, char);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Byte_native_static_Nova_toString)(nova_primitive_number_Nova_Byte*, char);
typedef long_long (*nova_primitive_number_Nova_Byte_native_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Byte*, char);
typedef long_long (*nova_primitive_number_Nova_Byte_native_static_Nova_plus)(nova_primitive_number_Nova_Byte*, char, long_long);
typedef nova_primitive_number_Nova_Byte* (*nova_primitive_number_Nova_Byte_native_Nova_construct)(nova_primitive_number_Nova_Byte*, char);

typedef struct nova_primitive_number_native_Byte
{
nova_primitive_number_Nova_Byte_native_Nova_construct Byte;
} nova_primitive_number_native_Byte;

typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_toLowerCase)(nova_primitive_number_Nova_Char*, char);
typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_toUpperCase)(nova_primitive_number_Nova_Char*, char);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Char_native_Nova_repeat)(nova_primitive_number_Nova_Char*, int);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Char_native_static_Nova_repeat)(nova_primitive_number_Nova_Char*, char, int);
typedef char (*nova_primitive_number_Nova_Char_native_Nova_toLowerCase)(nova_primitive_number_Nova_Char*);
typedef char (*nova_primitive_number_Nova_Char_native_Nova_toUpperCase)(nova_primitive_number_Nova_Char*);
typedef long_long (*nova_primitive_number_Nova_Char_native_static_Nova_compareTo)(nova_primitive_number_Nova_Char*, char, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Char_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Char*, char, double);
typedef long_long (*nova_primitive_number_Nova_Char_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Char*, char, long_long);
typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_equals)(nova_primitive_number_Nova_Char*, char, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Char*, char, double);
typedef char (*nova_primitive_number_Nova_Char_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Char*, char, long_long);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Char_native_static_Nova_toString)(nova_primitive_number_Nova_Char*, char);
typedef long_long (*nova_primitive_number_Nova_Char_native_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Char*, char);
typedef long_long (*nova_primitive_number_Nova_Char_native_static_Nova_plus)(nova_primitive_number_Nova_Char*, char, long_long);
typedef nova_primitive_number_Nova_Char* (*nova_primitive_number_Nova_Char_native_Nova_construct)(nova_primitive_number_Nova_Char*, char);

typedef struct nova_primitive_number_native_Char
{
nova_primitive_number_Nova_Char_native_Nova_repeat repeat;
nova_primitive_number_Nova_Char_native_Nova_toLowerCase toLowerCase;
nova_primitive_number_Nova_Char_native_Nova_toUpperCase toUpperCase;
nova_primitive_number_Nova_Char_native_Nova_construct Char;
} nova_primitive_number_native_Char;

typedef int (*nova_primitive_number_Nova_Double_native_static_Nova_numDigits)(nova_primitive_number_Nova_Double*, double);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Double_native_static_Nova_genString)(nova_primitive_number_Nova_Double*, char*, int);
typedef char* (*nova_primitive_number_Nova_Double_native_static_Nova_genBuffer)(nova_primitive_number_Nova_Double*, double);
typedef int (*nova_primitive_number_Nova_Double_native_static_Nova_repetition)(nova_primitive_number_Nova_Double*, char*, int);
typedef int (*nova_primitive_number_Nova_Double_native_static_Nova_lastSignificantDigit)(nova_primitive_number_Nova_Double*, char*, int);
typedef char* (*nova_primitive_number_Nova_Double_native_static_Nova_toCharArray)(nova_primitive_number_Nova_Double*, double);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Double_native_static_Nova_toString)(nova_primitive_number_Nova_Double*, double);
typedef double (*nova_primitive_number_Nova_Double_native_static_Nova_parseDouble)(nova_primitive_number_Nova_Double*, nova_Nova_String*);
typedef char (*nova_primitive_number_Nova_Double_native_Nova_withinTolerance)(nova_primitive_number_Nova_Double*, double, double);
typedef char (*nova_primitive_number_Nova_Double_native_static_Nova_withinTolerance)(nova_primitive_number_Nova_Double*, double, double, double);
typedef double (*nova_primitive_number_Nova_Double_native0_static_Nova_compareTo)(nova_primitive_number_Nova_Double*, double, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Double_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Double*, double, double);
typedef double (*nova_primitive_number_Nova_Double_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Double*, double, long_long);
typedef char (*nova_primitive_number_Nova_Double_native_static_Nova_equals)(nova_primitive_number_Nova_Double*, double, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Double_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Double*, double, double);
typedef char (*nova_primitive_number_Nova_Double_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Double*, double, long_long);
typedef long_long (*nova_primitive_number_Nova_Double_native_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Double*, double);
typedef double (*nova_primitive_number_Nova_Double_native_static_Nova_plus)(nova_primitive_number_Nova_Double*, double, double);
typedef double (*nova_primitive_number_Nova_Double_native1_static_Nova_compareTo)(nova_primitive_number_Nova_Double*, double, double);
typedef nova_primitive_number_Nova_Double* (*nova_primitive_number_Nova_Double_native_Nova_construct)(nova_primitive_number_Nova_Double*, double);

typedef struct nova_primitive_number_native_Double
{
nova_primitive_number_Nova_Double_native_Nova_withinTolerance withinTolerance;
nova_primitive_number_Nova_Double_native_Nova_construct Double;
} nova_primitive_number_native_Double;

typedef char (*nova_primitive_number_Nova_Float_native_Nova_withinTolerance)(nova_primitive_number_Nova_Float*, float, float);
typedef char (*nova_primitive_number_Nova_Float_native_static_Nova_withinTolerance)(nova_primitive_number_Nova_Float*, float, float, float);
typedef double (*nova_primitive_number_Nova_Float_native_static_Nova_compareTo)(nova_primitive_number_Nova_Float*, float, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Float_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Float*, float, double);
typedef float (*nova_primitive_number_Nova_Float_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Float*, float, long_long);
typedef char (*nova_primitive_number_Nova_Float_native_static_Nova_equals)(nova_primitive_number_Nova_Float*, float, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Float_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Float*, float, double);
typedef char (*nova_primitive_number_Nova_Float_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Float*, float, long_long);
typedef int (*nova_primitive_number_Nova_Float_native_static_Nova_numDigits)(nova_primitive_number_Nova_Float*, float);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Float_native_static_Nova_toString)(nova_primitive_number_Nova_Float*, float);
typedef long_long (*nova_primitive_number_Nova_Float_native_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Float*, float);
typedef double (*nova_primitive_number_Nova_Float_native_static_Nova_plus)(nova_primitive_number_Nova_Float*, float, double);
typedef nova_primitive_number_Nova_Float* (*nova_primitive_number_Nova_Float_native_Nova_construct)(nova_primitive_number_Nova_Float*, float);

typedef struct nova_primitive_number_native_Float
{
nova_primitive_number_Nova_Float_native_Nova_withinTolerance withinTolerance;
nova_primitive_number_Nova_Float_native_Nova_construct Float;
} nova_primitive_number_native_Float;

typedef long_long (*nova_primitive_number_Nova_Int_native0_static_Nova_compareTo)(nova_primitive_number_Nova_Int*, int, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Int_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Int*, int, double);
typedef long_long (*nova_primitive_number_Nova_Int_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Int*, int, long_long);
typedef char (*nova_primitive_number_Nova_Int_native0_static_Nova_equals)(nova_primitive_number_Nova_Int*, int, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Int_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Int*, int, double);
typedef char (*nova_primitive_number_Nova_Int_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Int*, int, long_long);
typedef int (*nova_primitive_number_Nova_Int_native_static_Nova_numDigits)(nova_primitive_number_Nova_Int*, int);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Int_native_static_Nova_toString)(nova_primitive_number_Nova_Int*, int);
typedef int (*nova_primitive_number_Nova_Int_native_static_Nova_parseInt)(nova_primitive_number_Nova_Int*, nova_Nova_String*);
typedef int (*nova_primitive_number_Nova_Int_nativefunc_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Int*, int);
typedef long_long (*nova_primitive_number_Nova_Int_native_static_Nova_plus)(nova_primitive_number_Nova_Int*, int, long_long);
typedef int (*nova_primitive_number_Nova_Int_native1_static_Nova_compareTo)(nova_primitive_number_Nova_Int*, int, int);
typedef long_long (*nova_primitive_number_Nova_Int_native_char_long_long1_Nova_compareTo)(nova_primitive_number_Nova_Int*, char);
typedef char (*nova_primitive_number_Nova_Int_native_int_char1_Nova_equals)(nova_primitive_number_Nova_Int*, int);
typedef char (*nova_primitive_number_Nova_Int_native_int_int_char1_static_Nova_equals)(nova_primitive_number_Nova_Int*, int, int);
typedef nova_primitive_number_Nova_Int* (*nova_primitive_number_Nova_Int_native_Nova_construct)(nova_primitive_number_Nova_Int*, int);

typedef struct nova_primitive_number_native_Int
{
nova_primitive_number_Nova_Int_native_Nova_construct Int;
} nova_primitive_number_native_Int;


typedef struct nova_primitive_number_native_Integer
{
} nova_primitive_number_native_Integer;

typedef int (*nova_primitive_number_Nova_Long_native_static_Nova_numDigits)(nova_primitive_number_Nova_Long*, long_long);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Long_native_static_Nova_toString)(nova_primitive_number_Nova_Long*, long_long);
typedef long_long (*nova_primitive_number_Nova_Long_native_static_Nova_compareTo)(nova_primitive_number_Nova_Long*, long_long, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Long_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Long*, long_long, double);
typedef long_long (*nova_primitive_number_Nova_Long_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Long*, long_long, long_long);
typedef char (*nova_primitive_number_Nova_Long_native0_static_Nova_equals)(nova_primitive_number_Nova_Long*, long_long, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Long_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Long*, long_long, double);
typedef char (*nova_primitive_number_Nova_Long_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Long*, long_long, long_long);
typedef long_long (*nova_primitive_number_Nova_Long_native_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Long*, long_long);
typedef long_long (*nova_primitive_number_Nova_Long_native_static_Nova_plus)(nova_primitive_number_Nova_Long*, long_long, long_long);
typedef char (*nova_primitive_number_Nova_Long_native_long_long_char1_Nova_equals)(nova_primitive_number_Nova_Long*, long_long);
typedef char (*nova_primitive_number_Nova_Long_native_long_long_long_long_char1_static_Nova_equals)(nova_primitive_number_Nova_Long*, long_long, long_long);
typedef nova_primitive_number_Nova_Long* (*nova_primitive_number_Nova_Long_native_Nova_construct)(nova_primitive_number_Nova_Long*, long_long);

typedef struct nova_primitive_number_native_Long
{
nova_primitive_number_Nova_Long_native_Nova_construct Long;
} nova_primitive_number_native_Long;

typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_plusInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_plusReal)(nova_primitive_number_Nova_Number*, double);
typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_plusEqualsInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_plusEqualsReal)(nova_primitive_number_Nova_Number*, double);
typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_minusInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_minusReal)(nova_primitive_number_Nova_Number*, double);
typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_minusEqualsInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_minusEqualsReal)(nova_primitive_number_Nova_Number*, double);
typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_multiplyInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_multiplyReal)(nova_primitive_number_Nova_Number*, double);
typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_multiplyEqualsInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_multiplyEqualsReal)(nova_primitive_number_Nova_Number*, double);
typedef long_long (*nova_primitive_number_Nova_Number_native_Nova_compareToInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef double (*nova_primitive_number_Nova_Number_native_Nova_compareToReal)(nova_primitive_number_Nova_Number*, double);
typedef char (*nova_primitive_number_Nova_Number_native_Nova_equalsInteger)(nova_primitive_number_Nova_Number*, long_long);
typedef char (*nova_primitive_number_Nova_Number_native_Nova_equalsReal)(nova_primitive_number_Nova_Number*, double);

typedef struct nova_primitive_number_native_Number
{
nova_primitive_number_Nova_Number_native_Nova_plusInteger plusInteger;
nova_primitive_number_Nova_Number_native_Nova_plusReal plusReal;
nova_primitive_number_Nova_Number_native_Nova_plusEqualsInteger plusEqualsInteger;
nova_primitive_number_Nova_Number_native_Nova_plusEqualsReal plusEqualsReal;
nova_primitive_number_Nova_Number_native_Nova_minusInteger minusInteger;
nova_primitive_number_Nova_Number_native_Nova_minusReal minusReal;
nova_primitive_number_Nova_Number_native_Nova_minusEqualsInteger minusEqualsInteger;
nova_primitive_number_Nova_Number_native_Nova_minusEqualsReal minusEqualsReal;
nova_primitive_number_Nova_Number_native_Nova_multiplyInteger multiplyInteger;
nova_primitive_number_Nova_Number_native_Nova_multiplyReal multiplyReal;
nova_primitive_number_Nova_Number_native_Nova_multiplyEqualsInteger multiplyEqualsInteger;
nova_primitive_number_Nova_Number_native_Nova_multiplyEqualsReal multiplyEqualsReal;
nova_primitive_number_Nova_Number_native_Nova_compareToInteger compareToInteger;
nova_primitive_number_Nova_Number_native_Nova_compareToReal compareToReal;
nova_primitive_number_Nova_Number_native_Nova_equalsInteger equalsInteger;
nova_primitive_number_Nova_Number_native_Nova_equalsReal equalsReal;
} nova_primitive_number_native_Number;


typedef struct nova_primitive_number_native_RealNumber
{
} nova_primitive_number_native_RealNumber;

typedef long_long (*nova_primitive_number_Nova_Short_native_static_Nova_compareTo)(nova_primitive_number_Nova_Short*, short, nova_primitive_number_Nova_Number*);
typedef double (*nova_primitive_number_Nova_Short_native_static_Nova_compareToReal)(nova_primitive_number_Nova_Short*, short, double);
typedef long_long (*nova_primitive_number_Nova_Short_native_static_Nova_compareToInteger)(nova_primitive_number_Nova_Short*, short, long_long);
typedef char (*nova_primitive_number_Nova_Short_native_static_Nova_equals)(nova_primitive_number_Nova_Short*, short, nova_primitive_number_Nova_Number*);
typedef char (*nova_primitive_number_Nova_Short_native_static_Nova_equalsReal)(nova_primitive_number_Nova_Short*, short, double);
typedef char (*nova_primitive_number_Nova_Short_native_static_Nova_equalsInteger)(nova_primitive_number_Nova_Short*, short, long_long);
typedef int (*nova_primitive_number_Nova_Short_native_static_Nova_numDigits)(nova_primitive_number_Nova_Short*, short);
typedef nova_Nova_String* (*nova_primitive_number_Nova_Short_native_static_Nova_toString)(nova_primitive_number_Nova_Short*, short);
typedef long_long (*nova_primitive_number_Nova_Short_native_static_Nova_hashCodeLong)(nova_primitive_number_Nova_Short*, short);
typedef long_long (*nova_primitive_number_Nova_Short_native_static_Nova_plus)(nova_primitive_number_Nova_Short*, short, long_long);
typedef nova_primitive_number_Nova_Short* (*nova_primitive_number_Nova_Short_native_Nova_construct)(nova_primitive_number_Nova_Short*, short);

typedef struct nova_primitive_number_native_Short
{
nova_primitive_number_Nova_Short_native_Nova_construct Short;
} nova_primitive_number_native_Short;

typedef nova_process_Nova_Process* (*nova_process_Nova_Process_native_Nova_construct)(nova_process_Nova_Process*, nova_io_Nova_FileReader*);

typedef struct nova_process_native_Process
{
nova_process_Nova_Process_native_Nova_construct Process;
} nova_process_native_Process;

typedef nova_regex_Nova_Match* (*nova_regex_Nova_Match_native_Nova_construct)(nova_regex_Nova_Match*, nova_Nova_String*, int, int);

typedef struct nova_regex_native_Match
{
nova_regex_Nova_Match_native_Nova_construct Match;
} nova_regex_native_Match;

typedef nova_regex_Nova_Pattern* (*nova_regex_Nova_Pattern_native_Nova_construct)(nova_regex_Nova_Pattern*, nova_Nova_String*);

typedef struct nova_regex_native_Pattern
{
nova_regex_Nova_Pattern_native_Nova_construct Pattern;
} nova_regex_native_Pattern;

typedef char (*nova_regex_Nova_Regex_native0_static_Nova_containsMatch)(nova_regex_Nova_Regex*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef char (*nova_regex_Nova_Regex_native1_static_Nova_containsMatch)(nova_regex_Nova_Regex*, nova_Nova_String*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_regex_Nova_Regex_native0_static_Nova_getMatches)(nova_regex_Nova_Regex*, nova_regex_Nova_Pattern*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_regex_Nova_Regex_native_static_Nova_getMatches)(nova_regex_Nova_Regex*, nova_Nova_String*, nova_Nova_String*);

typedef struct nova_regex_native_Regex
{
} nova_regex_native_Regex;

typedef nova_Nova_String* (*nova_security_Nova_MD5_native_static_Nova_encrypt)(nova_security_Nova_MD5*, nova_Nova_String*);

typedef struct nova_security_native_MD5
{
} nova_security_native_MD5;

typedef nova_Nova_String* (*nova_security_Nova_Sha256_native_Nova_digest)(nova_security_Nova_Sha256*, nova_Nova_String*);

typedef struct nova_security_native_Sha256
{
nova_security_Nova_Sha256_native_Nova_digest digest;
} nova_security_native_Sha256;

typedef void (*nova_serialization_Nova_JsonSerializer_native_Nova_serialize)(nova_serialization_Nova_JsonSerializer*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_serialization_Nova_JsonSerializer_native0_Nova_parse)(nova_serialization_Nova_JsonSerializer*, nova_io_Nova_File*);
typedef nova_Nova_Object* (*nova_serialization_Nova_JsonSerializer_native1_Nova_parse)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_serialization_Nova_JsonSerializer_native_Nova_parseArray)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef char (*nova_serialization_Nova_JsonSerializer_native_Nova_isObject)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef char (*nova_serialization_Nova_JsonSerializer_native_Nova_isArray)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef char (*nova_serialization_Nova_JsonSerializer_native_Nova_isSingleQuoteString)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef char (*nova_serialization_Nova_JsonSerializer_native_Nova_isDoubleQuoteString)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef char (*nova_serialization_Nova_JsonSerializer_native_Nova_isString)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef nova_datastruct_Nova_HashMap* (*nova_serialization_Nova_JsonSerializer_native0_Nova_parseObject)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*);
typedef nova_datastruct_Nova_HashMap* (*nova_serialization_Nova_JsonSerializer_native1_Nova_parseObject)(nova_serialization_Nova_JsonSerializer*, nova_Nova_String*, nova_datastruct_Nova_HashMap*);

typedef struct nova_serialization_native_JsonSerializer
{
nova_serialization_Nova_JsonSerializer_native_Nova_serialize serialize;
nova_serialization_Nova_JsonSerializer_native0_Nova_parse parse__nova_io_File;
nova_serialization_Nova_JsonSerializer_native1_Nova_parse parse__nova_String;
nova_serialization_Nova_JsonSerializer_native_Nova_parseArray parseArray;
nova_serialization_Nova_JsonSerializer_native_Nova_isObject isObject;
nova_serialization_Nova_JsonSerializer_native_Nova_isArray isArray;
nova_serialization_Nova_JsonSerializer_native_Nova_isSingleQuoteString isSingleQuoteString;
nova_serialization_Nova_JsonSerializer_native_Nova_isDoubleQuoteString isDoubleQuoteString;
nova_serialization_Nova_JsonSerializer_native_Nova_isString isString;
nova_serialization_Nova_JsonSerializer_native0_Nova_parseObject parseObject__nova_String;
nova_serialization_Nova_JsonSerializer_native1_Nova_parseObject parseObject__nova_String__nova_datastruct_HashMap;
} nova_serialization_native_JsonSerializer;

typedef struct nova_serialization_native_InvalidParseException
{
} nova_serialization_native_InvalidParseException;
typedef nova_serialization_Nova_MissingMatchingTokenException* (*nova_serialization_Nova_MissingMatchingTokenException_native_Nova_construct)(nova_serialization_Nova_MissingMatchingTokenException*, char);

typedef struct nova_serialization_native_MissingMatchingTokenException
{
nova_serialization_Nova_MissingMatchingTokenException_native_Nova_construct MissingMatchingTokenException;
} nova_serialization_native_MissingMatchingTokenException;

typedef char (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_containsAllWhitespaceAfter)(nova_Nova_String*, int, int);
typedef nova_datastruct_A_Int_Nova_Tuple22Int* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_getArrayAccesses)(nova_Nova_String*);
typedef char (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_containsWord)(nova_Nova_String*, nova_Nova_String*, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextWordIndex)(nova_Nova_String*, nova_Nova_String*, int, int);
typedef nova_Nova_String* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextWord)(nova_Nova_String*, int, int, nova_Nova_String*);
typedef char (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextNonWhitespaceChar)(nova_Nova_String*, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextNonWhitespaceIndex)(nova_Nova_String*, int, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextWhitespaceIndex)(nova_Nova_String*, int, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextIndexThatDoesntContain)(nova_Nova_String*, nova_datastruct_list_Char_Nova_Array1Char*, int, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextIndexThatContains)(nova_Nova_String*, nova_datastruct_list_Char_Nova_Array1Char*, int, int, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextLetterIndex)(nova_Nova_String*, int, int, int, int);
typedef char (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_isSurroundedByQuotes)(nova_Nova_String*);
typedef nova_Nova_String* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_removeSurroundingQuotes)(nova_Nova_String*);
typedef char (*nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_containsString)(nova_Nova_String*, nova_datastruct_list_Nova_Array*, int);
typedef char (*nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_containsString)(nova_Nova_String*, nova_Nova_String*, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_static_Nova_defaultCharacterCheck)(nova_serialization_Nova_SyntaxStringFunctions*, nova_Nova_String*, char, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findEndingChar)(nova_Nova_String*, char, int, int, nova_serialization_Nova_SyntaxStringFunctions_closure1369_Nova_advance nova_serialization_Nova_SyntaxStringFunctions_Nova_advance, void* nova_serialization_Nova_SyntaxStringFunctions_ref_Nova_advance, void* nova_serialization_Nova_SyntaxStringFunctions_context_Nova_advance, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findEndingQuote)(nova_Nova_String*, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findEndingSingleQuote)(nova_Nova_String*, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_findEndingMatch)(nova_Nova_String*, int, char, char, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_findEndingMatch)(nova_Nova_String*, int, nova_Nova_String*, nova_Nova_String*, int, int, int);
typedef nova_datastruct_list_Nova_Array* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_splitAtDotOperator)(nova_Nova_String*, nova_datastruct_list_Nova_Array*);
typedef nova_datastruct_list_Nova_Array* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_splitValues)(nova_Nova_String*);
typedef nova_datastruct_list_Nova_Array* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_splitAtCommas)(nova_Nova_String*, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_findCharOnTopLevel)(nova_Nova_String*, char, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_findCharOnTopLevel)(nova_Nova_String*, nova_datastruct_list_Char_Nova_Array1Char*, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findWordOnTopLevel)(nova_Nova_String*, nova_Nova_String*, int, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_findStringOnTopLevel)(nova_Nova_String*, nova_Nova_String*, int, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_findStringOnTopLevel)(nova_Nova_String*, nova_datastruct_list_Nova_Array*, int, int, int);
typedef nova_Nova_String* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findGroupedSymbols)(nova_Nova_String*, int, int);
typedef nova_Nova_String* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findGroupedChars)(nova_Nova_String*, nova_datastruct_list_Char_Nova_Array1Char*, int, int);
typedef nova_Nova_String* (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_searchGenericType)(nova_Nova_String*, int, int);
typedef int (*nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findDotOperatorIndex)(nova_Nova_String*, int);

typedef struct nova_serialization_native_SyntaxStringFunctions
{
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_containsAllWhitespaceAfter containsAllWhitespaceAfter;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_getArrayAccesses getArrayAccesses;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_containsWord containsWord;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextWordIndex nextWordIndex;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextWord nextWord;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextNonWhitespaceChar nextNonWhitespaceChar;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextNonWhitespaceIndex nextNonWhitespaceIndex;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextWhitespaceIndex nextWhitespaceIndex;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextIndexThatDoesntContain nextIndexThatDoesntContain;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextIndexThatContains nextIndexThatContains;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_nextLetterIndex nextLetterIndex;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_isSurroundedByQuotes isSurroundedByQuotes;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_removeSurroundingQuotes removeSurroundingQuotes;
nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_containsString containsString__nova_datastruct_list_Array__nova_primitive_number_Int;
nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_containsString containsString__nova_String__nova_primitive_number_Int;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findEndingChar findEndingChar;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findEndingQuote findEndingQuote;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findEndingSingleQuote findEndingSingleQuote;
nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_findEndingMatch findEndingMatch__nova_primitive_number_Int__nova_primitive_number_Char__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_number_Char;
nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_findEndingMatch findEndingMatch__nova_primitive_number_Int__nova_String__nova_String__nova_primitive_number_Int__nova_primitive_number_Char__nova_primitive_number_Int;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_splitAtDotOperator splitAtDotOperator;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_splitValues splitValues;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_splitAtCommas splitAtCommas;
nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_findCharOnTopLevel findCharOnTopLevel__nova_primitive_number_Char__nova_primitive_number_Int__nova_primitive_Bool;
nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_findCharOnTopLevel findCharOnTopLevel__nova_datastruct_list_Char_Array1Char__nova_primitive_number_Int__nova_primitive_Bool;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findWordOnTopLevel findWordOnTopLevel;
nova_serialization_Nova_SyntaxStringFunctions_native0_Nova_findStringOnTopLevel findStringOnTopLevel__nova_String__nova_primitive_number_Int__nova_primitive_Bool__nova_primitive_number_Int;
nova_serialization_Nova_SyntaxStringFunctions_native1_Nova_findStringOnTopLevel findStringOnTopLevel__nova_datastruct_list_Array__nova_primitive_number_Int__nova_primitive_Bool__nova_primitive_number_Int;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findGroupedSymbols findGroupedSymbols;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findGroupedChars findGroupedChars;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_searchGenericType searchGenericType;
nova_serialization_Nova_SyntaxStringFunctions_native_Nova_findDotOperatorIndex findDotOperatorIndex;
} nova_serialization_native_SyntaxStringFunctions;

typedef nova_star_Nova_Button* (*nova_star_Nova_Button_native_Nova_construct)(nova_star_Nova_Button*, int, int, int, int, nova_Nova_String*, int, int);

typedef struct nova_star_native_Button
{
nova_star_Nova_Button_native_Nova_construct Button;
} nova_star_native_Button;

typedef nova_star_Nova_ImmutableColor* (*nova_star_Nova_Color_native_Nova_toImmutable)(nova_star_Nova_Color*);
typedef nova_star_Nova_Color* (*nova_star_Nova_Color_native1_Nova_construct)(nova_star_Nova_Color*, int);
typedef nova_star_Nova_Color* (*nova_star_Nova_Color_native2_Nova_construct)(nova_star_Nova_Color*, int, int, int);

typedef struct nova_star_native_Color
{
nova_star_Nova_Color_native_Nova_toImmutable toImmutable;
nova_star_Nova_Color_native1_Nova_construct Color__nova_primitive_number_Int;
nova_star_Nova_Color_native2_Nova_construct Color__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_star_native_Color;

typedef nova_star_Nova_Frame* (*nova_star_Nova_Frame_native_Nova_construct)(nova_star_Nova_Frame*, nova_star_Nova_Window*);

typedef struct nova_star_native_Frame
{
nova_star_Nova_Frame_native_Nova_construct Frame;
} nova_star_native_Frame;

typedef nova_star_Nova_ImmutableColor* (*nova_star_Nova_ImmutableColor_native0_Nova_construct)(nova_star_Nova_ImmutableColor*, nova_star_Nova_Color*);
typedef nova_star_Nova_ImmutableColor* (*nova_star_Nova_ImmutableColor_native2_Nova_construct)(nova_star_Nova_ImmutableColor*, int);
typedef nova_star_Nova_ImmutableColor* (*nova_star_Nova_ImmutableColor_native3_Nova_construct)(nova_star_Nova_ImmutableColor*, int, int, int);

typedef struct nova_star_native_ImmutableColor
{
nova_star_Nova_ImmutableColor_native0_Nova_construct ImmutableColor__nova_star_Color;
nova_star_Nova_ImmutableColor_native2_Nova_construct ImmutableColor__nova_primitive_number_Int;
nova_star_Nova_ImmutableColor_native3_Nova_construct ImmutableColor__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
} nova_star_native_ImmutableColor;

typedef nova_star_Nova_Label* (*nova_star_Nova_Label_native_Nova_construct)(nova_star_Nova_Label*, nova_Nova_String*, int, int);

typedef struct nova_star_native_Label
{
nova_star_Nova_Label_native_Nova_construct Label;
} nova_star_native_Label;

typedef nova_star_Nova_Panel* (*nova_star_Nova_Panel_native_Nova_construct)(nova_star_Nova_Panel*, int, int, int, int);

typedef struct nova_star_native_Panel
{
nova_star_Nova_Panel_native_Nova_construct Panel;
} nova_star_native_Panel;


typedef struct nova_star_native_Screen
{
} nova_star_native_Screen;


typedef struct nova_star_native_ScrollBar
{
} nova_star_native_ScrollBar;

typedef void (*nova_star_Nova_UIAction_native_Nova_onAction)(nova_star_Nova_UIAction*);
typedef void (*nova_star_Nova_UIAction_native_Nova_addActionListener)(nova_star_Nova_UIAction*, nova_star_Nova_UIAction_closure1377_Nova_func nova_star_Nova_UIAction_Nova_func, void* nova_star_Nova_UIAction_ref_Nova_func, void* nova_star_Nova_UIAction_context_Nova_func);

typedef struct nova_star_native_UIAction
{
nova_star_Nova_UIAction_native_Nova_onAction onAction;
nova_star_Nova_UIAction_native_Nova_addActionListener addActionListener;
} nova_star_native_UIAction;

typedef void (*nova_star_Nova_UIComponent_native_Nova_onAdded)(nova_star_Nova_UIComponent*);
typedef void (*nova_star_Nova_UIComponent_native_Nova_onRemoved)(nova_star_Nova_UIComponent*);
typedef void (*nova_star_Nova_UIComponent_native_Nova_draw)(nova_star_Nova_UIComponent*);
typedef void (*nova_star_Nova_UIComponent_native_Nova_searchActionTarget)(nova_star_Nova_UIComponent*, int);
typedef void (*nova_star_Nova_UIComponent_native_Nova_paint)(nova_star_Nova_UIComponent*);
typedef void (*nova_star_Nova_UIComponent_native_Nova_repaint)(nova_star_Nova_UIComponent*);
typedef nova_star_Nova_UIComponent* (*nova_star_Nova_UIComponent_native_Nova_construct)(nova_star_Nova_UIComponent*, int, int);

typedef struct nova_star_native_UIComponent
{
nova_star_Nova_UIComponent_native_Nova_onAdded onAdded;
nova_star_Nova_UIComponent_native_Nova_onRemoved onRemoved;
nova_star_Nova_UIComponent_native_Nova_draw draw;
nova_star_Nova_UIComponent_native_Nova_searchActionTarget searchActionTarget;
nova_star_Nova_UIComponent_native_Nova_paint paint;
nova_star_Nova_UIComponent_native_Nova_repaint repaint;
nova_star_Nova_UIComponent_native_Nova_construct UIComponent;
} nova_star_native_UIComponent;

typedef void (*nova_star_Nova_UIParent_native_Nova_addChild)(nova_star_Nova_UIParent*, nova_star_Nova_UIComponent*);

typedef struct nova_star_native_UIParent
{
nova_star_Nova_UIParent_native_Nova_addChild addChild;
} nova_star_native_UIParent;

typedef nova_star_Nova_Window* (*nova_star_Nova_Window_native_Nova_show)(nova_star_Nova_Window*);
typedef void (*nova_star_Nova_Window_native_Nova_refreshPosition)(nova_star_Nova_Window*);
typedef nova_star_Nova_Window* (*nova_star_Nova_Window_native_Nova_center)(nova_star_Nova_Window*);
typedef void (*nova_star_Nova_Window_native_Nova_repaint)(nova_star_Nova_Window*);
typedef nova_star_Nova_Window* (*nova_star_Nova_Window_native_Nova_construct)(nova_star_Nova_Window*, nova_Nova_String*, int, int, int, int);

typedef struct nova_star_native_Window
{
nova_star_Nova_Window_native_Nova_show show;
nova_star_Nova_Window_native_Nova_refreshPosition refreshPosition;
nova_star_Nova_Window_native_Nova_center center;
nova_star_Nova_Window_native_Nova_repaint repaint;
nova_star_Nova_Window_native_Nova_construct Window;
} nova_star_native_Window;

typedef nova_star_Nova_WindowThread* (*nova_star_Nova_WindowThread_native_Nova_show)(nova_star_Nova_WindowThread*);
typedef nova_star_Nova_WindowThread* (*nova_star_Nova_WindowThread_native_Nova_construct)(nova_star_Nova_WindowThread*, nova_star_Nova_Window*);

typedef struct nova_star_native_WindowThread
{
nova_star_Nova_WindowThread_native_Nova_show show;
nova_star_Nova_WindowThread_native_Nova_construct WindowThread;
} nova_star_native_WindowThread;

typedef nova_thread_Nova_Thread* (*nova_thread_Nova_Thread_native_Nova_start)(nova_thread_Nova_Thread*);
typedef void (*nova_thread_Nova_Thread_native_Nova_join)(nova_thread_Nova_Thread*);
typedef void (*nova_thread_Nova_Thread_native_Nova_kill)(nova_thread_Nova_Thread*);
typedef void (*nova_thread_Nova_Thread_native_static_Nova_sleep)(nova_thread_Nova_Thread*, long_long);
typedef void (*nova_thread_Nova_Thread_native_static_Nova_lock)(nova_thread_Nova_Thread*);
typedef void (*nova_thread_Nova_Thread_native_static_Nova_unlock)(nova_thread_Nova_Thread*);
typedef void (*nova_thread_Nova_Thread_native_static_Nova_sync)(nova_thread_Nova_Thread*, nova_thread_Nova_Thread_closure1411_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* nova_thread_Nova_Thread_context_Nova_action);
typedef void (*nova_thread_Nova_Thread_native_Nova_run)(nova_thread_Nova_Thread*);
typedef nova_thread_Nova_Thread* (*nova_thread_Nova_Thread_native1_Nova_construct)(nova_thread_Nova_Thread*, nova_thread_Nova_Thread_closure1402_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* nova_thread_Nova_Thread_context_Nova_action);

typedef struct nova_thread_native_Thread
{
nova_thread_Nova_Thread_native_Nova_start start;
nova_thread_Nova_Thread_native_Nova_join join;
nova_thread_Nova_Thread_native_Nova_kill kill;
nova_thread_Nova_Thread_native_Nova_run run;
nova_thread_Nova_Thread_native1_Nova_construct Thread__void;
} nova_thread_native_Thread;

typedef nova_Nova_Object* (*nova_thread_Nova_ThreadLocal_native_Nova_get)(nova_thread_Nova_ThreadLocal*);
typedef nova_Nova_Object* (*nova_thread_Nova_ThreadLocal_native_Nova_set)(nova_thread_Nova_ThreadLocal*, nova_Nova_Object*);
typedef nova_Nova_Object* (*nova_thread_Nova_ThreadLocal_native_Nova_remove)(nova_thread_Nova_ThreadLocal*);
typedef nova_thread_Nova_ThreadLocal* (*nova_thread_Nova_ThreadLocal_native_Nova_construct)(nova_thread_Nova_ThreadLocal*, nova_Nova_Object*);

typedef struct nova_thread_native_ThreadLocal
{
nova_thread_Nova_ThreadLocal_native_Nova_get get;
nova_thread_Nova_ThreadLocal_native_Nova_set set;
nova_thread_Nova_ThreadLocal_native_Nova_remove remove;
nova_thread_Nova_ThreadLocal_native_Nova_construct ThreadLocal;
} nova_thread_native_ThreadLocal;

typedef void (*nova_thread_Nova_UncaughtExceptionHandler_native_Nova_uncaughtException)(nova_thread_Nova_UncaughtExceptionHandler*, nova_thread_Nova_Thread*, nova_exception_Nova_Exception*);

typedef struct nova_thread_native_UncaughtExceptionHandler
{
nova_thread_Nova_UncaughtExceptionHandler_native_Nova_uncaughtException uncaughtException;
} nova_thread_native_UncaughtExceptionHandler;

typedef nova_thread_async_Nova_Task* (*nova_thread_async_Nova_Async_native_static_Nova_execute)(nova_thread_async_Nova_Async*, nova_thread_async_Nova_Async_closure1412_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* nova_thread_async_Nova_Async_context_Nova_func);
typedef nova_thread_async_Nova_Task* (*nova_thread_async_Nova_Async_native_static_Nova_request)(nova_thread_async_Nova_Async*, nova_thread_async_Nova_Async_closure1415_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* nova_thread_async_Nova_Async_context_Nova_func);

typedef struct nova_thread_async_native_Async
{
} nova_thread_async_native_Async;

typedef void (*nova_thread_async_Nova_Task_native_Nova_waitForCompletion)(nova_thread_async_Nova_Task*);
typedef nova_Nova_Object* (*nova_thread_async_Nova_Task_native_Nova_waitForResult)(nova_thread_async_Nova_Task*);
typedef nova_thread_async_Nova_Task* (*nova_thread_async_Nova_Task_native_Nova_construct)(nova_thread_async_Nova_Task*, nova_thread_Nova_Thread*);

typedef struct nova_thread_async_native_Task
{
nova_thread_async_Nova_Task_native_Nova_waitForCompletion waitForCompletion;
nova_thread_async_Nova_Task_native_Nova_waitForResult waitForResult;
nova_thread_async_Nova_Task_native_Nova_construct Task;
} nova_thread_async_native_Task;


typedef struct nova_time_native_BoundedInterval
{
} nova_time_native_BoundedInterval;


typedef struct nova_time_native_BoundlessInterval
{
} nova_time_native_BoundlessInterval;

typedef struct nova_time_native_InfiniteIntervalException
{
} nova_time_native_InfiniteIntervalException;


typedef struct nova_time_native_CumulativeTimer
{
} nova_time_native_CumulativeTimer;

typedef void (*nova_time_Nova_Date_native_Nova_decodeDate)(nova_time_Nova_Date*, nova_Nova_String*, nova_Nova_String*);
typedef void (*nova_time_Nova_Date_native_Nova_updateTime)(nova_time_Nova_Date*);
typedef nova_Nova_String* (*nova_time_Nova_Date_native_Nova_formatDate)(nova_time_Nova_Date*, nova_Nova_String*, int, int, int, int, int, int);

typedef struct nova_time_native_Date
{
nova_time_Nova_Date_native_Nova_decodeDate decodeDate;
nova_time_Nova_Date_native_Nova_updateTime updateTime;
nova_time_Nova_Date_native_Nova_formatDate formatDate;
} nova_time_native_Date;

typedef void (*nova_time_Nova_DateTime_native_Nova_addMonth)(nova_time_Nova_DateTime*);
typedef void (*nova_time_Nova_DateTime_native_Nova_addMonths)(nova_time_Nova_DateTime*, int);
typedef void (*nova_time_Nova_DateTime_native_Nova_subtractMonth)(nova_time_Nova_DateTime*);
typedef void (*nova_time_Nova_DateTime_native_Nova_subtractMonths)(nova_time_Nova_DateTime*, int);
typedef void (*nova_time_Nova_DateTime_native_Nova_addYear)(nova_time_Nova_DateTime*);
typedef void (*nova_time_Nova_DateTime_native_Nova_addYears)(nova_time_Nova_DateTime*, int);
typedef void (*nova_time_Nova_DateTime_native_Nova_subtractYear)(nova_time_Nova_DateTime*);
typedef void (*nova_time_Nova_DateTime_native_Nova_subtractYears)(nova_time_Nova_DateTime*, int);
typedef nova_Nova_String* (*nova_time_Nova_DateTime_native1_Nova_toString)(nova_time_Nova_DateTime*, nova_Nova_String*);
typedef nova_time_Nova_DateTime* (*nova_time_Nova_DateTime_native0_Nova_construct)(nova_time_Nova_DateTime*, nova_Nova_String*, nova_Nova_String*);
typedef nova_time_Nova_DateTime* (*nova_time_Nova_DateTime_native1_Nova_construct)(nova_time_Nova_DateTime*, long_long);
typedef nova_time_Nova_DateTime* (*nova_time_Nova_DateTime_native2_Nova_construct)(nova_time_Nova_DateTime*, int, int, int, int, int, int, int);
typedef nova_time_Nova_DateTime* (*nova_time_Nova_DateTime_native3_Nova_construct)(nova_time_Nova_DateTime*, nova_time_Nova_DateTime*);

typedef struct nova_time_native_DateTime
{
nova_time_Nova_DateTime_native_Nova_addMonth addMonth;
nova_time_Nova_DateTime_native_Nova_addMonths addMonths;
nova_time_Nova_DateTime_native_Nova_subtractMonth subtractMonth;
nova_time_Nova_DateTime_native_Nova_subtractMonths subtractMonths;
nova_time_Nova_DateTime_native_Nova_addYear addYear;
nova_time_Nova_DateTime_native_Nova_addYears addYears;
nova_time_Nova_DateTime_native_Nova_subtractYear subtractYear;
nova_time_Nova_DateTime_native_Nova_subtractYears subtractYears;
nova_time_Nova_DateTime_native1_Nova_toString toString__nova_String;
nova_time_Nova_DateTime_native0_Nova_construct DateTime__nova_String__nova_String;
nova_time_Nova_DateTime_native1_Nova_construct DateTime__nova_primitive_number_Long;
nova_time_Nova_DateTime_native2_Nova_construct DateTime__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int__nova_primitive_number_Int;
nova_time_Nova_DateTime_native3_Nova_construct DateTime__nova_time_DateTime;
} nova_time_native_DateTime;

typedef struct nova_time_native_InvalidDateException
{
} nova_time_native_InvalidDateException;

typedef struct nova_time_native_InvalidDateFormatException
{
} nova_time_native_InvalidDateFormatException;
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getLeapYearCount)(nova_time_Nova_Calculator*, int, int);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getYearMillis)(nova_time_Nova_Calculator*, int);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getMonthMillis)(nova_time_Nova_Calculator*, int, int);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getDayMillis)(nova_time_Nova_Calculator*, int);
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getHourMillis)(nova_time_Nova_Calculator*, int);
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getMinuteMillis)(nova_time_Nova_Calculator*, int);
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getSecondMillis)(nova_time_Nova_Calculator*, int);
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getMillisecondMillis)(nova_time_Nova_Calculator*, int);
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getYear)(nova_time_Nova_Calculator*, long_long);
typedef int (*nova_time_Nova_Calculator_native_static_Nova_getDayOfMonth)(nova_time_Nova_Calculator*, long_long);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getHour)(nova_time_Nova_Calculator*, long_long);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getMinute)(nova_time_Nova_Calculator*, long_long);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getSecond)(nova_time_Nova_Calculator*, long_long);
typedef long_long (*nova_time_Nova_Calculator_native_static_Nova_getMillisecond)(nova_time_Nova_Calculator*, long_long);
typedef short (*nova_time_Nova_Calculator_native_static_Nova_getYearSize)(nova_time_Nova_Calculator*, int);
typedef nova_datastruct_list_Byte_Nova_Array1Byte* (*nova_time_Nova_Calculator_native_static_Nova_getMonthDays)(nova_time_Nova_Calculator*, int);
typedef nova_datastruct_list_Int_Nova_Array1Int* (*nova_time_Nova_Calculator_native_static_Nova_getYearAndDay)(nova_time_Nova_Calculator*, long_long);
typedef nova_datastruct_list_Int_Nova_Array1Int* (*nova_time_Nova_Calculator_native_static_Nova_getMonthAndDay)(nova_time_Nova_Calculator*, int, int);
typedef char (*nova_time_Nova_Calculator_native_static_Nova_isLeapYear)(nova_time_Nova_Calculator*, int);
typedef char (*nova_time_Nova_Calculator_native_static_Nova_isValidDayOfMonth)(nova_time_Nova_Calculator*, int, int, int);

typedef struct nova_time_native_Calculator
{
} nova_time_native_Calculator;

typedef nova_time_Nova_Interval* (*nova_time_Nova_Interval_native_Nova_getGap)(nova_time_Nova_Interval*, nova_time_Nova_Interval*);
typedef nova_time_Nova_Interval* (*nova_time_Nova_Interval_native_Nova_construct)(nova_time_Nova_Interval*, nova_time_Nova_DateTime*, nova_time_Nova_DateTime*);

typedef struct nova_time_native_Interval
{
nova_time_Nova_Interval_native_Nova_getGap getGap;
nova_time_Nova_Interval_native_Nova_construct Interval;
} nova_time_native_Interval;

typedef struct nova_time_native_IntervalException
{
} nova_time_native_IntervalException;

typedef struct nova_time_native_InvalidIntervalException
{
} nova_time_native_InvalidIntervalException;
typedef nova_time_Nova_NoGapException* (*nova_time_Nova_NoGapException_native_Nova_construct)(nova_time_Nova_NoGapException*, nova_time_Nova_Interval*, nova_time_Nova_Interval*);

typedef struct nova_time_native_NoGapException
{
nova_time_Nova_NoGapException_native_Nova_construct NoGapException;
} nova_time_native_NoGapException;


typedef struct nova_time_native_Time
{
} nova_time_native_Time;

typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_start)(nova_time_Nova_Timer*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_stop)(nova_time_Nova_Timer*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_Nova_reset)(nova_time_Nova_Timer*);
typedef nova_time_Nova_Timer* (*nova_time_Nova_Timer_native_static_Nova_time)(nova_time_Nova_Timer*, nova_time_Nova_Timer_closure1418_Nova_action nova_time_Nova_Timer_Nova_action, void* nova_time_Nova_Timer_ref_Nova_action, void* nova_time_Nova_Timer_context_Nova_action, nova_time_Nova_Timer_closure1419_Nova_callback nova_time_Nova_Timer_Nova_callback, void* nova_time_Nova_Timer_ref_Nova_callback, void* nova_time_Nova_Timer_context_Nova_callback);

typedef struct nova_time_native_Timer
{
nova_time_Nova_Timer_native_Nova_start start;
nova_time_Nova_Timer_native_Nova_stop stop;
nova_time_Nova_Timer_native_Nova_reset reset;
} nova_time_native_Timer;

typedef nova_web_js_json_Nova_Json* (*nova_web_js_json_Nova_Json_native_Nova_construct)(nova_web_js_json_Nova_Json*);

typedef struct nova_web_js_json_native_Json
{
nova_web_js_json_Nova_Json_native_Nova_construct Json;
} nova_web_js_json_native_Json;

typedef void (*nova_web_svg_Nova_Svg_native_Nova_generateOutput)(nova_web_svg_Nova_Svg*, nova_io_Nova_FileWriter*);
typedef void (*nova_web_svg_Nova_Svg_native_Nova_generateHTMLOutput)(nova_web_svg_Nova_Svg*, nova_io_Nova_FileWriter*);

typedef struct nova_web_svg_native_Svg
{
nova_web_svg_Nova_Svg_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_Svg_native_Nova_generateHTMLOutput generateHTMLOutput;
} nova_web_svg_native_Svg;

typedef nova_web_svg_Nova_SvgCircle* (*nova_web_svg_Nova_SvgCircle_native_Nova_construct)(nova_web_svg_Nova_SvgCircle*, double, double, int);

typedef struct nova_web_svg_native_SvgCircle
{
nova_web_svg_Nova_SvgCircle_native_Nova_construct SvgCircle;
} nova_web_svg_native_SvgCircle;

typedef void (*nova_web_svg_Nova_SvgComponent_native_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_io_Nova_FileWriter*);

typedef struct nova_web_svg_native_SvgComponent
{
nova_web_svg_Nova_SvgComponent_native_Nova_generateOutput generateOutput;
} nova_web_svg_native_SvgComponent;

typedef void (*nova_web_svg_Nova_SvgComponentList_native_Nova_generateOutput)(nova_web_svg_Nova_SvgComponentList*, nova_io_Nova_FileWriter*);
typedef void (*nova_web_svg_Nova_SvgComponentList_native_Nova_addChild)(nova_web_svg_Nova_SvgComponentList*, nova_web_svg_Nova_SvgComponent*);

typedef struct nova_web_svg_native_SvgComponentList
{
nova_web_svg_Nova_SvgComponentList_native_Nova_generateOutput generateOutput;
nova_web_svg_Nova_SvgComponentList_native_Nova_addChild addChild;
} nova_web_svg_native_SvgComponentList;

typedef nova_web_svg_Nova_SvgComponentNode* (*nova_web_svg_Nova_SvgComponentNode_native_Nova_construct)(nova_web_svg_Nova_SvgComponentNode*, nova_web_svg_Nova_SvgComponent*, nova_web_svg_Nova_SvgComponentNode*);

typedef struct nova_web_svg_native_SvgComponentNode
{
nova_web_svg_Nova_SvgComponentNode_native_Nova_construct SvgComponentNode;
} nova_web_svg_native_SvgComponentNode;


typedef struct nova_web_svg_native_SvgMainComponent
{
} nova_web_svg_native_SvgMainComponent;

typedef nova_web_svg_no3_Nova_No3Select* (*nova_web_svg_no3_Nova_No3_native_static_Nova_select)(nova_web_svg_no3_Nova_No3*, nova_Nova_String*);
typedef nova_web_svg_no3_Nova_No3SelectAll* (*nova_web_svg_no3_Nova_No3_native_static_Nova_selectAll)(nova_web_svg_no3_Nova_No3*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3
{
} nova_web_svg_no3_native_No3;

typedef nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_native_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*);

typedef struct nova_web_svg_no3_native_No3Node
{
nova_web_svg_no3_Nova_No3Node_native_Nova_toJs toJs;
} nova_web_svg_no3_native_No3Node;

typedef nova_web_svg_no3_Nova_No3Select* (*nova_web_svg_no3_Nova_No3Select_native_Nova_construct)(nova_web_svg_no3_Nova_No3Select*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3Select
{
nova_web_svg_no3_Nova_No3Select_native_Nova_construct No3Select;
} nova_web_svg_no3_native_No3Select;

typedef nova_web_svg_no3_Nova_No3SelectAll* (*nova_web_svg_no3_Nova_No3SelectAll_native_Nova_construct)(nova_web_svg_no3_Nova_No3SelectAll*, nova_Nova_String*);

typedef struct nova_web_svg_no3_native_No3SelectAll
{
nova_web_svg_no3_Nova_No3SelectAll_native_Nova_construct No3SelectAll;
} nova_web_svg_no3_native_No3SelectAll;


typedef struct nova_env
{
plumbercalc_pipes_native_Fitting plumbercalc_pipes_Fitting;
plumbercalc_pipes_native_Fraction plumbercalc_pipes_Fraction;
plumbercalc_pipes_native_Pipe plumbercalc_pipes_Pipe;
plumbercalc_pipes_native_TeeFitting plumbercalc_pipes_TeeFitting;
plumbercalc_pipes_native_Units plumbercalc_pipes_Units;
plumbercalc_tests_native_AllTestsRunner plumbercalc_tests_AllTestsRunner;
plumbercalc_tests_native_FractionTests plumbercalc_tests_FractionTests;
plumbercalc_tests_native_PipeTests plumbercalc_tests_PipeTests;
plumbercalc_tests_native_UnitConversionTests plumbercalc_tests_UnitConversionTests;
example_native_Animal example_Animal;
example_native_ArrayDemo example_ArrayDemo;
example_native_BodyBuilder example_BodyBuilder;
example_native_ClosureDemo example_ClosureDemo;
example_native_Dog example_Dog;
example_native_ExceptionHandlingDemo example_ExceptionHandlingDemo;
example_native_FileTest example_FileTest;
example_native_GenericDemo example_GenericDemo;
example_native_HashMapDemo example_HashMapDemo;
example_native_HashSetDemo example_HashSetDemo;
example_native_IntegerTest example_IntegerTest;
example_native_Lab example_Lab;
example_native_MathDemo example_MathDemo;
example_native_NestTest example_NestTest;
example_native_NonWholeDivisionException example_NonWholeDivisionException;
example_native_Person example_Person;
example_native_Polygon example_Polygon;
example_native_PolymorphismDemo example_PolymorphismDemo;
example_native_QueueDemo example_QueueDemo;
example_native_Spider example_Spider;
example_native_Square example_Square;
example_native_SvgChart example_SvgChart;
example_native_SvgFractal example_SvgFractal;
example_native_T1 example_T1;
example_native_T2 example_T2;
example_native_Test example_Test;
example_native_ThreadDemo example_ThreadDemo;
example_native_ThreadDemoImplementation example_ThreadDemoImplementation;
example_ackermann_native_Ackermann example_ackermann_Ackermann;
example_copy_native_Dog example_copy_Dog;
example_database_native_DatabaseDemo example_database_DatabaseDemo;
example_network_native_ClientDemo example_network_ClientDemo;
example_network_native_ConnectionThread example_network_ConnectionThread;
example_network_native_OutputThread example_network_OutputThread;
example_network_native_ServerDemo example_network_ServerDemo;
stabilitytest_native_AssignmentStability stabilitytest_AssignmentStability;
stabilitytest_native_BoundedIntervalStability stabilitytest_BoundedIntervalStability;
stabilitytest_native_BoundlessIntervalStability stabilitytest_BoundlessIntervalStability;
stabilitytest_native_ClassWithProperties stabilitytest_ClassWithProperties;
stabilitytest_native_ClientThread stabilitytest_ClientThread;
stabilitytest_native_ClosureStability stabilitytest_ClosureStability;
stabilitytest_native_ExceptionStability stabilitytest_ExceptionStability;
stabilitytest_native_ExternalInnerClassStability stabilitytest_ExternalInnerClassStability;
stabilitytest_native_FancyOutputStreamTests stabilitytest_FancyOutputStreamTests;
stabilitytest_native_FileStability stabilitytest_FileStability;
stabilitytest_native_FirstClassFunctionStability stabilitytest_FirstClassFunctionStability;
stabilitytest_native_InnerClassStability stabilitytest_InnerClassStability;
stabilitytest_native_MyOuter stabilitytest_MyOuter;
stabilitytest_native_MyInner stabilitytest_MyInner;
stabilitytest_native_IntervalStability stabilitytest_IntervalStability;
stabilitytest_native_LambdaStability stabilitytest_LambdaStability;
stabilitytest_native_LibraryLoadingStability stabilitytest_LibraryLoadingStability;
stabilitytest_native_NetworkStability stabilitytest_NetworkStability;
stabilitytest_native_Node stabilitytest_Node;
stabilitytest_native_PolymorphicSubClass stabilitytest_PolymorphicSubClass;
stabilitytest_native_PolymorphicSuperClass stabilitytest_PolymorphicSuperClass;
stabilitytest_native_PolymorphismStability stabilitytest_PolymorphismStability;
stabilitytest_native_PrimitiveOverloadStability stabilitytest_PrimitiveOverloadStability;
stabilitytest_native_RegexStability stabilitytest_RegexStability;
stabilitytest_native_StabilityExceptionHandler stabilitytest_StabilityExceptionHandler;
stabilitytest_native_StabilityTest stabilitytest_StabilityTest;
stabilitytest_native_StabilityTestCase stabilitytest_StabilityTestCase;
stabilitytest_native_StabilityTestException stabilitytest_StabilityTestException;
stabilitytest_native_StaticImportStability stabilitytest_StaticImportStability;
stabilitytest_native_SyntaxStability stabilitytest_SyntaxStability;
stabilitytest_native_ThreadImplementation stabilitytest_ThreadImplementation;
stabilitytest_native_ThreadStability stabilitytest_ThreadStability;
stabilitytest_native_TimeStability stabilitytest_TimeStability;
stabilitytest_native_ToStringStability stabilitytest_ToStringStability;
stabilitytest_native_UnstableException stabilitytest_UnstableException;
novex_nest_native_InvalidAssertionException novex_nest_InvalidAssertionException;
novex_nest_native_Nest novex_nest_Nest;
novex_nest_native_NestException novex_nest_NestException;
novex_nest_native_TestCase novex_nest_TestCase;
novex_nest_native_TestResult novex_nest_TestResult;
novex_nest_native_TestRunner novex_nest_TestRunner;
novex_nest_native_TestRunnerModel novex_nest_TestRunnerModel;
novex_nest_native_TestSuite novex_nest_TestSuite;
novex_nest_native_TestSuiteRunner novex_nest_TestSuiteRunner;
novex_nest_native_TestSuiteRunnerModel novex_nest_TestSuiteRunnerModel;
novex_nest_ui_native_ResultBar novex_nest_ui_ResultBar;
novex_nest_ui_native_ResultWindow novex_nest_ui_ResultWindow;
novex_nest_native_EmbeddedNestTest novex_nest_EmbeddedNestTest;
novex_nest_native_TypeNestTest novex_nest_TypeNestTest;
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
nova_datastruct_native_HashMapIterator nova_datastruct_HashMapIterator;
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
nova_datastruct_list_native_OrderedList nova_datastruct_list_OrderedList;
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
nova_exception_native_NullAccessException nova_exception_NullAccessException;
nova_exception_native_StackTrace nova_exception_StackTrace;
nova_exception_native_UnimplementedForTargetException nova_exception_UnimplementedForTargetException;
nova_exception_native_UnimplementedOperationException nova_exception_UnimplementedOperationException;
nova_gc_native_GC nova_gc_GC;
nova_io_native_ClosedStreamException nova_io_ClosedStreamException;
nova_io_native_Console nova_io_Console;
nova_io_native_Curl nova_io_Curl;
nova_io_native_EmptyOutputStream nova_io_EmptyOutputStream;
nova_io_native_FancyOutputStream nova_io_FancyOutputStream;
nova_io_native_File nova_io_File;
nova_io_native_FileNotFoundException nova_io_FileNotFoundException;
nova_io_native_FileReader nova_io_FileReader;
nova_io_native_FileWriter nova_io_FileWriter;
nova_io_native_InputStream nova_io_InputStream;
nova_io_native_OutputStream nova_io_OutputStream;
nova_io_native_StreamReader nova_io_StreamReader;
nova_io_native_StringBuilder nova_io_StringBuilder;
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
nova_meta_native_Class nova_meta_Class;
nova_meta_native_Field nova_meta_Field;
nova_meta_native_FunctionMap nova_meta_FunctionMap;
nova_meta_native_GenericArgument nova_meta_GenericArgument;
nova_meta_native_GenericParameter nova_meta_GenericParameter;
nova_meta_native_InvalidLibraryException nova_meta_InvalidLibraryException;
nova_meta_native_Library nova_meta_Library;
nova_meta_native_PropertyMap nova_meta_PropertyMap;
nova_meta_native_Type nova_meta_Type;
nova_network_native_ClientSocket nova_network_ClientSocket;
nova_network_native_ConnectionSocket nova_network_ConnectionSocket;
nova_network_native_NetworkInputStream nova_network_NetworkInputStream;
nova_network_native_NetworkOutputStream nova_network_NetworkOutputStream;
nova_network_native_ServerSocket nova_network_ServerSocket;
nova_network_native_Socket nova_network_Socket;
nova_operators_native_EqualsOperator nova_operators_EqualsOperator;
nova_operators_native_GreaterThanOperator nova_operators_GreaterThanOperator;
nova_operators_native_GreaterThanOrEqualToOperator nova_operators_GreaterThanOrEqualToOperator;
nova_operators_native_LessThanOperator nova_operators_LessThanOperator;
nova_operators_native_LessThanOrEqualToOperator nova_operators_LessThanOrEqualToOperator;
nova_operators_native_MinusEqualsOperator nova_operators_MinusEqualsOperator;
nova_operators_native_MinusOperator nova_operators_MinusOperator;
nova_operators_native_MultiplyEqualsOperator nova_operators_MultiplyEqualsOperator;
nova_operators_native_MultiplyOperator nova_operators_MultiplyOperator;
nova_operators_native_NotEqualToOperator nova_operators_NotEqualToOperator;
nova_operators_native_PlusEqualsOperator nova_operators_PlusEqualsOperator;
nova_operators_native_PlusOperator nova_operators_PlusOperator;
nova_package_native_Package nova_package_Package;
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
nova_serialization_native_JsonSerializer nova_serialization_JsonSerializer;
nova_serialization_native_InvalidParseException nova_serialization_InvalidParseException;
nova_serialization_native_MissingMatchingTokenException nova_serialization_MissingMatchingTokenException;
nova_serialization_native_SyntaxStringFunctions nova_serialization_SyntaxStringFunctions;
nova_star_native_Button nova_star_Button;
nova_star_native_Color nova_star_Color;
nova_star_native_Frame nova_star_Frame;
nova_star_native_ImmutableColor nova_star_ImmutableColor;
nova_star_native_Label nova_star_Label;
nova_star_native_Panel nova_star_Panel;
nova_star_native_Screen nova_star_Screen;
nova_star_native_ScrollBar nova_star_ScrollBar;
nova_star_native_UIAction nova_star_UIAction;
nova_star_native_UIComponent nova_star_UIComponent;
nova_star_native_UIParent nova_star_UIParent;
nova_star_native_Window nova_star_Window;
nova_star_native_WindowThread nova_star_WindowThread;
nova_thread_native_Thread nova_thread_Thread;
nova_thread_native_ThreadLocal nova_thread_ThreadLocal;
nova_thread_native_UncaughtExceptionHandler nova_thread_UncaughtExceptionHandler;
nova_thread_async_native_Async nova_thread_async_Async;
nova_thread_async_native_Task nova_thread_async_Task;
nova_time_native_BoundedInterval nova_time_BoundedInterval;
nova_time_native_BoundlessInterval nova_time_BoundlessInterval;
nova_time_native_InfiniteIntervalException nova_time_InfiniteIntervalException;
nova_time_native_CumulativeTimer nova_time_CumulativeTimer;
nova_time_native_Date nova_time_Date;
nova_time_native_DateTime nova_time_DateTime;
nova_time_native_InvalidDateException nova_time_InvalidDateException;
nova_time_native_InvalidDateFormatException nova_time_InvalidDateFormatException;
nova_time_native_Calculator nova_time_Calculator;
nova_time_native_Interval nova_time_Interval;
nova_time_native_IntervalException nova_time_IntervalException;
nova_time_native_InvalidIntervalException nova_time_InvalidIntervalException;
nova_time_native_NoGapException nova_time_NoGapException;
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
} nova_env;

extern nova_env novaEnv;


#endif
