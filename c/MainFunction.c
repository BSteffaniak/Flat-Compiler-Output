#include "MainFunction.h"

void novaInitProgramData(void* this)
{
novaEnv.nova_Object.toString = nova_Nova_Object_VTable_val.nova_Nova_Object_virtual_Nova_toString;
novaEnv.nova_String.concat = nova_Nova_String_VTable_val.nova_Nova_String_virtual_Nova_concat;
novaEnv.nova_String.substring = nova_Nova_String_VTable_val.nova_Nova_String_virtual_Nova_substring;
novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Nova_Comparable_VTable_val.itable.nova_datastruct_Nova_Comparable_virtual1_Nova_compareTo;
novaEnv.nova_datastruct_HashMap.add = nova_datastruct_Nova_HashMap_VTable_val.nova_datastruct_Nova_HashMap_virtual_Nova_add;
novaEnv.nova_datastruct_list_ArrayFunctionMap.construct = nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMapArray0_Nova_construct;
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
novaEnv.nova_exception_ExceptionFunctionMap.construct = nova_exception_Nova_ExceptionFunctionMap_VTable_val.nova_exception_Nova_ExceptionFunctionMap_virtualfunctionMapException_Nova_construct;
novaEnv.nova_io_InputStream.readString = nova_io_Nova_InputStream_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readString;
novaEnv.nova_io_InputStream.readBytes = nova_io_Nova_InputStream_VTable_val.itable.nova_io_Nova_InputStream_virtual_Nova_readBytes;
novaEnv.nova_io_OutputStream.write = nova_io_Nova_OutputStream_VTable_val.itable.nova_io_Nova_OutputStream_virtual_Nova_write;
novaEnv.nova_math_NumericOperandFunctionMap.construct = nova_math_Nova_NumericOperandFunctionMap_VTable_val.nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMapNumericOperand_Nova_construct;
novaEnv.nova_math_logic_LogicalStatementFunctionMap.construct = nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.nova_math_logic_Nova_LogicalStatementFunctionMap_virtualfunctionMapLogicalStatement_Nova_construct;
novaEnv.nova_math_logic_StatementComponentFunctionMap.construct = nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.nova_math_logic_Nova_StatementComponentFunctionMap_virtualfunctionMapStatementComponent_Nova_construct;
novaEnv.nova_operators_EqualsOperator.equals__nova_Object = nova_operators_Nova_EqualsOperator_VTable_val.itable.nova_operators_Nova_EqualsOperator_virtual1_Nova_equals;
novaEnv.nova_operators_MinusEqualsOperator.minusEquals = nova_operators_Nova_MinusEqualsOperator_VTable_val.itable.nova_operators_Nova_MinusEqualsOperator_virtual_Nova_minusEquals;
novaEnv.nova_operators_MinusOperator.minus = nova_operators_Nova_MinusOperator_VTable_val.itable.nova_operators_Nova_MinusOperator_virtual_Nova_minus;
novaEnv.nova_operators_MultiplyEqualsOperator.multiplyEquals = nova_operators_Nova_MultiplyEqualsOperator_VTable_val.itable.nova_operators_Nova_MultiplyEqualsOperator_virtual_Nova_multiplyEquals;
novaEnv.nova_operators_MultiplyOperator.multiply__nova_Object = nova_operators_Nova_MultiplyOperator_VTable_val.itable.nova_operators_Nova_MultiplyOperator_virtual1_Nova_multiply;
novaEnv.nova_operators_PlusEqualsOperator.plusEquals__nova_Object = nova_operators_Nova_PlusEqualsOperator_VTable_val.itable.nova_operators_Nova_PlusEqualsOperator_virtual1_Nova_plusEquals;
novaEnv.nova_operators_PlusOperator.plus__nova_Object = nova_operators_Nova_PlusOperator_VTable_val.itable.nova_operators_Nova_PlusOperator_virtual1_Nova_plus;
novaEnv.nova_primitive_PrimitiveFunctionMap.construct = nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.nova_primitive_Nova_PrimitiveFunctionMap_virtualfunctionMapPrimitive_Nova_construct;
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
novaEnv.nova_thread_Thread.run = nova_thread_Nova_Thread_VTable_val.nova_thread_Nova_Thread_virtual_Nova_run;
novaEnv.nova_thread_UncaughtExceptionHandler.uncaughtException = nova_thread_Nova_UncaughtExceptionHandler_VTable_val.nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException;
novaEnv.nova_thread_UncaughtExceptionHandlerFunctionMap.construct = nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_VTable_val.nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_virtualfunctionMapUncaughtExceptionHandler_Nova_construct;
novaEnv.nova_time_Timer.stop = nova_time_Nova_Timer_VTable_val.nova_time_Nova_Timer_virtual_Nova_stop;
novaEnv.nova_time_TimerFunctionMap.construct = nova_time_Nova_TimerFunctionMap_VTable_val.nova_time_Nova_TimerFunctionMap_virtualfunctionMapTimer_Nova_construct;
novaEnv.nova_web_svg_SvgComponent.generateOutput = nova_web_svg_Nova_SvgComponent_VTable_val.nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput;
novaEnv.nova_web_svg_SvgComponentFunctionMap.construct = nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.nova_web_svg_Nova_SvgComponentFunctionMap_virtualfunctionMapSvgComponent_Nova_construct;
novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_Nova_No3Node_VTable_val.nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs;
novaEnv.example_Animal.getNumLegs = example_Nova_Animal_VTable_val.example_Nova_Animal_virtual_Nova_getNumLegs;
novaEnv.example_Animal.getNumEyes = example_Nova_Animal_VTable_val.example_Nova_Animal_virtual_Nova_getNumEyes;
novaEnv.example_Animal.getDescription = example_Nova_Animal_VTable_val.example_Nova_Animal_virtual_Nova_getDescription;
novaEnv.example_AnimalFunctionMap.construct = example_Nova_AnimalFunctionMap_VTable_val.example_Nova_AnimalFunctionMap_virtualfunctionMapAnimal_Nova_construct;
novaEnv.example_Person.sayHello = example_Nova_Person_VTable_val.example_Nova_Person_virtual_Nova_sayHello;
novaEnv.example_Polygon.numberSides = example_Nova_Polygon_VTable_val.itable.example_Nova_Polygon_virtual_Nova_numberSides;
novaEnv.example_Polygon.calculateArea = example_Nova_Polygon_VTable_val.itable.example_Nova_Polygon_virtual_Nova_calculateArea;
novaEnv.example_T1FunctionMap.construct = example_Nova_T1FunctionMap_VTable_val.example_Nova_T1FunctionMap_virtualfunctionMapT1_Nova_construct;
novaEnv.stabilitytest_PolymorphicSuperClassFunctionMap.construct = stabilitytest_Nova_PolymorphicSuperClassFunctionMap_VTable_val.stabilitytest_Nova_PolymorphicSuperClassFunctionMap_virtualfunctionMapPolymorphicSuperClass_Nova_construct;

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
nova_Nova_String_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_Nova_StringFunctionMap_Nova_construct(0);
nova_Nova_String_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_Nova_StringPropertyMap_Nova_construct(0);

// nova/String.StringFunctionMap
nova_Nova_StringFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/String.StringFunctionMap")),
0);

// nova/String.StringPropertyMap
nova_Nova_StringPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/String.StringPropertyMap")),
0);

// nova/Substring
nova_Nova_Substring_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/Substring")),
0);
nova_Nova_Substring_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_Nova_SubstringFunctionMap_Nova_construct(0);
nova_Nova_Substring_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_Nova_SubstringPropertyMap_Nova_construct(0);

// nova/Substring.SubstringFunctionMap
nova_Nova_SubstringFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/Substring.SubstringFunctionMap")),
0);

// nova/Substring.SubstringPropertyMap
nova_Nova_SubstringPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/Substring.SubstringPropertyMap")),
0);

// nova/System
nova_Nova_System_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/System")),
0);
nova_Nova_System_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_Nova_SystemFunctionMap_Nova_construct(0);
nova_Nova_System_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_Nova_SystemPropertyMap_Nova_construct(0);

// nova/System.SystemFunctionMap
nova_Nova_SystemFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/System.SystemFunctionMap")),
0);

// nova/System.SystemPropertyMap
nova_Nova_SystemPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/System.SystemPropertyMap")),
0);

// nova/ar/ImageTracker
nova_ar_Nova_ImageTracker_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/ImageTracker")),
0);
nova_ar_Nova_ImageTracker_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_ar_Nova_ImageTrackerFunctionMap_Nova_construct(0);
nova_ar_Nova_ImageTracker_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_ar_Nova_ImageTrackerPropertyMap_Nova_construct(0);

// nova/ar/ImageTracker.ImageTrackerFunctionMap
nova_ar_Nova_ImageTrackerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/ImageTracker.ImageTrackerFunctionMap")),
0);

// nova/ar/ImageTracker.ImageTrackerPropertyMap
nova_ar_Nova_ImageTrackerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/ImageTracker.ImageTrackerPropertyMap")),
0);

// nova/ar/TrackPoint
nova_ar_Nova_TrackPoint_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/TrackPoint")),
0);
nova_ar_Nova_TrackPoint_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_ar_Nova_TrackPointFunctionMap_Nova_construct(0);
nova_ar_Nova_TrackPoint_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_ar_Nova_TrackPointPropertyMap_Nova_construct(0);

// nova/ar/TrackPoint.TrackPointFunctionMap
nova_ar_Nova_TrackPointFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/TrackPoint.TrackPointFunctionMap")),
0);

// nova/ar/TrackPoint.TrackPointPropertyMap
nova_ar_Nova_TrackPointPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/ar/TrackPoint.TrackPointPropertyMap")),
0);

// nova/database/DBConnector
nova_database_Nova_DBConnector_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/DBConnector")),
0);
nova_database_Nova_DBConnector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_database_Nova_DBConnectorFunctionMap_Nova_construct(0);
nova_database_Nova_DBConnector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_database_Nova_DBConnectorPropertyMap_Nova_construct(0);

// nova/database/DBConnector.DBConnectorFunctionMap
nova_database_Nova_DBConnectorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/DBConnector.DBConnectorFunctionMap")),
0);

// nova/database/DBConnector.DBConnectorPropertyMap
nova_database_Nova_DBConnectorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/DBConnector.DBConnectorPropertyMap")),
0);

// nova/database/ResultSet
nova_database_Nova_ResultSet_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/ResultSet")),
0);
nova_database_Nova_ResultSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_database_Nova_ResultSetFunctionMap_Nova_construct(0);
nova_database_Nova_ResultSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_database_Nova_ResultSetPropertyMap_Nova_construct(0);

// nova/database/ResultSet.ResultSetFunctionMap
nova_database_Nova_ResultSetFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/ResultSet.ResultSetFunctionMap")),
0);

// nova/database/ResultSet.ResultSetPropertyMap
nova_database_Nova_ResultSetPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/database/ResultSet.ResultSetPropertyMap")),
0);

// nova/datastruct/BinaryNode
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryNode")),
0);
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_construct(0);
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_BinaryNodePropertyMap_Nova_construct(0);

// nova/datastruct/BinaryNode.BinaryNodeFunctionMap
nova_datastruct_Nova_BinaryNodeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryNode.BinaryNodeFunctionMap")),
0);

// nova/datastruct/BinaryNode.BinaryNodePropertyMap
nova_datastruct_Nova_BinaryNodePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryNode.BinaryNodePropertyMap")),
0);

// nova/datastruct/BinaryTree
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryTree")),
0);
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_BinaryTreeFunctionMap_Nova_construct(0);
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_BinaryTreePropertyMap_Nova_construct(0);

// nova/datastruct/BinaryTree.BinaryTreeFunctionMap
nova_datastruct_Nova_BinaryTreeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryTree.BinaryTreeFunctionMap")),
0);

// nova/datastruct/BinaryTree.BinaryTreePropertyMap
nova_datastruct_Nova_BinaryTreePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/BinaryTree.BinaryTreePropertyMap")),
0);

// nova/datastruct/Bounds
nova_datastruct_Nova_Bounds_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Bounds")),
0);
nova_datastruct_Nova_Bounds_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_BoundsFunctionMap_Nova_construct(0);
nova_datastruct_Nova_Bounds_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_BoundsPropertyMap_Nova_construct(0);

// nova/datastruct/Bounds.BoundsFunctionMap
nova_datastruct_Nova_BoundsFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Bounds.BoundsFunctionMap")),
0);

// nova/datastruct/Bounds.BoundsPropertyMap
nova_datastruct_Nova_BoundsPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Bounds.BoundsPropertyMap")),
0);

// nova/datastruct/Comparable
nova_datastruct_Nova_Comparable_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Comparable")),
1);
nova_datastruct_Nova_Comparable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_ComparableFunctionMap_Nova_construct(0);
nova_datastruct_Nova_Comparable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_ComparablePropertyMap_Nova_construct(0);

// nova/datastruct/Comparable.ComparableFunctionMap
nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Comparable.ComparableFunctionMap")),
1);

// nova/datastruct/Comparable.ComparablePropertyMap
nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Comparable.ComparablePropertyMap")),
1);

// nova/datastruct/HashMap
nova_datastruct_Nova_HashMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap")),
0);
nova_datastruct_Nova_HashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_HashMapFunctionMap_Nova_construct(0);
nova_datastruct_Nova_HashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_HashMapPropertyMap_Nova_construct(0);

// nova/datastruct/HashMap.HashMapFunctionMap
nova_datastruct_Nova_HashMapFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapFunctionMap")),
0);

// nova/datastruct/HashMap.HashMapPropertyMap
nova_datastruct_Nova_HashMapPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapPropertyMap")),
0);

// nova/datastruct/HashMap.HashMapIterator
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIterator")),
0);
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_HashMapIteratorFunctionMap_Nova_construct(0);
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_HashMapIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/HashMap.HashMapIteratorFunctionMap
nova_datastruct_Nova_HashMapIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIteratorFunctionMap")),
0);

// nova/datastruct/HashMap.HashMapIteratorPropertyMap
nova_datastruct_Nova_HashMapIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashMap.HashMapIteratorPropertyMap")),
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
nova_datastruct_Nova_HashSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_HashSetFunctionMap_Nova_construct(0);
nova_datastruct_Nova_HashSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_HashSetPropertyMap_Nova_construct(0);

// nova/datastruct/HashSet.HashSetFunctionMap
nova_datastruct_Nova_HashSetFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashSet.HashSetFunctionMap")),
0);

// nova/datastruct/HashSet.HashSetPropertyMap
nova_datastruct_Nova_HashSetPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/HashSet.HashSetPropertyMap")),
0);

// nova/datastruct/ImmutableHashMap
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap")),
0);
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_construct(0);
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_ImmutableHashMapPropertyMap_Nova_construct(0);

// nova/datastruct/ImmutableHashMap.ImmutableHashMapFunctionMap
nova_datastruct_Nova_ImmutableHashMapFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap.ImmutableHashMapFunctionMap")),
0);

// nova/datastruct/ImmutableHashMap.ImmutableHashMapPropertyMap
nova_datastruct_Nova_ImmutableHashMapPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ImmutableHashMap.ImmutableHashMapPropertyMap")),
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
nova_datastruct_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_NodeFunctionMap_Nova_construct(0);
nova_datastruct_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_NodePropertyMap_Nova_construct(0);

// nova/datastruct/Node.NodeFunctionMap
nova_datastruct_Nova_NodeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Node.NodeFunctionMap")),
0);

// nova/datastruct/Node.NodePropertyMap
nova_datastruct_Nova_NodePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Node.NodePropertyMap")),
0);

// nova/datastruct/Pair
nova_datastruct_Nova_Pair_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair")),
0);
nova_datastruct_Nova_Pair_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_PairFunctionMap_Nova_construct(0);
nova_datastruct_Nova_Pair_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_PairPropertyMap_Nova_construct(0);

// nova/datastruct/Pair.PairFunctionMap
nova_datastruct_Nova_PairFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair.PairFunctionMap")),
0);

// nova/datastruct/Pair.PairPropertyMap
nova_datastruct_Nova_PairPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair.PairPropertyMap")),
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

// nova/datastruct/Pair.Pair1Int2Int
nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Pair.Pair1Int2Int")),
0);

// nova/datastruct/ReversibleHashMap
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ReversibleHashMap")),
0);
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_construct(0);
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_ReversibleHashMapPropertyMap_Nova_construct(0);

// nova/datastruct/ReversibleHashMap.ReversibleHashMapFunctionMap
nova_datastruct_Nova_ReversibleHashMapFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ReversibleHashMap.ReversibleHashMapFunctionMap")),
0);

// nova/datastruct/ReversibleHashMap.ReversibleHashMapPropertyMap
nova_datastruct_Nova_ReversibleHashMapPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/ReversibleHashMap.ReversibleHashMapPropertyMap")),
0);

// nova/datastruct/Tree
nova_datastruct_Nova_Tree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tree")),
0);
nova_datastruct_Nova_Tree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_TreeFunctionMap_Nova_construct(0);
nova_datastruct_Nova_Tree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_TreePropertyMap_Nova_construct(0);

// nova/datastruct/Tree.TreeFunctionMap
nova_datastruct_Nova_TreeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tree.TreeFunctionMap")),
0);

// nova/datastruct/Tree.TreePropertyMap
nova_datastruct_Nova_TreePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tree.TreePropertyMap")),
0);

// nova/datastruct/Tuple
nova_datastruct_Nova_Tuple_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple")),
0);
nova_datastruct_Nova_Tuple_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_TupleFunctionMap_Nova_construct(0);
nova_datastruct_Nova_Tuple_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_TuplePropertyMap_Nova_construct(0);

// nova/datastruct/Tuple.TupleFunctionMap
nova_datastruct_Nova_TupleFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple.TupleFunctionMap")),
0);

// nova/datastruct/Tuple.TuplePropertyMap
nova_datastruct_Nova_TuplePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple.TuplePropertyMap")),
0);

// nova/datastruct/Tuple2
nova_datastruct_Nova_Tuple2_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple2")),
0);
nova_datastruct_Nova_Tuple2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_Nova_Tuple2FunctionMap_Nova_construct(0);
nova_datastruct_Nova_Tuple2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_Nova_Tuple2PropertyMap_Nova_construct(0);

// nova/datastruct/Tuple2.Tuple2FunctionMap
nova_datastruct_Nova_Tuple2FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple2.Tuple2FunctionMap")),
0);

// nova/datastruct/Tuple2.Tuple2PropertyMap
nova_datastruct_Nova_Tuple2PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/Tuple2.Tuple2PropertyMap")),
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
nova_datastruct_list_Nova_Array_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_Array_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/Array.ArrayFunctionMap
nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.ArrayFunctionMap")),
0);

// nova/datastruct/list/Array.ArrayPropertyMap
nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Array.ArrayPropertyMap")),
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
nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ArrayIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ArrayIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/ArrayIterator.ArrayIteratorFunctionMap
nova_datastruct_list_Nova_ArrayIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIteratorFunctionMap")),
0);

// nova/datastruct/list/ArrayIterator.ArrayIteratorPropertyMap
nova_datastruct_list_Nova_ArrayIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ArrayIterator.ArrayIteratorPropertyMap")),
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
nova_datastruct_list_Nova_CharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_CharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/CharArray.CharArrayFunctionMap
nova_datastruct_list_Nova_CharArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArray.CharArrayFunctionMap")),
0);

// nova/datastruct/list/CharArray.CharArrayPropertyMap
nova_datastruct_list_Nova_CharArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArray.CharArrayPropertyMap")),
0);

// nova/datastruct/list/CharArrayIterator
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArrayIterator")),
0);
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_CharArrayIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/CharArrayIterator.CharArrayIteratorFunctionMap
nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArrayIterator.CharArrayIteratorFunctionMap")),
0);

// nova/datastruct/list/CharArrayIterator.CharArrayIteratorPropertyMap
nova_datastruct_list_Nova_CharArrayIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CharArrayIterator.CharArrayIteratorPropertyMap")),
0);

// nova/datastruct/list/CompiledList
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CompiledList")),
0);
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_CompiledListFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_CompiledListPropertyMap_Nova_construct(0);

// nova/datastruct/list/CompiledList.CompiledListFunctionMap
nova_datastruct_list_Nova_CompiledListFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CompiledList.CompiledListFunctionMap")),
0);

// nova/datastruct/list/CompiledList.CompiledListPropertyMap
nova_datastruct_list_Nova_CompiledListPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/CompiledList.CompiledListPropertyMap")),
0);

// nova/datastruct/list/DoubleArray
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArray")),
0);
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_DoubleArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_DoubleArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/DoubleArray.DoubleArrayFunctionMap
nova_datastruct_list_Nova_DoubleArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArray.DoubleArrayFunctionMap")),
0);

// nova/datastruct/list/DoubleArray.DoubleArrayPropertyMap
nova_datastruct_list_Nova_DoubleArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArray.DoubleArrayPropertyMap")),
0);

// nova/datastruct/list/DoubleArrayIterator
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArrayIterator")),
0);
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_DoubleArrayIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/DoubleArrayIterator.DoubleArrayIteratorFunctionMap
nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArrayIterator.DoubleArrayIteratorFunctionMap")),
0);

// nova/datastruct/list/DoubleArrayIterator.DoubleArrayIteratorPropertyMap
nova_datastruct_list_Nova_DoubleArrayIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/DoubleArrayIterator.DoubleArrayIteratorPropertyMap")),
0);

// nova/datastruct/list/EmptyStackException
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/EmptyStackException")),
0);
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_EmptyStackExceptionPropertyMap_Nova_construct(0);

// nova/datastruct/list/EmptyStackException.EmptyStackExceptionFunctionMap
nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/EmptyStackException.EmptyStackExceptionFunctionMap")),
0);

// nova/datastruct/list/EmptyStackException.EmptyStackExceptionPropertyMap
nova_datastruct_list_Nova_EmptyStackExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/EmptyStackException.EmptyStackExceptionPropertyMap")),
0);

// nova/datastruct/list/ImmutableArray
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray")),
0);
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ImmutableArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/ImmutableArray.ImmutableArrayFunctionMap
nova_datastruct_list_Nova_ImmutableArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArrayFunctionMap")),
0);

// nova/datastruct/list/ImmutableArray.ImmutableArrayPropertyMap
nova_datastruct_list_Nova_ImmutableArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArray.ImmutableArrayPropertyMap")),
0);

// nova/datastruct/list/ImmutableArrayIterator
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator")),
0);
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ImmutableArrayIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIteratorFunctionMap
nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIteratorFunctionMap")),
0);

// nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIteratorPropertyMap
nova_datastruct_list_Nova_ImmutableArrayIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableArrayIterator.ImmutableArrayIteratorPropertyMap")),
0);

// nova/datastruct/list/ImmutableCharArray
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArray")),
0);
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ImmutableCharArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/ImmutableCharArray.ImmutableCharArrayFunctionMap
nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArray.ImmutableCharArrayFunctionMap")),
0);

// nova/datastruct/list/ImmutableCharArray.ImmutableCharArrayPropertyMap
nova_datastruct_list_Nova_ImmutableCharArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArray.ImmutableCharArrayPropertyMap")),
0);

// nova/datastruct/list/ImmutableCharArrayIterator
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArrayIterator")),
0);
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ImmutableCharArrayIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/ImmutableCharArrayIterator.ImmutableCharArrayIteratorFunctionMap
nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArrayIterator.ImmutableCharArrayIteratorFunctionMap")),
0);

// nova/datastruct/list/ImmutableCharArrayIterator.ImmutableCharArrayIteratorPropertyMap
nova_datastruct_list_Nova_ImmutableCharArrayIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ImmutableCharArrayIterator.ImmutableCharArrayIteratorPropertyMap")),
0);

// nova/datastruct/list/IntArray
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArray")),
0);
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/IntArray.IntArrayFunctionMap
nova_datastruct_list_Nova_IntArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArray.IntArrayFunctionMap")),
0);

// nova/datastruct/list/IntArray.IntArrayPropertyMap
nova_datastruct_list_Nova_IntArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArray.IntArrayPropertyMap")),
0);

// nova/datastruct/list/IntArrayIterator
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArrayIterator")),
0);
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/IntArrayIterator.IntArrayIteratorFunctionMap
nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArrayIterator.IntArrayIteratorFunctionMap")),
0);

// nova/datastruct/list/IntArrayIterator.IntArrayIteratorPropertyMap
nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntArrayIterator.IntArrayIteratorPropertyMap")),
0);

// nova/datastruct/list/IntRange
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRange")),
0);
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_IntRangePropertyMap_Nova_construct(0);

// nova/datastruct/list/IntRange.IntRangeFunctionMap
nova_datastruct_list_Nova_IntRangeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRange.IntRangeFunctionMap")),
0);

// nova/datastruct/list/IntRange.IntRangePropertyMap
nova_datastruct_list_Nova_IntRangePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRange.IntRangePropertyMap")),
0);

// nova/datastruct/list/IntRangeIterator
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRangeIterator")),
0);
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_IntRangeIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/IntRangeIterator.IntRangeIteratorFunctionMap
nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRangeIterator.IntRangeIteratorFunctionMap")),
0);

// nova/datastruct/list/IntRangeIterator.IntRangeIteratorPropertyMap
nova_datastruct_list_Nova_IntRangeIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/IntRangeIterator.IntRangeIteratorPropertyMap")),
0);

// nova/datastruct/list/Iterable
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable")),
1);
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_IterableFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_IterablePropertyMap_Nova_construct(0);

// nova/datastruct/list/Iterable.IterableFunctionMap
nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.IterableFunctionMap")),
1);

// nova/datastruct/list/Iterable.IterablePropertyMap
nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterable.IterablePropertyMap")),
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
nova_datastruct_list_Nova_Iterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_IteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_Iterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_IteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/Iterator.IteratorFunctionMap
nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.IteratorFunctionMap")),
1);

// nova/datastruct/list/Iterator.IteratorPropertyMap
nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Iterator.IteratorPropertyMap")),
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
nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_construct(0);

// nova/datastruct/list/LinkedList.LinkedListFunctionMap
nova_datastruct_list_Nova_LinkedListFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedList.LinkedListFunctionMap")),
0);

// nova/datastruct/list/LinkedList.LinkedListPropertyMap
nova_datastruct_list_Nova_LinkedListPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedList.LinkedListPropertyMap")),
0);

// nova/datastruct/list/LinkedListIterator
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedListIterator")),
0);
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_construct(0);

// nova/datastruct/list/LinkedListIterator.LinkedListIteratorFunctionMap
nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedListIterator.LinkedListIteratorFunctionMap")),
0);

// nova/datastruct/list/LinkedListIterator.LinkedListIteratorPropertyMap
nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/LinkedListIterator.LinkedListIteratorPropertyMap")),
0);

// nova/datastruct/list/List
nova_datastruct_list_Nova_List_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List")),
1);
nova_datastruct_list_Nova_List_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ListFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_List_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ListPropertyMap_Nova_construct(0);

// nova/datastruct/list/List.ListFunctionMap
nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.ListFunctionMap")),
1);

// nova/datastruct/list/List.ListPropertyMap
nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/List.ListPropertyMap")),
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
nova_datastruct_list_Nova_ListNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_ListNodeFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_ListNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_ListNodePropertyMap_Nova_construct(0);

// nova/datastruct/list/ListNode.ListNodeFunctionMap
nova_datastruct_list_Nova_ListNodeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ListNode.ListNodeFunctionMap")),
0);

// nova/datastruct/list/ListNode.ListNodePropertyMap
nova_datastruct_list_Nova_ListNodePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/ListNode.ListNodePropertyMap")),
0);

// nova/datastruct/list/NoSuchElementException
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/NoSuchElementException")),
0);
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_construct(0);

// nova/datastruct/list/NoSuchElementException.NoSuchElementExceptionFunctionMap
nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/NoSuchElementException.NoSuchElementExceptionFunctionMap")),
0);

// nova/datastruct/list/NoSuchElementException.NoSuchElementExceptionPropertyMap
nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/NoSuchElementException.NoSuchElementExceptionPropertyMap")),
0);

// nova/datastruct/list/OrderedList
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList")),
1);
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_OrderedListPropertyMap_Nova_construct(0);

// nova/datastruct/list/OrderedList.OrderedListFunctionMap
nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedListFunctionMap")),
1);

// nova/datastruct/list/OrderedList.OrderedListPropertyMap
nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/OrderedList.OrderedListPropertyMap")),
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
nova_datastruct_list_Nova_Queue_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_QueueFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_Queue_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_QueuePropertyMap_Nova_construct(0);

// nova/datastruct/list/Queue.QueueFunctionMap
nova_datastruct_list_Nova_QueueFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Queue.QueueFunctionMap")),
0);

// nova/datastruct/list/Queue.QueuePropertyMap
nova_datastruct_list_Nova_QueuePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Queue.QueuePropertyMap")),
0);

// nova/datastruct/list/Stack
nova_datastruct_list_Nova_Stack_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Stack")),
0);
nova_datastruct_list_Nova_Stack_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_StackFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_Stack_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_StackPropertyMap_Nova_construct(0);

// nova/datastruct/list/Stack.StackFunctionMap
nova_datastruct_list_Nova_StackFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Stack.StackFunctionMap")),
0);

// nova/datastruct/list/Stack.StackPropertyMap
nova_datastruct_list_Nova_StackPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/Stack.StackPropertyMap")),
0);

// nova/datastruct/list/StringCharArray
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/StringCharArray")),
0);
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_StringCharArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/StringCharArray.StringCharArrayFunctionMap
nova_datastruct_list_Nova_StringCharArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/StringCharArray.StringCharArrayFunctionMap")),
0);

// nova/datastruct/list/StringCharArray.StringCharArrayPropertyMap
nova_datastruct_list_Nova_StringCharArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/StringCharArray.StringCharArrayPropertyMap")),
0);

// nova/datastruct/list/SubstringCharArray
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/SubstringCharArray")),
0);
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_Nova_construct(0);
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_datastruct_list_Nova_SubstringCharArrayPropertyMap_Nova_construct(0);

// nova/datastruct/list/SubstringCharArray.SubstringCharArrayFunctionMap
nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/SubstringCharArray.SubstringCharArrayFunctionMap")),
0);

// nova/datastruct/list/SubstringCharArray.SubstringCharArrayPropertyMap
nova_datastruct_list_Nova_SubstringCharArrayPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/datastruct/list/SubstringCharArray.SubstringCharArrayPropertyMap")),
0);

// nova/exception/Backtraces
nova_exception_Nova_Backtraces_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Backtraces")),
0);
nova_exception_Nova_Backtraces_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_BacktracesFunctionMap_Nova_construct(0);
nova_exception_Nova_Backtraces_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_BacktracesPropertyMap_Nova_construct(0);

// nova/exception/Backtraces.BacktracesFunctionMap
nova_exception_Nova_BacktracesFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Backtraces.BacktracesFunctionMap")),
0);

// nova/exception/Backtraces.BacktracesPropertyMap
nova_exception_Nova_BacktracesPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Backtraces.BacktracesPropertyMap")),
0);

// nova/exception/CaughtException
nova_exception_Nova_CaughtException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/CaughtException")),
0);
nova_exception_Nova_CaughtException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_CaughtExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_CaughtException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_CaughtExceptionPropertyMap_Nova_construct(0);

// nova/exception/CaughtException.CaughtExceptionFunctionMap
nova_exception_Nova_CaughtExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/CaughtException.CaughtExceptionFunctionMap")),
0);

// nova/exception/CaughtException.CaughtExceptionPropertyMap
nova_exception_Nova_CaughtExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/CaughtException.CaughtExceptionPropertyMap")),
0);

// nova/exception/DivideByZeroException
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/DivideByZeroException")),
0);
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_DivideByZeroExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_DivideByZeroExceptionPropertyMap_Nova_construct(0);

// nova/exception/DivideByZeroException.DivideByZeroExceptionFunctionMap
nova_exception_Nova_DivideByZeroExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/DivideByZeroException.DivideByZeroExceptionFunctionMap")),
0);

// nova/exception/DivideByZeroException.DivideByZeroExceptionPropertyMap
nova_exception_Nova_DivideByZeroExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/DivideByZeroException.DivideByZeroExceptionPropertyMap")),
0);

// nova/exception/Exception
nova_exception_Nova_Exception_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Exception")),
0);
nova_exception_Nova_Exception_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_ExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_Exception_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_ExceptionPropertyMap_Nova_construct(0);

// nova/exception/Exception.ExceptionFunctionMap
nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Exception.ExceptionFunctionMap")),
0);

// nova/exception/Exception.ExceptionPropertyMap
nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/Exception.ExceptionPropertyMap")),
0);

// nova/exception/ExceptionData
nova_exception_Nova_ExceptionData_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/ExceptionData")),
0);
nova_exception_Nova_ExceptionData_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_ExceptionDataFunctionMap_Nova_construct(0);
nova_exception_Nova_ExceptionData_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_ExceptionDataPropertyMap_Nova_construct(0);

// nova/exception/ExceptionData.ExceptionDataFunctionMap
nova_exception_Nova_ExceptionDataFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/ExceptionData.ExceptionDataFunctionMap")),
0);

// nova/exception/ExceptionData.ExceptionDataPropertyMap
nova_exception_Nova_ExceptionDataPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/ExceptionData.ExceptionDataPropertyMap")),
0);

// nova/exception/InvalidArgumentException
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidArgumentException")),
0);
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_InvalidArgumentExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_InvalidArgumentExceptionPropertyMap_Nova_construct(0);

// nova/exception/InvalidArgumentException.InvalidArgumentExceptionFunctionMap
nova_exception_Nova_InvalidArgumentExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidArgumentException.InvalidArgumentExceptionFunctionMap")),
0);

// nova/exception/InvalidArgumentException.InvalidArgumentExceptionPropertyMap
nova_exception_Nova_InvalidArgumentExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidArgumentException.InvalidArgumentExceptionPropertyMap")),
0);

// nova/exception/InvalidOperationException
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidOperationException")),
0);
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_InvalidOperationExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_InvalidOperationExceptionPropertyMap_Nova_construct(0);

// nova/exception/InvalidOperationException.InvalidOperationExceptionFunctionMap
nova_exception_Nova_InvalidOperationExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidOperationException.InvalidOperationExceptionFunctionMap")),
0);

// nova/exception/InvalidOperationException.InvalidOperationExceptionPropertyMap
nova_exception_Nova_InvalidOperationExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/InvalidOperationException.InvalidOperationExceptionPropertyMap")),
0);

