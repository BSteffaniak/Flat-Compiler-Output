#ifndef FILE_example_Nova_Polygon_NOVA
#define FILE_example_Nova_Polygon_NOVA

typedef struct example_Nova_Polygon example_Nova_Polygon;
typedef struct example_Nova_PolygonFunctionMap example_Nova_PolygonFunctionMap;
typedef struct example_Nova_PolygonPropertyMap example_Nova_PolygonPropertyMap;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_DivideByZeroException.h>
#include <nova/io/nova_io_Nova_Console.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Byte.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Int.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Long.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Float.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Double.h>
#include <nova/primitive/nova_primitive_Nova_Null.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Char.h>
#include <nova/primitive/nova_primitive_Nova_Bool.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	example_Nova_Polygon, 
	
	example_Polygon_Extension_VTable* vtable;
)

void example_Nova_Polygon_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
int example_Nova_Polygon_Nova_numberSides(example_Nova_Polygon* this, nova_exception_Nova_ExceptionData* exceptionData);double example_Nova_Polygon_Nova_calculateArea(example_Nova_Polygon* this, nova_exception_Nova_ExceptionData* exceptionData);int example_Nova_Polygon_virtual_Nova_numberSides(example_Nova_Polygon* this, nova_exception_Nova_ExceptionData* exceptionData);
double example_Nova_Polygon_virtual_Nova_calculateArea(example_Nova_Polygon* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	example_Nova_PolygonFunctionMap, 
	
	example_Polygon_PolygonFunctionMap_Extension_VTable* vtable;
)

void example_Nova_PolygonFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_Nova_PolygonFunctionMap* example_Nova_PolygonFunctionMap_Nova_construct(example_Nova_PolygonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolygonFunctionMap_Nova_destroy(example_Nova_PolygonFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolygonFunctionMap_Nova_this(example_Nova_PolygonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolygonFunctionMap_Nova_super(example_Nova_PolygonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	example_Nova_PolygonPropertyMap, 
	
	example_Polygon_PolygonPropertyMap_Extension_VTable* vtable;
)

void example_Nova_PolygonPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
example_Nova_PolygonPropertyMap* example_Nova_PolygonPropertyMap_Nova_construct(example_Nova_PolygonPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolygonPropertyMap_Nova_destroy(example_Nova_PolygonPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolygonPropertyMap_Nova_this(example_Nova_PolygonPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void example_Nova_PolygonPropertyMap_Nova_super(example_Nova_PolygonPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
