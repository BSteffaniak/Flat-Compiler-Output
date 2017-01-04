#ifndef FILE_nova_web_svg_Nova_Svg_NOVA
#define FILE_nova_web_svg_Nova_Svg_NOVA

typedef struct nova_web_svg_Nova_Svg nova_web_svg_Nova_Svg;
typedef struct nova_web_svg_Nova_SvgFunctionMap nova_web_svg_Nova_SvgFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgMainComponent.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_web_svg_Nova_Svg, 
	
	nova_web_svg_Svg_Extension_VTable* vtable;
	nova_web_svg_Nova_SvgMainComponent* nova_web_svg_Nova_Svg_Nova_root;
)

void nova_web_svg_Nova_Svg_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_web_svg_Nova_Svg* nova_web_svg_Nova_Svg_Nova_construct(nova_web_svg_Nova_Svg* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_Svg_Nova_destroy(nova_web_svg_Nova_Svg** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_Svg_Nova_this(nova_web_svg_Nova_Svg* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_Svg_Nova_generateOutput(nova_web_svg_Nova_Svg* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer);
void nova_web_svg_Nova_Svg_Nova_generateHTMLOutput(nova_web_svg_Nova_Svg* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer);
void nova_web_svg_Nova_Svg_Nova_super(nova_web_svg_Nova_Svg* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_web_svg_Nova_SvgFunctionMap, 
	
	nova_web_svg_Svg_SvgFunctionMap_Extension_VTable* vtable;
)

void nova_web_svg_Nova_SvgFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_web_svg_Nova_SvgFunctionMap* nova_web_svg_Nova_SvgFunctionMap_Nova_construct(nova_web_svg_Nova_SvgFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_SvgFunctionMap_Nova_destroy(nova_web_svg_Nova_SvgFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_SvgFunctionMap_Nova_this(nova_web_svg_Nova_SvgFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_SvgFunctionMap_Nova_super(nova_web_svg_Nova_SvgFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