// nova/exception/StackTrace
nova_exception_Nova_StackTrace_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/StackTrace")),
0);
nova_exception_Nova_StackTrace_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_StackTraceFunctionMap_Nova_construct(0);
nova_exception_Nova_StackTrace_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_StackTracePropertyMap_Nova_construct(0);

// nova/exception/StackTrace.StackTraceFunctionMap
nova_exception_Nova_StackTraceFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/StackTrace.StackTraceFunctionMap")),
0);

// nova/exception/StackTrace.StackTracePropertyMap
nova_exception_Nova_StackTracePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/StackTrace.StackTracePropertyMap")),
0);

// nova/exception/UnimplementedForTargetException
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedForTargetException")),
0);
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_UnimplementedForTargetExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_UnimplementedForTargetExceptionPropertyMap_Nova_construct(0);

// nova/exception/UnimplementedForTargetException.UnimplementedForTargetExceptionFunctionMap
nova_exception_Nova_UnimplementedForTargetExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedForTargetException.UnimplementedForTargetExceptionFunctionMap")),
0);

// nova/exception/UnimplementedForTargetException.UnimplementedForTargetExceptionPropertyMap
nova_exception_Nova_UnimplementedForTargetExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedForTargetException.UnimplementedForTargetExceptionPropertyMap")),
0);

// nova/exception/UnimplementedOperationException
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedOperationException")),
0);
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_Nova_construct(0);
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_Nova_construct(0);

// nova/exception/UnimplementedOperationException.UnimplementedOperationExceptionFunctionMap
nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedOperationException.UnimplementedOperationExceptionFunctionMap")),
0);

// nova/exception/UnimplementedOperationException.UnimplementedOperationExceptionPropertyMap
nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/exception/UnimplementedOperationException.UnimplementedOperationExceptionPropertyMap")),
0);

// nova/gc/GC
nova_gc_Nova_GC_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/gc/GC")),
0);
nova_gc_Nova_GC_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_gc_Nova_GCFunctionMap_Nova_construct(0);
nova_gc_Nova_GC_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_gc_Nova_GCPropertyMap_Nova_construct(0);

// nova/gc/GC.GCFunctionMap
nova_gc_Nova_GCFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/gc/GC.GCFunctionMap")),
0);

// nova/gc/GC.GCPropertyMap
nova_gc_Nova_GCPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/gc/GC.GCPropertyMap")),
0);

// nova/io/Console
nova_io_Nova_Console_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Console")),
0);
nova_io_Nova_Console_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_ConsoleFunctionMap_Nova_construct(0);
nova_io_Nova_Console_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_ConsolePropertyMap_Nova_construct(0);

// nova/io/Console.ConsoleFunctionMap
nova_io_Nova_ConsoleFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Console.ConsoleFunctionMap")),
0);

// nova/io/Console.ConsolePropertyMap
nova_io_Nova_ConsolePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Console.ConsolePropertyMap")),
0);

// nova/io/Curl
nova_io_Nova_Curl_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Curl")),
0);
nova_io_Nova_Curl_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_CurlFunctionMap_Nova_construct(0);
nova_io_Nova_Curl_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_CurlPropertyMap_Nova_construct(0);

// nova/io/Curl.CurlFunctionMap
nova_io_Nova_CurlFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Curl.CurlFunctionMap")),
0);

// nova/io/Curl.CurlPropertyMap
nova_io_Nova_CurlPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/Curl.CurlPropertyMap")),
0);

// nova/io/File
nova_io_Nova_File_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/File")),
0);
nova_io_Nova_File_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_FileFunctionMap_Nova_construct(0);
nova_io_Nova_File_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_FilePropertyMap_Nova_construct(0);

// nova/io/File.FileFunctionMap
nova_io_Nova_FileFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/File.FileFunctionMap")),
0);

// nova/io/File.FilePropertyMap
nova_io_Nova_FilePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/File.FilePropertyMap")),
0);

// nova/io/FileNotFoundException
nova_io_Nova_FileNotFoundException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileNotFoundException")),
0);
nova_io_Nova_FileNotFoundException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_FileNotFoundExceptionFunctionMap_Nova_construct(0);
nova_io_Nova_FileNotFoundException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_FileNotFoundExceptionPropertyMap_Nova_construct(0);

// nova/io/FileNotFoundException.FileNotFoundExceptionFunctionMap
nova_io_Nova_FileNotFoundExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileNotFoundException.FileNotFoundExceptionFunctionMap")),
0);

// nova/io/FileNotFoundException.FileNotFoundExceptionPropertyMap
nova_io_Nova_FileNotFoundExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileNotFoundException.FileNotFoundExceptionPropertyMap")),
0);

// nova/io/FileReader
nova_io_Nova_FileReader_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileReader")),
0);
nova_io_Nova_FileReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_FileReaderFunctionMap_Nova_construct(0);
nova_io_Nova_FileReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_FileReaderPropertyMap_Nova_construct(0);

// nova/io/FileReader.FileReaderFunctionMap
nova_io_Nova_FileReaderFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileReader.FileReaderFunctionMap")),
0);

// nova/io/FileReader.FileReaderPropertyMap
nova_io_Nova_FileReaderPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileReader.FileReaderPropertyMap")),
0);

// nova/io/FileWriter
nova_io_Nova_FileWriter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileWriter")),
0);
nova_io_Nova_FileWriter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_FileWriterFunctionMap_Nova_construct(0);
nova_io_Nova_FileWriter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_FileWriterPropertyMap_Nova_construct(0);

// nova/io/FileWriter.FileWriterFunctionMap
nova_io_Nova_FileWriterFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileWriter.FileWriterFunctionMap")),
0);

// nova/io/FileWriter.FileWriterPropertyMap
nova_io_Nova_FileWriterPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/FileWriter.FileWriterPropertyMap")),
0);

// nova/io/InputStream
nova_io_Nova_InputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/InputStream")),
1);
nova_io_Nova_InputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_InputStreamFunctionMap_Nova_construct(0);
nova_io_Nova_InputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_InputStreamPropertyMap_Nova_construct(0);

// nova/io/InputStream.InputStreamFunctionMap
nova_io_Nova_InputStreamFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/InputStream.InputStreamFunctionMap")),
1);

// nova/io/InputStream.InputStreamPropertyMap
nova_io_Nova_InputStreamPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/InputStream.InputStreamPropertyMap")),
1);

// nova/io/OutputStream
nova_io_Nova_OutputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/OutputStream")),
1);
nova_io_Nova_OutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_OutputStreamFunctionMap_Nova_construct(0);
nova_io_Nova_OutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_OutputStreamPropertyMap_Nova_construct(0);

// nova/io/OutputStream.OutputStreamFunctionMap
nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/OutputStream.OutputStreamFunctionMap")),
1);

// nova/io/OutputStream.OutputStreamPropertyMap
nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/OutputStream.OutputStreamPropertyMap")),
1);

// nova/io/StreamReader
nova_io_Nova_StreamReader_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StreamReader")),
0);
nova_io_Nova_StreamReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_StreamReaderFunctionMap_Nova_construct(0);
nova_io_Nova_StreamReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_StreamReaderPropertyMap_Nova_construct(0);

// nova/io/StreamReader.StreamReaderFunctionMap
nova_io_Nova_StreamReaderFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StreamReader.StreamReaderFunctionMap")),
0);

// nova/io/StreamReader.StreamReaderPropertyMap
nova_io_Nova_StreamReaderPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StreamReader.StreamReaderPropertyMap")),
0);

// nova/io/StringBuilder
nova_io_Nova_StringBuilder_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StringBuilder")),
0);
nova_io_Nova_StringBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_io_Nova_StringBuilderFunctionMap_Nova_construct(0);
nova_io_Nova_StringBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_io_Nova_StringBuilderPropertyMap_Nova_construct(0);

// nova/io/StringBuilder.StringBuilderFunctionMap
nova_io_Nova_StringBuilderFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StringBuilder.StringBuilderFunctionMap")),
0);

// nova/io/StringBuilder.StringBuilderPropertyMap
nova_io_Nova_StringBuilderPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/io/StringBuilder.StringBuilderPropertyMap")),
0);

// nova/math/ArithmeticSequence
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/ArithmeticSequence")),
0);
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_ArithmeticSequenceFunctionMap_Nova_construct(0);
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_ArithmeticSequencePropertyMap_Nova_construct(0);

// nova/math/ArithmeticSequence.ArithmeticSequenceFunctionMap
nova_math_Nova_ArithmeticSequenceFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/ArithmeticSequence.ArithmeticSequenceFunctionMap")),
0);

// nova/math/ArithmeticSequence.ArithmeticSequencePropertyMap
nova_math_Nova_ArithmeticSequencePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/ArithmeticSequence.ArithmeticSequencePropertyMap")),
0);

// nova/math/Diekstra
nova_math_Nova_Diekstra_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Diekstra")),
0);
nova_math_Nova_Diekstra_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_DiekstraFunctionMap_Nova_construct(0);
nova_math_Nova_Diekstra_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_DiekstraPropertyMap_Nova_construct(0);

// nova/math/Diekstra.DiekstraFunctionMap
nova_math_Nova_DiekstraFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Diekstra.DiekstraFunctionMap")),
0);

// nova/math/Diekstra.DiekstraPropertyMap
nova_math_Nova_DiekstraPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Diekstra.DiekstraPropertyMap")),
0);

// nova/math/GeometricSequence
nova_math_Nova_GeometricSequence_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/GeometricSequence")),
0);
nova_math_Nova_GeometricSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_GeometricSequenceFunctionMap_Nova_construct(0);
nova_math_Nova_GeometricSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_GeometricSequencePropertyMap_Nova_construct(0);

// nova/math/GeometricSequence.GeometricSequenceFunctionMap
nova_math_Nova_GeometricSequenceFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/GeometricSequence.GeometricSequenceFunctionMap")),
0);

// nova/math/GeometricSequence.GeometricSequencePropertyMap
nova_math_Nova_GeometricSequencePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/GeometricSequence.GeometricSequencePropertyMap")),
0);

// nova/math/Graph
nova_math_Nova_Graph_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Graph")),
0);
nova_math_Nova_Graph_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_GraphFunctionMap_Nova_construct(0);
nova_math_Nova_Graph_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_GraphPropertyMap_Nova_construct(0);

// nova/math/Graph.GraphFunctionMap
nova_math_Nova_GraphFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Graph.GraphFunctionMap")),
0);

// nova/math/Graph.GraphPropertyMap
nova_math_Nova_GraphPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Graph.GraphPropertyMap")),
0);

// nova/math/InvalidNumericStatementException
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/InvalidNumericStatementException")),
0);
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_Nova_construct(0);
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_InvalidNumericStatementExceptionPropertyMap_Nova_construct(0);

// nova/math/InvalidNumericStatementException.InvalidNumericStatementExceptionFunctionMap
nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/InvalidNumericStatementException.InvalidNumericStatementExceptionFunctionMap")),
0);

// nova/math/InvalidNumericStatementException.InvalidNumericStatementExceptionPropertyMap
nova_math_Nova_InvalidNumericStatementExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/InvalidNumericStatementException.InvalidNumericStatementExceptionPropertyMap")),
0);

// nova/math/Math
nova_math_Nova_Math_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Math")),
0);
nova_math_Nova_Math_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_MathFunctionMap_Nova_construct(0);
nova_math_Nova_Math_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_MathPropertyMap_Nova_construct(0);

// nova/math/Math.MathFunctionMap
nova_math_Nova_MathFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Math.MathFunctionMap")),
0);

// nova/math/Math.MathPropertyMap
nova_math_Nova_MathPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Math.MathPropertyMap")),
0);

// nova/math/Matrix
nova_math_Nova_Matrix_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Matrix")),
0);
nova_math_Nova_Matrix_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_MatrixFunctionMap_Nova_construct(0);
nova_math_Nova_Matrix_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_MatrixPropertyMap_Nova_construct(0);

// nova/math/Matrix.MatrixFunctionMap
nova_math_Nova_MatrixFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Matrix.MatrixFunctionMap")),
0);

// nova/math/Matrix.MatrixPropertyMap
nova_math_Nova_MatrixPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Matrix.MatrixPropertyMap")),
0);

// nova/math/NumericOperand
nova_math_Nova_NumericOperand_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperand")),
0);
nova_math_Nova_NumericOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_NumericOperandFunctionMap_Nova_construct(0);
nova_math_Nova_NumericOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_NumericOperandPropertyMap_Nova_construct(0);

// nova/math/NumericOperand.NumericOperandFunctionMap
nova_math_Nova_NumericOperandFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperand.NumericOperandFunctionMap")),
0);

// nova/math/NumericOperand.NumericOperandPropertyMap
nova_math_Nova_NumericOperandPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperand.NumericOperandPropertyMap")),
0);

// nova/math/NumericOperation
nova_math_Nova_NumericOperation_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperation")),
0);
nova_math_Nova_NumericOperation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_NumericOperationFunctionMap_Nova_construct(0);
nova_math_Nova_NumericOperation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_NumericOperationPropertyMap_Nova_construct(0);

// nova/math/NumericOperation.NumericOperationFunctionMap
nova_math_Nova_NumericOperationFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperation.NumericOperationFunctionMap")),
0);

// nova/math/NumericOperation.NumericOperationPropertyMap
nova_math_Nova_NumericOperationPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericOperation.NumericOperationPropertyMap")),
0);

// nova/math/NumericStatement
nova_math_Nova_NumericStatement_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericStatement")),
0);
nova_math_Nova_NumericStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_NumericStatementFunctionMap_Nova_construct(0);
nova_math_Nova_NumericStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_NumericStatementPropertyMap_Nova_construct(0);

// nova/math/NumericStatement.NumericStatementFunctionMap
nova_math_Nova_NumericStatementFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericStatement.NumericStatementFunctionMap")),
0);

// nova/math/NumericStatement.NumericStatementPropertyMap
nova_math_Nova_NumericStatementPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericStatement.NumericStatementPropertyMap")),
0);

// nova/math/NumericTree
nova_math_Nova_NumericTree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericTree")),
0);
nova_math_Nova_NumericTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_NumericTreeFunctionMap_Nova_construct(0);
nova_math_Nova_NumericTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_NumericTreePropertyMap_Nova_construct(0);

// nova/math/NumericTree.NumericTreeFunctionMap
nova_math_Nova_NumericTreeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericTree.NumericTreeFunctionMap")),
0);

// nova/math/NumericTree.NumericTreePropertyMap
nova_math_Nova_NumericTreePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/NumericTree.NumericTreePropertyMap")),
0);

// nova/math/Polynomial
nova_math_Nova_Polynomial_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Polynomial")),
0);
nova_math_Nova_Polynomial_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_PolynomialFunctionMap_Nova_construct(0);
nova_math_Nova_Polynomial_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_PolynomialPropertyMap_Nova_construct(0);

// nova/math/Polynomial.PolynomialFunctionMap
nova_math_Nova_PolynomialFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Polynomial.PolynomialFunctionMap")),
0);

// nova/math/Polynomial.PolynomialPropertyMap
nova_math_Nova_PolynomialPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Polynomial.PolynomialPropertyMap")),
0);

// nova/math/Sequence
nova_math_Nova_Sequence_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Sequence")),
0);
nova_math_Nova_Sequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_SequenceFunctionMap_Nova_construct(0);
nova_math_Nova_Sequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_SequencePropertyMap_Nova_construct(0);

// nova/math/Sequence.SequenceFunctionMap
nova_math_Nova_SequenceFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Sequence.SequenceFunctionMap")),
0);

// nova/math/Sequence.SequencePropertyMap
nova_math_Nova_SequencePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Sequence.SequencePropertyMap")),
0);

// nova/math/Statement
nova_math_Nova_Statement_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Statement")),
0);
nova_math_Nova_Statement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_StatementFunctionMap_Nova_construct(0);
nova_math_Nova_Statement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_StatementPropertyMap_Nova_construct(0);

// nova/math/Statement.StatementFunctionMap
nova_math_Nova_StatementFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Statement.StatementFunctionMap")),
0);

// nova/math/Statement.StatementPropertyMap
nova_math_Nova_StatementPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Statement.StatementPropertyMap")),
0);

// nova/math/StatementComponent
nova_math_Nova_StatementComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/StatementComponent")),
0);
nova_math_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_StatementComponentFunctionMap_Nova_construct(0);
nova_math_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_StatementComponentPropertyMap_Nova_construct(0);

// nova/math/StatementComponent.StatementComponentFunctionMap
nova_math_Nova_StatementComponentFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/StatementComponent.StatementComponentFunctionMap")),
0);

// nova/math/StatementComponent.StatementComponentPropertyMap
nova_math_Nova_StatementComponentPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/StatementComponent.StatementComponentPropertyMap")),
0);

// nova/math/VariableOperand
nova_math_Nova_VariableOperand_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/VariableOperand")),
0);
nova_math_Nova_VariableOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_VariableOperandFunctionMap_Nova_construct(0);
nova_math_Nova_VariableOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_VariableOperandPropertyMap_Nova_construct(0);

// nova/math/VariableOperand.VariableOperandFunctionMap
nova_math_Nova_VariableOperandFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/VariableOperand.VariableOperandFunctionMap")),
0);

// nova/math/VariableOperand.VariableOperandPropertyMap
nova_math_Nova_VariableOperandPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/VariableOperand.VariableOperandPropertyMap")),
0);

// nova/math/Vector
nova_math_Nova_Vector_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector")),
0);
nova_math_Nova_Vector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_VectorFunctionMap_Nova_construct(0);
nova_math_Nova_Vector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_VectorPropertyMap_Nova_construct(0);

// nova/math/Vector.VectorFunctionMap
nova_math_Nova_VectorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector.VectorFunctionMap")),
0);

// nova/math/Vector.VectorPropertyMap
nova_math_Nova_VectorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector.VectorPropertyMap")),
0);

// nova/math/Vector2D
nova_math_Nova_Vector2D_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector2D")),
0);
nova_math_Nova_Vector2D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_Vector2DFunctionMap_Nova_construct(0);
nova_math_Nova_Vector2D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_Vector2DPropertyMap_Nova_construct(0);

// nova/math/Vector2D.Vector2DFunctionMap
nova_math_Nova_Vector2DFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector2D.Vector2DFunctionMap")),
0);

// nova/math/Vector2D.Vector2DPropertyMap
nova_math_Nova_Vector2DPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector2D.Vector2DPropertyMap")),
0);

// nova/math/Vector3D
nova_math_Nova_Vector3D_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector3D")),
0);
nova_math_Nova_Vector3D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_Vector3DFunctionMap_Nova_construct(0);
nova_math_Nova_Vector3D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_Vector3DPropertyMap_Nova_construct(0);

// nova/math/Vector3D.Vector3DFunctionMap
nova_math_Nova_Vector3DFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector3D.Vector3DFunctionMap")),
0);

// nova/math/Vector3D.Vector3DPropertyMap
nova_math_Nova_Vector3DPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector3D.Vector3DPropertyMap")),
0);

// nova/math/Vector4D
nova_math_Nova_Vector4D_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector4D")),
0);
nova_math_Nova_Vector4D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_Nova_Vector4DFunctionMap_Nova_construct(0);
nova_math_Nova_Vector4D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_Nova_Vector4DPropertyMap_Nova_construct(0);

// nova/math/Vector4D.Vector4DFunctionMap
nova_math_Nova_Vector4DFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector4D.Vector4DFunctionMap")),
0);

// nova/math/Vector4D.Vector4DPropertyMap
nova_math_Nova_Vector4DPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/Vector4D.Vector4DPropertyMap")),
0);

// nova/math/calculus/Calculus
nova_math_calculus_Nova_Calculus_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/calculus/Calculus")),
0);
nova_math_calculus_Nova_Calculus_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_calculus_Nova_CalculusFunctionMap_Nova_construct(0);
nova_math_calculus_Nova_Calculus_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_calculus_Nova_CalculusPropertyMap_Nova_construct(0);

// nova/math/calculus/Calculus.CalculusFunctionMap
nova_math_calculus_Nova_CalculusFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/calculus/Calculus.CalculusFunctionMap")),
0);

// nova/math/calculus/Calculus.CalculusPropertyMap
nova_math_calculus_Nova_CalculusPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/calculus/Calculus.CalculusPropertyMap")),
0);

// nova/math/huffman/HuffmanTree
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/huffman/HuffmanTree")),
0);
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_huffman_Nova_HuffmanTreeFunctionMap_Nova_construct(0);
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_huffman_Nova_HuffmanTreePropertyMap_Nova_construct(0);

// nova/math/huffman/HuffmanTree.HuffmanTreeFunctionMap
nova_math_huffman_Nova_HuffmanTreeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/huffman/HuffmanTree.HuffmanTreeFunctionMap")),
0);

// nova/math/huffman/HuffmanTree.HuffmanTreePropertyMap
nova_math_huffman_Nova_HuffmanTreePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/huffman/HuffmanTree.HuffmanTreePropertyMap")),
0);

// nova/math/logic/Conclusion
nova_math_logic_Nova_Conclusion_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Conclusion")),
0);
nova_math_logic_Nova_Conclusion_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_ConclusionFunctionMap_Nova_construct(0);
nova_math_logic_Nova_Conclusion_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_ConclusionPropertyMap_Nova_construct(0);

// nova/math/logic/Conclusion.ConclusionFunctionMap
nova_math_logic_Nova_ConclusionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Conclusion.ConclusionFunctionMap")),
0);

// nova/math/logic/Conclusion.ConclusionPropertyMap
nova_math_logic_Nova_ConclusionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Conclusion.ConclusionPropertyMap")),
0);

// nova/math/logic/Hypothesis
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Hypothesis")),
0);
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_HypothesisFunctionMap_Nova_construct(0);
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_HypothesisPropertyMap_Nova_construct(0);

// nova/math/logic/Hypothesis.HypothesisFunctionMap
nova_math_logic_Nova_HypothesisFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Hypothesis.HypothesisFunctionMap")),
0);

// nova/math/logic/Hypothesis.HypothesisPropertyMap
nova_math_logic_Nova_HypothesisPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/Hypothesis.HypothesisPropertyMap")),
0);

// nova/math/logic/InvalidFormulaException
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/InvalidFormulaException")),
0);
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_Nova_construct(0);
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_InvalidFormulaExceptionPropertyMap_Nova_construct(0);

// nova/math/logic/InvalidFormulaException.InvalidFormulaExceptionFunctionMap
nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/InvalidFormulaException.InvalidFormulaExceptionFunctionMap")),
0);

// nova/math/logic/InvalidFormulaException.InvalidFormulaExceptionPropertyMap
nova_math_logic_Nova_InvalidFormulaExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/InvalidFormulaException.InvalidFormulaExceptionPropertyMap")),
0);

// nova/math/logic/LogicalConnective
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalConnective")),
0);
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_LogicalConnectiveFunctionMap_Nova_construct(0);
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_LogicalConnectivePropertyMap_Nova_construct(0);

// nova/math/logic/LogicalConnective.LogicalConnectiveFunctionMap
nova_math_logic_Nova_LogicalConnectiveFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalConnective.LogicalConnectiveFunctionMap")),
0);

// nova/math/logic/LogicalConnective.LogicalConnectivePropertyMap
nova_math_logic_Nova_LogicalConnectivePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalConnective.LogicalConnectivePropertyMap")),
0);

// nova/math/logic/LogicalStatement
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalStatement")),
0);
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_construct(0);
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_construct(0);

// nova/math/logic/LogicalStatement.LogicalStatementFunctionMap
nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalStatement.LogicalStatementFunctionMap")),
0);

// nova/math/logic/LogicalStatement.LogicalStatementPropertyMap
nova_math_logic_Nova_LogicalStatementPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/LogicalStatement.LogicalStatementPropertyMap")),
0);

// nova/math/logic/StatementComponent
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementComponent")),
0);
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_StatementComponentFunctionMap_Nova_construct(0);
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_StatementComponentPropertyMap_Nova_construct(0);

// nova/math/logic/StatementComponent.StatementComponentFunctionMap
nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementComponent.StatementComponentFunctionMap")),
0);

// nova/math/logic/StatementComponent.StatementComponentPropertyMap
nova_math_logic_Nova_StatementComponentPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementComponent.StatementComponentPropertyMap")),
0);

// nova/math/logic/StatementGroup
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementGroup")),
0);
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_StatementGroupFunctionMap_Nova_construct(0);
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_StatementGroupPropertyMap_Nova_construct(0);

// nova/math/logic/StatementGroup.StatementGroupFunctionMap
nova_math_logic_Nova_StatementGroupFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementGroup.StatementGroupFunctionMap")),
0);

// nova/math/logic/StatementGroup.StatementGroupPropertyMap
nova_math_logic_Nova_StatementGroupPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementGroup.StatementGroupPropertyMap")),
0);

// nova/math/logic/StatementLetter
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementLetter")),
0);
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_StatementLetterFunctionMap_Nova_construct(0);
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_StatementLetterPropertyMap_Nova_construct(0);

// nova/math/logic/StatementLetter.StatementLetterFunctionMap
nova_math_logic_Nova_StatementLetterFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementLetter.StatementLetterFunctionMap")),
0);

// nova/math/logic/StatementLetter.StatementLetterPropertyMap
nova_math_logic_Nova_StatementLetterPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/StatementLetter.StatementLetterPropertyMap")),
0);

// nova/math/logic/WFF
nova_math_logic_Nova_WFF_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/WFF")),
0);
nova_math_logic_Nova_WFF_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_math_logic_Nova_WFFFunctionMap_Nova_construct(0);
nova_math_logic_Nova_WFF_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_math_logic_Nova_WFFPropertyMap_Nova_construct(0);

// nova/math/logic/WFF.WFFFunctionMap
nova_math_logic_Nova_WFFFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/WFF.WFFFunctionMap")),
0);

// nova/math/logic/WFF.WFFPropertyMap
nova_math_logic_Nova_WFFPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/math/logic/WFF.WFFPropertyMap")),
0);

// nova/meta/Class
nova_meta_Nova_Class_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Class")),
0);
nova_meta_Nova_Class_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_ClassFunctionMap_Nova_construct(0);
nova_meta_Nova_Class_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_ClassPropertyMap_Nova_construct(0);

// nova/meta/Class.ClassFunctionMap
nova_meta_Nova_ClassFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Class.ClassFunctionMap")),
0);

// nova/meta/Class.ClassPropertyMap
nova_meta_Nova_ClassPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Class.ClassPropertyMap")),
0);

// nova/meta/Field
nova_meta_Nova_Field_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Field")),
0);
nova_meta_Nova_Field_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_FieldFunctionMap_Nova_construct(0);
nova_meta_Nova_Field_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_FieldPropertyMap_Nova_construct(0);

// nova/meta/Field.FieldFunctionMap
nova_meta_Nova_FieldFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Field.FieldFunctionMap")),
0);

// nova/meta/Field.FieldPropertyMap
nova_meta_Nova_FieldPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Field.FieldPropertyMap")),
0);

// nova/meta/FunctionMap
nova_meta_Nova_FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/FunctionMap")),
0);
nova_meta_Nova_FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_FunctionMapFunctionMap_Nova_construct(0);
nova_meta_Nova_FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_FunctionMapPropertyMap_Nova_construct(0);

// nova/meta/FunctionMap.FunctionMapFunctionMap
nova_meta_Nova_FunctionMapFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/FunctionMap.FunctionMapFunctionMap")),
0);

// nova/meta/FunctionMap.FunctionMapPropertyMap
nova_meta_Nova_FunctionMapPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/FunctionMap.FunctionMapPropertyMap")),
0);

// nova/meta/GenericArgument
nova_meta_Nova_GenericArgument_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericArgument")),
0);
nova_meta_Nova_GenericArgument_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_GenericArgumentFunctionMap_Nova_construct(0);
nova_meta_Nova_GenericArgument_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_GenericArgumentPropertyMap_Nova_construct(0);

// nova/meta/GenericArgument.GenericArgumentFunctionMap
nova_meta_Nova_GenericArgumentFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericArgument.GenericArgumentFunctionMap")),
0);

// nova/meta/GenericArgument.GenericArgumentPropertyMap
nova_meta_Nova_GenericArgumentPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericArgument.GenericArgumentPropertyMap")),
0);

// nova/meta/GenericParameter
nova_meta_Nova_GenericParameter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericParameter")),
0);
nova_meta_Nova_GenericParameter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_GenericParameterFunctionMap_Nova_construct(0);
nova_meta_Nova_GenericParameter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_GenericParameterPropertyMap_Nova_construct(0);

// nova/meta/GenericParameter.GenericParameterFunctionMap
nova_meta_Nova_GenericParameterFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericParameter.GenericParameterFunctionMap")),
0);

// nova/meta/GenericParameter.GenericParameterPropertyMap
nova_meta_Nova_GenericParameterPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/GenericParameter.GenericParameterPropertyMap")),
0);

// nova/meta/InvalidLibraryException
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/InvalidLibraryException")),
0);
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_InvalidLibraryExceptionFunctionMap_Nova_construct(0);
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_InvalidLibraryExceptionPropertyMap_Nova_construct(0);

// nova/meta/InvalidLibraryException.InvalidLibraryExceptionFunctionMap
nova_meta_Nova_InvalidLibraryExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/InvalidLibraryException.InvalidLibraryExceptionFunctionMap")),
0);

// nova/meta/InvalidLibraryException.InvalidLibraryExceptionPropertyMap
nova_meta_Nova_InvalidLibraryExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/InvalidLibraryException.InvalidLibraryExceptionPropertyMap")),
0);

// nova/meta/Library
nova_meta_Nova_Library_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Library")),
0);
nova_meta_Nova_Library_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_LibraryFunctionMap_Nova_construct(0);
nova_meta_Nova_Library_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_LibraryPropertyMap_Nova_construct(0);

// nova/meta/Library.LibraryFunctionMap
nova_meta_Nova_LibraryFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Library.LibraryFunctionMap")),
0);

// nova/meta/Library.LibraryPropertyMap
nova_meta_Nova_LibraryPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Library.LibraryPropertyMap")),
0);

// nova/meta/PropertyMap
nova_meta_Nova_PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/PropertyMap")),
0);
nova_meta_Nova_PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_PropertyMapFunctionMap_Nova_construct(0);
nova_meta_Nova_PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_PropertyMapPropertyMap_Nova_construct(0);

// nova/meta/PropertyMap.PropertyMapFunctionMap
nova_meta_Nova_PropertyMapFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/PropertyMap.PropertyMapFunctionMap")),
0);

// nova/meta/PropertyMap.PropertyMapPropertyMap
nova_meta_Nova_PropertyMapPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/PropertyMap.PropertyMapPropertyMap")),
0);

// nova/meta/Type
nova_meta_Nova_Type_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Type")),
0);
nova_meta_Nova_Type_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_meta_Nova_TypeFunctionMap_Nova_construct(0);
nova_meta_Nova_Type_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_meta_Nova_TypePropertyMap_Nova_construct(0);

// nova/meta/Type.TypeFunctionMap
nova_meta_Nova_TypeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Type.TypeFunctionMap")),
0);

// nova/meta/Type.TypePropertyMap
nova_meta_Nova_TypePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/meta/Type.TypePropertyMap")),
0);

// nova/network/ClientSocket
nova_network_Nova_ClientSocket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ClientSocket")),
0);
nova_network_Nova_ClientSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_network_Nova_ClientSocketFunctionMap_Nova_construct(0);
nova_network_Nova_ClientSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_network_Nova_ClientSocketPropertyMap_Nova_construct(0);

// nova/network/ClientSocket.ClientSocketFunctionMap
nova_network_Nova_ClientSocketFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ClientSocket.ClientSocketFunctionMap")),
0);

// nova/network/ClientSocket.ClientSocketPropertyMap
nova_network_Nova_ClientSocketPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ClientSocket.ClientSocketPropertyMap")),
0);

// nova/network/ConnectionSocket
nova_network_Nova_ConnectionSocket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ConnectionSocket")),
0);
nova_network_Nova_ConnectionSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_network_Nova_ConnectionSocketFunctionMap_Nova_construct(0);
nova_network_Nova_ConnectionSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_network_Nova_ConnectionSocketPropertyMap_Nova_construct(0);

// nova/network/ConnectionSocket.ConnectionSocketFunctionMap
nova_network_Nova_ConnectionSocketFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ConnectionSocket.ConnectionSocketFunctionMap")),
0);

// nova/network/ConnectionSocket.ConnectionSocketPropertyMap
nova_network_Nova_ConnectionSocketPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ConnectionSocket.ConnectionSocketPropertyMap")),
0);

// nova/network/NetworkInputStream
nova_network_Nova_NetworkInputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkInputStream")),
0);
nova_network_Nova_NetworkInputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_network_Nova_NetworkInputStreamFunctionMap_Nova_construct(0);
nova_network_Nova_NetworkInputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_network_Nova_NetworkInputStreamPropertyMap_Nova_construct(0);

// nova/network/NetworkInputStream.NetworkInputStreamFunctionMap
nova_network_Nova_NetworkInputStreamFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkInputStream.NetworkInputStreamFunctionMap")),
0);

// nova/network/NetworkInputStream.NetworkInputStreamPropertyMap
nova_network_Nova_NetworkInputStreamPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkInputStream.NetworkInputStreamPropertyMap")),
0);

// nova/network/NetworkOutputStream
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkOutputStream")),
0);
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_network_Nova_NetworkOutputStreamFunctionMap_Nova_construct(0);
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_network_Nova_NetworkOutputStreamPropertyMap_Nova_construct(0);

// nova/network/NetworkOutputStream.NetworkOutputStreamFunctionMap
nova_network_Nova_NetworkOutputStreamFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkOutputStream.NetworkOutputStreamFunctionMap")),
0);

// nova/network/NetworkOutputStream.NetworkOutputStreamPropertyMap
nova_network_Nova_NetworkOutputStreamPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/NetworkOutputStream.NetworkOutputStreamPropertyMap")),
0);

// nova/network/ServerSocket
nova_network_Nova_ServerSocket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ServerSocket")),
0);
nova_network_Nova_ServerSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_network_Nova_ServerSocketFunctionMap_Nova_construct(0);
nova_network_Nova_ServerSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_network_Nova_ServerSocketPropertyMap_Nova_construct(0);

// nova/network/ServerSocket.ServerSocketFunctionMap
nova_network_Nova_ServerSocketFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ServerSocket.ServerSocketFunctionMap")),
0);

// nova/network/ServerSocket.ServerSocketPropertyMap
nova_network_Nova_ServerSocketPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/ServerSocket.ServerSocketPropertyMap")),
0);

// nova/network/Socket
nova_network_Nova_Socket_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/Socket")),
0);
nova_network_Nova_Socket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_network_Nova_SocketFunctionMap_Nova_construct(0);
nova_network_Nova_Socket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_network_Nova_SocketPropertyMap_Nova_construct(0);

// nova/network/Socket.SocketFunctionMap
nova_network_Nova_SocketFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/Socket.SocketFunctionMap")),
0);

// nova/network/Socket.SocketPropertyMap
nova_network_Nova_SocketPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/network/Socket.SocketPropertyMap")),
0);

// nova/operators/EqualsOperator
nova_operators_Nova_EqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/EqualsOperator")),
1);
nova_operators_Nova_EqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_EqualsOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_EqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_EqualsOperatorPropertyMap_Nova_construct(0);

// nova/operators/EqualsOperator.EqualsOperatorFunctionMap
nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/EqualsOperator.EqualsOperatorFunctionMap")),
1);

// nova/operators/EqualsOperator.EqualsOperatorPropertyMap
nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/EqualsOperator.EqualsOperatorPropertyMap")),
1);

// nova/operators/MinusEqualsOperator
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusEqualsOperator")),
1);
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_Nova_construct(0);

// nova/operators/MinusEqualsOperator.MinusEqualsOperatorFunctionMap
nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusEqualsOperator.MinusEqualsOperatorFunctionMap")),
1);

// nova/operators/MinusEqualsOperator.MinusEqualsOperatorPropertyMap
nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusEqualsOperator.MinusEqualsOperatorPropertyMap")),
1);

// nova/operators/MinusOperator
nova_operators_Nova_MinusOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusOperator")),
1);
nova_operators_Nova_MinusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_MinusOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_MinusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_MinusOperatorPropertyMap_Nova_construct(0);

// nova/operators/MinusOperator.MinusOperatorFunctionMap
nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusOperator.MinusOperatorFunctionMap")),
1);

// nova/operators/MinusOperator.MinusOperatorPropertyMap
nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MinusOperator.MinusOperatorPropertyMap")),
1);

// nova/operators/MultiplyEqualsOperator
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyEqualsOperator")),
1);
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_Nova_construct(0);

// nova/operators/MultiplyEqualsOperator.MultiplyEqualsOperatorFunctionMap
nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyEqualsOperator.MultiplyEqualsOperatorFunctionMap")),
1);

// nova/operators/MultiplyEqualsOperator.MultiplyEqualsOperatorPropertyMap
nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyEqualsOperator.MultiplyEqualsOperatorPropertyMap")),
1);

// nova/operators/MultiplyOperator
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyOperator")),
1);
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_MultiplyOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_MultiplyOperatorPropertyMap_Nova_construct(0);

// nova/operators/MultiplyOperator.MultiplyOperatorFunctionMap
nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyOperator.MultiplyOperatorFunctionMap")),
1);

// nova/operators/MultiplyOperator.MultiplyOperatorPropertyMap
nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/MultiplyOperator.MultiplyOperatorPropertyMap")),
1);

// nova/operators/NotEqualToOperator
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/NotEqualToOperator")),
1);
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_NotEqualToOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_NotEqualToOperatorPropertyMap_Nova_construct(0);

// nova/operators/NotEqualToOperator.NotEqualToOperatorFunctionMap
nova_operators_Nova_NotEqualToOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/NotEqualToOperator.NotEqualToOperatorFunctionMap")),
1);

// nova/operators/NotEqualToOperator.NotEqualToOperatorPropertyMap
nova_operators_Nova_NotEqualToOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/NotEqualToOperator.NotEqualToOperatorPropertyMap")),
1);

// nova/operators/PlusEqualsOperator
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusEqualsOperator")),
1);
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_Nova_construct(0);

// nova/operators/PlusEqualsOperator.PlusEqualsOperatorFunctionMap
nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusEqualsOperator.PlusEqualsOperatorFunctionMap")),
1);

// nova/operators/PlusEqualsOperator.PlusEqualsOperatorPropertyMap
nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusEqualsOperator.PlusEqualsOperatorPropertyMap")),
1);

// nova/operators/PlusOperator
nova_operators_Nova_PlusOperator_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusOperator")),
1);
nova_operators_Nova_PlusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_operators_Nova_PlusOperatorFunctionMap_Nova_construct(0);
nova_operators_Nova_PlusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_operators_Nova_PlusOperatorPropertyMap_Nova_construct(0);

// nova/operators/PlusOperator.PlusOperatorFunctionMap
nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusOperator.PlusOperatorFunctionMap")),
1);

// nova/operators/PlusOperator.PlusOperatorPropertyMap
nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/operators/PlusOperator.PlusOperatorPropertyMap")),
1);

// nova/primitive/Bool
nova_primitive_Nova_Bool_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Bool")),
0);
nova_primitive_Nova_Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_Nova_BoolFunctionMap_Nova_construct(0);
nova_primitive_Nova_Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_Nova_BoolPropertyMap_Nova_construct(0);

// nova/primitive/Bool.BoolFunctionMap
nova_primitive_Nova_BoolFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Bool.BoolFunctionMap")),
0);

// nova/primitive/Bool.BoolPropertyMap
nova_primitive_Nova_BoolPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Bool.BoolPropertyMap")),
0);

// nova/primitive/Null
nova_primitive_Nova_Null_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Null")),
0);
nova_primitive_Nova_Null_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_Nova_NullFunctionMap_Nova_construct(0);
nova_primitive_Nova_Null_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_Nova_NullPropertyMap_Nova_construct(0);

// nova/primitive/Null.NullFunctionMap
nova_primitive_Nova_NullFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Null.NullFunctionMap")),
0);

// nova/primitive/Null.NullPropertyMap
nova_primitive_Nova_NullPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Null.NullPropertyMap")),
0);

// nova/primitive/Primitive
nova_primitive_Nova_Primitive_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Primitive")),
0);
nova_primitive_Nova_Primitive_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_Nova_PrimitiveFunctionMap_Nova_construct(0);
nova_primitive_Nova_Primitive_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_Nova_PrimitivePropertyMap_Nova_construct(0);

// nova/primitive/Primitive.PrimitiveFunctionMap
nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Primitive.PrimitiveFunctionMap")),
0);

// nova/primitive/Primitive.PrimitivePropertyMap
nova_primitive_Nova_PrimitivePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/Primitive.PrimitivePropertyMap")),
0);

// nova/primitive/number/Byte
nova_primitive_number_Nova_Byte_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Byte")),
0);
nova_primitive_number_Nova_Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_ByteFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_BytePropertyMap_Nova_construct(0);

// nova/primitive/number/Byte.ByteFunctionMap
nova_primitive_number_Nova_ByteFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Byte.ByteFunctionMap")),
0);

// nova/primitive/number/Byte.BytePropertyMap
nova_primitive_number_Nova_BytePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Byte.BytePropertyMap")),
0);

// nova/primitive/number/Char
nova_primitive_number_Nova_Char_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Char")),
0);
nova_primitive_number_Nova_Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_CharFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_CharPropertyMap_Nova_construct(0);

// nova/primitive/number/Char.CharFunctionMap
nova_primitive_number_Nova_CharFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Char.CharFunctionMap")),
0);

// nova/primitive/number/Char.CharPropertyMap
nova_primitive_number_Nova_CharPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Char.CharPropertyMap")),
0);

// nova/primitive/number/Double
nova_primitive_number_Nova_Double_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Double")),
0);
nova_primitive_number_Nova_Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_DoubleFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_DoublePropertyMap_Nova_construct(0);

// nova/primitive/number/Double.DoubleFunctionMap
nova_primitive_number_Nova_DoubleFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Double.DoubleFunctionMap")),
0);

// nova/primitive/number/Double.DoublePropertyMap
nova_primitive_number_Nova_DoublePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Double.DoublePropertyMap")),
0);

// nova/primitive/number/Float
nova_primitive_number_Nova_Float_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Float")),
0);
nova_primitive_number_Nova_Float_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_FloatFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Float_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_FloatPropertyMap_Nova_construct(0);

// nova/primitive/number/Float.FloatFunctionMap
nova_primitive_number_Nova_FloatFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Float.FloatFunctionMap")),
0);

// nova/primitive/number/Float.FloatPropertyMap
nova_primitive_number_Nova_FloatPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Float.FloatPropertyMap")),
0);

// nova/primitive/number/Int
nova_primitive_number_Nova_Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Int")),
0);
nova_primitive_number_Nova_Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_IntFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_IntPropertyMap_Nova_construct(0);

// nova/primitive/number/Int.IntFunctionMap
nova_primitive_number_Nova_IntFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Int.IntFunctionMap")),
0);

// nova/primitive/number/Int.IntPropertyMap
nova_primitive_number_Nova_IntPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Int.IntPropertyMap")),
0);

// nova/primitive/number/Integer
nova_primitive_number_Nova_Integer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Integer")),
1);
nova_primitive_number_Nova_Integer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_IntegerFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Integer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_IntegerPropertyMap_Nova_construct(0);

// nova/primitive/number/Integer.IntegerFunctionMap
nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Integer.IntegerFunctionMap")),
1);

// nova/primitive/number/Integer.IntegerPropertyMap
nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Integer.IntegerPropertyMap")),
1);

// nova/primitive/number/Long
nova_primitive_number_Nova_Long_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Long")),
0);
nova_primitive_number_Nova_Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_LongFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_LongPropertyMap_Nova_construct(0);

// nova/primitive/number/Long.LongFunctionMap
nova_primitive_number_Nova_LongFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Long.LongFunctionMap")),
0);

// nova/primitive/number/Long.LongPropertyMap
nova_primitive_number_Nova_LongPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Long.LongPropertyMap")),
0);

// nova/primitive/number/Number
nova_primitive_number_Nova_Number_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Number")),
0);
nova_primitive_number_Nova_Number_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_NumberFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Number_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_NumberPropertyMap_Nova_construct(0);

// nova/primitive/number/Number.NumberFunctionMap
nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Number.NumberFunctionMap")),
0);

// nova/primitive/number/Number.NumberPropertyMap
nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Number.NumberPropertyMap")),
0);

// nova/primitive/number/RealNumber
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/RealNumber")),
1);
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_RealNumberFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_RealNumberPropertyMap_Nova_construct(0);

// nova/primitive/number/RealNumber.RealNumberFunctionMap
nova_primitive_number_Nova_RealNumberFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/RealNumber.RealNumberFunctionMap")),
1);

// nova/primitive/number/RealNumber.RealNumberPropertyMap
nova_primitive_number_Nova_RealNumberPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/RealNumber.RealNumberPropertyMap")),
1);

// nova/primitive/number/Short
nova_primitive_number_Nova_Short_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Short")),
0);
nova_primitive_number_Nova_Short_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_primitive_number_Nova_ShortFunctionMap_Nova_construct(0);
nova_primitive_number_Nova_Short_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_primitive_number_Nova_ShortPropertyMap_Nova_construct(0);

// nova/primitive/number/Short.ShortFunctionMap
nova_primitive_number_Nova_ShortFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Short.ShortFunctionMap")),
0);

// nova/primitive/number/Short.ShortPropertyMap
nova_primitive_number_Nova_ShortPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/primitive/number/Short.ShortPropertyMap")),
0);

// nova/process/Process
nova_process_Nova_Process_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/process/Process")),
0);
nova_process_Nova_Process_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_process_Nova_ProcessFunctionMap_Nova_construct(0);
nova_process_Nova_Process_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_process_Nova_ProcessPropertyMap_Nova_construct(0);

// nova/process/Process.ProcessFunctionMap
nova_process_Nova_ProcessFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/process/Process.ProcessFunctionMap")),
0);

// nova/process/Process.ProcessPropertyMap
nova_process_Nova_ProcessPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/process/Process.ProcessPropertyMap")),
0);

// nova/regex/Match
nova_regex_Nova_Match_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Match")),
0);
nova_regex_Nova_Match_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_regex_Nova_MatchFunctionMap_Nova_construct(0);
nova_regex_Nova_Match_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_regex_Nova_MatchPropertyMap_Nova_construct(0);

// nova/regex/Match.MatchFunctionMap
nova_regex_Nova_MatchFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Match.MatchFunctionMap")),
0);

// nova/regex/Match.MatchPropertyMap
nova_regex_Nova_MatchPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Match.MatchPropertyMap")),
0);

// nova/regex/Pattern
nova_regex_Nova_Pattern_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Pattern")),
0);
nova_regex_Nova_Pattern_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_regex_Nova_PatternFunctionMap_Nova_construct(0);
nova_regex_Nova_Pattern_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_regex_Nova_PatternPropertyMap_Nova_construct(0);

// nova/regex/Pattern.PatternFunctionMap
nova_regex_Nova_PatternFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Pattern.PatternFunctionMap")),
0);

// nova/regex/Pattern.PatternPropertyMap
nova_regex_Nova_PatternPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Pattern.PatternPropertyMap")),
0);

// nova/regex/Regex
nova_regex_Nova_Regex_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Regex")),
0);
nova_regex_Nova_Regex_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_regex_Nova_RegexFunctionMap_Nova_construct(0);
nova_regex_Nova_Regex_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_regex_Nova_RegexPropertyMap_Nova_construct(0);

// nova/regex/Regex.RegexFunctionMap
nova_regex_Nova_RegexFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Regex.RegexFunctionMap")),
0);

// nova/regex/Regex.RegexPropertyMap
nova_regex_Nova_RegexPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/regex/Regex.RegexPropertyMap")),
0);

// nova/security/MD5
nova_security_Nova_MD5_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/MD5")),
0);
nova_security_Nova_MD5_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_security_Nova_MD5FunctionMap_Nova_construct(0);
nova_security_Nova_MD5_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_security_Nova_MD5PropertyMap_Nova_construct(0);

// nova/security/MD5.MD5FunctionMap
nova_security_Nova_MD5FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/MD5.MD5FunctionMap")),
0);

// nova/security/MD5.MD5PropertyMap
nova_security_Nova_MD5PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/MD5.MD5PropertyMap")),
0);

// nova/security/Sha256
nova_security_Nova_Sha256_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/Sha256")),
0);
nova_security_Nova_Sha256_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_security_Nova_Sha256FunctionMap_Nova_construct(0);
nova_security_Nova_Sha256_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_security_Nova_Sha256PropertyMap_Nova_construct(0);

// nova/security/Sha256.Sha256FunctionMap
nova_security_Nova_Sha256FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/Sha256.Sha256FunctionMap")),
0);

// nova/security/Sha256.Sha256PropertyMap
nova_security_Nova_Sha256PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/security/Sha256.Sha256PropertyMap")),
0);

// nova/serialization/JsonSerializer
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/JsonSerializer")),
0);
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_serialization_Nova_JsonSerializerFunctionMap_Nova_construct(0);
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_serialization_Nova_JsonSerializerPropertyMap_Nova_construct(0);

// nova/serialization/JsonSerializer.JsonSerializerFunctionMap
nova_serialization_Nova_JsonSerializerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/JsonSerializer.JsonSerializerFunctionMap")),
0);

// nova/serialization/JsonSerializer.JsonSerializerPropertyMap
nova_serialization_Nova_JsonSerializerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/serialization/JsonSerializer.JsonSerializerPropertyMap")),
0);

// nova/star/Frame
nova_star_Nova_Frame_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Frame")),
0);
nova_star_Nova_Frame_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_star_Nova_FrameFunctionMap_Nova_construct(0);
nova_star_Nova_Frame_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_star_Nova_FramePropertyMap_Nova_construct(0);

// nova/star/Frame.FrameFunctionMap
nova_star_Nova_FrameFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Frame.FrameFunctionMap")),
0);

// nova/star/Frame.FramePropertyMap
nova_star_Nova_FramePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Frame.FramePropertyMap")),
0);

// nova/star/Window
nova_star_Nova_Window_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Window")),
0);
nova_star_Nova_Window_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_star_Nova_WindowFunctionMap_Nova_construct(0);
nova_star_Nova_Window_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_star_Nova_WindowPropertyMap_Nova_construct(0);

// nova/star/Window.WindowFunctionMap
nova_star_Nova_WindowFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Window.WindowFunctionMap")),
0);

// nova/star/Window.WindowPropertyMap
nova_star_Nova_WindowPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/Window.WindowPropertyMap")),
0);

// nova/star/WindowThread
nova_star_Nova_WindowThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/WindowThread")),
0);
nova_star_Nova_WindowThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_star_Nova_WindowThreadFunctionMap_Nova_construct(0);
nova_star_Nova_WindowThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_star_Nova_WindowThreadPropertyMap_Nova_construct(0);

// nova/star/WindowThread.WindowThreadFunctionMap
nova_star_Nova_WindowThreadFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/WindowThread.WindowThreadFunctionMap")),
0);

// nova/star/WindowThread.WindowThreadPropertyMap
nova_star_Nova_WindowThreadPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/star/WindowThread.WindowThreadPropertyMap")),
0);

// nova/thread/Thread
nova_thread_Nova_Thread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/Thread")),
0);
nova_thread_Nova_Thread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_thread_Nova_ThreadFunctionMap_Nova_construct(0);
nova_thread_Nova_Thread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_thread_Nova_ThreadPropertyMap_Nova_construct(0);

// nova/thread/Thread.ThreadFunctionMap
nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/Thread.ThreadFunctionMap")),
0);

// nova/thread/Thread.ThreadPropertyMap
nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/Thread.ThreadPropertyMap")),
0);

// nova/thread/ThreadLocal
nova_thread_Nova_ThreadLocal_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/ThreadLocal")),
0);
nova_thread_Nova_ThreadLocal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_thread_Nova_ThreadLocalFunctionMap_Nova_construct(0);
nova_thread_Nova_ThreadLocal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_thread_Nova_ThreadLocalPropertyMap_Nova_construct(0);

// nova/thread/ThreadLocal.ThreadLocalFunctionMap
nova_thread_Nova_ThreadLocalFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/ThreadLocal.ThreadLocalFunctionMap")),
0);

// nova/thread/ThreadLocal.ThreadLocalPropertyMap
nova_thread_Nova_ThreadLocalPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/ThreadLocal.ThreadLocalPropertyMap")),
0);

// nova/thread/UncaughtExceptionHandler
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/UncaughtExceptionHandler")),
0);
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_construct(0);
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_Nova_construct(0);

// nova/thread/UncaughtExceptionHandler.UncaughtExceptionHandlerFunctionMap
nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/UncaughtExceptionHandler.UncaughtExceptionHandlerFunctionMap")),
0);

// nova/thread/UncaughtExceptionHandler.UncaughtExceptionHandlerPropertyMap
nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/UncaughtExceptionHandler.UncaughtExceptionHandlerPropertyMap")),
0);

// nova/thread/async/Async
nova_thread_async_Nova_Async_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Async")),
0);
nova_thread_async_Nova_Async_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_thread_async_Nova_AsyncFunctionMap_Nova_construct(0);
nova_thread_async_Nova_Async_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_thread_async_Nova_AsyncPropertyMap_Nova_construct(0);

// nova/thread/async/Async.AsyncFunctionMap
nova_thread_async_Nova_AsyncFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Async.AsyncFunctionMap")),
0);

// nova/thread/async/Async.AsyncPropertyMap
nova_thread_async_Nova_AsyncPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Async.AsyncPropertyMap")),
0);

// nova/thread/async/Task
nova_thread_async_Nova_Task_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Task")),
0);
nova_thread_async_Nova_Task_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_thread_async_Nova_TaskFunctionMap_Nova_construct(0);
nova_thread_async_Nova_Task_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_thread_async_Nova_TaskPropertyMap_Nova_construct(0);

// nova/thread/async/Task.TaskFunctionMap
nova_thread_async_Nova_TaskFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Task.TaskFunctionMap")),
0);

// nova/thread/async/Task.TaskPropertyMap
nova_thread_async_Nova_TaskPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/thread/async/Task.TaskPropertyMap")),
0);

// nova/time/CumulativeTimer
nova_time_Nova_CumulativeTimer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/CumulativeTimer")),
0);
nova_time_Nova_CumulativeTimer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_time_Nova_CumulativeTimerFunctionMap_Nova_construct(0);
nova_time_Nova_CumulativeTimer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_time_Nova_CumulativeTimerPropertyMap_Nova_construct(0);

// nova/time/CumulativeTimer.CumulativeTimerFunctionMap
nova_time_Nova_CumulativeTimerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/CumulativeTimer.CumulativeTimerFunctionMap")),
0);

// nova/time/CumulativeTimer.CumulativeTimerPropertyMap
nova_time_Nova_CumulativeTimerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/CumulativeTimer.CumulativeTimerPropertyMap")),
0);

// nova/time/Date
nova_time_Nova_Date_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Date")),
0);
nova_time_Nova_Date_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_time_Nova_DateFunctionMap_Nova_construct(0);
nova_time_Nova_Date_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_time_Nova_DatePropertyMap_Nova_construct(0);

// nova/time/Date.DateFunctionMap
nova_time_Nova_DateFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Date.DateFunctionMap")),
0);

// nova/time/Date.DatePropertyMap
nova_time_Nova_DatePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Date.DatePropertyMap")),
0);

// nova/time/Time
nova_time_Nova_Time_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Time")),
0);
nova_time_Nova_Time_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_time_Nova_TimeFunctionMap_Nova_construct(0);
nova_time_Nova_Time_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_time_Nova_TimePropertyMap_Nova_construct(0);

// nova/time/Time.TimeFunctionMap
nova_time_Nova_TimeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Time.TimeFunctionMap")),
0);

// nova/time/Time.TimePropertyMap
nova_time_Nova_TimePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Time.TimePropertyMap")),
0);

// nova/time/Timer
nova_time_Nova_Timer_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Timer")),
0);
nova_time_Nova_Timer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_time_Nova_TimerFunctionMap_Nova_construct(0);
nova_time_Nova_Timer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_time_Nova_TimerPropertyMap_Nova_construct(0);

// nova/time/Timer.TimerFunctionMap
nova_time_Nova_TimerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Timer.TimerFunctionMap")),
0);

// nova/time/Timer.TimerPropertyMap
nova_time_Nova_TimerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/time/Timer.TimerPropertyMap")),
0);

// nova/web/js/json/Json
nova_web_js_json_Nova_Json_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/js/json/Json")),
0);
nova_web_js_json_Nova_Json_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_js_json_Nova_JsonFunctionMap_Nova_construct(0);
nova_web_js_json_Nova_Json_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_js_json_Nova_JsonPropertyMap_Nova_construct(0);

// nova/web/js/json/Json.JsonFunctionMap
nova_web_js_json_Nova_JsonFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/js/json/Json.JsonFunctionMap")),
0);

// nova/web/js/json/Json.JsonPropertyMap
nova_web_js_json_Nova_JsonPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/js/json/Json.JsonPropertyMap")),
0);

// nova/web/svg/Svg
nova_web_svg_Nova_Svg_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/Svg")),
0);
nova_web_svg_Nova_Svg_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_Nova_SvgFunctionMap_Nova_construct(0);
nova_web_svg_Nova_Svg_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_Nova_SvgPropertyMap_Nova_construct(0);

// nova/web/svg/Svg.SvgFunctionMap
nova_web_svg_Nova_SvgFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/Svg.SvgFunctionMap")),
0);

// nova/web/svg/Svg.SvgPropertyMap
nova_web_svg_Nova_SvgPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/Svg.SvgPropertyMap")),
0);

// nova/web/svg/SvgCircle
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgCircle")),
0);
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_Nova_SvgCircleFunctionMap_Nova_construct(0);
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_Nova_SvgCirclePropertyMap_Nova_construct(0);

// nova/web/svg/SvgCircle.SvgCircleFunctionMap
nova_web_svg_Nova_SvgCircleFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgCircle.SvgCircleFunctionMap")),
0);

// nova/web/svg/SvgCircle.SvgCirclePropertyMap
nova_web_svg_Nova_SvgCirclePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgCircle.SvgCirclePropertyMap")),
0);

// nova/web/svg/SvgComponent
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponent")),
0);
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_Nova_SvgComponentFunctionMap_Nova_construct(0);
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_Nova_SvgComponentPropertyMap_Nova_construct(0);

// nova/web/svg/SvgComponent.SvgComponentFunctionMap
nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponent.SvgComponentFunctionMap")),
0);

// nova/web/svg/SvgComponent.SvgComponentPropertyMap
nova_web_svg_Nova_SvgComponentPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponent.SvgComponentPropertyMap")),
0);

// nova/web/svg/SvgComponentList
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentList")),
0);
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_construct(0);
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_construct(0);

// nova/web/svg/SvgComponentList.SvgComponentListFunctionMap
nova_web_svg_Nova_SvgComponentListFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentList.SvgComponentListFunctionMap")),
0);

// nova/web/svg/SvgComponentList.SvgComponentListPropertyMap
nova_web_svg_Nova_SvgComponentListPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentList.SvgComponentListPropertyMap")),
0);

// nova/web/svg/SvgComponentNode
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentNode")),
0);
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_construct(0);
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_construct(0);

// nova/web/svg/SvgComponentNode.SvgComponentNodeFunctionMap
nova_web_svg_Nova_SvgComponentNodeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentNode.SvgComponentNodeFunctionMap")),
0);

// nova/web/svg/SvgComponentNode.SvgComponentNodePropertyMap
nova_web_svg_Nova_SvgComponentNodePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgComponentNode.SvgComponentNodePropertyMap")),
0);

// nova/web/svg/SvgMainComponent
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgMainComponent")),
0);
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_construct(0);
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_construct(0);

// nova/web/svg/SvgMainComponent.SvgMainComponentFunctionMap
nova_web_svg_Nova_SvgMainComponentFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgMainComponent.SvgMainComponentFunctionMap")),
0);

// nova/web/svg/SvgMainComponent.SvgMainComponentPropertyMap
nova_web_svg_Nova_SvgMainComponentPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/SvgMainComponent.SvgMainComponentPropertyMap")),
0);

// nova/web/svg/no3/No3
nova_web_svg_no3_Nova_No3_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3")),
0);
nova_web_svg_no3_Nova_No3_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_no3_Nova_No3FunctionMap_Nova_construct(0);
nova_web_svg_no3_Nova_No3_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_no3_Nova_No3PropertyMap_Nova_construct(0);

// nova/web/svg/no3/No3.No3FunctionMap
nova_web_svg_no3_Nova_No3FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3.No3FunctionMap")),
0);

// nova/web/svg/no3/No3.No3PropertyMap
nova_web_svg_no3_Nova_No3PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3.No3PropertyMap")),
0);

// nova/web/svg/no3/No3Node
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Node")),
0);
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_no3_Nova_No3NodeFunctionMap_Nova_construct(0);
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_no3_Nova_No3NodePropertyMap_Nova_construct(0);

// nova/web/svg/no3/No3Node.No3NodeFunctionMap
nova_web_svg_no3_Nova_No3NodeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Node.No3NodeFunctionMap")),
0);

// nova/web/svg/no3/No3Node.No3NodePropertyMap
nova_web_svg_no3_Nova_No3NodePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Node.No3NodePropertyMap")),
0);

// nova/web/svg/no3/No3Select
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Select")),
0);
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_no3_Nova_No3SelectFunctionMap_Nova_construct(0);
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_no3_Nova_No3SelectPropertyMap_Nova_construct(0);

// nova/web/svg/no3/No3Select.No3SelectFunctionMap
nova_web_svg_no3_Nova_No3SelectFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Select.No3SelectFunctionMap")),
0);

// nova/web/svg/no3/No3Select.No3SelectPropertyMap
nova_web_svg_no3_Nova_No3SelectPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3Select.No3SelectPropertyMap")),
0);

// nova/web/svg/no3/No3SelectAll
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3SelectAll")),
0);
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)nova_web_svg_no3_Nova_No3SelectAllFunctionMap_Nova_construct(0);
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)nova_web_svg_no3_Nova_No3SelectAllPropertyMap_Nova_construct(0);

// nova/web/svg/no3/No3SelectAll.No3SelectAllFunctionMap
nova_web_svg_no3_Nova_No3SelectAllFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3SelectAll.No3SelectAllFunctionMap")),
0);

// nova/web/svg/no3/No3SelectAll.No3SelectAllPropertyMap
nova_web_svg_no3_Nova_No3SelectAllPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("nova/web/svg/no3/No3SelectAll.No3SelectAllPropertyMap")),
0);

// novex/nest/InvalidAssertionException
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/InvalidAssertionException")),
0);
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)novex_nest_Nova_InvalidAssertionExceptionFunctionMap_Nova_construct(0);
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)novex_nest_Nova_InvalidAssertionExceptionPropertyMap_Nova_construct(0);

// novex/nest/InvalidAssertionException.InvalidAssertionExceptionFunctionMap
novex_nest_Nova_InvalidAssertionExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/InvalidAssertionException.InvalidAssertionExceptionFunctionMap")),
0);

// novex/nest/InvalidAssertionException.InvalidAssertionExceptionPropertyMap
novex_nest_Nova_InvalidAssertionExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/InvalidAssertionException.InvalidAssertionExceptionPropertyMap")),
0);

// novex/nest/Nest
novex_nest_Nova_Nest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest")),
0);
novex_nest_Nova_Nest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)novex_nest_Nova_NestFunctionMap_Nova_construct(0);
novex_nest_Nova_Nest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)novex_nest_Nova_NestPropertyMap_Nova_construct(0);

// novex/nest/Nest.NestFunctionMap
novex_nest_Nova_NestFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.NestFunctionMap")),
0);

// novex/nest/Nest.NestPropertyMap
novex_nest_Nova_NestPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.NestPropertyMap")),
0);

// novex/nest/Nest.Nest1Int
novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/Nest.Nest1Int")),
0);

// novex/nest/TestSuite
novex_nest_Nova_TestSuite_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestSuite")),
1);
novex_nest_Nova_TestSuite_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)novex_nest_Nova_TestSuiteFunctionMap_Nova_construct(0);
novex_nest_Nova_TestSuite_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)novex_nest_Nova_TestSuitePropertyMap_Nova_construct(0);

// novex/nest/TestSuite.TestSuiteFunctionMap
novex_nest_Nova_TestSuiteFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestSuite.TestSuiteFunctionMap")),
1);

// novex/nest/TestSuite.TestSuitePropertyMap
novex_nest_Nova_TestSuitePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("novex/nest/TestSuite.TestSuitePropertyMap")),
1);

// example/Animal
example_Nova_Animal_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Animal")),
0);
example_Nova_Animal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_AnimalFunctionMap_Nova_construct(0);
example_Nova_Animal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_AnimalPropertyMap_Nova_construct(0);

// example/Animal.AnimalFunctionMap
example_Nova_AnimalFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Animal.AnimalFunctionMap")),
0);

// example/Animal.AnimalPropertyMap
example_Nova_AnimalPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Animal.AnimalPropertyMap")),
0);

// example/ArrayDemo
example_Nova_ArrayDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ArrayDemo")),
0);
example_Nova_ArrayDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_ArrayDemoFunctionMap_Nova_construct(0);
example_Nova_ArrayDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_ArrayDemoPropertyMap_Nova_construct(0);

// example/ArrayDemo.ArrayDemoFunctionMap
example_Nova_ArrayDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ArrayDemo.ArrayDemoFunctionMap")),
0);

// example/ArrayDemo.ArrayDemoPropertyMap
example_Nova_ArrayDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ArrayDemo.ArrayDemoPropertyMap")),
0);

// example/BodyBuilder
example_Nova_BodyBuilder_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/BodyBuilder")),
0);
example_Nova_BodyBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_BodyBuilderFunctionMap_Nova_construct(0);
example_Nova_BodyBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_BodyBuilderPropertyMap_Nova_construct(0);

// example/BodyBuilder.BodyBuilderFunctionMap
example_Nova_BodyBuilderFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/BodyBuilder.BodyBuilderFunctionMap")),
0);

// example/BodyBuilder.BodyBuilderPropertyMap
example_Nova_BodyBuilderPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/BodyBuilder.BodyBuilderPropertyMap")),
0);

// example/ClosureDemo
example_Nova_ClosureDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ClosureDemo")),
0);
example_Nova_ClosureDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_ClosureDemoFunctionMap_Nova_construct(0);
example_Nova_ClosureDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_ClosureDemoPropertyMap_Nova_construct(0);

// example/ClosureDemo.ClosureDemoFunctionMap
example_Nova_ClosureDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ClosureDemo.ClosureDemoFunctionMap")),
0);

// example/ClosureDemo.ClosureDemoPropertyMap
example_Nova_ClosureDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ClosureDemo.ClosureDemoPropertyMap")),
0);

// example/Dog
example_Nova_Dog_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Dog")),
0);
example_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_DogFunctionMap_Nova_construct(0);
example_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_DogPropertyMap_Nova_construct(0);

// example/Dog.DogFunctionMap
example_Nova_DogFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Dog.DogFunctionMap")),
0);

// example/Dog.DogPropertyMap
example_Nova_DogPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Dog.DogPropertyMap")),
0);

// example/ExceptionHandlingDemo
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ExceptionHandlingDemo")),
0);
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_ExceptionHandlingDemoFunctionMap_Nova_construct(0);
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_ExceptionHandlingDemoPropertyMap_Nova_construct(0);

// example/ExceptionHandlingDemo.ExceptionHandlingDemoFunctionMap
example_Nova_ExceptionHandlingDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ExceptionHandlingDemo.ExceptionHandlingDemoFunctionMap")),
0);

// example/ExceptionHandlingDemo.ExceptionHandlingDemoPropertyMap
example_Nova_ExceptionHandlingDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ExceptionHandlingDemo.ExceptionHandlingDemoPropertyMap")),
0);

// example/FileTest
example_Nova_FileTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/FileTest")),
0);
example_Nova_FileTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_FileTestFunctionMap_Nova_construct(0);
example_Nova_FileTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_FileTestPropertyMap_Nova_construct(0);

// example/FileTest.FileTestFunctionMap
example_Nova_FileTestFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/FileTest.FileTestFunctionMap")),
0);

// example/FileTest.FileTestPropertyMap
example_Nova_FileTestPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/FileTest.FileTestPropertyMap")),
0);

// example/GenericDemo
example_Nova_GenericDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/GenericDemo")),
0);
example_Nova_GenericDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_GenericDemoFunctionMap_Nova_construct(0);
example_Nova_GenericDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_GenericDemoPropertyMap_Nova_construct(0);

// example/GenericDemo.GenericDemoFunctionMap
example_Nova_GenericDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/GenericDemo.GenericDemoFunctionMap")),
0);

// example/GenericDemo.GenericDemoPropertyMap
example_Nova_GenericDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/GenericDemo.GenericDemoPropertyMap")),
0);

// example/HashMapDemo
example_Nova_HashMapDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashMapDemo")),
0);
example_Nova_HashMapDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_HashMapDemoFunctionMap_Nova_construct(0);
example_Nova_HashMapDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_HashMapDemoPropertyMap_Nova_construct(0);

// example/HashMapDemo.HashMapDemoFunctionMap
example_Nova_HashMapDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashMapDemo.HashMapDemoFunctionMap")),
0);

// example/HashMapDemo.HashMapDemoPropertyMap
example_Nova_HashMapDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashMapDemo.HashMapDemoPropertyMap")),
0);

// example/HashSetDemo
example_Nova_HashSetDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashSetDemo")),
0);
example_Nova_HashSetDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_HashSetDemoFunctionMap_Nova_construct(0);
example_Nova_HashSetDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_HashSetDemoPropertyMap_Nova_construct(0);

// example/HashSetDemo.HashSetDemoFunctionMap
example_Nova_HashSetDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashSetDemo.HashSetDemoFunctionMap")),
0);

// example/HashSetDemo.HashSetDemoPropertyMap
example_Nova_HashSetDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/HashSetDemo.HashSetDemoPropertyMap")),
0);

// example/IntegerTest
example_Nova_IntegerTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/IntegerTest")),
0);
example_Nova_IntegerTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_IntegerTestFunctionMap_Nova_construct(0);
example_Nova_IntegerTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_IntegerTestPropertyMap_Nova_construct(0);

// example/IntegerTest.IntegerTestFunctionMap
example_Nova_IntegerTestFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/IntegerTest.IntegerTestFunctionMap")),
0);

// example/IntegerTest.IntegerTestPropertyMap
example_Nova_IntegerTestPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/IntegerTest.IntegerTestPropertyMap")),
0);

// example/Lab
example_Nova_Lab_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Lab")),
0);
example_Nova_Lab_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_LabFunctionMap_Nova_construct(0);
example_Nova_Lab_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_LabPropertyMap_Nova_construct(0);

// example/Lab.LabFunctionMap
example_Nova_LabFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Lab.LabFunctionMap")),
0);

// example/Lab.LabPropertyMap
example_Nova_LabPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Lab.LabPropertyMap")),
0);

// example/MathDemo
example_Nova_MathDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/MathDemo")),
0);
example_Nova_MathDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_MathDemoFunctionMap_Nova_construct(0);
example_Nova_MathDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_MathDemoPropertyMap_Nova_construct(0);

// example/MathDemo.MathDemoFunctionMap
example_Nova_MathDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/MathDemo.MathDemoFunctionMap")),
0);

// example/MathDemo.MathDemoPropertyMap
example_Nova_MathDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/MathDemo.MathDemoPropertyMap")),
0);

// example/NestTest
example_Nova_NestTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NestTest")),
0);
example_Nova_NestTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_NestTestFunctionMap_Nova_construct(0);
example_Nova_NestTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_NestTestPropertyMap_Nova_construct(0);

// example/NestTest.NestTestFunctionMap
example_Nova_NestTestFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NestTest.NestTestFunctionMap")),
0);

// example/NestTest.NestTestPropertyMap
example_Nova_NestTestPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NestTest.NestTestPropertyMap")),
0);

// example/NonWholeDivisionException
example_Nova_NonWholeDivisionException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NonWholeDivisionException")),
0);
example_Nova_NonWholeDivisionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_NonWholeDivisionExceptionFunctionMap_Nova_construct(0);
example_Nova_NonWholeDivisionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_NonWholeDivisionExceptionPropertyMap_Nova_construct(0);

// example/NonWholeDivisionException.NonWholeDivisionExceptionFunctionMap
example_Nova_NonWholeDivisionExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NonWholeDivisionException.NonWholeDivisionExceptionFunctionMap")),
0);

// example/NonWholeDivisionException.NonWholeDivisionExceptionPropertyMap
example_Nova_NonWholeDivisionExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/NonWholeDivisionException.NonWholeDivisionExceptionPropertyMap")),
0);

// example/Person
example_Nova_Person_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Person")),
0);
example_Nova_Person_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_PersonFunctionMap_Nova_construct(0);
example_Nova_Person_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_PersonPropertyMap_Nova_construct(0);

// example/Person.PersonFunctionMap
example_Nova_PersonFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Person.PersonFunctionMap")),
0);

// example/Person.PersonPropertyMap
example_Nova_PersonPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Person.PersonPropertyMap")),
0);

// example/Polygon
example_Nova_Polygon_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Polygon")),
1);
example_Nova_Polygon_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_PolygonFunctionMap_Nova_construct(0);
example_Nova_Polygon_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_PolygonPropertyMap_Nova_construct(0);

// example/Polygon.PolygonFunctionMap
example_Nova_PolygonFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Polygon.PolygonFunctionMap")),
1);

// example/Polygon.PolygonPropertyMap
example_Nova_PolygonPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Polygon.PolygonPropertyMap")),
1);

// example/PolymorphismDemo
example_Nova_PolymorphismDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/PolymorphismDemo")),
0);
example_Nova_PolymorphismDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_PolymorphismDemoFunctionMap_Nova_construct(0);
example_Nova_PolymorphismDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_PolymorphismDemoPropertyMap_Nova_construct(0);

// example/PolymorphismDemo.PolymorphismDemoFunctionMap
example_Nova_PolymorphismDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/PolymorphismDemo.PolymorphismDemoFunctionMap")),
0);

// example/PolymorphismDemo.PolymorphismDemoPropertyMap
example_Nova_PolymorphismDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/PolymorphismDemo.PolymorphismDemoPropertyMap")),
0);

// example/QueueDemo
example_Nova_QueueDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/QueueDemo")),
0);
example_Nova_QueueDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_QueueDemoFunctionMap_Nova_construct(0);
example_Nova_QueueDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_QueueDemoPropertyMap_Nova_construct(0);

// example/QueueDemo.QueueDemoFunctionMap
example_Nova_QueueDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/QueueDemo.QueueDemoFunctionMap")),
0);

// example/QueueDemo.QueueDemoPropertyMap
example_Nova_QueueDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/QueueDemo.QueueDemoPropertyMap")),
0);

// example/Spider
example_Nova_Spider_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Spider")),
0);
example_Nova_Spider_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_SpiderFunctionMap_Nova_construct(0);
example_Nova_Spider_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_SpiderPropertyMap_Nova_construct(0);

// example/Spider.SpiderFunctionMap
example_Nova_SpiderFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Spider.SpiderFunctionMap")),
0);

// example/Spider.SpiderPropertyMap
example_Nova_SpiderPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Spider.SpiderPropertyMap")),
0);

// example/Square
example_Nova_Square_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Square")),
0);
example_Nova_Square_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_SquareFunctionMap_Nova_construct(0);
example_Nova_Square_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_SquarePropertyMap_Nova_construct(0);

// example/Square.SquareFunctionMap
example_Nova_SquareFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Square.SquareFunctionMap")),
0);

// example/Square.SquarePropertyMap
example_Nova_SquarePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Square.SquarePropertyMap")),
0);

// example/SvgChart
example_Nova_SvgChart_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgChart")),
0);
example_Nova_SvgChart_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_SvgChartFunctionMap_Nova_construct(0);
example_Nova_SvgChart_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_SvgChartPropertyMap_Nova_construct(0);

// example/SvgChart.SvgChartFunctionMap
example_Nova_SvgChartFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgChart.SvgChartFunctionMap")),
0);

// example/SvgChart.SvgChartPropertyMap
example_Nova_SvgChartPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgChart.SvgChartPropertyMap")),
0);

// example/SvgFractal
example_Nova_SvgFractal_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgFractal")),
0);
example_Nova_SvgFractal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_SvgFractalFunctionMap_Nova_construct(0);
example_Nova_SvgFractal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_SvgFractalPropertyMap_Nova_construct(0);

// example/SvgFractal.SvgFractalFunctionMap
example_Nova_SvgFractalFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgFractal.SvgFractalFunctionMap")),
0);

// example/SvgFractal.SvgFractalPropertyMap
example_Nova_SvgFractalPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/SvgFractal.SvgFractalPropertyMap")),
0);

// example/T1
example_Nova_T1_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T1")),
0);
example_Nova_T1_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_T1FunctionMap_Nova_construct(0);
example_Nova_T1_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_T1PropertyMap_Nova_construct(0);

// example/T1.T1FunctionMap
example_Nova_T1FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T1.T1FunctionMap")),
0);

// example/T1.T1PropertyMap
example_Nova_T1PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T1.T1PropertyMap")),
0);

// example/T2
example_Nova_T2_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T2")),
0);
example_Nova_T2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_T2FunctionMap_Nova_construct(0);
example_Nova_T2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_T2PropertyMap_Nova_construct(0);

// example/T2.T2FunctionMap
example_Nova_T2FunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T2.T2FunctionMap")),
0);

// example/T2.T2PropertyMap
example_Nova_T2PropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/T2.T2PropertyMap")),
0);

// example/Test
example_Nova_Test_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Test")),
0);
example_Nova_Test_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_TestFunctionMap_Nova_construct(0);
example_Nova_Test_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_TestPropertyMap_Nova_construct(0);

// example/Test.TestFunctionMap
example_Nova_TestFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Test.TestFunctionMap")),
0);

// example/Test.TestPropertyMap
example_Nova_TestPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/Test.TestPropertyMap")),
0);

// example/ThreadDemo
example_Nova_ThreadDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemo")),
0);
example_Nova_ThreadDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_ThreadDemoFunctionMap_Nova_construct(0);
example_Nova_ThreadDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_ThreadDemoPropertyMap_Nova_construct(0);

// example/ThreadDemo.ThreadDemoFunctionMap
example_Nova_ThreadDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemo.ThreadDemoFunctionMap")),
0);

// example/ThreadDemo.ThreadDemoPropertyMap
example_Nova_ThreadDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemo.ThreadDemoPropertyMap")),
0);

// example/ThreadDemoImplementation
example_Nova_ThreadDemoImplementation_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemoImplementation")),
0);
example_Nova_ThreadDemoImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_Nova_ThreadDemoImplementationFunctionMap_Nova_construct(0);
example_Nova_ThreadDemoImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_Nova_ThreadDemoImplementationPropertyMap_Nova_construct(0);

// example/ThreadDemoImplementation.ThreadDemoImplementationFunctionMap
example_Nova_ThreadDemoImplementationFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemoImplementation.ThreadDemoImplementationFunctionMap")),
0);

// example/ThreadDemoImplementation.ThreadDemoImplementationPropertyMap
example_Nova_ThreadDemoImplementationPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ThreadDemoImplementation.ThreadDemoImplementationPropertyMap")),
0);

// example/ackermann/Ackermann
example_ackermann_Nova_Ackermann_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ackermann/Ackermann")),
0);
example_ackermann_Nova_Ackermann_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_ackermann_Nova_AckermannFunctionMap_Nova_construct(0);
example_ackermann_Nova_Ackermann_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_ackermann_Nova_AckermannPropertyMap_Nova_construct(0);

// example/ackermann/Ackermann.AckermannFunctionMap
example_ackermann_Nova_AckermannFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ackermann/Ackermann.AckermannFunctionMap")),
0);

// example/ackermann/Ackermann.AckermannPropertyMap
example_ackermann_Nova_AckermannPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/ackermann/Ackermann.AckermannPropertyMap")),
0);

// example/copy/Dog
example_copy_Nova_Dog_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/copy/Dog")),
0);
example_copy_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_copy_Nova_DogFunctionMap_Nova_construct(0);
example_copy_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_copy_Nova_DogPropertyMap_Nova_construct(0);

// example/copy/Dog.DogFunctionMap
example_copy_Nova_DogFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/copy/Dog.DogFunctionMap")),
0);

// example/copy/Dog.DogPropertyMap
example_copy_Nova_DogPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/copy/Dog.DogPropertyMap")),
0);

// example/database/DatabaseDemo
example_database_Nova_DatabaseDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/database/DatabaseDemo")),
0);
example_database_Nova_DatabaseDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_database_Nova_DatabaseDemoFunctionMap_Nova_construct(0);
example_database_Nova_DatabaseDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_database_Nova_DatabaseDemoPropertyMap_Nova_construct(0);

// example/database/DatabaseDemo.DatabaseDemoFunctionMap
example_database_Nova_DatabaseDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/database/DatabaseDemo.DatabaseDemoFunctionMap")),
0);

// example/database/DatabaseDemo.DatabaseDemoPropertyMap
example_database_Nova_DatabaseDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/database/DatabaseDemo.DatabaseDemoPropertyMap")),
0);

// example/network/ClientDemo
example_network_Nova_ClientDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ClientDemo")),
0);
example_network_Nova_ClientDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_network_Nova_ClientDemoFunctionMap_Nova_construct(0);
example_network_Nova_ClientDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_network_Nova_ClientDemoPropertyMap_Nova_construct(0);

// example/network/ClientDemo.ClientDemoFunctionMap
example_network_Nova_ClientDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ClientDemo.ClientDemoFunctionMap")),
0);

// example/network/ClientDemo.ClientDemoPropertyMap
example_network_Nova_ClientDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ClientDemo.ClientDemoPropertyMap")),
0);

// example/network/ConnectionThread
example_network_Nova_ConnectionThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ConnectionThread")),
0);
example_network_Nova_ConnectionThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_network_Nova_ConnectionThreadFunctionMap_Nova_construct(0);
example_network_Nova_ConnectionThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_network_Nova_ConnectionThreadPropertyMap_Nova_construct(0);

// example/network/ConnectionThread.ConnectionThreadFunctionMap
example_network_Nova_ConnectionThreadFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ConnectionThread.ConnectionThreadFunctionMap")),
0);

// example/network/ConnectionThread.ConnectionThreadPropertyMap
example_network_Nova_ConnectionThreadPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ConnectionThread.ConnectionThreadPropertyMap")),
0);

// example/network/OutputThread
example_network_Nova_OutputThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/OutputThread")),
0);
example_network_Nova_OutputThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_network_Nova_OutputThreadFunctionMap_Nova_construct(0);
example_network_Nova_OutputThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_network_Nova_OutputThreadPropertyMap_Nova_construct(0);

// example/network/OutputThread.OutputThreadFunctionMap
example_network_Nova_OutputThreadFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/OutputThread.OutputThreadFunctionMap")),
0);

// example/network/OutputThread.OutputThreadPropertyMap
example_network_Nova_OutputThreadPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/OutputThread.OutputThreadPropertyMap")),
0);

// example/network/ServerDemo
example_network_Nova_ServerDemo_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ServerDemo")),
0);
example_network_Nova_ServerDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)example_network_Nova_ServerDemoFunctionMap_Nova_construct(0);
example_network_Nova_ServerDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)example_network_Nova_ServerDemoPropertyMap_Nova_construct(0);

// example/network/ServerDemo.ServerDemoFunctionMap
example_network_Nova_ServerDemoFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ServerDemo.ServerDemoFunctionMap")),
0);

// example/network/ServerDemo.ServerDemoPropertyMap
example_network_Nova_ServerDemoPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("example/network/ServerDemo.ServerDemoPropertyMap")),
0);

// stabilitytest/AssignmentStability
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/AssignmentStability")),
0);
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_AssignmentStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_AssignmentStabilityPropertyMap_Nova_construct(0);

// stabilitytest/AssignmentStability.AssignmentStabilityFunctionMap
stabilitytest_Nova_AssignmentStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/AssignmentStability.AssignmentStabilityFunctionMap")),
0);

// stabilitytest/AssignmentStability.AssignmentStabilityPropertyMap
stabilitytest_Nova_AssignmentStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/AssignmentStability.AssignmentStabilityPropertyMap")),
0);

// stabilitytest/ClassWithProperties
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClassWithProperties")),
0);
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ClassWithPropertiesFunctionMap_Nova_construct(0);
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ClassWithPropertiesPropertyMap_Nova_construct(0);

// stabilitytest/ClassWithProperties.ClassWithPropertiesFunctionMap
stabilitytest_Nova_ClassWithPropertiesFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClassWithProperties.ClassWithPropertiesFunctionMap")),
0);

// stabilitytest/ClassWithProperties.ClassWithPropertiesPropertyMap
stabilitytest_Nova_ClassWithPropertiesPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClassWithProperties.ClassWithPropertiesPropertyMap")),
0);

// stabilitytest/ClientThread
stabilitytest_Nova_ClientThread_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClientThread")),
0);
stabilitytest_Nova_ClientThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ClientThreadFunctionMap_Nova_construct(0);
stabilitytest_Nova_ClientThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ClientThreadPropertyMap_Nova_construct(0);

// stabilitytest/ClientThread.ClientThreadFunctionMap
stabilitytest_Nova_ClientThreadFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClientThread.ClientThreadFunctionMap")),
0);

// stabilitytest/ClientThread.ClientThreadPropertyMap
stabilitytest_Nova_ClientThreadPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClientThread.ClientThreadPropertyMap")),
0);

// stabilitytest/ClosureStability
stabilitytest_Nova_ClosureStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClosureStability")),
0);
stabilitytest_Nova_ClosureStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ClosureStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_ClosureStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ClosureStabilityPropertyMap_Nova_construct(0);

// stabilitytest/ClosureStability.ClosureStabilityFunctionMap
stabilitytest_Nova_ClosureStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClosureStability.ClosureStabilityFunctionMap")),
0);

// stabilitytest/ClosureStability.ClosureStabilityPropertyMap
stabilitytest_Nova_ClosureStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ClosureStability.ClosureStabilityPropertyMap")),
0);

// stabilitytest/ExceptionStability
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExceptionStability")),
0);
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ExceptionStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ExceptionStabilityPropertyMap_Nova_construct(0);

// stabilitytest/ExceptionStability.ExceptionStabilityFunctionMap
stabilitytest_Nova_ExceptionStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExceptionStability.ExceptionStabilityFunctionMap")),
0);

// stabilitytest/ExceptionStability.ExceptionStabilityPropertyMap
stabilitytest_Nova_ExceptionStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExceptionStability.ExceptionStabilityPropertyMap")),
0);

// stabilitytest/ExternalInnerClassStability
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExternalInnerClassStability")),
0);
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ExternalInnerClassStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ExternalInnerClassStabilityPropertyMap_Nova_construct(0);

// stabilitytest/ExternalInnerClassStability.ExternalInnerClassStabilityFunctionMap
stabilitytest_Nova_ExternalInnerClassStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExternalInnerClassStability.ExternalInnerClassStabilityFunctionMap")),
0);

// stabilitytest/ExternalInnerClassStability.ExternalInnerClassStabilityPropertyMap
stabilitytest_Nova_ExternalInnerClassStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ExternalInnerClassStability.ExternalInnerClassStabilityPropertyMap")),
0);

// stabilitytest/FileStability
stabilitytest_Nova_FileStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/FileStability")),
0);
stabilitytest_Nova_FileStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_FileStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_FileStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_FileStabilityPropertyMap_Nova_construct(0);

// stabilitytest/FileStability.FileStabilityFunctionMap
stabilitytest_Nova_FileStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/FileStability.FileStabilityFunctionMap")),
0);

// stabilitytest/FileStability.FileStabilityPropertyMap
stabilitytest_Nova_FileStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/FileStability.FileStabilityPropertyMap")),
0);

// stabilitytest/InnerClassStability
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability")),
0);
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_InnerClassStabilityPropertyMap_Nova_construct(0);

// stabilitytest/InnerClassStability.MyOuter
stabilitytest_Nova_MyOuter_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyOuter")),
0);
stabilitytest_Nova_MyOuter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_MyOuterFunctionMap_Nova_construct(0);
stabilitytest_Nova_MyOuter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_MyOuterPropertyMap_Nova_construct(0);

// stabilitytest/InnerClassStability.InnerClassStabilityFunctionMap
stabilitytest_Nova_InnerClassStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.InnerClassStabilityFunctionMap")),
0);

// stabilitytest/InnerClassStability.InnerClassStabilityPropertyMap
stabilitytest_Nova_InnerClassStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.InnerClassStabilityPropertyMap")),
0);

// stabilitytest/InnerClassStability.MyOuterFunctionMap
stabilitytest_Nova_MyOuterFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyOuterFunctionMap")),
0);

// stabilitytest/InnerClassStability.MyOuterPropertyMap
stabilitytest_Nova_MyOuterPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyOuterPropertyMap")),
0);

// stabilitytest/InnerClassStability.MyInner
stabilitytest_Nova_MyInner_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyInner")),
0);
stabilitytest_Nova_MyInner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_MyInnerFunctionMap_Nova_construct(0);
stabilitytest_Nova_MyInner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_MyInnerPropertyMap_Nova_construct(0);

// stabilitytest/InnerClassStability.MyInnerFunctionMap
stabilitytest_Nova_MyInnerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyInnerFunctionMap")),
0);

// stabilitytest/InnerClassStability.MyInnerPropertyMap
stabilitytest_Nova_MyInnerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/InnerClassStability.MyInnerPropertyMap")),
0);

// stabilitytest/LambdaStability
stabilitytest_Nova_LambdaStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/LambdaStability")),
0);
stabilitytest_Nova_LambdaStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_LambdaStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_LambdaStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_LambdaStabilityPropertyMap_Nova_construct(0);

// stabilitytest/LambdaStability.LambdaStabilityFunctionMap
stabilitytest_Nova_LambdaStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/LambdaStability.LambdaStabilityFunctionMap")),
0);

// stabilitytest/LambdaStability.LambdaStabilityPropertyMap
stabilitytest_Nova_LambdaStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/LambdaStability.LambdaStabilityPropertyMap")),
0);

// stabilitytest/NetworkStability
stabilitytest_Nova_NetworkStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/NetworkStability")),
0);
stabilitytest_Nova_NetworkStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_NetworkStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_NetworkStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_NetworkStabilityPropertyMap_Nova_construct(0);

// stabilitytest/NetworkStability.NetworkStabilityFunctionMap
stabilitytest_Nova_NetworkStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/NetworkStability.NetworkStabilityFunctionMap")),
0);

// stabilitytest/NetworkStability.NetworkStabilityPropertyMap
stabilitytest_Nova_NetworkStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/NetworkStability.NetworkStabilityPropertyMap")),
0);

// stabilitytest/Node
stabilitytest_Nova_Node_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/Node")),
0);
stabilitytest_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_NodeFunctionMap_Nova_construct(0);
stabilitytest_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_NodePropertyMap_Nova_construct(0);

// stabilitytest/Node.NodeFunctionMap
stabilitytest_Nova_NodeFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/Node.NodeFunctionMap")),
0);

// stabilitytest/Node.NodePropertyMap
stabilitytest_Nova_NodePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/Node.NodePropertyMap")),
0);

// stabilitytest/PolymorphicSubClass
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSubClass")),
0);
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_PolymorphicSubClassFunctionMap_Nova_construct(0);
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_PolymorphicSubClassPropertyMap_Nova_construct(0);

// stabilitytest/PolymorphicSubClass.PolymorphicSubClassFunctionMap
stabilitytest_Nova_PolymorphicSubClassFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSubClass.PolymorphicSubClassFunctionMap")),
0);

// stabilitytest/PolymorphicSubClass.PolymorphicSubClassPropertyMap
stabilitytest_Nova_PolymorphicSubClassPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSubClass.PolymorphicSubClassPropertyMap")),
0);

// stabilitytest/PolymorphicSuperClass
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSuperClass")),
0);
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_PolymorphicSuperClassFunctionMap_Nova_construct(0);
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_PolymorphicSuperClassPropertyMap_Nova_construct(0);

// stabilitytest/PolymorphicSuperClass.PolymorphicSuperClassFunctionMap
stabilitytest_Nova_PolymorphicSuperClassFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSuperClass.PolymorphicSuperClassFunctionMap")),
0);

// stabilitytest/PolymorphicSuperClass.PolymorphicSuperClassPropertyMap
stabilitytest_Nova_PolymorphicSuperClassPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphicSuperClass.PolymorphicSuperClassPropertyMap")),
0);

// stabilitytest/PolymorphismStability
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphismStability")),
0);
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_PolymorphismStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_PolymorphismStabilityPropertyMap_Nova_construct(0);

// stabilitytest/PolymorphismStability.PolymorphismStabilityFunctionMap
stabilitytest_Nova_PolymorphismStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphismStability.PolymorphismStabilityFunctionMap")),
0);

// stabilitytest/PolymorphismStability.PolymorphismStabilityPropertyMap
stabilitytest_Nova_PolymorphismStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PolymorphismStability.PolymorphismStabilityPropertyMap")),
0);

// stabilitytest/PrimitiveOverloadStability
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PrimitiveOverloadStability")),
0);
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_PrimitiveOverloadStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_PrimitiveOverloadStabilityPropertyMap_Nova_construct(0);

// stabilitytest/PrimitiveOverloadStability.PrimitiveOverloadStabilityFunctionMap
stabilitytest_Nova_PrimitiveOverloadStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PrimitiveOverloadStability.PrimitiveOverloadStabilityFunctionMap")),
0);

// stabilitytest/PrimitiveOverloadStability.PrimitiveOverloadStabilityPropertyMap
stabilitytest_Nova_PrimitiveOverloadStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/PrimitiveOverloadStability.PrimitiveOverloadStabilityPropertyMap")),
0);

// stabilitytest/RegexStability
stabilitytest_Nova_RegexStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/RegexStability")),
0);
stabilitytest_Nova_RegexStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_RegexStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_RegexStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_RegexStabilityPropertyMap_Nova_construct(0);

// stabilitytest/RegexStability.RegexStabilityFunctionMap
stabilitytest_Nova_RegexStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/RegexStability.RegexStabilityFunctionMap")),
0);

// stabilitytest/RegexStability.RegexStabilityPropertyMap
stabilitytest_Nova_RegexStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/RegexStability.RegexStabilityPropertyMap")),
0);

// stabilitytest/StabilityExceptionHandler
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityExceptionHandler")),
0);
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_construct(0);
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_construct(0);

// stabilitytest/StabilityExceptionHandler.StabilityExceptionHandlerFunctionMap
stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityExceptionHandler.StabilityExceptionHandlerFunctionMap")),
0);

// stabilitytest/StabilityExceptionHandler.StabilityExceptionHandlerPropertyMap
stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityExceptionHandler.StabilityExceptionHandlerPropertyMap")),
0);

// stabilitytest/StabilityTest
stabilitytest_Nova_StabilityTest_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTest")),
0);
stabilitytest_Nova_StabilityTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_StabilityTestFunctionMap_Nova_construct(0);
stabilitytest_Nova_StabilityTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_StabilityTestPropertyMap_Nova_construct(0);

// stabilitytest/StabilityTest.StabilityTestFunctionMap
stabilitytest_Nova_StabilityTestFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTest.StabilityTestFunctionMap")),
0);

// stabilitytest/StabilityTest.StabilityTestPropertyMap
stabilitytest_Nova_StabilityTestPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTest.StabilityTestPropertyMap")),
0);

// stabilitytest/StabilityTestCase
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestCase")),
0);
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_StabilityTestCaseFunctionMap_Nova_construct(0);
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_StabilityTestCasePropertyMap_Nova_construct(0);

// stabilitytest/StabilityTestCase.StabilityTestCaseFunctionMap
stabilitytest_Nova_StabilityTestCaseFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestCase.StabilityTestCaseFunctionMap")),
0);

// stabilitytest/StabilityTestCase.StabilityTestCasePropertyMap
stabilitytest_Nova_StabilityTestCasePropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestCase.StabilityTestCasePropertyMap")),
0);

// stabilitytest/StabilityTestException
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestException")),
0);
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_construct(0);
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_construct(0);

// stabilitytest/StabilityTestException.StabilityTestExceptionFunctionMap
stabilitytest_Nova_StabilityTestExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestException.StabilityTestExceptionFunctionMap")),
0);

// stabilitytest/StabilityTestException.StabilityTestExceptionPropertyMap
stabilitytest_Nova_StabilityTestExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StabilityTestException.StabilityTestExceptionPropertyMap")),
0);

// stabilitytest/StaticImportStability
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StaticImportStability")),
0);
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_construct(0);

// stabilitytest/StaticImportStability.StaticImportStabilityFunctionMap
stabilitytest_Nova_StaticImportStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StaticImportStability.StaticImportStabilityFunctionMap")),
0);

// stabilitytest/StaticImportStability.StaticImportStabilityPropertyMap
stabilitytest_Nova_StaticImportStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/StaticImportStability.StaticImportStabilityPropertyMap")),
0);

// stabilitytest/SyntaxStability
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/SyntaxStability")),
0);
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_SyntaxStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_SyntaxStabilityPropertyMap_Nova_construct(0);

// stabilitytest/SyntaxStability.SyntaxStabilityFunctionMap
stabilitytest_Nova_SyntaxStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/SyntaxStability.SyntaxStabilityFunctionMap")),
0);

// stabilitytest/SyntaxStability.SyntaxStabilityPropertyMap
stabilitytest_Nova_SyntaxStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/SyntaxStability.SyntaxStabilityPropertyMap")),
0);

// stabilitytest/ThreadImplementation
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadImplementation")),
0);
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ThreadImplementationFunctionMap_Nova_construct(0);
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ThreadImplementationPropertyMap_Nova_construct(0);

// stabilitytest/ThreadImplementation.ThreadImplementationFunctionMap
stabilitytest_Nova_ThreadImplementationFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadImplementation.ThreadImplementationFunctionMap")),
0);

// stabilitytest/ThreadImplementation.ThreadImplementationPropertyMap
stabilitytest_Nova_ThreadImplementationPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadImplementation.ThreadImplementationPropertyMap")),
0);

// stabilitytest/ThreadStability
stabilitytest_Nova_ThreadStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadStability")),
0);
stabilitytest_Nova_ThreadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ThreadStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_ThreadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ThreadStabilityPropertyMap_Nova_construct(0);

// stabilitytest/ThreadStability.ThreadStabilityFunctionMap
stabilitytest_Nova_ThreadStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadStability.ThreadStabilityFunctionMap")),
0);

// stabilitytest/ThreadStability.ThreadStabilityPropertyMap
stabilitytest_Nova_ThreadStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ThreadStability.ThreadStabilityPropertyMap")),
0);

// stabilitytest/TimeStability
stabilitytest_Nova_TimeStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/TimeStability")),
0);
stabilitytest_Nova_TimeStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_TimeStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_TimeStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_TimeStabilityPropertyMap_Nova_construct(0);

// stabilitytest/TimeStability.TimeStabilityFunctionMap
stabilitytest_Nova_TimeStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/TimeStability.TimeStabilityFunctionMap")),
0);

// stabilitytest/TimeStability.TimeStabilityPropertyMap
stabilitytest_Nova_TimeStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/TimeStability.TimeStabilityPropertyMap")),
0);

// stabilitytest/ToStringStability
stabilitytest_Nova_ToStringStability_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ToStringStability")),
0);
stabilitytest_Nova_ToStringStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_construct(0);
stabilitytest_Nova_ToStringStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_construct(0);

// stabilitytest/ToStringStability.ToStringStabilityFunctionMap
stabilitytest_Nova_ToStringStabilityFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ToStringStability.ToStringStabilityFunctionMap")),
0);

// stabilitytest/ToStringStability.ToStringStabilityPropertyMap
stabilitytest_Nova_ToStringStabilityPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/ToStringStability.ToStringStabilityPropertyMap")),
0);

// stabilitytest/UnstableException
stabilitytest_Nova_UnstableException_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/UnstableException")),
0);
stabilitytest_Nova_UnstableException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_functionMap = (nova_meta_Nova_FunctionMap*)stabilitytest_Nova_UnstableExceptionFunctionMap_Nova_construct(0);
stabilitytest_Nova_UnstableException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_propertyMap = (nova_meta_Nova_PropertyMap*)stabilitytest_Nova_UnstableExceptionPropertyMap_Nova_construct(0);

// stabilitytest/UnstableException.UnstableExceptionFunctionMap
stabilitytest_Nova_UnstableExceptionFunctionMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/UnstableException.UnstableExceptionFunctionMap")),
0);

// stabilitytest/UnstableException.UnstableExceptionPropertyMap
stabilitytest_Nova_UnstableExceptionPropertyMap_VTable_val.classInstance = nova_meta_Nova_Class_Nova_construct(0,
nova_Nova_String_1_Nova_construct(0,
(char*)("stabilitytest/UnstableException.UnstableExceptionPropertyMap")),
0);



nova_Nova_Object** nova_class_interfaces;

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
nova_Nova_StringFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_Nova_StringFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_Nova_StringPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_Nova_StringPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_Nova_Substring_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_String_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_Substring_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_Nova_SubstringFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_StringFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_Nova_SubstringFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_Nova_SubstringPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_StringPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_Nova_SubstringPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_Nova_System_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_System_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_Nova_SystemFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_SystemFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_Nova_SystemPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_Nova_SystemPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_ImageTracker_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_ImageTracker_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_ImageTrackerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_ImageTrackerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_ImageTrackerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_ImageTrackerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_TrackPoint_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_TrackPoint_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_TrackPointFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_TrackPointFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_ar_Nova_TrackPointPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_ar_Nova_TrackPointPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_DBConnector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_DBConnector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_DBConnectorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_DBConnectorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_DBConnectorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_DBConnectorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_ResultSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_ResultSet_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_ResultSetFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_ResultSetFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_database_Nova_ResultSetPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_database_Nova_ResultSetPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Node_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryNodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_NodeFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryNodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryNodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_NodePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryNodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tree_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryTreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_TreeFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryTreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BinaryTreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_TreePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BinaryTreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Bounds_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Bounds_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BoundsFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BoundsFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_BoundsPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_BoundsPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Comparable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Comparable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_HashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_HashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_HashMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_HashMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_HashMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_HashMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_HashMapIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_HashMapIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_HashMapIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_HashMapIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
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
nova_datastruct_Nova_HashSetFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_HashSetFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_HashSetPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_HashSetPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_ImmutableHashMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_ImmutableHashMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_ImmutableHashMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_ImmutableHashMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
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
nova_datastruct_Nova_NodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_NodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_NodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_NodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Pair_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Pair_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_PairFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_PairFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_PairPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_PairPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_ReversibleHashMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMapFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_ReversibleHashMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_ReversibleHashMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMapPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_ReversibleHashMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_Tree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Tree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_TreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_TreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_TreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_TreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Tuple_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_Nova_Tuple_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_Nova_TupleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_TupleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_TuplePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_TuplePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_Tuple2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tuple_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_Nova_Tuple2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_Nova_Tuple2FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_TupleFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_Nova_Tuple2FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_Nova_Tuple2PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_TuplePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_Nova_Tuple2PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
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
nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
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
nova_datastruct_list_Nova_ArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
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
nova_datastruct_list_Nova_CharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_CharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_CharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_CharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_CharArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_CharArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_CompiledListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_CompiledListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_CompiledListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_CompiledListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_DoubleArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_DoubleArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_DoubleArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_DoubleArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_DoubleArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_DoubleArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_EmptyStackExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_EmptyStackExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ImmutableArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_ImmutableArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ImmutableArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ImmutableArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableCharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ImmutableCharArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ImmutableCharArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_IntArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IntArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_IntArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 7);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 7);
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRange_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntRangeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRangeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_IntRangePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRangePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_IntRangeIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_IntRangeIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_Iterable_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
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
nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
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
nova_datastruct_list_Nova_LinkedListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_LinkedListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_List_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_Iterable_VTable_val.classInstance;
nova_datastruct_list_Nova_List_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
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
nova_datastruct_list_Nova_ListNodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ListNodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_ListNodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_ListNodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
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
nova_datastruct_list_Nova_QueueFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_datastruct_list_Nova_QueueFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_QueuePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_datastruct_list_Nova_QueuePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_datastruct_list_Nova_Stack_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_Stack_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_StackFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_StackFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_StackPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_StackPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_StringCharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_StringCharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_StringCharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_StringCharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_datastruct_list_Nova_SubstringCharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_datastruct_list_Nova_SubstringCharArrayPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_Backtraces_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_Backtraces_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_BacktracesFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_BacktracesFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_BacktracesPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_BacktracesPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_CaughtException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_CaughtException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_CaughtExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_CaughtExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_CaughtExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_CaughtExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_DivideByZeroException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_DivideByZeroExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_DivideByZeroExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_DivideByZeroExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_DivideByZeroExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_Exception_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_Exception_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_ExceptionData_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_ExceptionData_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_ExceptionDataFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_ExceptionDataFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_ExceptionDataPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_ExceptionDataPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidArgumentExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidArgumentExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidArgumentExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidArgumentExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidOperationExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidOperationExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_InvalidOperationExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_InvalidOperationExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_StackTrace_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_StackTrace_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_StackTraceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_StackTraceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_StackTracePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_StackTracePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedForTargetExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedForTargetExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedForTargetExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedForTargetExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_gc_Nova_GC_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_gc_Nova_GC_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_gc_Nova_GCFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_gc_Nova_GCFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_gc_Nova_GCPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_gc_Nova_GCPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_Console_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_Console_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_ConsoleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_ConsoleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_ConsolePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_ConsolePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_Curl_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_Curl_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_CurlFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_CurlFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_CurlPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_CurlPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_File_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_File_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_FileFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FilePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_FilePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileNotFoundException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_FileNotFoundException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileNotFoundExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_FileNotFoundExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileNotFoundExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_FileNotFoundExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_FileReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStream_VTable_val.classInstance;
nova_io_Nova_FileReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FileReaderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStreamFunctionMap_VTable_val.classInstance;
nova_io_Nova_FileReaderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FileReaderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStreamPropertyMap_VTable_val.classInstance;
nova_io_Nova_FileReaderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FileWriter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_io_Nova_FileWriter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FileWriterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance;
nova_io_Nova_FileWriterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_FileWriterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance;
nova_io_Nova_FileWriterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_InputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_InputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_InputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_InputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_InputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_InputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_OutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_OutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_StreamReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_StreamReader_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_StreamReaderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_StreamReaderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_StreamReaderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_io_Nova_StreamReaderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_io_Nova_StringBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_io_Nova_StringBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_StringBuilderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance;
nova_io_Nova_StringBuilderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_io_Nova_StringBuilderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance;
nova_io_Nova_StringBuilderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Sequence_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_ArithmeticSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_ArithmeticSequenceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_SequenceFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_ArithmeticSequenceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_ArithmeticSequencePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_SequencePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_ArithmeticSequencePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Diekstra_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Diekstra_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_DiekstraFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_DiekstraFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_DiekstraPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_DiekstraPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_GeometricSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_GeometricSequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_GeometricSequenceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_GeometricSequenceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_GeometricSequencePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_GeometricSequencePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Graph_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Graph_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_GraphFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_GraphFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_GraphPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_GraphPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_InvalidNumericStatementExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_InvalidNumericStatementExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Math_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Math_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_MathFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_MathFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_MathPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_MathPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Matrix_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_math_Nova_Matrix_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_math_Nova_MatrixFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_math_Nova_MatrixFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_math_Nova_MatrixPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_math_Nova_MatrixPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_math_Nova_NumericOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericOperandFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperandFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericOperandPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperandPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericOperation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_NumericOperand_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericOperationFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_NumericOperandFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperationFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericOperationPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_NumericOperandPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericOperationPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Statement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericStatementFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_StatementFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericStatementFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericStatementPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_StatementPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericStatementPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericTreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericTreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_NumericTreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_NumericTreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Polynomial_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Polynomial_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_PolynomialFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_PolynomialFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_PolynomialPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_PolynomialPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Sequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Sequence_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_SequenceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_SequenceFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_SequencePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_SequencePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Statement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Statement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_StatementFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_StatementFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_StatementPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_StatementPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_StatementComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_StatementComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_StatementComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_StatementComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_VariableOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_VariableOperand_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_VariableOperandFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_VariableOperandFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_VariableOperandPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_VariableOperandPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_VectorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_VectorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_VectorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_VectorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector2D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Vector_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector2D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector2DFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_VectorFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector2DFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector2DPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_VectorPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector2DPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector3D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Vector_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector3D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector3DFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_VectorFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector3DFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector3DPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_VectorPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector3DPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector4D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Vector_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector4D_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector4DFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_VectorFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector4DFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_Nova_Vector4DPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_VectorPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_Nova_Vector4DPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_calculus_Nova_Calculus_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_calculus_Nova_Calculus_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_calculus_Nova_CalculusFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_calculus_Nova_CalculusFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_calculus_Nova_CalculusPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_calculus_Nova_CalculusPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_Tree_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_huffman_Nova_HuffmanTreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_TreeFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_huffman_Nova_HuffmanTreeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_huffman_Nova_HuffmanTreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_TreePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_huffman_Nova_HuffmanTreePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_Conclusion_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_Conclusion_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_ConclusionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_ConclusionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_ConclusionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatementPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_ConclusionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_Hypothesis_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_HypothesisFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_HypothesisFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_HypothesisPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_LogicalStatementPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_HypothesisPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_InvalidFormulaExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_InvalidFormulaExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalConnectiveFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalConnectiveFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalConnectivePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponentPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalConnectivePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_Statement_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_StatementFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_LogicalStatementPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_Nova_StatementPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_LogicalStatementPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementGroup_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementGroupFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementGroupFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementGroupPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementGroupPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementLetter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementLetterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementLetterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_StatementLetterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_math_logic_Nova_StatementComponentPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_StatementLetterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_WFF_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_WFF_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_WFFFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_WFFFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_math_logic_Nova_WFFPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_math_logic_Nova_WFFPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Class_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Class_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_ClassFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_ClassFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_ClassPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_ClassPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Field_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Field_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_FieldFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_FieldFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_FieldPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_FieldPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_FunctionMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_FunctionMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_FunctionMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_FunctionMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericArgument_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericArgument_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericArgumentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericArgumentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericArgumentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericArgumentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericParameter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericParameter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericParameterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericParameterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_GenericParameterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_GenericParameterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_InvalidLibraryExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_InvalidLibraryExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_InvalidLibraryExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_InvalidLibraryExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Library_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Library_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_LibraryFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_LibraryFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_LibraryPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_LibraryPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_PropertyMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_PropertyMapFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_PropertyMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_PropertyMapPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_Type_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_Type_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_TypeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_TypeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_meta_Nova_TypePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_meta_Nova_TypePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ClientSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_Socket_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ClientSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ClientSocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_SocketFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ClientSocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ClientSocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_SocketPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ClientSocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ConnectionSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_Socket_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ConnectionSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ConnectionSocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_SocketFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ConnectionSocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ConnectionSocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_SocketPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ConnectionSocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_NetworkInputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStream_VTable_val.classInstance;
nova_network_Nova_NetworkInputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_NetworkInputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStreamFunctionMap_VTable_val.classInstance;
nova_network_Nova_NetworkInputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_NetworkInputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_InputStreamPropertyMap_VTable_val.classInstance;
nova_network_Nova_NetworkInputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_network_Nova_NetworkOutputStream_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_NetworkOutputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance;
nova_network_Nova_NetworkOutputStreamFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_NetworkOutputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance;
nova_network_Nova_NetworkOutputStreamPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_network_Nova_ServerSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_Socket_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ServerSocket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ServerSocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_SocketFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ServerSocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_ServerSocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_network_Nova_SocketPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_ServerSocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_Socket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_Socket_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_SocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_SocketFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_network_Nova_SocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_network_Nova_SocketPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_EqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_EqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_NotEqualToOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_NotEqualToOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_NotEqualToOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_NotEqualToOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusOperator_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_Nova_Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_Primitive_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_primitive_Nova_Bool_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_Nova_BoolFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_Nova_BoolFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_Nova_BoolPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_PrimitivePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_Nova_BoolPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_Nova_Null_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_String_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_Nova_Null_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_Nova_NullFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_StringFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_primitive_Nova_NullFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_primitive_Nova_NullPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_StringPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 4);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_primitive_Nova_NullPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 4);
nova_primitive_Nova_Primitive_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_Nova_Primitive_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_Nova_PrimitivePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_Nova_PrimitivePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Byte_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_ByteFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_ByteFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_BytePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_BytePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Char_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_CharFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_CharFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_CharPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_CharPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumber_VTable_val.classInstance;
nova_primitive_number_Nova_Double_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_DoubleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_DoubleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_DoublePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_DoublePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_Float_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumber_VTable_val.classInstance;
nova_primitive_number_Nova_Float_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_FloatFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_FloatFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_FloatPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_RealNumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_FloatPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_IntFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_IntFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_IntPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_IntPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_Integer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_Integer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Long_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_LongFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_LongFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_LongPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_LongPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
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
nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 8);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 8);
nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_Nova_PrimitivePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 8);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 8);
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_RealNumber_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_RealNumberFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_RealNumberFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_RealNumberPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_primitive_number_Nova_RealNumberPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_primitive_number_Nova_Short_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_primitive_number_Nova_Short_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
nova_primitive_number_Nova_ShortFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_primitive_number_Nova_ShortFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_primitive_number_Nova_ShortPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 9);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[2] = (nova_Nova_Object*)nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[3] = (nova_Nova_Object*)nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[4] = (nova_Nova_Object*)nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[5] = (nova_Nova_Object*)nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[6] = (nova_Nova_Object*)nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[7] = (nova_Nova_Object*)nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_class_interfaces[8] = (nova_Nova_Object*)nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_primitive_number_Nova_ShortPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 9);
nova_process_Nova_Process_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_process_Nova_Process_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_process_Nova_ProcessFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_process_Nova_ProcessFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_process_Nova_ProcessPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_process_Nova_ProcessPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_Match_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_Match_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_MatchFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_MatchFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_MatchPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_MatchPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_Pattern_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_Pattern_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_PatternFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_PatternFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_PatternPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_PatternPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_Regex_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_Regex_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_RegexFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_RegexFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_regex_Nova_RegexPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_regex_Nova_RegexPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_MD5_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_MD5_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_MD5FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_MD5FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_MD5PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_MD5PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_Sha256_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_Sha256_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_Sha256FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_Sha256FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_security_Nova_Sha256PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_security_Nova_Sha256PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_JsonSerializer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_JsonSerializerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_JsonSerializerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_serialization_Nova_JsonSerializerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_serialization_Nova_JsonSerializerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Frame_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Frame_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_FrameFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_FrameFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_FramePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_FramePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_Window_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_Window_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_WindowFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_WindowFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_WindowPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_WindowPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_WindowThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_WindowThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_WindowThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_WindowThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_star_Nova_WindowThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_star_Nova_WindowThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_Thread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_Thread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_ThreadLocal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_ThreadLocal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_ThreadLocalFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_ThreadLocalFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_ThreadLocalPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_ThreadLocalPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_Async_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_Async_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_AsyncFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_AsyncFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_AsyncPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_AsyncPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_Task_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_Task_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_TaskFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_TaskFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_thread_async_Nova_TaskPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_thread_async_Nova_TaskPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_CumulativeTimer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_Timer_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_CumulativeTimer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_CumulativeTimerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_TimerFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_CumulativeTimerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_CumulativeTimerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_time_Nova_TimerPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_CumulativeTimerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Date_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Date_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_DateFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_DateFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_DatePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_DatePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Time_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Time_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_TimeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_TimeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_TimePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_TimePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_Timer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_Timer_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_TimerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_TimerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_time_Nova_TimerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_time_Nova_TimerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_js_json_Nova_Json_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_js_json_Nova_Json_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_js_json_Nova_JsonFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMapFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_web_js_json_Nova_JsonFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_web_js_json_Nova_JsonPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_datastruct_Nova_HashMapPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 2);
nova_class_interfaces[0] = (nova_Nova_Object*)nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_class_interfaces[1] = (nova_Nova_Object*)nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_web_js_json_Nova_JsonPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 2);
nova_web_svg_Nova_Svg_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_Svg_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgCircle_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgCircleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgCircleFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgCirclePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponentPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgCirclePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentListFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentListPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentNodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentNodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgComponentNodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgComponentNodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponent_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgMainComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgMainComponentFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_Nova_SvgMainComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_Nova_SvgComponentPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_Nova_SvgMainComponentPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3NodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3NodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3NodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3NodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3SelectFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3NodeFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3SelectFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3SelectPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3NodePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3SelectPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3SelectAllFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3NodeFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3SelectAllFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
nova_web_svg_no3_Nova_No3SelectAllPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_web_svg_no3_Nova_No3NodePropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
nova_web_svg_no3_Nova_No3SelectAllPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_InvalidAssertionExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_InvalidAssertionExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_InvalidAssertionExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_InvalidAssertionExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_Nest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_Nest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_NestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_NestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_NestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_NestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestSuite_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestSuite_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestSuiteFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestSuiteFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
novex_nest_Nova_TestSuitePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
novex_nest_Nova_TestSuitePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Animal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Animal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_AnimalFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_AnimalFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_AnimalPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_AnimalPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ArrayDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ArrayDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ArrayDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ArrayDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ArrayDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ArrayDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_BodyBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_Person_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_BodyBuilder_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_BodyBuilderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_PersonFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_BodyBuilderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_BodyBuilderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_PersonPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_BodyBuilderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ClosureDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ClosureDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ClosureDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ClosureDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ClosureDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ClosureDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_Animal_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_DogFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_AnimalFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_DogFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_DogPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_AnimalPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_DogPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ExceptionHandlingDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ExceptionHandlingDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ExceptionHandlingDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ExceptionHandlingDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ExceptionHandlingDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_FileTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_FileTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_FileTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_FileTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_FileTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_FileTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_GenericDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_GenericDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_GenericDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_GenericDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_GenericDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_GenericDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashMapDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashMapDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashMapDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashMapDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashMapDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashMapDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashSetDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashSetDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashSetDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashSetDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_HashSetDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_HashSetDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_IntegerTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_IntegerTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_IntegerTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_IntegerTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_IntegerTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_IntegerTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Lab_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Lab_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_LabFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_LabFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_LabPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_LabPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_MathDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_MathDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_MathDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_MathDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_MathDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_MathDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NestTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NestTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NestTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NestTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NestTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NestTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NonWholeDivisionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NonWholeDivisionException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NonWholeDivisionExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NonWholeDivisionExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_NonWholeDivisionExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_NonWholeDivisionExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Person_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Person_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PersonFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PersonFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PersonPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PersonPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Polygon_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = (nova_meta_Nova_Class*)nova_null;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Polygon_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PolygonFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PolygonFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PolygonPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PolygonPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PolymorphismDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PolymorphismDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PolymorphismDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PolymorphismDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_PolymorphismDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_PolymorphismDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_QueueDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_QueueDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_QueueDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_QueueDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_QueueDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_QueueDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Spider_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_Animal_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Spider_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SpiderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_AnimalFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SpiderFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SpiderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_AnimalPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SpiderPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Square_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)example_Nova_Polygon_VTable_val.classInstance;
example_Nova_Square_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
example_Nova_SquareFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)example_Nova_PolygonFunctionMap_VTable_val.classInstance;
example_Nova_SquareFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
example_Nova_SquarePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 1);
nova_class_interfaces[0] = (nova_Nova_Object*)example_Nova_PolygonPropertyMap_VTable_val.classInstance;
example_Nova_SquarePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 1);
example_Nova_SvgChart_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgChart_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SvgChartFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgChartFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SvgChartPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgChartPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SvgFractal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgFractal_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SvgFractalFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgFractalFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_SvgFractalPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_SvgFractalPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T1_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T1_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T1FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T1FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T1PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T1PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_T1_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T2_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T2FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_T1FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T2FunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_T2PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = example_Nova_T1PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_T2PropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_Test_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_Test_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_TestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_TestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_TestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_TestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemoImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemoImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemoImplementationFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemoImplementationFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_Nova_ThreadDemoImplementationPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_Nova_ThreadDemoImplementationPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_ackermann_Nova_Ackermann_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_ackermann_Nova_Ackermann_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_ackermann_Nova_AckermannFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_ackermann_Nova_AckermannFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_ackermann_Nova_AckermannPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_ackermann_Nova_AckermannPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_copy_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_copy_Nova_Dog_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_copy_Nova_DogFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_copy_Nova_DogFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_copy_Nova_DogPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_copy_Nova_DogPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_database_Nova_DatabaseDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_database_Nova_DatabaseDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_database_Nova_DatabaseDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_database_Nova_DatabaseDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_database_Nova_DatabaseDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_database_Nova_DatabaseDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ClientDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ClientDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ClientDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ClientDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ClientDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ClientDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ConnectionThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ConnectionThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ConnectionThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ConnectionThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ConnectionThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ConnectionThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_OutputThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_OutputThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_OutputThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_OutputThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_OutputThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_OutputThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ServerDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ServerDemo_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ServerDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ServerDemoFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
example_network_Nova_ServerDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
example_network_Nova_ServerDemoPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_AssignmentStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_AssignmentStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_AssignmentStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_AssignmentStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_AssignmentStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClassWithPropertiesFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClassWithPropertiesFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClassWithPropertiesPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClassWithPropertiesPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClientThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClientThread_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClientThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClientThreadFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClientThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClientThreadPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClosureStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClosureStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClosureStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClosureStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ClosureStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ClosureStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ExceptionStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ExceptionStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ExceptionStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ExceptionStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ExceptionStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ExternalInnerClassStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ExternalInnerClassStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ExternalInnerClassStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ExternalInnerClassStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_FileStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_FileStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_FileStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_FileStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_FileStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_FileStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_InnerClassStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyOuter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyOuter_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_InnerClassStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_InnerClassStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_InnerClassStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_InnerClassStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyOuterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyOuterFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyOuterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyOuterPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyInner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyInner_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyInnerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyInnerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_MyInnerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_MyInnerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_LambdaStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_LambdaStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_LambdaStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_LambdaStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_LambdaStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_LambdaStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_NetworkStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_NetworkStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_NetworkStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_NetworkStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_NetworkStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_NetworkStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_Node_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_NodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_NodeFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_NodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_NodePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSubClassFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = stabilitytest_Nova_PolymorphicSuperClassFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSubClassFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSubClassPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = stabilitytest_Nova_PolymorphicSuperClassPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSubClassPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSuperClassFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSuperClassFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphicSuperClassPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphicSuperClassPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphismStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphismStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PolymorphismStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PolymorphismStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PrimitiveOverloadStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PrimitiveOverloadStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_PrimitiveOverloadStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_PrimitiveOverloadStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_RegexStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_RegexStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_RegexStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_RegexStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_RegexStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_RegexStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTest_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestCaseFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestCaseFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestCasePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestCasePropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StabilityTestExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StabilityTestExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StaticImportStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StaticImportStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StaticImportStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_StaticImportStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_StaticImportStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_SyntaxStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_SyntaxStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_SyntaxStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_SyntaxStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_SyntaxStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadImplementationFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadImplementationFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadImplementationPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadImplementationPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ThreadStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ThreadStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_TimeStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_TimeStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_TimeStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_TimeStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_TimeStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_TimeStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ToStringStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_Nova_Object_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ToStringStability_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ToStringStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ToStringStabilityFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_ToStringStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_ToStringStabilityPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_UnstableException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_UnstableException_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_UnstableExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_UnstableExceptionFunctionMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);
stabilitytest_Nova_UnstableExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_extension = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_class_interfaces = NOVA_MALLOC(sizeof(nova_Nova_Object**) * 0);
stabilitytest_Nova_UnstableExceptionPropertyMap_VTable_val.classInstance->nova_meta_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_class_interfaces, 0);


nova_meta_Nova_Class** nova_all_classes = NOVA_MALLOC(sizeof(nova_meta_Nova_Class*) * 747);
nova_all_classes[0] = nova_Nova_Object_VTable_val.classInstance;
nova_all_classes[1] = nova_Nova_String_VTable_val.classInstance;
nova_all_classes[2] = nova_Nova_StringFunctionMap_VTable_val.classInstance;
nova_all_classes[3] = nova_Nova_StringPropertyMap_VTable_val.classInstance;
nova_all_classes[4] = nova_Nova_Substring_VTable_val.classInstance;
nova_all_classes[5] = nova_Nova_SubstringFunctionMap_VTable_val.classInstance;
nova_all_classes[6] = nova_Nova_SubstringPropertyMap_VTable_val.classInstance;
nova_all_classes[7] = nova_Nova_System_VTable_val.classInstance;
nova_all_classes[8] = nova_Nova_SystemFunctionMap_VTable_val.classInstance;
nova_all_classes[9] = nova_Nova_SystemPropertyMap_VTable_val.classInstance;
nova_all_classes[10] = nova_ar_Nova_ImageTracker_VTable_val.classInstance;
nova_all_classes[11] = nova_ar_Nova_ImageTrackerFunctionMap_VTable_val.classInstance;
nova_all_classes[12] = nova_ar_Nova_ImageTrackerPropertyMap_VTable_val.classInstance;
nova_all_classes[13] = nova_ar_Nova_TrackPoint_VTable_val.classInstance;
nova_all_classes[14] = nova_ar_Nova_TrackPointFunctionMap_VTable_val.classInstance;
nova_all_classes[15] = nova_ar_Nova_TrackPointPropertyMap_VTable_val.classInstance;
nova_all_classes[16] = nova_database_Nova_DBConnector_VTable_val.classInstance;
nova_all_classes[17] = nova_database_Nova_DBConnectorFunctionMap_VTable_val.classInstance;
nova_all_classes[18] = nova_database_Nova_DBConnectorPropertyMap_VTable_val.classInstance;
nova_all_classes[19] = nova_database_Nova_ResultSet_VTable_val.classInstance;
nova_all_classes[20] = nova_database_Nova_ResultSetFunctionMap_VTable_val.classInstance;
nova_all_classes[21] = nova_database_Nova_ResultSetPropertyMap_VTable_val.classInstance;
nova_all_classes[22] = nova_datastruct_Nova_BinaryNode_VTable_val.classInstance;
nova_all_classes[23] = nova_datastruct_Nova_BinaryNodeFunctionMap_VTable_val.classInstance;
nova_all_classes[24] = nova_datastruct_Nova_BinaryNodePropertyMap_VTable_val.classInstance;
nova_all_classes[25] = nova_datastruct_Nova_BinaryTree_VTable_val.classInstance;
nova_all_classes[26] = nova_datastruct_Nova_BinaryTreeFunctionMap_VTable_val.classInstance;
nova_all_classes[27] = nova_datastruct_Nova_BinaryTreePropertyMap_VTable_val.classInstance;
nova_all_classes[28] = nova_datastruct_Nova_Bounds_VTable_val.classInstance;
nova_all_classes[29] = nova_datastruct_Nova_BoundsFunctionMap_VTable_val.classInstance;
nova_all_classes[30] = nova_datastruct_Nova_BoundsPropertyMap_VTable_val.classInstance;
nova_all_classes[31] = nova_datastruct_Nova_Comparable_VTable_val.classInstance;
nova_all_classes[32] = nova_datastruct_Nova_ComparableFunctionMap_VTable_val.classInstance;
nova_all_classes[33] = nova_datastruct_Nova_ComparablePropertyMap_VTable_val.classInstance;
nova_all_classes[34] = nova_datastruct_Nova_HashMap_VTable_val.classInstance;
nova_all_classes[35] = nova_datastruct_Nova_HashMapFunctionMap_VTable_val.classInstance;
nova_all_classes[36] = nova_datastruct_Nova_HashMapPropertyMap_VTable_val.classInstance;
nova_all_classes[37] = nova_datastruct_Nova_HashMapIterator_VTable_val.classInstance;
nova_all_classes[38] = nova_datastruct_Nova_HashMapIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[39] = nova_datastruct_Nova_HashMapIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[40] = nova_datastruct_Long_V_Nova_HashMap1Long_VTable_val.classInstance;
nova_all_classes[41] = nova_datastruct_Long_V_Nova_HashMapIterator1Long_VTable_val.classInstance;
nova_all_classes[42] = nova_datastruct_Int_V_Nova_HashMap1Int_VTable_val.classInstance;
nova_all_classes[43] = nova_datastruct_Int_V_Nova_HashMapIterator1Int_VTable_val.classInstance;
nova_all_classes[44] = nova_datastruct_Int_Int_Nova_HashMap1Int2Int_VTable_val.classInstance;
nova_all_classes[45] = nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_VTable_val.classInstance;
nova_all_classes[46] = nova_datastruct_Nova_HashSet_VTable_val.classInstance;
nova_all_classes[47] = nova_datastruct_Nova_HashSetFunctionMap_VTable_val.classInstance;
nova_all_classes[48] = nova_datastruct_Nova_HashSetPropertyMap_VTable_val.classInstance;
nova_all_classes[49] = nova_datastruct_Nova_ImmutableHashMap_VTable_val.classInstance;
nova_all_classes[50] = nova_datastruct_Nova_ImmutableHashMapFunctionMap_VTable_val.classInstance;
nova_all_classes[51] = nova_datastruct_Nova_ImmutableHashMapPropertyMap_VTable_val.classInstance;
nova_all_classes[52] = nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_VTable_val.classInstance;
nova_all_classes[53] = nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_VTable_val.classInstance;
nova_all_classes[54] = nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_VTable_val.classInstance;
nova_all_classes[55] = nova_datastruct_Nova_Node_VTable_val.classInstance;
nova_all_classes[56] = nova_datastruct_Nova_NodeFunctionMap_VTable_val.classInstance;
nova_all_classes[57] = nova_datastruct_Nova_NodePropertyMap_VTable_val.classInstance;
nova_all_classes[58] = nova_datastruct_Nova_Pair_VTable_val.classInstance;
nova_all_classes[59] = nova_datastruct_Nova_PairFunctionMap_VTable_val.classInstance;
nova_all_classes[60] = nova_datastruct_Nova_PairPropertyMap_VTable_val.classInstance;
nova_all_classes[61] = nova_datastruct_Long_Value_Nova_Pair1Long_VTable_val.classInstance;
nova_all_classes[62] = nova_datastruct_Int_Value_Nova_Pair1Int_VTable_val.classInstance;
nova_all_classes[63] = nova_datastruct_Int_Int_Nova_Pair1Int2Int_VTable_val.classInstance;
nova_all_classes[64] = nova_datastruct_Nova_ReversibleHashMap_VTable_val.classInstance;
nova_all_classes[65] = nova_datastruct_Nova_ReversibleHashMapFunctionMap_VTable_val.classInstance;
nova_all_classes[66] = nova_datastruct_Nova_ReversibleHashMapPropertyMap_VTable_val.classInstance;
nova_all_classes[67] = nova_datastruct_Nova_Tree_VTable_val.classInstance;
nova_all_classes[68] = nova_datastruct_Nova_TreeFunctionMap_VTable_val.classInstance;
nova_all_classes[69] = nova_datastruct_Nova_TreePropertyMap_VTable_val.classInstance;
nova_all_classes[70] = nova_datastruct_Nova_Tuple_VTable_val.classInstance;
nova_all_classes[71] = nova_datastruct_Nova_TupleFunctionMap_VTable_val.classInstance;
nova_all_classes[72] = nova_datastruct_Nova_TuplePropertyMap_VTable_val.classInstance;
nova_all_classes[73] = nova_datastruct_Nova_Tuple2_VTable_val.classInstance;
nova_all_classes[74] = nova_datastruct_Nova_Tuple2FunctionMap_VTable_val.classInstance;
nova_all_classes[75] = nova_datastruct_Nova_Tuple2PropertyMap_VTable_val.classInstance;
nova_all_classes[76] = nova_datastruct_A_Int_Nova_Tuple22Int_VTable_val.classInstance;
nova_all_classes[77] = nova_datastruct_list_Nova_Array_VTable_val.classInstance;
nova_all_classes[78] = nova_datastruct_list_Nova_ArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[79] = nova_datastruct_list_Nova_ArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[80] = nova_datastruct_list_Double_Nova_Array1Double_VTable_val.classInstance;
nova_all_classes[81] = nova_datastruct_list_Char_Nova_Array1Char_VTable_val.classInstance;
nova_all_classes[82] = nova_datastruct_list_Int_Nova_Array1Int_VTable_val.classInstance;
nova_all_classes[83] = nova_datastruct_list_Byte_Nova_Array1Byte_VTable_val.classInstance;
nova_all_classes[84] = nova_datastruct_list_Long_Nova_Array1Long_VTable_val.classInstance;
nova_all_classes[85] = nova_datastruct_list_Nova_ArrayIterator_VTable_val.classInstance;
nova_all_classes[86] = nova_datastruct_list_Nova_ArrayIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[87] = nova_datastruct_list_Nova_ArrayIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[88] = nova_datastruct_list_Double_Nova_ArrayIterator1Double_VTable_val.classInstance;
nova_all_classes[89] = nova_datastruct_list_Char_Nova_ArrayIterator1Char_VTable_val.classInstance;
nova_all_classes[90] = nova_datastruct_list_Int_Nova_ArrayIterator1Int_VTable_val.classInstance;
nova_all_classes[91] = nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_VTable_val.classInstance;
nova_all_classes[92] = nova_datastruct_list_Long_Nova_ArrayIterator1Long_VTable_val.classInstance;
nova_all_classes[93] = nova_datastruct_list_Nova_CharArray_VTable_val.classInstance;
nova_all_classes[94] = nova_datastruct_list_Nova_CharArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[95] = nova_datastruct_list_Nova_CharArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[96] = nova_datastruct_list_Nova_CharArrayIterator_VTable_val.classInstance;
nova_all_classes[97] = nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[98] = nova_datastruct_list_Nova_CharArrayIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[99] = nova_datastruct_list_Nova_CompiledList_VTable_val.classInstance;
nova_all_classes[100] = nova_datastruct_list_Nova_CompiledListFunctionMap_VTable_val.classInstance;
nova_all_classes[101] = nova_datastruct_list_Nova_CompiledListPropertyMap_VTable_val.classInstance;
nova_all_classes[102] = nova_datastruct_list_Nova_DoubleArray_VTable_val.classInstance;
nova_all_classes[103] = nova_datastruct_list_Nova_DoubleArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[104] = nova_datastruct_list_Nova_DoubleArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[105] = nova_datastruct_list_Nova_DoubleArrayIterator_VTable_val.classInstance;
nova_all_classes[106] = nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[107] = nova_datastruct_list_Nova_DoubleArrayIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[108] = nova_datastruct_list_Nova_EmptyStackException_VTable_val.classInstance;
nova_all_classes[109] = nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[110] = nova_datastruct_list_Nova_EmptyStackExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[111] = nova_datastruct_list_Nova_ImmutableArray_VTable_val.classInstance;
nova_all_classes[112] = nova_datastruct_list_Nova_ImmutableArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[113] = nova_datastruct_list_Nova_ImmutableArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[114] = nova_datastruct_list_Nova_ImmutableArrayIterator_VTable_val.classInstance;
nova_all_classes[115] = nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[116] = nova_datastruct_list_Nova_ImmutableArrayIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[117] = nova_datastruct_list_Nova_ImmutableCharArray_VTable_val.classInstance;
nova_all_classes[118] = nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[119] = nova_datastruct_list_Nova_ImmutableCharArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[120] = nova_datastruct_list_Nova_ImmutableCharArrayIterator_VTable_val.classInstance;
nova_all_classes[121] = nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[122] = nova_datastruct_list_Nova_ImmutableCharArrayIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[123] = nova_datastruct_list_Nova_IntArray_VTable_val.classInstance;
nova_all_classes[124] = nova_datastruct_list_Nova_IntArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[125] = nova_datastruct_list_Nova_IntArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[126] = nova_datastruct_list_Nova_IntArrayIterator_VTable_val.classInstance;
nova_all_classes[127] = nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[128] = nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[129] = nova_datastruct_list_Nova_IntRange_VTable_val.classInstance;
nova_all_classes[130] = nova_datastruct_list_Nova_IntRangeFunctionMap_VTable_val.classInstance;
nova_all_classes[131] = nova_datastruct_list_Nova_IntRangePropertyMap_VTable_val.classInstance;
nova_all_classes[132] = nova_datastruct_list_Nova_IntRangeIterator_VTable_val.classInstance;
nova_all_classes[133] = nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[134] = nova_datastruct_list_Nova_IntRangeIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[135] = nova_datastruct_list_Nova_Iterable_VTable_val.classInstance;
nova_all_classes[136] = nova_datastruct_list_Nova_IterableFunctionMap_VTable_val.classInstance;
nova_all_classes[137] = nova_datastruct_list_Nova_IterablePropertyMap_VTable_val.classInstance;
nova_all_classes[138] = nova_datastruct_list_Double_Nova_Iterable1Double_VTable_val.classInstance;
nova_all_classes[139] = nova_datastruct_list_Char_Nova_Iterable1Char_VTable_val.classInstance;
nova_all_classes[140] = nova_datastruct_list_Int_Nova_Iterable1Int_VTable_val.classInstance;
nova_all_classes[141] = nova_datastruct_list_Byte_Nova_Iterable1Byte_VTable_val.classInstance;
nova_all_classes[142] = nova_datastruct_list_Long_Nova_Iterable1Long_VTable_val.classInstance;
nova_all_classes[143] = nova_datastruct_list_Nova_Iterator_VTable_val.classInstance;
nova_all_classes[144] = nova_datastruct_list_Nova_IteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[145] = nova_datastruct_list_Nova_IteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[146] = nova_datastruct_list_Double_Nova_Iterator1Double_VTable_val.classInstance;
nova_all_classes[147] = nova_datastruct_list_Char_Nova_Iterator1Char_VTable_val.classInstance;
nova_all_classes[148] = nova_datastruct_list_Int_Nova_Iterator1Int_VTable_val.classInstance;
nova_all_classes[149] = nova_datastruct_list_Byte_Nova_Iterator1Byte_VTable_val.classInstance;
nova_all_classes[150] = nova_datastruct_list_Long_Nova_Iterator1Long_VTable_val.classInstance;
nova_all_classes[151] = nova_datastruct_list_Nova_LinkedList_VTable_val.classInstance;
nova_all_classes[152] = nova_datastruct_list_Nova_LinkedListFunctionMap_VTable_val.classInstance;
nova_all_classes[153] = nova_datastruct_list_Nova_LinkedListPropertyMap_VTable_val.classInstance;
nova_all_classes[154] = nova_datastruct_list_Nova_LinkedListIterator_VTable_val.classInstance;
nova_all_classes[155] = nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_VTable_val.classInstance;
nova_all_classes[156] = nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_VTable_val.classInstance;
nova_all_classes[157] = nova_datastruct_list_Nova_List_VTable_val.classInstance;
nova_all_classes[158] = nova_datastruct_list_Nova_ListFunctionMap_VTable_val.classInstance;
nova_all_classes[159] = nova_datastruct_list_Nova_ListPropertyMap_VTable_val.classInstance;
nova_all_classes[160] = nova_datastruct_list_Double_Nova_List1Double_VTable_val.classInstance;
nova_all_classes[161] = nova_datastruct_list_Char_Nova_List1Char_VTable_val.classInstance;
nova_all_classes[162] = nova_datastruct_list_Int_Nova_List1Int_VTable_val.classInstance;
nova_all_classes[163] = nova_datastruct_list_Byte_Nova_List1Byte_VTable_val.classInstance;
nova_all_classes[164] = nova_datastruct_list_Long_Nova_List1Long_VTable_val.classInstance;
nova_all_classes[165] = nova_datastruct_list_Nova_ListNode_VTable_val.classInstance;
nova_all_classes[166] = nova_datastruct_list_Nova_ListNodeFunctionMap_VTable_val.classInstance;
nova_all_classes[167] = nova_datastruct_list_Nova_ListNodePropertyMap_VTable_val.classInstance;
nova_all_classes[168] = nova_datastruct_list_Nova_NoSuchElementException_VTable_val.classInstance;
nova_all_classes[169] = nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[170] = nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[171] = nova_datastruct_list_Nova_OrderedList_VTable_val.classInstance;
nova_all_classes[172] = nova_datastruct_list_Nova_OrderedListFunctionMap_VTable_val.classInstance;
nova_all_classes[173] = nova_datastruct_list_Nova_OrderedListPropertyMap_VTable_val.classInstance;
nova_all_classes[174] = nova_datastruct_list_Double_Nova_OrderedList1Double_VTable_val.classInstance;
nova_all_classes[175] = nova_datastruct_list_Char_Nova_OrderedList1Char_VTable_val.classInstance;
nova_all_classes[176] = nova_datastruct_list_Int_Nova_OrderedList1Int_VTable_val.classInstance;
nova_all_classes[177] = nova_datastruct_list_Byte_Nova_OrderedList1Byte_VTable_val.classInstance;
nova_all_classes[178] = nova_datastruct_list_Long_Nova_OrderedList1Long_VTable_val.classInstance;
nova_all_classes[179] = nova_datastruct_list_Nova_Queue_VTable_val.classInstance;
nova_all_classes[180] = nova_datastruct_list_Nova_QueueFunctionMap_VTable_val.classInstance;
nova_all_classes[181] = nova_datastruct_list_Nova_QueuePropertyMap_VTable_val.classInstance;
nova_all_classes[182] = nova_datastruct_list_Nova_Stack_VTable_val.classInstance;
nova_all_classes[183] = nova_datastruct_list_Nova_StackFunctionMap_VTable_val.classInstance;
nova_all_classes[184] = nova_datastruct_list_Nova_StackPropertyMap_VTable_val.classInstance;
nova_all_classes[185] = nova_datastruct_list_Nova_StringCharArray_VTable_val.classInstance;
nova_all_classes[186] = nova_datastruct_list_Nova_StringCharArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[187] = nova_datastruct_list_Nova_StringCharArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[188] = nova_datastruct_list_Nova_SubstringCharArray_VTable_val.classInstance;
nova_all_classes[189] = nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_VTable_val.classInstance;
nova_all_classes[190] = nova_datastruct_list_Nova_SubstringCharArrayPropertyMap_VTable_val.classInstance;
nova_all_classes[191] = nova_exception_Nova_Backtraces_VTable_val.classInstance;
nova_all_classes[192] = nova_exception_Nova_BacktracesFunctionMap_VTable_val.classInstance;
nova_all_classes[193] = nova_exception_Nova_BacktracesPropertyMap_VTable_val.classInstance;
nova_all_classes[194] = nova_exception_Nova_CaughtException_VTable_val.classInstance;
nova_all_classes[195] = nova_exception_Nova_CaughtExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[196] = nova_exception_Nova_CaughtExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[197] = nova_exception_Nova_DivideByZeroException_VTable_val.classInstance;
nova_all_classes[198] = nova_exception_Nova_DivideByZeroExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[199] = nova_exception_Nova_DivideByZeroExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[200] = nova_exception_Nova_Exception_VTable_val.classInstance;
nova_all_classes[201] = nova_exception_Nova_ExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[202] = nova_exception_Nova_ExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[203] = nova_exception_Nova_ExceptionData_VTable_val.classInstance;
nova_all_classes[204] = nova_exception_Nova_ExceptionDataFunctionMap_VTable_val.classInstance;
nova_all_classes[205] = nova_exception_Nova_ExceptionDataPropertyMap_VTable_val.classInstance;
nova_all_classes[206] = nova_exception_Nova_InvalidArgumentException_VTable_val.classInstance;
nova_all_classes[207] = nova_exception_Nova_InvalidArgumentExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[208] = nova_exception_Nova_InvalidArgumentExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[209] = nova_exception_Nova_InvalidOperationException_VTable_val.classInstance;
nova_all_classes[210] = nova_exception_Nova_InvalidOperationExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[211] = nova_exception_Nova_InvalidOperationExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[212] = nova_exception_Nova_StackTrace_VTable_val.classInstance;
nova_all_classes[213] = nova_exception_Nova_StackTraceFunctionMap_VTable_val.classInstance;
nova_all_classes[214] = nova_exception_Nova_StackTracePropertyMap_VTable_val.classInstance;
nova_all_classes[215] = nova_exception_Nova_UnimplementedForTargetException_VTable_val.classInstance;
nova_all_classes[216] = nova_exception_Nova_UnimplementedForTargetExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[217] = nova_exception_Nova_UnimplementedForTargetExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[218] = nova_exception_Nova_UnimplementedOperationException_VTable_val.classInstance;
nova_all_classes[219] = nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[220] = nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[221] = nova_gc_Nova_GC_VTable_val.classInstance;
nova_all_classes[222] = nova_gc_Nova_GCFunctionMap_VTable_val.classInstance;
nova_all_classes[223] = nova_gc_Nova_GCPropertyMap_VTable_val.classInstance;
nova_all_classes[224] = nova_io_Nova_Console_VTable_val.classInstance;
nova_all_classes[225] = nova_io_Nova_ConsoleFunctionMap_VTable_val.classInstance;
nova_all_classes[226] = nova_io_Nova_ConsolePropertyMap_VTable_val.classInstance;
nova_all_classes[227] = nova_io_Nova_Curl_VTable_val.classInstance;
nova_all_classes[228] = nova_io_Nova_CurlFunctionMap_VTable_val.classInstance;
nova_all_classes[229] = nova_io_Nova_CurlPropertyMap_VTable_val.classInstance;
nova_all_classes[230] = nova_io_Nova_File_VTable_val.classInstance;
nova_all_classes[231] = nova_io_Nova_FileFunctionMap_VTable_val.classInstance;
nova_all_classes[232] = nova_io_Nova_FilePropertyMap_VTable_val.classInstance;
nova_all_classes[233] = nova_io_Nova_FileNotFoundException_VTable_val.classInstance;
nova_all_classes[234] = nova_io_Nova_FileNotFoundExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[235] = nova_io_Nova_FileNotFoundExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[236] = nova_io_Nova_FileReader_VTable_val.classInstance;
nova_all_classes[237] = nova_io_Nova_FileReaderFunctionMap_VTable_val.classInstance;
nova_all_classes[238] = nova_io_Nova_FileReaderPropertyMap_VTable_val.classInstance;
nova_all_classes[239] = nova_io_Nova_FileWriter_VTable_val.classInstance;
nova_all_classes[240] = nova_io_Nova_FileWriterFunctionMap_VTable_val.classInstance;
nova_all_classes[241] = nova_io_Nova_FileWriterPropertyMap_VTable_val.classInstance;
nova_all_classes[242] = nova_io_Nova_InputStream_VTable_val.classInstance;
nova_all_classes[243] = nova_io_Nova_InputStreamFunctionMap_VTable_val.classInstance;
nova_all_classes[244] = nova_io_Nova_InputStreamPropertyMap_VTable_val.classInstance;
nova_all_classes[245] = nova_io_Nova_OutputStream_VTable_val.classInstance;
nova_all_classes[246] = nova_io_Nova_OutputStreamFunctionMap_VTable_val.classInstance;
nova_all_classes[247] = nova_io_Nova_OutputStreamPropertyMap_VTable_val.classInstance;
nova_all_classes[248] = nova_io_Nova_StreamReader_VTable_val.classInstance;
nova_all_classes[249] = nova_io_Nova_StreamReaderFunctionMap_VTable_val.classInstance;
nova_all_classes[250] = nova_io_Nova_StreamReaderPropertyMap_VTable_val.classInstance;
nova_all_classes[251] = nova_io_Nova_StringBuilder_VTable_val.classInstance;
nova_all_classes[252] = nova_io_Nova_StringBuilderFunctionMap_VTable_val.classInstance;
nova_all_classes[253] = nova_io_Nova_StringBuilderPropertyMap_VTable_val.classInstance;
nova_all_classes[254] = nova_math_Nova_ArithmeticSequence_VTable_val.classInstance;
nova_all_classes[255] = nova_math_Nova_ArithmeticSequenceFunctionMap_VTable_val.classInstance;
nova_all_classes[256] = nova_math_Nova_ArithmeticSequencePropertyMap_VTable_val.classInstance;
nova_all_classes[257] = nova_math_Nova_Diekstra_VTable_val.classInstance;
nova_all_classes[258] = nova_math_Nova_DiekstraFunctionMap_VTable_val.classInstance;
nova_all_classes[259] = nova_math_Nova_DiekstraPropertyMap_VTable_val.classInstance;
nova_all_classes[260] = nova_math_Nova_GeometricSequence_VTable_val.classInstance;
nova_all_classes[261] = nova_math_Nova_GeometricSequenceFunctionMap_VTable_val.classInstance;
nova_all_classes[262] = nova_math_Nova_GeometricSequencePropertyMap_VTable_val.classInstance;
nova_all_classes[263] = nova_math_Nova_Graph_VTable_val.classInstance;
nova_all_classes[264] = nova_math_Nova_GraphFunctionMap_VTable_val.classInstance;
nova_all_classes[265] = nova_math_Nova_GraphPropertyMap_VTable_val.classInstance;
nova_all_classes[266] = nova_math_Nova_InvalidNumericStatementException_VTable_val.classInstance;
nova_all_classes[267] = nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[268] = nova_math_Nova_InvalidNumericStatementExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[269] = nova_math_Nova_Math_VTable_val.classInstance;
nova_all_classes[270] = nova_math_Nova_MathFunctionMap_VTable_val.classInstance;
nova_all_classes[271] = nova_math_Nova_MathPropertyMap_VTable_val.classInstance;
nova_all_classes[272] = nova_math_Nova_Matrix_VTable_val.classInstance;
nova_all_classes[273] = nova_math_Nova_MatrixFunctionMap_VTable_val.classInstance;
nova_all_classes[274] = nova_math_Nova_MatrixPropertyMap_VTable_val.classInstance;
nova_all_classes[275] = nova_math_Nova_NumericOperand_VTable_val.classInstance;
nova_all_classes[276] = nova_math_Nova_NumericOperandFunctionMap_VTable_val.classInstance;
nova_all_classes[277] = nova_math_Nova_NumericOperandPropertyMap_VTable_val.classInstance;
nova_all_classes[278] = nova_math_Nova_NumericOperation_VTable_val.classInstance;
nova_all_classes[279] = nova_math_Nova_NumericOperationFunctionMap_VTable_val.classInstance;
nova_all_classes[280] = nova_math_Nova_NumericOperationPropertyMap_VTable_val.classInstance;
nova_all_classes[281] = nova_math_Nova_NumericStatement_VTable_val.classInstance;
nova_all_classes[282] = nova_math_Nova_NumericStatementFunctionMap_VTable_val.classInstance;
nova_all_classes[283] = nova_math_Nova_NumericStatementPropertyMap_VTable_val.classInstance;
nova_all_classes[284] = nova_math_Nova_NumericTree_VTable_val.classInstance;
nova_all_classes[285] = nova_math_Nova_NumericTreeFunctionMap_VTable_val.classInstance;
nova_all_classes[286] = nova_math_Nova_NumericTreePropertyMap_VTable_val.classInstance;
nova_all_classes[287] = nova_math_Nova_Polynomial_VTable_val.classInstance;
nova_all_classes[288] = nova_math_Nova_PolynomialFunctionMap_VTable_val.classInstance;
nova_all_classes[289] = nova_math_Nova_PolynomialPropertyMap_VTable_val.classInstance;
nova_all_classes[290] = nova_math_Nova_Sequence_VTable_val.classInstance;
nova_all_classes[291] = nova_math_Nova_SequenceFunctionMap_VTable_val.classInstance;
nova_all_classes[292] = nova_math_Nova_SequencePropertyMap_VTable_val.classInstance;
nova_all_classes[293] = nova_math_Nova_Statement_VTable_val.classInstance;
nova_all_classes[294] = nova_math_Nova_StatementFunctionMap_VTable_val.classInstance;
nova_all_classes[295] = nova_math_Nova_StatementPropertyMap_VTable_val.classInstance;
nova_all_classes[296] = nova_math_Nova_StatementComponent_VTable_val.classInstance;
nova_all_classes[297] = nova_math_Nova_StatementComponentFunctionMap_VTable_val.classInstance;
nova_all_classes[298] = nova_math_Nova_StatementComponentPropertyMap_VTable_val.classInstance;
nova_all_classes[299] = nova_math_Nova_VariableOperand_VTable_val.classInstance;
nova_all_classes[300] = nova_math_Nova_VariableOperandFunctionMap_VTable_val.classInstance;
nova_all_classes[301] = nova_math_Nova_VariableOperandPropertyMap_VTable_val.classInstance;
nova_all_classes[302] = nova_math_Nova_Vector_VTable_val.classInstance;
nova_all_classes[303] = nova_math_Nova_VectorFunctionMap_VTable_val.classInstance;
nova_all_classes[304] = nova_math_Nova_VectorPropertyMap_VTable_val.classInstance;
nova_all_classes[305] = nova_math_Nova_Vector2D_VTable_val.classInstance;
nova_all_classes[306] = nova_math_Nova_Vector2DFunctionMap_VTable_val.classInstance;
nova_all_classes[307] = nova_math_Nova_Vector2DPropertyMap_VTable_val.classInstance;
nova_all_classes[308] = nova_math_Nova_Vector3D_VTable_val.classInstance;
nova_all_classes[309] = nova_math_Nova_Vector3DFunctionMap_VTable_val.classInstance;
nova_all_classes[310] = nova_math_Nova_Vector3DPropertyMap_VTable_val.classInstance;
nova_all_classes[311] = nova_math_Nova_Vector4D_VTable_val.classInstance;
nova_all_classes[312] = nova_math_Nova_Vector4DFunctionMap_VTable_val.classInstance;
nova_all_classes[313] = nova_math_Nova_Vector4DPropertyMap_VTable_val.classInstance;
nova_all_classes[314] = nova_math_calculus_Nova_Calculus_VTable_val.classInstance;
nova_all_classes[315] = nova_math_calculus_Nova_CalculusFunctionMap_VTable_val.classInstance;
nova_all_classes[316] = nova_math_calculus_Nova_CalculusPropertyMap_VTable_val.classInstance;
nova_all_classes[317] = nova_math_huffman_Nova_HuffmanTree_VTable_val.classInstance;
nova_all_classes[318] = nova_math_huffman_Nova_HuffmanTreeFunctionMap_VTable_val.classInstance;
nova_all_classes[319] = nova_math_huffman_Nova_HuffmanTreePropertyMap_VTable_val.classInstance;
nova_all_classes[320] = nova_math_logic_Nova_Conclusion_VTable_val.classInstance;
nova_all_classes[321] = nova_math_logic_Nova_ConclusionFunctionMap_VTable_val.classInstance;
nova_all_classes[322] = nova_math_logic_Nova_ConclusionPropertyMap_VTable_val.classInstance;
nova_all_classes[323] = nova_math_logic_Nova_Hypothesis_VTable_val.classInstance;
nova_all_classes[324] = nova_math_logic_Nova_HypothesisFunctionMap_VTable_val.classInstance;
nova_all_classes[325] = nova_math_logic_Nova_HypothesisPropertyMap_VTable_val.classInstance;
nova_all_classes[326] = nova_math_logic_Nova_InvalidFormulaException_VTable_val.classInstance;
nova_all_classes[327] = nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[328] = nova_math_logic_Nova_InvalidFormulaExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[329] = nova_math_logic_Nova_LogicalConnective_VTable_val.classInstance;
nova_all_classes[330] = nova_math_logic_Nova_LogicalConnectiveFunctionMap_VTable_val.classInstance;
nova_all_classes[331] = nova_math_logic_Nova_LogicalConnectivePropertyMap_VTable_val.classInstance;
nova_all_classes[332] = nova_math_logic_Nova_LogicalStatement_VTable_val.classInstance;
nova_all_classes[333] = nova_math_logic_Nova_LogicalStatementFunctionMap_VTable_val.classInstance;
nova_all_classes[334] = nova_math_logic_Nova_LogicalStatementPropertyMap_VTable_val.classInstance;
nova_all_classes[335] = nova_math_logic_Nova_StatementComponent_VTable_val.classInstance;
nova_all_classes[336] = nova_math_logic_Nova_StatementComponentFunctionMap_VTable_val.classInstance;
nova_all_classes[337] = nova_math_logic_Nova_StatementComponentPropertyMap_VTable_val.classInstance;
nova_all_classes[338] = nova_math_logic_Nova_StatementGroup_VTable_val.classInstance;
nova_all_classes[339] = nova_math_logic_Nova_StatementGroupFunctionMap_VTable_val.classInstance;
nova_all_classes[340] = nova_math_logic_Nova_StatementGroupPropertyMap_VTable_val.classInstance;
nova_all_classes[341] = nova_math_logic_Nova_StatementLetter_VTable_val.classInstance;
nova_all_classes[342] = nova_math_logic_Nova_StatementLetterFunctionMap_VTable_val.classInstance;
nova_all_classes[343] = nova_math_logic_Nova_StatementLetterPropertyMap_VTable_val.classInstance;
nova_all_classes[344] = nova_math_logic_Nova_WFF_VTable_val.classInstance;
nova_all_classes[345] = nova_math_logic_Nova_WFFFunctionMap_VTable_val.classInstance;
nova_all_classes[346] = nova_math_logic_Nova_WFFPropertyMap_VTable_val.classInstance;
nova_all_classes[347] = nova_meta_Nova_Class_VTable_val.classInstance;
nova_all_classes[348] = nova_meta_Nova_ClassFunctionMap_VTable_val.classInstance;
nova_all_classes[349] = nova_meta_Nova_ClassPropertyMap_VTable_val.classInstance;
nova_all_classes[350] = nova_meta_Nova_Field_VTable_val.classInstance;
nova_all_classes[351] = nova_meta_Nova_FieldFunctionMap_VTable_val.classInstance;
nova_all_classes[352] = nova_meta_Nova_FieldPropertyMap_VTable_val.classInstance;
nova_all_classes[353] = nova_meta_Nova_FunctionMap_VTable_val.classInstance;
nova_all_classes[354] = nova_meta_Nova_FunctionMapFunctionMap_VTable_val.classInstance;
nova_all_classes[355] = nova_meta_Nova_FunctionMapPropertyMap_VTable_val.classInstance;
nova_all_classes[356] = nova_meta_Nova_GenericArgument_VTable_val.classInstance;
nova_all_classes[357] = nova_meta_Nova_GenericArgumentFunctionMap_VTable_val.classInstance;
nova_all_classes[358] = nova_meta_Nova_GenericArgumentPropertyMap_VTable_val.classInstance;
nova_all_classes[359] = nova_meta_Nova_GenericParameter_VTable_val.classInstance;
nova_all_classes[360] = nova_meta_Nova_GenericParameterFunctionMap_VTable_val.classInstance;
nova_all_classes[361] = nova_meta_Nova_GenericParameterPropertyMap_VTable_val.classInstance;
nova_all_classes[362] = nova_meta_Nova_InvalidLibraryException_VTable_val.classInstance;
nova_all_classes[363] = nova_meta_Nova_InvalidLibraryExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[364] = nova_meta_Nova_InvalidLibraryExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[365] = nova_meta_Nova_Library_VTable_val.classInstance;
nova_all_classes[366] = nova_meta_Nova_LibraryFunctionMap_VTable_val.classInstance;
nova_all_classes[367] = nova_meta_Nova_LibraryPropertyMap_VTable_val.classInstance;
nova_all_classes[368] = nova_meta_Nova_PropertyMap_VTable_val.classInstance;
nova_all_classes[369] = nova_meta_Nova_PropertyMapFunctionMap_VTable_val.classInstance;
nova_all_classes[370] = nova_meta_Nova_PropertyMapPropertyMap_VTable_val.classInstance;
nova_all_classes[371] = nova_meta_Nova_Type_VTable_val.classInstance;
nova_all_classes[372] = nova_meta_Nova_TypeFunctionMap_VTable_val.classInstance;
nova_all_classes[373] = nova_meta_Nova_TypePropertyMap_VTable_val.classInstance;
nova_all_classes[374] = nova_network_Nova_ClientSocket_VTable_val.classInstance;
nova_all_classes[375] = nova_network_Nova_ClientSocketFunctionMap_VTable_val.classInstance;
nova_all_classes[376] = nova_network_Nova_ClientSocketPropertyMap_VTable_val.classInstance;
nova_all_classes[377] = nova_network_Nova_ConnectionSocket_VTable_val.classInstance;
nova_all_classes[378] = nova_network_Nova_ConnectionSocketFunctionMap_VTable_val.classInstance;
nova_all_classes[379] = nova_network_Nova_ConnectionSocketPropertyMap_VTable_val.classInstance;
nova_all_classes[380] = nova_network_Nova_NetworkInputStream_VTable_val.classInstance;
nova_all_classes[381] = nova_network_Nova_NetworkInputStreamFunctionMap_VTable_val.classInstance;
nova_all_classes[382] = nova_network_Nova_NetworkInputStreamPropertyMap_VTable_val.classInstance;
nova_all_classes[383] = nova_network_Nova_NetworkOutputStream_VTable_val.classInstance;
nova_all_classes[384] = nova_network_Nova_NetworkOutputStreamFunctionMap_VTable_val.classInstance;
nova_all_classes[385] = nova_network_Nova_NetworkOutputStreamPropertyMap_VTable_val.classInstance;
nova_all_classes[386] = nova_network_Nova_ServerSocket_VTable_val.classInstance;
nova_all_classes[387] = nova_network_Nova_ServerSocketFunctionMap_VTable_val.classInstance;
nova_all_classes[388] = nova_network_Nova_ServerSocketPropertyMap_VTable_val.classInstance;
nova_all_classes[389] = nova_network_Nova_Socket_VTable_val.classInstance;
nova_all_classes[390] = nova_network_Nova_SocketFunctionMap_VTable_val.classInstance;
nova_all_classes[391] = nova_network_Nova_SocketPropertyMap_VTable_val.classInstance;
nova_all_classes[392] = nova_operators_Nova_EqualsOperator_VTable_val.classInstance;
nova_all_classes[393] = nova_operators_Nova_EqualsOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[394] = nova_operators_Nova_EqualsOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[395] = nova_operators_Nova_MinusEqualsOperator_VTable_val.classInstance;
nova_all_classes[396] = nova_operators_Nova_MinusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[397] = nova_operators_Nova_MinusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[398] = nova_operators_Nova_MinusOperator_VTable_val.classInstance;
nova_all_classes[399] = nova_operators_Nova_MinusOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[400] = nova_operators_Nova_MinusOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[401] = nova_operators_Nova_MultiplyEqualsOperator_VTable_val.classInstance;
nova_all_classes[402] = nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[403] = nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[404] = nova_operators_Nova_MultiplyOperator_VTable_val.classInstance;
nova_all_classes[405] = nova_operators_Nova_MultiplyOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[406] = nova_operators_Nova_MultiplyOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[407] = nova_operators_Nova_NotEqualToOperator_VTable_val.classInstance;
nova_all_classes[408] = nova_operators_Nova_NotEqualToOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[409] = nova_operators_Nova_NotEqualToOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[410] = nova_operators_Nova_PlusEqualsOperator_VTable_val.classInstance;
nova_all_classes[411] = nova_operators_Nova_PlusEqualsOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[412] = nova_operators_Nova_PlusEqualsOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[413] = nova_operators_Nova_PlusOperator_VTable_val.classInstance;
nova_all_classes[414] = nova_operators_Nova_PlusOperatorFunctionMap_VTable_val.classInstance;
nova_all_classes[415] = nova_operators_Nova_PlusOperatorPropertyMap_VTable_val.classInstance;
nova_all_classes[416] = nova_primitive_Nova_Bool_VTable_val.classInstance;
nova_all_classes[417] = nova_primitive_Nova_BoolFunctionMap_VTable_val.classInstance;
nova_all_classes[418] = nova_primitive_Nova_BoolPropertyMap_VTable_val.classInstance;
nova_all_classes[419] = nova_primitive_Nova_Null_VTable_val.classInstance;
nova_all_classes[420] = nova_primitive_Nova_NullFunctionMap_VTable_val.classInstance;
nova_all_classes[421] = nova_primitive_Nova_NullPropertyMap_VTable_val.classInstance;
nova_all_classes[422] = nova_primitive_Nova_Primitive_VTable_val.classInstance;
nova_all_classes[423] = nova_primitive_Nova_PrimitiveFunctionMap_VTable_val.classInstance;
nova_all_classes[424] = nova_primitive_Nova_PrimitivePropertyMap_VTable_val.classInstance;
nova_all_classes[425] = nova_primitive_number_Nova_Byte_VTable_val.classInstance;
nova_all_classes[426] = nova_primitive_number_Nova_ByteFunctionMap_VTable_val.classInstance;
nova_all_classes[427] = nova_primitive_number_Nova_BytePropertyMap_VTable_val.classInstance;
nova_all_classes[428] = nova_primitive_number_Nova_Char_VTable_val.classInstance;
nova_all_classes[429] = nova_primitive_number_Nova_CharFunctionMap_VTable_val.classInstance;
nova_all_classes[430] = nova_primitive_number_Nova_CharPropertyMap_VTable_val.classInstance;
nova_all_classes[431] = nova_primitive_number_Nova_Double_VTable_val.classInstance;
nova_all_classes[432] = nova_primitive_number_Nova_DoubleFunctionMap_VTable_val.classInstance;
nova_all_classes[433] = nova_primitive_number_Nova_DoublePropertyMap_VTable_val.classInstance;
nova_all_classes[434] = nova_primitive_number_Nova_Float_VTable_val.classInstance;
nova_all_classes[435] = nova_primitive_number_Nova_FloatFunctionMap_VTable_val.classInstance;
nova_all_classes[436] = nova_primitive_number_Nova_FloatPropertyMap_VTable_val.classInstance;
nova_all_classes[437] = nova_primitive_number_Nova_Int_VTable_val.classInstance;
nova_all_classes[438] = nova_primitive_number_Nova_IntFunctionMap_VTable_val.classInstance;
nova_all_classes[439] = nova_primitive_number_Nova_IntPropertyMap_VTable_val.classInstance;
nova_all_classes[440] = nova_primitive_number_Nova_Integer_VTable_val.classInstance;
nova_all_classes[441] = nova_primitive_number_Nova_IntegerFunctionMap_VTable_val.classInstance;
nova_all_classes[442] = nova_primitive_number_Nova_IntegerPropertyMap_VTable_val.classInstance;
nova_all_classes[443] = nova_primitive_number_Nova_Long_VTable_val.classInstance;
nova_all_classes[444] = nova_primitive_number_Nova_LongFunctionMap_VTable_val.classInstance;
nova_all_classes[445] = nova_primitive_number_Nova_LongPropertyMap_VTable_val.classInstance;
nova_all_classes[446] = nova_primitive_number_Nova_Number_VTable_val.classInstance;
nova_all_classes[447] = nova_primitive_number_Nova_NumberFunctionMap_VTable_val.classInstance;
nova_all_classes[448] = nova_primitive_number_Nova_NumberPropertyMap_VTable_val.classInstance;
nova_all_classes[449] = nova_primitive_number_Nova_RealNumber_VTable_val.classInstance;
nova_all_classes[450] = nova_primitive_number_Nova_RealNumberFunctionMap_VTable_val.classInstance;
nova_all_classes[451] = nova_primitive_number_Nova_RealNumberPropertyMap_VTable_val.classInstance;
nova_all_classes[452] = nova_primitive_number_Nova_Short_VTable_val.classInstance;
nova_all_classes[453] = nova_primitive_number_Nova_ShortFunctionMap_VTable_val.classInstance;
nova_all_classes[454] = nova_primitive_number_Nova_ShortPropertyMap_VTable_val.classInstance;
nova_all_classes[455] = nova_process_Nova_Process_VTable_val.classInstance;
nova_all_classes[456] = nova_process_Nova_ProcessFunctionMap_VTable_val.classInstance;
nova_all_classes[457] = nova_process_Nova_ProcessPropertyMap_VTable_val.classInstance;
nova_all_classes[458] = nova_regex_Nova_Match_VTable_val.classInstance;
nova_all_classes[459] = nova_regex_Nova_MatchFunctionMap_VTable_val.classInstance;
nova_all_classes[460] = nova_regex_Nova_MatchPropertyMap_VTable_val.classInstance;
nova_all_classes[461] = nova_regex_Nova_Pattern_VTable_val.classInstance;
nova_all_classes[462] = nova_regex_Nova_PatternFunctionMap_VTable_val.classInstance;
nova_all_classes[463] = nova_regex_Nova_PatternPropertyMap_VTable_val.classInstance;
nova_all_classes[464] = nova_regex_Nova_Regex_VTable_val.classInstance;
nova_all_classes[465] = nova_regex_Nova_RegexFunctionMap_VTable_val.classInstance;
nova_all_classes[466] = nova_regex_Nova_RegexPropertyMap_VTable_val.classInstance;
nova_all_classes[467] = nova_security_Nova_MD5_VTable_val.classInstance;
nova_all_classes[468] = nova_security_Nova_MD5FunctionMap_VTable_val.classInstance;
nova_all_classes[469] = nova_security_Nova_MD5PropertyMap_VTable_val.classInstance;
nova_all_classes[470] = nova_security_Nova_Sha256_VTable_val.classInstance;
nova_all_classes[471] = nova_security_Nova_Sha256FunctionMap_VTable_val.classInstance;
nova_all_classes[472] = nova_security_Nova_Sha256PropertyMap_VTable_val.classInstance;
nova_all_classes[473] = nova_serialization_Nova_JsonSerializer_VTable_val.classInstance;
nova_all_classes[474] = nova_serialization_Nova_JsonSerializerFunctionMap_VTable_val.classInstance;
nova_all_classes[475] = nova_serialization_Nova_JsonSerializerPropertyMap_VTable_val.classInstance;
nova_all_classes[476] = nova_star_Nova_Frame_VTable_val.classInstance;
nova_all_classes[477] = nova_star_Nova_FrameFunctionMap_VTable_val.classInstance;
nova_all_classes[478] = nova_star_Nova_FramePropertyMap_VTable_val.classInstance;
nova_all_classes[479] = nova_star_Nova_Window_VTable_val.classInstance;
nova_all_classes[480] = nova_star_Nova_WindowFunctionMap_VTable_val.classInstance;
nova_all_classes[481] = nova_star_Nova_WindowPropertyMap_VTable_val.classInstance;
nova_all_classes[482] = nova_star_Nova_WindowThread_VTable_val.classInstance;
nova_all_classes[483] = nova_star_Nova_WindowThreadFunctionMap_VTable_val.classInstance;
nova_all_classes[484] = nova_star_Nova_WindowThreadPropertyMap_VTable_val.classInstance;
nova_all_classes[485] = nova_thread_Nova_Thread_VTable_val.classInstance;
nova_all_classes[486] = nova_thread_Nova_ThreadFunctionMap_VTable_val.classInstance;
nova_all_classes[487] = nova_thread_Nova_ThreadPropertyMap_VTable_val.classInstance;
nova_all_classes[488] = nova_thread_Nova_ThreadLocal_VTable_val.classInstance;
nova_all_classes[489] = nova_thread_Nova_ThreadLocalFunctionMap_VTable_val.classInstance;
nova_all_classes[490] = nova_thread_Nova_ThreadLocalPropertyMap_VTable_val.classInstance;
nova_all_classes[491] = nova_thread_Nova_UncaughtExceptionHandler_VTable_val.classInstance;
nova_all_classes[492] = nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_VTable_val.classInstance;
nova_all_classes[493] = nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_VTable_val.classInstance;
nova_all_classes[494] = nova_thread_async_Nova_Async_VTable_val.classInstance;
nova_all_classes[495] = nova_thread_async_Nova_AsyncFunctionMap_VTable_val.classInstance;
nova_all_classes[496] = nova_thread_async_Nova_AsyncPropertyMap_VTable_val.classInstance;
nova_all_classes[497] = nova_thread_async_Nova_Task_VTable_val.classInstance;
nova_all_classes[498] = nova_thread_async_Nova_TaskFunctionMap_VTable_val.classInstance;
nova_all_classes[499] = nova_thread_async_Nova_TaskPropertyMap_VTable_val.classInstance;
nova_all_classes[500] = nova_time_Nova_CumulativeTimer_VTable_val.classInstance;
nova_all_classes[501] = nova_time_Nova_CumulativeTimerFunctionMap_VTable_val.classInstance;
nova_all_classes[502] = nova_time_Nova_CumulativeTimerPropertyMap_VTable_val.classInstance;
nova_all_classes[503] = nova_time_Nova_Date_VTable_val.classInstance;
nova_all_classes[504] = nova_time_Nova_DateFunctionMap_VTable_val.classInstance;
nova_all_classes[505] = nova_time_Nova_DatePropertyMap_VTable_val.classInstance;
nova_all_classes[506] = nova_time_Nova_Time_VTable_val.classInstance;
nova_all_classes[507] = nova_time_Nova_TimeFunctionMap_VTable_val.classInstance;
nova_all_classes[508] = nova_time_Nova_TimePropertyMap_VTable_val.classInstance;
nova_all_classes[509] = nova_time_Nova_Timer_VTable_val.classInstance;
nova_all_classes[510] = nova_time_Nova_TimerFunctionMap_VTable_val.classInstance;
nova_all_classes[511] = nova_time_Nova_TimerPropertyMap_VTable_val.classInstance;
nova_all_classes[512] = nova_web_js_json_Nova_Json_VTable_val.classInstance;
nova_all_classes[513] = nova_web_js_json_Nova_JsonFunctionMap_VTable_val.classInstance;
nova_all_classes[514] = nova_web_js_json_Nova_JsonPropertyMap_VTable_val.classInstance;
nova_all_classes[515] = nova_web_svg_Nova_Svg_VTable_val.classInstance;
nova_all_classes[516] = nova_web_svg_Nova_SvgFunctionMap_VTable_val.classInstance;
nova_all_classes[517] = nova_web_svg_Nova_SvgPropertyMap_VTable_val.classInstance;
nova_all_classes[518] = nova_web_svg_Nova_SvgCircle_VTable_val.classInstance;
nova_all_classes[519] = nova_web_svg_Nova_SvgCircleFunctionMap_VTable_val.classInstance;
nova_all_classes[520] = nova_web_svg_Nova_SvgCirclePropertyMap_VTable_val.classInstance;
nova_all_classes[521] = nova_web_svg_Nova_SvgComponent_VTable_val.classInstance;
nova_all_classes[522] = nova_web_svg_Nova_SvgComponentFunctionMap_VTable_val.classInstance;
nova_all_classes[523] = nova_web_svg_Nova_SvgComponentPropertyMap_VTable_val.classInstance;
nova_all_classes[524] = nova_web_svg_Nova_SvgComponentList_VTable_val.classInstance;
nova_all_classes[525] = nova_web_svg_Nova_SvgComponentListFunctionMap_VTable_val.classInstance;
nova_all_classes[526] = nova_web_svg_Nova_SvgComponentListPropertyMap_VTable_val.classInstance;
nova_all_classes[527] = nova_web_svg_Nova_SvgComponentNode_VTable_val.classInstance;
nova_all_classes[528] = nova_web_svg_Nova_SvgComponentNodeFunctionMap_VTable_val.classInstance;
nova_all_classes[529] = nova_web_svg_Nova_SvgComponentNodePropertyMap_VTable_val.classInstance;
nova_all_classes[530] = nova_web_svg_Nova_SvgMainComponent_VTable_val.classInstance;
nova_all_classes[531] = nova_web_svg_Nova_SvgMainComponentFunctionMap_VTable_val.classInstance;
nova_all_classes[532] = nova_web_svg_Nova_SvgMainComponentPropertyMap_VTable_val.classInstance;
nova_all_classes[533] = nova_web_svg_no3_Nova_No3_VTable_val.classInstance;
nova_all_classes[534] = nova_web_svg_no3_Nova_No3FunctionMap_VTable_val.classInstance;
nova_all_classes[535] = nova_web_svg_no3_Nova_No3PropertyMap_VTable_val.classInstance;
nova_all_classes[536] = nova_web_svg_no3_Nova_No3Node_VTable_val.classInstance;
nova_all_classes[537] = nova_web_svg_no3_Nova_No3NodeFunctionMap_VTable_val.classInstance;
nova_all_classes[538] = nova_web_svg_no3_Nova_No3NodePropertyMap_VTable_val.classInstance;
nova_all_classes[539] = nova_web_svg_no3_Nova_No3Select_VTable_val.classInstance;
nova_all_classes[540] = nova_web_svg_no3_Nova_No3SelectFunctionMap_VTable_val.classInstance;
nova_all_classes[541] = nova_web_svg_no3_Nova_No3SelectPropertyMap_VTable_val.classInstance;
nova_all_classes[542] = nova_web_svg_no3_Nova_No3SelectAll_VTable_val.classInstance;
nova_all_classes[543] = nova_web_svg_no3_Nova_No3SelectAllFunctionMap_VTable_val.classInstance;
nova_all_classes[544] = nova_web_svg_no3_Nova_No3SelectAllPropertyMap_VTable_val.classInstance;
nova_all_classes[545] = novex_nest_Nova_InvalidAssertionException_VTable_val.classInstance;
nova_all_classes[546] = novex_nest_Nova_InvalidAssertionExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[547] = novex_nest_Nova_InvalidAssertionExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[548] = novex_nest_Nova_Nest_VTable_val.classInstance;
nova_all_classes[549] = novex_nest_Nova_NestFunctionMap_VTable_val.classInstance;
nova_all_classes[550] = novex_nest_Nova_NestPropertyMap_VTable_val.classInstance;
nova_all_classes[551] = novex_nest_Int_Nova_Nest1Int_VTable_val.classInstance;
nova_all_classes[552] = novex_nest_Nova_TestSuite_VTable_val.classInstance;
nova_all_classes[553] = novex_nest_Nova_TestSuiteFunctionMap_VTable_val.classInstance;
nova_all_classes[554] = novex_nest_Nova_TestSuitePropertyMap_VTable_val.classInstance;
nova_all_classes[555] = example_Nova_Animal_VTable_val.classInstance;
nova_all_classes[556] = example_Nova_AnimalFunctionMap_VTable_val.classInstance;
nova_all_classes[557] = example_Nova_AnimalPropertyMap_VTable_val.classInstance;
nova_all_classes[558] = example_Nova_ArrayDemo_VTable_val.classInstance;
nova_all_classes[559] = example_Nova_ArrayDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[560] = example_Nova_ArrayDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[561] = example_Nova_BodyBuilder_VTable_val.classInstance;
nova_all_classes[562] = example_Nova_BodyBuilderFunctionMap_VTable_val.classInstance;
nova_all_classes[563] = example_Nova_BodyBuilderPropertyMap_VTable_val.classInstance;
nova_all_classes[564] = example_Nova_ClosureDemo_VTable_val.classInstance;
nova_all_classes[565] = example_Nova_ClosureDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[566] = example_Nova_ClosureDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[567] = example_Nova_Dog_VTable_val.classInstance;
nova_all_classes[568] = example_Nova_DogFunctionMap_VTable_val.classInstance;
nova_all_classes[569] = example_Nova_DogPropertyMap_VTable_val.classInstance;
nova_all_classes[570] = example_Nova_ExceptionHandlingDemo_VTable_val.classInstance;
nova_all_classes[571] = example_Nova_ExceptionHandlingDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[572] = example_Nova_ExceptionHandlingDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[573] = example_Nova_FileTest_VTable_val.classInstance;
nova_all_classes[574] = example_Nova_FileTestFunctionMap_VTable_val.classInstance;
nova_all_classes[575] = example_Nova_FileTestPropertyMap_VTable_val.classInstance;
nova_all_classes[576] = example_Nova_GenericDemo_VTable_val.classInstance;
nova_all_classes[577] = example_Nova_GenericDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[578] = example_Nova_GenericDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[579] = example_Nova_HashMapDemo_VTable_val.classInstance;
nova_all_classes[580] = example_Nova_HashMapDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[581] = example_Nova_HashMapDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[582] = example_Nova_HashSetDemo_VTable_val.classInstance;
nova_all_classes[583] = example_Nova_HashSetDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[584] = example_Nova_HashSetDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[585] = example_Nova_IntegerTest_VTable_val.classInstance;
nova_all_classes[586] = example_Nova_IntegerTestFunctionMap_VTable_val.classInstance;
nova_all_classes[587] = example_Nova_IntegerTestPropertyMap_VTable_val.classInstance;
nova_all_classes[588] = example_Nova_Lab_VTable_val.classInstance;
nova_all_classes[589] = example_Nova_LabFunctionMap_VTable_val.classInstance;
nova_all_classes[590] = example_Nova_LabPropertyMap_VTable_val.classInstance;
nova_all_classes[591] = example_Nova_MathDemo_VTable_val.classInstance;
nova_all_classes[592] = example_Nova_MathDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[593] = example_Nova_MathDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[594] = example_Nova_NestTest_VTable_val.classInstance;
nova_all_classes[595] = example_Nova_NestTestFunctionMap_VTable_val.classInstance;
nova_all_classes[596] = example_Nova_NestTestPropertyMap_VTable_val.classInstance;
nova_all_classes[597] = example_Nova_NonWholeDivisionException_VTable_val.classInstance;
nova_all_classes[598] = example_Nova_NonWholeDivisionExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[599] = example_Nova_NonWholeDivisionExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[600] = example_Nova_Person_VTable_val.classInstance;
nova_all_classes[601] = example_Nova_PersonFunctionMap_VTable_val.classInstance;
nova_all_classes[602] = example_Nova_PersonPropertyMap_VTable_val.classInstance;
nova_all_classes[603] = example_Nova_Polygon_VTable_val.classInstance;
nova_all_classes[604] = example_Nova_PolygonFunctionMap_VTable_val.classInstance;
nova_all_classes[605] = example_Nova_PolygonPropertyMap_VTable_val.classInstance;
nova_all_classes[606] = example_Nova_PolymorphismDemo_VTable_val.classInstance;
nova_all_classes[607] = example_Nova_PolymorphismDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[608] = example_Nova_PolymorphismDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[609] = example_Nova_QueueDemo_VTable_val.classInstance;
nova_all_classes[610] = example_Nova_QueueDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[611] = example_Nova_QueueDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[612] = example_Nova_Spider_VTable_val.classInstance;
nova_all_classes[613] = example_Nova_SpiderFunctionMap_VTable_val.classInstance;
nova_all_classes[614] = example_Nova_SpiderPropertyMap_VTable_val.classInstance;
nova_all_classes[615] = example_Nova_Square_VTable_val.classInstance;
nova_all_classes[616] = example_Nova_SquareFunctionMap_VTable_val.classInstance;
nova_all_classes[617] = example_Nova_SquarePropertyMap_VTable_val.classInstance;
nova_all_classes[618] = example_Nova_SvgChart_VTable_val.classInstance;
nova_all_classes[619] = example_Nova_SvgChartFunctionMap_VTable_val.classInstance;
nova_all_classes[620] = example_Nova_SvgChartPropertyMap_VTable_val.classInstance;
nova_all_classes[621] = example_Nova_SvgFractal_VTable_val.classInstance;
nova_all_classes[622] = example_Nova_SvgFractalFunctionMap_VTable_val.classInstance;
nova_all_classes[623] = example_Nova_SvgFractalPropertyMap_VTable_val.classInstance;
nova_all_classes[624] = example_Nova_T1_VTable_val.classInstance;
nova_all_classes[625] = example_Nova_T1FunctionMap_VTable_val.classInstance;
nova_all_classes[626] = example_Nova_T1PropertyMap_VTable_val.classInstance;
nova_all_classes[627] = example_Nova_T2_VTable_val.classInstance;
nova_all_classes[628] = example_Nova_T2FunctionMap_VTable_val.classInstance;
nova_all_classes[629] = example_Nova_T2PropertyMap_VTable_val.classInstance;
nova_all_classes[630] = example_Nova_Test_VTable_val.classInstance;
nova_all_classes[631] = example_Nova_TestFunctionMap_VTable_val.classInstance;
nova_all_classes[632] = example_Nova_TestPropertyMap_VTable_val.classInstance;
nova_all_classes[633] = example_Nova_ThreadDemo_VTable_val.classInstance;
nova_all_classes[634] = example_Nova_ThreadDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[635] = example_Nova_ThreadDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[636] = example_Nova_ThreadDemoImplementation_VTable_val.classInstance;
nova_all_classes[637] = example_Nova_ThreadDemoImplementationFunctionMap_VTable_val.classInstance;
nova_all_classes[638] = example_Nova_ThreadDemoImplementationPropertyMap_VTable_val.classInstance;
nova_all_classes[639] = example_ackermann_Nova_Ackermann_VTable_val.classInstance;
nova_all_classes[640] = example_ackermann_Nova_AckermannFunctionMap_VTable_val.classInstance;
nova_all_classes[641] = example_ackermann_Nova_AckermannPropertyMap_VTable_val.classInstance;
nova_all_classes[642] = example_copy_Nova_Dog_VTable_val.classInstance;
nova_all_classes[643] = example_copy_Nova_DogFunctionMap_VTable_val.classInstance;
nova_all_classes[644] = example_copy_Nova_DogPropertyMap_VTable_val.classInstance;
nova_all_classes[645] = example_database_Nova_DatabaseDemo_VTable_val.classInstance;
nova_all_classes[646] = example_database_Nova_DatabaseDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[647] = example_database_Nova_DatabaseDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[648] = example_network_Nova_ClientDemo_VTable_val.classInstance;
nova_all_classes[649] = example_network_Nova_ClientDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[650] = example_network_Nova_ClientDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[651] = example_network_Nova_ConnectionThread_VTable_val.classInstance;
nova_all_classes[652] = example_network_Nova_ConnectionThreadFunctionMap_VTable_val.classInstance;
nova_all_classes[653] = example_network_Nova_ConnectionThreadPropertyMap_VTable_val.classInstance;
nova_all_classes[654] = example_network_Nova_OutputThread_VTable_val.classInstance;
nova_all_classes[655] = example_network_Nova_OutputThreadFunctionMap_VTable_val.classInstance;
nova_all_classes[656] = example_network_Nova_OutputThreadPropertyMap_VTable_val.classInstance;
nova_all_classes[657] = example_network_Nova_ServerDemo_VTable_val.classInstance;
nova_all_classes[658] = example_network_Nova_ServerDemoFunctionMap_VTable_val.classInstance;
nova_all_classes[659] = example_network_Nova_ServerDemoPropertyMap_VTable_val.classInstance;
nova_all_classes[660] = stabilitytest_Nova_AssignmentStability_VTable_val.classInstance;
nova_all_classes[661] = stabilitytest_Nova_AssignmentStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[662] = stabilitytest_Nova_AssignmentStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[663] = stabilitytest_Nova_ClassWithProperties_VTable_val.classInstance;
nova_all_classes[664] = stabilitytest_Nova_ClassWithPropertiesFunctionMap_VTable_val.classInstance;
nova_all_classes[665] = stabilitytest_Nova_ClassWithPropertiesPropertyMap_VTable_val.classInstance;
nova_all_classes[666] = stabilitytest_Nova_ClientThread_VTable_val.classInstance;
nova_all_classes[667] = stabilitytest_Nova_ClientThreadFunctionMap_VTable_val.classInstance;
nova_all_classes[668] = stabilitytest_Nova_ClientThreadPropertyMap_VTable_val.classInstance;
nova_all_classes[669] = stabilitytest_Nova_ClosureStability_VTable_val.classInstance;
nova_all_classes[670] = stabilitytest_Nova_ClosureStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[671] = stabilitytest_Nova_ClosureStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[672] = stabilitytest_Nova_ExceptionStability_VTable_val.classInstance;
nova_all_classes[673] = stabilitytest_Nova_ExceptionStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[674] = stabilitytest_Nova_ExceptionStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[675] = stabilitytest_Nova_ExternalInnerClassStability_VTable_val.classInstance;
nova_all_classes[676] = stabilitytest_Nova_ExternalInnerClassStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[677] = stabilitytest_Nova_ExternalInnerClassStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[678] = stabilitytest_Nova_FileStability_VTable_val.classInstance;
nova_all_classes[679] = stabilitytest_Nova_FileStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[680] = stabilitytest_Nova_FileStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[681] = stabilitytest_Nova_InnerClassStability_VTable_val.classInstance;
nova_all_classes[682] = stabilitytest_Nova_MyOuter_VTable_val.classInstance;
nova_all_classes[683] = stabilitytest_Nova_InnerClassStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[684] = stabilitytest_Nova_InnerClassStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[685] = stabilitytest_Nova_MyOuterFunctionMap_VTable_val.classInstance;
nova_all_classes[686] = stabilitytest_Nova_MyOuterPropertyMap_VTable_val.classInstance;
nova_all_classes[687] = stabilitytest_Nova_MyInner_VTable_val.classInstance;
nova_all_classes[688] = stabilitytest_Nova_MyInnerFunctionMap_VTable_val.classInstance;
nova_all_classes[689] = stabilitytest_Nova_MyInnerPropertyMap_VTable_val.classInstance;
nova_all_classes[690] = stabilitytest_Nova_LambdaStability_VTable_val.classInstance;
nova_all_classes[691] = stabilitytest_Nova_LambdaStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[692] = stabilitytest_Nova_LambdaStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[693] = stabilitytest_Nova_NetworkStability_VTable_val.classInstance;
nova_all_classes[694] = stabilitytest_Nova_NetworkStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[695] = stabilitytest_Nova_NetworkStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[696] = stabilitytest_Nova_Node_VTable_val.classInstance;
nova_all_classes[697] = stabilitytest_Nova_NodeFunctionMap_VTable_val.classInstance;
nova_all_classes[698] = stabilitytest_Nova_NodePropertyMap_VTable_val.classInstance;
nova_all_classes[699] = stabilitytest_Nova_PolymorphicSubClass_VTable_val.classInstance;
nova_all_classes[700] = stabilitytest_Nova_PolymorphicSubClassFunctionMap_VTable_val.classInstance;
nova_all_classes[701] = stabilitytest_Nova_PolymorphicSubClassPropertyMap_VTable_val.classInstance;
nova_all_classes[702] = stabilitytest_Nova_PolymorphicSuperClass_VTable_val.classInstance;
nova_all_classes[703] = stabilitytest_Nova_PolymorphicSuperClassFunctionMap_VTable_val.classInstance;
nova_all_classes[704] = stabilitytest_Nova_PolymorphicSuperClassPropertyMap_VTable_val.classInstance;
nova_all_classes[705] = stabilitytest_Nova_PolymorphismStability_VTable_val.classInstance;
nova_all_classes[706] = stabilitytest_Nova_PolymorphismStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[707] = stabilitytest_Nova_PolymorphismStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[708] = stabilitytest_Nova_PrimitiveOverloadStability_VTable_val.classInstance;
nova_all_classes[709] = stabilitytest_Nova_PrimitiveOverloadStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[710] = stabilitytest_Nova_PrimitiveOverloadStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[711] = stabilitytest_Nova_RegexStability_VTable_val.classInstance;
nova_all_classes[712] = stabilitytest_Nova_RegexStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[713] = stabilitytest_Nova_RegexStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[714] = stabilitytest_Nova_StabilityExceptionHandler_VTable_val.classInstance;
nova_all_classes[715] = stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_VTable_val.classInstance;
nova_all_classes[716] = stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_VTable_val.classInstance;
nova_all_classes[717] = stabilitytest_Nova_StabilityTest_VTable_val.classInstance;
nova_all_classes[718] = stabilitytest_Nova_StabilityTestFunctionMap_VTable_val.classInstance;
nova_all_classes[719] = stabilitytest_Nova_StabilityTestPropertyMap_VTable_val.classInstance;
nova_all_classes[720] = stabilitytest_Nova_StabilityTestCase_VTable_val.classInstance;
nova_all_classes[721] = stabilitytest_Nova_StabilityTestCaseFunctionMap_VTable_val.classInstance;
nova_all_classes[722] = stabilitytest_Nova_StabilityTestCasePropertyMap_VTable_val.classInstance;
nova_all_classes[723] = stabilitytest_Nova_StabilityTestException_VTable_val.classInstance;
nova_all_classes[724] = stabilitytest_Nova_StabilityTestExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[725] = stabilitytest_Nova_StabilityTestExceptionPropertyMap_VTable_val.classInstance;
nova_all_classes[726] = stabilitytest_Nova_StaticImportStability_VTable_val.classInstance;
nova_all_classes[727] = stabilitytest_Nova_StaticImportStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[728] = stabilitytest_Nova_StaticImportStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[729] = stabilitytest_Nova_SyntaxStability_VTable_val.classInstance;
nova_all_classes[730] = stabilitytest_Nova_SyntaxStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[731] = stabilitytest_Nova_SyntaxStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[732] = stabilitytest_Nova_ThreadImplementation_VTable_val.classInstance;
nova_all_classes[733] = stabilitytest_Nova_ThreadImplementationFunctionMap_VTable_val.classInstance;
nova_all_classes[734] = stabilitytest_Nova_ThreadImplementationPropertyMap_VTable_val.classInstance;
nova_all_classes[735] = stabilitytest_Nova_ThreadStability_VTable_val.classInstance;
nova_all_classes[736] = stabilitytest_Nova_ThreadStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[737] = stabilitytest_Nova_ThreadStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[738] = stabilitytest_Nova_TimeStability_VTable_val.classInstance;
nova_all_classes[739] = stabilitytest_Nova_TimeStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[740] = stabilitytest_Nova_TimeStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[741] = stabilitytest_Nova_ToStringStability_VTable_val.classInstance;
nova_all_classes[742] = stabilitytest_Nova_ToStringStabilityFunctionMap_VTable_val.classInstance;
nova_all_classes[743] = stabilitytest_Nova_ToStringStabilityPropertyMap_VTable_val.classInstance;
nova_all_classes[744] = stabilitytest_Nova_UnstableException_VTable_val.classInstance;
nova_all_classes[745] = stabilitytest_Nova_UnstableExceptionFunctionMap_VTable_val.classInstance;
nova_all_classes[746] = stabilitytest_Nova_UnstableExceptionPropertyMap_VTable_val.classInstance;
nova_meta_Nova_Class_Nova_ALL = nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(0, (nova_Nova_Object**)nova_all_classes, 747);


}

void novaCallStaticBlocks(void* this)
{
nova_Nova_Object_Nova_init_static();
nova_Nova_String_Nova_init_static();
nova_Nova_StringFunctionMap_Nova_init_static();
nova_Nova_StringPropertyMap_Nova_init_static();
nova_Nova_Substring_Nova_init_static();
nova_Nova_SubstringFunctionMap_Nova_init_static();
nova_Nova_SubstringPropertyMap_Nova_init_static();
nova_Nova_System_Nova_init_static();
nova_Nova_SystemFunctionMap_Nova_init_static();
nova_Nova_SystemPropertyMap_Nova_init_static();
nova_ar_Nova_ImageTracker_Nova_init_static();
nova_ar_Nova_ImageTrackerFunctionMap_Nova_init_static();
nova_ar_Nova_ImageTrackerPropertyMap_Nova_init_static();
nova_ar_Nova_TrackPoint_Nova_init_static();
nova_ar_Nova_TrackPointFunctionMap_Nova_init_static();
nova_ar_Nova_TrackPointPropertyMap_Nova_init_static();
nova_database_Nova_DBConnector_Nova_init_static();
nova_database_Nova_DBConnectorFunctionMap_Nova_init_static();
nova_database_Nova_DBConnectorPropertyMap_Nova_init_static();
nova_database_Nova_ResultSet_Nova_init_static();
nova_database_Nova_ResultSetFunctionMap_Nova_init_static();
nova_database_Nova_ResultSetPropertyMap_Nova_init_static();
nova_datastruct_Nova_BinaryNode_Nova_init_static();
nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_init_static();
nova_datastruct_Nova_BinaryNodePropertyMap_Nova_init_static();
nova_datastruct_Nova_BinaryTree_Nova_init_static();
nova_datastruct_Nova_BinaryTreeFunctionMap_Nova_init_static();
nova_datastruct_Nova_BinaryTreePropertyMap_Nova_init_static();
nova_datastruct_Nova_Bounds_Nova_init_static();
nova_datastruct_Nova_BoundsFunctionMap_Nova_init_static();
nova_datastruct_Nova_BoundsPropertyMap_Nova_init_static();
nova_datastruct_Nova_Comparable_Nova_init_static();
nova_datastruct_Nova_ComparableFunctionMap_Nova_init_static();
nova_datastruct_Nova_ComparablePropertyMap_Nova_init_static();
nova_datastruct_Nova_HashMap_Nova_init_static();
nova_datastruct_Nova_HashMapFunctionMap_Nova_init_static();
nova_datastruct_Nova_HashMapPropertyMap_Nova_init_static();
nova_datastruct_Nova_HashMapIterator_Nova_init_static();
nova_datastruct_Nova_HashMapIteratorFunctionMap_Nova_init_static();
nova_datastruct_Nova_HashMapIteratorPropertyMap_Nova_init_static();
nova_datastruct_Long_V_Nova_HashMap1Long_Nova_init_static();
nova_datastruct_Long_V_Nova_HashMapIterator1Long_Nova_init_static();
nova_datastruct_Int_V_Nova_HashMap1Int_Nova_init_static();
nova_datastruct_Int_V_Nova_HashMapIterator1Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_HashMap1Int2Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_HashMapIterator1Int2Int_Nova_init_static();
nova_datastruct_Nova_HashSet_Nova_init_static();
nova_datastruct_Nova_HashSetFunctionMap_Nova_init_static();
nova_datastruct_Nova_HashSetPropertyMap_Nova_init_static();
nova_datastruct_Nova_ImmutableHashMap_Nova_init_static();
nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_init_static();
nova_datastruct_Nova_ImmutableHashMapPropertyMap_Nova_init_static();
nova_datastruct_Long_V_Nova_ImmutableHashMap1Long_Nova_init_static();
nova_datastruct_Int_V_Nova_ImmutableHashMap1Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_ImmutableHashMap1Int2Int_Nova_init_static();
nova_datastruct_Nova_Node_Nova_init_static();
nova_datastruct_Nova_NodeFunctionMap_Nova_init_static();
nova_datastruct_Nova_NodePropertyMap_Nova_init_static();
nova_datastruct_Nova_Pair_Nova_init_static();
nova_datastruct_Nova_PairFunctionMap_Nova_init_static();
nova_datastruct_Nova_PairPropertyMap_Nova_init_static();
nova_datastruct_Long_Value_Nova_Pair1Long_Nova_init_static();
nova_datastruct_Int_Value_Nova_Pair1Int_Nova_init_static();
nova_datastruct_Int_Int_Nova_Pair1Int2Int_Nova_init_static();
nova_datastruct_Nova_ReversibleHashMap_Nova_init_static();
nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_init_static();
nova_datastruct_Nova_ReversibleHashMapPropertyMap_Nova_init_static();
nova_datastruct_Nova_Tree_Nova_init_static();
nova_datastruct_Nova_TreeFunctionMap_Nova_init_static();
nova_datastruct_Nova_TreePropertyMap_Nova_init_static();
nova_datastruct_Nova_Tuple_Nova_init_static();
nova_datastruct_Nova_TupleFunctionMap_Nova_init_static();
nova_datastruct_Nova_TuplePropertyMap_Nova_init_static();
nova_datastruct_Nova_Tuple2_Nova_init_static();
nova_datastruct_Nova_Tuple2FunctionMap_Nova_init_static();
nova_datastruct_Nova_Tuple2PropertyMap_Nova_init_static();
nova_datastruct_A_Int_Nova_Tuple22Int_Nova_init_static();
nova_datastruct_list_Nova_Array_Nova_init_static();
nova_datastruct_list_Nova_ArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Double_Nova_Array1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_Array1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_Array1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_Array1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_Array1Long_Nova_init_static();
nova_datastruct_list_Nova_ArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_ArrayIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ArrayIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Double_Nova_ArrayIterator1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_ArrayIterator1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_ArrayIterator1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_ArrayIterator1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_ArrayIterator1Long_Nova_init_static();
nova_datastruct_list_Nova_CharArray_Nova_init_static();
nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_CharArrayIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_CompiledList_Nova_init_static();
nova_datastruct_list_Nova_CompiledListFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_CompiledListPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_DoubleArray_Nova_init_static();
nova_datastruct_list_Nova_DoubleArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_DoubleArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_DoubleArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_DoubleArrayIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_EmptyStackException_Nova_init_static();
nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_EmptyStackExceptionPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArray_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableArrayIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArray_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ImmutableCharArrayIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_IntArray_Nova_init_static();
nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_IntArrayIterator_Nova_init_static();
nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_IntRange_Nova_init_static();
nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_IntRangePropertyMap_Nova_init_static();
nova_datastruct_list_Nova_IntRangeIterator_Nova_init_static();
nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_IntRangeIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_Iterable_Nova_init_static();
nova_datastruct_list_Nova_IterableFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_IterablePropertyMap_Nova_init_static();
nova_datastruct_list_Double_Nova_Iterable1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_Iterable1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_Iterable1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_Iterable1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_Iterable1Long_Nova_init_static();
nova_datastruct_list_Nova_Iterator_Nova_init_static();
nova_datastruct_list_Nova_IteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_IteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Double_Nova_Iterator1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_Iterator1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_Iterator1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_Iterator1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_Iterator1Long_Nova_init_static();
nova_datastruct_list_Nova_LinkedList_Nova_init_static();
nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_LinkedListPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_LinkedListIterator_Nova_init_static();
nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_List_Nova_init_static();
nova_datastruct_list_Nova_ListFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ListPropertyMap_Nova_init_static();
nova_datastruct_list_Double_Nova_List1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_List1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_List1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_List1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_List1Long_Nova_init_static();
nova_datastruct_list_Nova_ListNode_Nova_init_static();
nova_datastruct_list_Nova_ListNodeFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_ListNodePropertyMap_Nova_init_static();
nova_datastruct_list_Nova_NoSuchElementException_Nova_init_static();
nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_OrderedList_Nova_init_static();
nova_datastruct_list_Nova_OrderedListFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_OrderedListPropertyMap_Nova_init_static();
nova_datastruct_list_Double_Nova_OrderedList1Double_Nova_init_static();
nova_datastruct_list_Char_Nova_OrderedList1Char_Nova_init_static();
nova_datastruct_list_Int_Nova_OrderedList1Int_Nova_init_static();
nova_datastruct_list_Byte_Nova_OrderedList1Byte_Nova_init_static();
nova_datastruct_list_Long_Nova_OrderedList1Long_Nova_init_static();
nova_datastruct_list_Nova_Queue_Nova_init_static();
nova_datastruct_list_Nova_QueueFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_QueuePropertyMap_Nova_init_static();
nova_datastruct_list_Nova_Stack_Nova_init_static();
nova_datastruct_list_Nova_StackFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_StackPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_StringCharArray_Nova_init_static();
nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_StringCharArrayPropertyMap_Nova_init_static();
nova_datastruct_list_Nova_SubstringCharArray_Nova_init_static();
nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_Nova_init_static();
nova_datastruct_list_Nova_SubstringCharArrayPropertyMap_Nova_init_static();
nova_exception_Nova_Backtraces_Nova_init_static();
nova_exception_Nova_BacktracesFunctionMap_Nova_init_static();
nova_exception_Nova_BacktracesPropertyMap_Nova_init_static();
nova_exception_Nova_CaughtException_Nova_init_static();
nova_exception_Nova_CaughtExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_CaughtExceptionPropertyMap_Nova_init_static();
nova_exception_Nova_DivideByZeroException_Nova_init_static();
nova_exception_Nova_DivideByZeroExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_DivideByZeroExceptionPropertyMap_Nova_init_static();
nova_exception_Nova_Exception_Nova_init_static();
nova_exception_Nova_ExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_ExceptionPropertyMap_Nova_init_static();
nova_exception_Nova_ExceptionData_Nova_init_static();
nova_exception_Nova_ExceptionDataFunctionMap_Nova_init_static();
nova_exception_Nova_ExceptionDataPropertyMap_Nova_init_static();
nova_exception_Nova_InvalidArgumentException_Nova_init_static();
nova_exception_Nova_InvalidArgumentExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_InvalidArgumentExceptionPropertyMap_Nova_init_static();
nova_exception_Nova_InvalidOperationException_Nova_init_static();
nova_exception_Nova_InvalidOperationExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_InvalidOperationExceptionPropertyMap_Nova_init_static();
nova_exception_Nova_StackTrace_Nova_init_static();
nova_exception_Nova_StackTraceFunctionMap_Nova_init_static();
nova_exception_Nova_StackTracePropertyMap_Nova_init_static();
nova_exception_Nova_UnimplementedForTargetException_Nova_init_static();
nova_exception_Nova_UnimplementedForTargetExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_UnimplementedForTargetExceptionPropertyMap_Nova_init_static();
nova_exception_Nova_UnimplementedOperationException_Nova_init_static();
nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_Nova_init_static();
nova_exception_Nova_UnimplementedOperationExceptionPropertyMap_Nova_init_static();
nova_gc_Nova_GC_Nova_init_static();
nova_gc_Nova_GCFunctionMap_Nova_init_static();
nova_gc_Nova_GCPropertyMap_Nova_init_static();
nova_io_Nova_Console_Nova_init_static();
nova_io_Nova_ConsoleFunctionMap_Nova_init_static();
nova_io_Nova_ConsolePropertyMap_Nova_init_static();
nova_io_Nova_Curl_Nova_init_static();
nova_io_Nova_CurlFunctionMap_Nova_init_static();
nova_io_Nova_CurlPropertyMap_Nova_init_static();
nova_io_Nova_File_Nova_init_static();
nova_io_Nova_FileFunctionMap_Nova_init_static();
nova_io_Nova_FilePropertyMap_Nova_init_static();
nova_io_Nova_FileNotFoundException_Nova_init_static();
nova_io_Nova_FileNotFoundExceptionFunctionMap_Nova_init_static();
nova_io_Nova_FileNotFoundExceptionPropertyMap_Nova_init_static();
nova_io_Nova_FileReader_Nova_init_static();
nova_io_Nova_FileReaderFunctionMap_Nova_init_static();
nova_io_Nova_FileReaderPropertyMap_Nova_init_static();
nova_io_Nova_FileWriter_Nova_init_static();
nova_io_Nova_FileWriterFunctionMap_Nova_init_static();
nova_io_Nova_FileWriterPropertyMap_Nova_init_static();
nova_io_Nova_InputStream_Nova_init_static();
nova_io_Nova_InputStreamFunctionMap_Nova_init_static();
nova_io_Nova_InputStreamPropertyMap_Nova_init_static();
nova_io_Nova_OutputStream_Nova_init_static();
nova_io_Nova_OutputStreamFunctionMap_Nova_init_static();
nova_io_Nova_OutputStreamPropertyMap_Nova_init_static();
nova_io_Nova_StreamReader_Nova_init_static();
nova_io_Nova_StreamReaderFunctionMap_Nova_init_static();
nova_io_Nova_StreamReaderPropertyMap_Nova_init_static();
nova_io_Nova_StringBuilder_Nova_init_static();
nova_io_Nova_StringBuilderFunctionMap_Nova_init_static();
nova_io_Nova_StringBuilderPropertyMap_Nova_init_static();
nova_math_Nova_ArithmeticSequence_Nova_init_static();
nova_math_Nova_ArithmeticSequenceFunctionMap_Nova_init_static();
nova_math_Nova_ArithmeticSequencePropertyMap_Nova_init_static();
nova_math_Nova_Diekstra_Nova_init_static();
nova_math_Nova_DiekstraFunctionMap_Nova_init_static();
nova_math_Nova_DiekstraPropertyMap_Nova_init_static();
nova_math_Nova_GeometricSequence_Nova_init_static();
nova_math_Nova_GeometricSequenceFunctionMap_Nova_init_static();
nova_math_Nova_GeometricSequencePropertyMap_Nova_init_static();
nova_math_Nova_Graph_Nova_init_static();
nova_math_Nova_GraphFunctionMap_Nova_init_static();
nova_math_Nova_GraphPropertyMap_Nova_init_static();
nova_math_Nova_InvalidNumericStatementException_Nova_init_static();
nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_Nova_init_static();
nova_math_Nova_InvalidNumericStatementExceptionPropertyMap_Nova_init_static();
nova_math_Nova_Math_Nova_init_static();
nova_math_Nova_MathFunctionMap_Nova_init_static();
nova_math_Nova_MathPropertyMap_Nova_init_static();
nova_math_Nova_Matrix_Nova_init_static();
nova_math_Nova_MatrixFunctionMap_Nova_init_static();
nova_math_Nova_MatrixPropertyMap_Nova_init_static();
nova_math_Nova_NumericOperand_Nova_init_static();
nova_math_Nova_NumericOperandFunctionMap_Nova_init_static();
nova_math_Nova_NumericOperandPropertyMap_Nova_init_static();
nova_math_Nova_NumericOperation_Nova_init_static();
nova_math_Nova_NumericOperationFunctionMap_Nova_init_static();
nova_math_Nova_NumericOperationPropertyMap_Nova_init_static();
nova_math_Nova_NumericStatement_Nova_init_static();
nova_math_Nova_NumericStatementFunctionMap_Nova_init_static();
nova_math_Nova_NumericStatementPropertyMap_Nova_init_static();
nova_math_Nova_NumericTree_Nova_init_static();
nova_math_Nova_NumericTreeFunctionMap_Nova_init_static();
nova_math_Nova_NumericTreePropertyMap_Nova_init_static();
nova_math_Nova_Polynomial_Nova_init_static();
nova_math_Nova_PolynomialFunctionMap_Nova_init_static();
nova_math_Nova_PolynomialPropertyMap_Nova_init_static();
nova_math_Nova_Sequence_Nova_init_static();
nova_math_Nova_SequenceFunctionMap_Nova_init_static();
nova_math_Nova_SequencePropertyMap_Nova_init_static();
nova_math_Nova_Statement_Nova_init_static();
nova_math_Nova_StatementFunctionMap_Nova_init_static();
nova_math_Nova_StatementPropertyMap_Nova_init_static();
nova_math_Nova_StatementComponent_Nova_init_static();
nova_math_Nova_StatementComponentFunctionMap_Nova_init_static();
nova_math_Nova_StatementComponentPropertyMap_Nova_init_static();
nova_math_Nova_VariableOperand_Nova_init_static();
nova_math_Nova_VariableOperandFunctionMap_Nova_init_static();
nova_math_Nova_VariableOperandPropertyMap_Nova_init_static();
nova_math_Nova_Vector_Nova_init_static();
nova_math_Nova_VectorFunctionMap_Nova_init_static();
nova_math_Nova_VectorPropertyMap_Nova_init_static();
nova_math_Nova_Vector2D_Nova_init_static();
nova_math_Nova_Vector2DFunctionMap_Nova_init_static();
nova_math_Nova_Vector2DPropertyMap_Nova_init_static();
nova_math_Nova_Vector3D_Nova_init_static();
nova_math_Nova_Vector3DFunctionMap_Nova_init_static();
nova_math_Nova_Vector3DPropertyMap_Nova_init_static();
nova_math_Nova_Vector4D_Nova_init_static();
nova_math_Nova_Vector4DFunctionMap_Nova_init_static();
nova_math_Nova_Vector4DPropertyMap_Nova_init_static();
nova_math_calculus_Nova_Calculus_Nova_init_static();
nova_math_calculus_Nova_CalculusFunctionMap_Nova_init_static();
nova_math_calculus_Nova_CalculusPropertyMap_Nova_init_static();
nova_math_huffman_Nova_HuffmanTree_Nova_init_static();
nova_math_huffman_Nova_HuffmanTreeFunctionMap_Nova_init_static();
nova_math_huffman_Nova_HuffmanTreePropertyMap_Nova_init_static();
nova_math_logic_Nova_Conclusion_Nova_init_static();
nova_math_logic_Nova_ConclusionFunctionMap_Nova_init_static();
nova_math_logic_Nova_ConclusionPropertyMap_Nova_init_static();
nova_math_logic_Nova_Hypothesis_Nova_init_static();
nova_math_logic_Nova_HypothesisFunctionMap_Nova_init_static();
nova_math_logic_Nova_HypothesisPropertyMap_Nova_init_static();
nova_math_logic_Nova_InvalidFormulaException_Nova_init_static();
nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_Nova_init_static();
nova_math_logic_Nova_InvalidFormulaExceptionPropertyMap_Nova_init_static();
nova_math_logic_Nova_LogicalConnective_Nova_init_static();
nova_math_logic_Nova_LogicalConnectiveFunctionMap_Nova_init_static();
nova_math_logic_Nova_LogicalConnectivePropertyMap_Nova_init_static();
nova_math_logic_Nova_LogicalStatement_Nova_init_static();
nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_init_static();
nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_init_static();
nova_math_logic_Nova_StatementComponent_Nova_init_static();
nova_math_logic_Nova_StatementComponentFunctionMap_Nova_init_static();
nova_math_logic_Nova_StatementComponentPropertyMap_Nova_init_static();
nova_math_logic_Nova_StatementGroup_Nova_init_static();
nova_math_logic_Nova_StatementGroupFunctionMap_Nova_init_static();
nova_math_logic_Nova_StatementGroupPropertyMap_Nova_init_static();
nova_math_logic_Nova_StatementLetter_Nova_init_static();
nova_math_logic_Nova_StatementLetterFunctionMap_Nova_init_static();
nova_math_logic_Nova_StatementLetterPropertyMap_Nova_init_static();
nova_math_logic_Nova_WFF_Nova_init_static();
nova_math_logic_Nova_WFFFunctionMap_Nova_init_static();
nova_math_logic_Nova_WFFPropertyMap_Nova_init_static();
nova_meta_Nova_Class_Nova_init_static();
nova_meta_Nova_ClassFunctionMap_Nova_init_static();
nova_meta_Nova_ClassPropertyMap_Nova_init_static();
nova_meta_Nova_Field_Nova_init_static();
nova_meta_Nova_FieldFunctionMap_Nova_init_static();
nova_meta_Nova_FieldPropertyMap_Nova_init_static();
nova_meta_Nova_FunctionMap_Nova_init_static();
nova_meta_Nova_FunctionMapFunctionMap_Nova_init_static();
nova_meta_Nova_FunctionMapPropertyMap_Nova_init_static();
nova_meta_Nova_GenericArgument_Nova_init_static();
nova_meta_Nova_GenericArgumentFunctionMap_Nova_init_static();
nova_meta_Nova_GenericArgumentPropertyMap_Nova_init_static();
nova_meta_Nova_GenericParameter_Nova_init_static();
nova_meta_Nova_GenericParameterFunctionMap_Nova_init_static();
nova_meta_Nova_GenericParameterPropertyMap_Nova_init_static();
nova_meta_Nova_InvalidLibraryException_Nova_init_static();
nova_meta_Nova_InvalidLibraryExceptionFunctionMap_Nova_init_static();
nova_meta_Nova_InvalidLibraryExceptionPropertyMap_Nova_init_static();
nova_meta_Nova_Library_Nova_init_static();
nova_meta_Nova_LibraryFunctionMap_Nova_init_static();
nova_meta_Nova_LibraryPropertyMap_Nova_init_static();
nova_meta_Nova_PropertyMap_Nova_init_static();
nova_meta_Nova_PropertyMapFunctionMap_Nova_init_static();
nova_meta_Nova_PropertyMapPropertyMap_Nova_init_static();
nova_meta_Nova_Type_Nova_init_static();
nova_meta_Nova_TypeFunctionMap_Nova_init_static();
nova_meta_Nova_TypePropertyMap_Nova_init_static();
nova_network_Nova_ClientSocket_Nova_init_static();
nova_network_Nova_ClientSocketFunctionMap_Nova_init_static();
nova_network_Nova_ClientSocketPropertyMap_Nova_init_static();
nova_network_Nova_ConnectionSocket_Nova_init_static();
nova_network_Nova_ConnectionSocketFunctionMap_Nova_init_static();
nova_network_Nova_ConnectionSocketPropertyMap_Nova_init_static();
nova_network_Nova_NetworkInputStream_Nova_init_static();
nova_network_Nova_NetworkInputStreamFunctionMap_Nova_init_static();
nova_network_Nova_NetworkInputStreamPropertyMap_Nova_init_static();
nova_network_Nova_NetworkOutputStream_Nova_init_static();
nova_network_Nova_NetworkOutputStreamFunctionMap_Nova_init_static();
nova_network_Nova_NetworkOutputStreamPropertyMap_Nova_init_static();
nova_network_Nova_ServerSocket_Nova_init_static();
nova_network_Nova_ServerSocketFunctionMap_Nova_init_static();
nova_network_Nova_ServerSocketPropertyMap_Nova_init_static();
nova_network_Nova_Socket_Nova_init_static();
nova_network_Nova_SocketFunctionMap_Nova_init_static();
nova_network_Nova_SocketPropertyMap_Nova_init_static();
nova_operators_Nova_EqualsOperator_Nova_init_static();
nova_operators_Nova_EqualsOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_EqualsOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_MinusEqualsOperator_Nova_init_static();
nova_operators_Nova_MinusEqualsOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_MinusEqualsOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_MinusOperator_Nova_init_static();
nova_operators_Nova_MinusOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_MinusOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_MultiplyEqualsOperator_Nova_init_static();
nova_operators_Nova_MultiplyEqualsOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_MultiplyEqualsOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_MultiplyOperator_Nova_init_static();
nova_operators_Nova_MultiplyOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_MultiplyOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_NotEqualToOperator_Nova_init_static();
nova_operators_Nova_NotEqualToOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_NotEqualToOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_PlusEqualsOperator_Nova_init_static();
nova_operators_Nova_PlusEqualsOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_PlusEqualsOperatorPropertyMap_Nova_init_static();
nova_operators_Nova_PlusOperator_Nova_init_static();
nova_operators_Nova_PlusOperatorFunctionMap_Nova_init_static();
nova_operators_Nova_PlusOperatorPropertyMap_Nova_init_static();
nova_primitive_Nova_Bool_Nova_init_static();
nova_primitive_Nova_BoolFunctionMap_Nova_init_static();
nova_primitive_Nova_BoolPropertyMap_Nova_init_static();
nova_primitive_Nova_Null_Nova_init_static();
nova_primitive_Nova_NullFunctionMap_Nova_init_static();
nova_primitive_Nova_NullPropertyMap_Nova_init_static();
nova_primitive_Nova_Primitive_Nova_init_static();
nova_primitive_Nova_PrimitiveFunctionMap_Nova_init_static();
nova_primitive_Nova_PrimitivePropertyMap_Nova_init_static();
nova_primitive_number_Nova_Byte_Nova_init_static();
nova_primitive_number_Nova_ByteFunctionMap_Nova_init_static();
nova_primitive_number_Nova_BytePropertyMap_Nova_init_static();
nova_primitive_number_Nova_Char_Nova_init_static();
nova_primitive_number_Nova_CharFunctionMap_Nova_init_static();
nova_primitive_number_Nova_CharPropertyMap_Nova_init_static();
nova_primitive_number_Nova_Double_Nova_init_static();
nova_primitive_number_Nova_DoubleFunctionMap_Nova_init_static();
nova_primitive_number_Nova_DoublePropertyMap_Nova_init_static();
nova_primitive_number_Nova_Float_Nova_init_static();
nova_primitive_number_Nova_FloatFunctionMap_Nova_init_static();
nova_primitive_number_Nova_FloatPropertyMap_Nova_init_static();
nova_primitive_number_Nova_Int_Nova_init_static();
nova_primitive_number_Nova_IntFunctionMap_Nova_init_static();
nova_primitive_number_Nova_IntPropertyMap_Nova_init_static();
nova_primitive_number_Nova_Integer_Nova_init_static();
nova_primitive_number_Nova_IntegerFunctionMap_Nova_init_static();
nova_primitive_number_Nova_IntegerPropertyMap_Nova_init_static();
nova_primitive_number_Nova_Long_Nova_init_static();
nova_primitive_number_Nova_LongFunctionMap_Nova_init_static();
nova_primitive_number_Nova_LongPropertyMap_Nova_init_static();
nova_primitive_number_Nova_Number_Nova_init_static();
nova_primitive_number_Nova_NumberFunctionMap_Nova_init_static();
nova_primitive_number_Nova_NumberPropertyMap_Nova_init_static();
nova_primitive_number_Nova_RealNumber_Nova_init_static();
nova_primitive_number_Nova_RealNumberFunctionMap_Nova_init_static();
nova_primitive_number_Nova_RealNumberPropertyMap_Nova_init_static();
nova_primitive_number_Nova_Short_Nova_init_static();
nova_primitive_number_Nova_ShortFunctionMap_Nova_init_static();
nova_primitive_number_Nova_ShortPropertyMap_Nova_init_static();
nova_process_Nova_Process_Nova_init_static();
nova_process_Nova_ProcessFunctionMap_Nova_init_static();
nova_process_Nova_ProcessPropertyMap_Nova_init_static();
nova_regex_Nova_Match_Nova_init_static();
nova_regex_Nova_MatchFunctionMap_Nova_init_static();
nova_regex_Nova_MatchPropertyMap_Nova_init_static();
nova_regex_Nova_Pattern_Nova_init_static();
nova_regex_Nova_PatternFunctionMap_Nova_init_static();
nova_regex_Nova_PatternPropertyMap_Nova_init_static();
nova_regex_Nova_Regex_Nova_init_static();
nova_regex_Nova_RegexFunctionMap_Nova_init_static();
nova_regex_Nova_RegexPropertyMap_Nova_init_static();
nova_security_Nova_MD5_Nova_init_static();
nova_security_Nova_MD5FunctionMap_Nova_init_static();
nova_security_Nova_MD5PropertyMap_Nova_init_static();
nova_security_Nova_Sha256_Nova_init_static();
nova_security_Nova_Sha256FunctionMap_Nova_init_static();
nova_security_Nova_Sha256PropertyMap_Nova_init_static();
nova_serialization_Nova_JsonSerializer_Nova_init_static();
nova_serialization_Nova_JsonSerializerFunctionMap_Nova_init_static();
nova_serialization_Nova_JsonSerializerPropertyMap_Nova_init_static();
nova_star_Nova_Frame_Nova_init_static();
nova_star_Nova_FrameFunctionMap_Nova_init_static();
nova_star_Nova_FramePropertyMap_Nova_init_static();
nova_star_Nova_Window_Nova_init_static();
nova_star_Nova_WindowFunctionMap_Nova_init_static();
nova_star_Nova_WindowPropertyMap_Nova_init_static();
nova_star_Nova_WindowThread_Nova_init_static();
nova_star_Nova_WindowThreadFunctionMap_Nova_init_static();
nova_star_Nova_WindowThreadPropertyMap_Nova_init_static();
nova_thread_Nova_Thread_Nova_init_static();
nova_thread_Nova_ThreadFunctionMap_Nova_init_static();
nova_thread_Nova_ThreadPropertyMap_Nova_init_static();
nova_thread_Nova_ThreadLocal_Nova_init_static();
nova_thread_Nova_ThreadLocalFunctionMap_Nova_init_static();
nova_thread_Nova_ThreadLocalPropertyMap_Nova_init_static();
nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static();
nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_init_static();
nova_thread_Nova_UncaughtExceptionHandlerPropertyMap_Nova_init_static();
nova_thread_async_Nova_Async_Nova_init_static();
nova_thread_async_Nova_AsyncFunctionMap_Nova_init_static();
nova_thread_async_Nova_AsyncPropertyMap_Nova_init_static();
nova_thread_async_Nova_Task_Nova_init_static();
nova_thread_async_Nova_TaskFunctionMap_Nova_init_static();
nova_thread_async_Nova_TaskPropertyMap_Nova_init_static();
nova_time_Nova_CumulativeTimer_Nova_init_static();
nova_time_Nova_CumulativeTimerFunctionMap_Nova_init_static();
nova_time_Nova_CumulativeTimerPropertyMap_Nova_init_static();
nova_time_Nova_Date_Nova_init_static();
nova_time_Nova_DateFunctionMap_Nova_init_static();
nova_time_Nova_DatePropertyMap_Nova_init_static();
nova_time_Nova_Time_Nova_init_static();
nova_time_Nova_TimeFunctionMap_Nova_init_static();
nova_time_Nova_TimePropertyMap_Nova_init_static();
nova_time_Nova_Timer_Nova_init_static();
nova_time_Nova_TimerFunctionMap_Nova_init_static();
nova_time_Nova_TimerPropertyMap_Nova_init_static();
nova_web_js_json_Nova_Json_Nova_init_static();
nova_web_js_json_Nova_JsonFunctionMap_Nova_init_static();
nova_web_js_json_Nova_JsonPropertyMap_Nova_init_static();
nova_web_svg_Nova_Svg_Nova_init_static();
nova_web_svg_Nova_SvgFunctionMap_Nova_init_static();
nova_web_svg_Nova_SvgPropertyMap_Nova_init_static();
nova_web_svg_Nova_SvgCircle_Nova_init_static();
nova_web_svg_Nova_SvgCircleFunctionMap_Nova_init_static();
nova_web_svg_Nova_SvgCirclePropertyMap_Nova_init_static();
nova_web_svg_Nova_SvgComponent_Nova_init_static();
nova_web_svg_Nova_SvgComponentFunctionMap_Nova_init_static();
nova_web_svg_Nova_SvgComponentPropertyMap_Nova_init_static();
nova_web_svg_Nova_SvgComponentList_Nova_init_static();
nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_init_static();
nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_init_static();
nova_web_svg_Nova_SvgComponentNode_Nova_init_static();
nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_init_static();
nova_web_svg_Nova_SvgComponentNodePropertyMap_Nova_init_static();
nova_web_svg_Nova_SvgMainComponent_Nova_init_static();
nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_init_static();
nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_init_static();
nova_web_svg_no3_Nova_No3_Nova_init_static();
nova_web_svg_no3_Nova_No3FunctionMap_Nova_init_static();
nova_web_svg_no3_Nova_No3PropertyMap_Nova_init_static();
nova_web_svg_no3_Nova_No3Node_Nova_init_static();
nova_web_svg_no3_Nova_No3NodeFunctionMap_Nova_init_static();
nova_web_svg_no3_Nova_No3NodePropertyMap_Nova_init_static();
nova_web_svg_no3_Nova_No3Select_Nova_init_static();
nova_web_svg_no3_Nova_No3SelectFunctionMap_Nova_init_static();
nova_web_svg_no3_Nova_No3SelectPropertyMap_Nova_init_static();
nova_web_svg_no3_Nova_No3SelectAll_Nova_init_static();
nova_web_svg_no3_Nova_No3SelectAllFunctionMap_Nova_init_static();
nova_web_svg_no3_Nova_No3SelectAllPropertyMap_Nova_init_static();
novex_nest_Nova_InvalidAssertionException_Nova_init_static();
novex_nest_Nova_InvalidAssertionExceptionFunctionMap_Nova_init_static();
novex_nest_Nova_InvalidAssertionExceptionPropertyMap_Nova_init_static();
novex_nest_Nova_Nest_Nova_init_static();
novex_nest_Nova_NestFunctionMap_Nova_init_static();
novex_nest_Nova_NestPropertyMap_Nova_init_static();
novex_nest_Int_Nova_Nest1Int_Nova_init_static();
novex_nest_Nova_TestSuite_Nova_init_static();
novex_nest_Nova_TestSuiteFunctionMap_Nova_init_static();
novex_nest_Nova_TestSuitePropertyMap_Nova_init_static();
example_Nova_Animal_Nova_init_static();
example_Nova_AnimalFunctionMap_Nova_init_static();
example_Nova_AnimalPropertyMap_Nova_init_static();
example_Nova_ArrayDemo_Nova_init_static();
example_Nova_ArrayDemoFunctionMap_Nova_init_static();
example_Nova_ArrayDemoPropertyMap_Nova_init_static();
example_Nova_BodyBuilder_Nova_init_static();
example_Nova_BodyBuilderFunctionMap_Nova_init_static();
example_Nova_BodyBuilderPropertyMap_Nova_init_static();
example_Nova_ClosureDemo_Nova_init_static();
example_Nova_ClosureDemoFunctionMap_Nova_init_static();
example_Nova_ClosureDemoPropertyMap_Nova_init_static();
example_Nova_Dog_Nova_init_static();
example_Nova_DogFunctionMap_Nova_init_static();
example_Nova_DogPropertyMap_Nova_init_static();
example_Nova_ExceptionHandlingDemo_Nova_init_static();
example_Nova_ExceptionHandlingDemoFunctionMap_Nova_init_static();
example_Nova_ExceptionHandlingDemoPropertyMap_Nova_init_static();
example_Nova_FileTest_Nova_init_static();
example_Nova_FileTestFunctionMap_Nova_init_static();
example_Nova_FileTestPropertyMap_Nova_init_static();
example_Nova_GenericDemo_Nova_init_static();
example_Nova_GenericDemoFunctionMap_Nova_init_static();
example_Nova_GenericDemoPropertyMap_Nova_init_static();
example_Nova_HashMapDemo_Nova_init_static();
example_Nova_HashMapDemoFunctionMap_Nova_init_static();
example_Nova_HashMapDemoPropertyMap_Nova_init_static();
example_Nova_HashSetDemo_Nova_init_static();
example_Nova_HashSetDemoFunctionMap_Nova_init_static();
example_Nova_HashSetDemoPropertyMap_Nova_init_static();
example_Nova_IntegerTest_Nova_init_static();
example_Nova_IntegerTestFunctionMap_Nova_init_static();
example_Nova_IntegerTestPropertyMap_Nova_init_static();
example_Nova_Lab_Nova_init_static();
example_Nova_LabFunctionMap_Nova_init_static();
example_Nova_LabPropertyMap_Nova_init_static();
example_Nova_MathDemo_Nova_init_static();
example_Nova_MathDemoFunctionMap_Nova_init_static();
example_Nova_MathDemoPropertyMap_Nova_init_static();
example_Nova_NestTest_Nova_init_static();
example_Nova_NestTestFunctionMap_Nova_init_static();
example_Nova_NestTestPropertyMap_Nova_init_static();
example_Nova_NonWholeDivisionException_Nova_init_static();
example_Nova_NonWholeDivisionExceptionFunctionMap_Nova_init_static();
example_Nova_NonWholeDivisionExceptionPropertyMap_Nova_init_static();
example_Nova_Person_Nova_init_static();
example_Nova_PersonFunctionMap_Nova_init_static();
example_Nova_PersonPropertyMap_Nova_init_static();
example_Nova_Polygon_Nova_init_static();
example_Nova_PolygonFunctionMap_Nova_init_static();
example_Nova_PolygonPropertyMap_Nova_init_static();
example_Nova_PolymorphismDemo_Nova_init_static();
example_Nova_PolymorphismDemoFunctionMap_Nova_init_static();
example_Nova_PolymorphismDemoPropertyMap_Nova_init_static();
example_Nova_QueueDemo_Nova_init_static();
example_Nova_QueueDemoFunctionMap_Nova_init_static();
example_Nova_QueueDemoPropertyMap_Nova_init_static();
example_Nova_Spider_Nova_init_static();
example_Nova_SpiderFunctionMap_Nova_init_static();
example_Nova_SpiderPropertyMap_Nova_init_static();
example_Nova_Square_Nova_init_static();
example_Nova_SquareFunctionMap_Nova_init_static();
example_Nova_SquarePropertyMap_Nova_init_static();
example_Nova_SvgChart_Nova_init_static();
example_Nova_SvgChartFunctionMap_Nova_init_static();
example_Nova_SvgChartPropertyMap_Nova_init_static();
example_Nova_SvgFractal_Nova_init_static();
example_Nova_SvgFractalFunctionMap_Nova_init_static();
example_Nova_SvgFractalPropertyMap_Nova_init_static();
example_Nova_T1_Nova_init_static();
example_Nova_T1FunctionMap_Nova_init_static();
example_Nova_T1PropertyMap_Nova_init_static();
example_Nova_T2_Nova_init_static();
example_Nova_T2FunctionMap_Nova_init_static();
example_Nova_T2PropertyMap_Nova_init_static();
example_Nova_Test_Nova_init_static();
example_Nova_TestFunctionMap_Nova_init_static();
example_Nova_TestPropertyMap_Nova_init_static();
example_Nova_ThreadDemo_Nova_init_static();
example_Nova_ThreadDemoFunctionMap_Nova_init_static();
example_Nova_ThreadDemoPropertyMap_Nova_init_static();
example_Nova_ThreadDemoImplementation_Nova_init_static();
example_Nova_ThreadDemoImplementationFunctionMap_Nova_init_static();
example_Nova_ThreadDemoImplementationPropertyMap_Nova_init_static();
example_ackermann_Nova_Ackermann_Nova_init_static();
example_ackermann_Nova_AckermannFunctionMap_Nova_init_static();
example_ackermann_Nova_AckermannPropertyMap_Nova_init_static();
example_copy_Nova_Dog_Nova_init_static();
example_copy_Nova_DogFunctionMap_Nova_init_static();
example_copy_Nova_DogPropertyMap_Nova_init_static();
example_database_Nova_DatabaseDemo_Nova_init_static();
example_database_Nova_DatabaseDemoFunctionMap_Nova_init_static();
example_database_Nova_DatabaseDemoPropertyMap_Nova_init_static();
example_network_Nova_ClientDemo_Nova_init_static();
example_network_Nova_ClientDemoFunctionMap_Nova_init_static();
example_network_Nova_ClientDemoPropertyMap_Nova_init_static();
example_network_Nova_ConnectionThread_Nova_init_static();
example_network_Nova_ConnectionThreadFunctionMap_Nova_init_static();
example_network_Nova_ConnectionThreadPropertyMap_Nova_init_static();
example_network_Nova_OutputThread_Nova_init_static();
example_network_Nova_OutputThreadFunctionMap_Nova_init_static();
example_network_Nova_OutputThreadPropertyMap_Nova_init_static();
example_network_Nova_ServerDemo_Nova_init_static();
example_network_Nova_ServerDemoFunctionMap_Nova_init_static();
example_network_Nova_ServerDemoPropertyMap_Nova_init_static();
stabilitytest_Nova_AssignmentStability_Nova_init_static();
stabilitytest_Nova_AssignmentStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_AssignmentStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_ClassWithProperties_Nova_init_static();
stabilitytest_Nova_ClassWithPropertiesFunctionMap_Nova_init_static();
stabilitytest_Nova_ClassWithPropertiesPropertyMap_Nova_init_static();
stabilitytest_Nova_ClientThread_Nova_init_static();
stabilitytest_Nova_ClientThreadFunctionMap_Nova_init_static();
stabilitytest_Nova_ClientThreadPropertyMap_Nova_init_static();
stabilitytest_Nova_ClosureStability_Nova_init_static();
stabilitytest_Nova_ClosureStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_ClosureStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_ExceptionStability_Nova_init_static();
stabilitytest_Nova_ExceptionStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_ExceptionStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_ExternalInnerClassStability_Nova_init_static();
stabilitytest_Nova_ExternalInnerClassStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_ExternalInnerClassStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_FileStability_Nova_init_static();
stabilitytest_Nova_FileStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_FileStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_InnerClassStability_Nova_init_static();
stabilitytest_Nova_MyOuter_Nova_init_static();
stabilitytest_Nova_InnerClassStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_InnerClassStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_MyOuterFunctionMap_Nova_init_static();
stabilitytest_Nova_MyOuterPropertyMap_Nova_init_static();
stabilitytest_Nova_MyInner_Nova_init_static();
stabilitytest_Nova_MyInnerFunctionMap_Nova_init_static();
stabilitytest_Nova_MyInnerPropertyMap_Nova_init_static();
stabilitytest_Nova_LambdaStability_Nova_init_static();
stabilitytest_Nova_LambdaStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_LambdaStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_NetworkStability_Nova_init_static();
stabilitytest_Nova_NetworkStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_NetworkStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_Node_Nova_init_static();
stabilitytest_Nova_NodeFunctionMap_Nova_init_static();
stabilitytest_Nova_NodePropertyMap_Nova_init_static();
stabilitytest_Nova_PolymorphicSubClass_Nova_init_static();
stabilitytest_Nova_PolymorphicSubClassFunctionMap_Nova_init_static();
stabilitytest_Nova_PolymorphicSubClassPropertyMap_Nova_init_static();
stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static();
stabilitytest_Nova_PolymorphicSuperClassFunctionMap_Nova_init_static();
stabilitytest_Nova_PolymorphicSuperClassPropertyMap_Nova_init_static();
stabilitytest_Nova_PolymorphismStability_Nova_init_static();
stabilitytest_Nova_PolymorphismStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_PolymorphismStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_PrimitiveOverloadStability_Nova_init_static();
stabilitytest_Nova_PrimitiveOverloadStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_PrimitiveOverloadStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_RegexStability_Nova_init_static();
stabilitytest_Nova_RegexStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_RegexStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_StabilityExceptionHandler_Nova_init_static();
stabilitytest_Nova_StabilityExceptionHandlerFunctionMap_Nova_init_static();
stabilitytest_Nova_StabilityExceptionHandlerPropertyMap_Nova_init_static();
stabilitytest_Nova_StabilityTest_Nova_init_static();
stabilitytest_Nova_StabilityTestFunctionMap_Nova_init_static();
stabilitytest_Nova_StabilityTestPropertyMap_Nova_init_static();
stabilitytest_Nova_StabilityTestCase_Nova_init_static();
stabilitytest_Nova_StabilityTestCaseFunctionMap_Nova_init_static();
stabilitytest_Nova_StabilityTestCasePropertyMap_Nova_init_static();
stabilitytest_Nova_StabilityTestException_Nova_init_static();
stabilitytest_Nova_StabilityTestExceptionFunctionMap_Nova_init_static();
stabilitytest_Nova_StabilityTestExceptionPropertyMap_Nova_init_static();
stabilitytest_Nova_StaticImportStability_Nova_init_static();
stabilitytest_Nova_StaticImportStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_StaticImportStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_SyntaxStability_Nova_init_static();
stabilitytest_Nova_SyntaxStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_SyntaxStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_ThreadImplementation_Nova_init_static();
stabilitytest_Nova_ThreadImplementationFunctionMap_Nova_init_static();
stabilitytest_Nova_ThreadImplementationPropertyMap_Nova_init_static();
stabilitytest_Nova_ThreadStability_Nova_init_static();
stabilitytest_Nova_ThreadStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_ThreadStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_TimeStability_Nova_init_static();
stabilitytest_Nova_TimeStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_TimeStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_ToStringStability_Nova_init_static();
stabilitytest_Nova_ToStringStabilityFunctionMap_Nova_init_static();
stabilitytest_Nova_ToStringStabilityPropertyMap_Nova_init_static();
stabilitytest_Nova_UnstableException_Nova_init_static();
stabilitytest_Nova_UnstableExceptionFunctionMap_Nova_init_static();
stabilitytest_Nova_UnstableExceptionPropertyMap_Nova_init_static();

}

int main(int argc, char** argvs)
{
nova_gc_Nova_GC_static_Nova_init((nova_gc_Nova_GC*)(0));

return nova_Nova_System_static_Nova_runMain(0, argc, argvs, (nova_Nova_System_closure421_Nova_mainFunc)&stabilitytest_Nova_StabilityTest_static_Nova_main, 0, 0, (nova_Nova_System_closure422_Nova_initialize)&novaInitProgramData, 0, 0, (nova_Nova_System_closure423_Nova_callStaticBlocks)&novaCallStaticBlocks, 0, 0);
}
