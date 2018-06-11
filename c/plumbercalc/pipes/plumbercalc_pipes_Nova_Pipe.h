#ifndef FILE_plumbercalc_pipes_Nova_Pipe_NOVA
#define FILE_plumbercalc_pipes_Nova_Pipe_NOVA

typedef struct plumbercalc_pipes_Nova_Pipe plumbercalc_pipes_Nova_Pipe;


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
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Fitting.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Fraction.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_TeeFitting.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Units.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

CCLASS_CLASS
(
	plumbercalc_pipes_Nova_Pipe, 
	
	plumbercalc_pipes_Nova_Pipe_VTable* vtable;
	void* prv;
	nova_Nova_String* nova_Nova_Object_Nova_hashCode;
	double plumbercalc_pipes_Nova_Pipe_Nova_innerDiameter;
	double plumbercalc_pipes_Nova_Pipe_Nova_outerDiameter;
	double plumbercalc_pipes_Nova_Pipe_Nova_length;
)

extern char plumbercalc_pipes_Nova_Pipe_Nova_init_static_inited;
void plumbercalc_pipes_Nova_Pipe_Nova_init_static();
plumbercalc_pipes_Nova_Pipe* plumbercalc_pipes_Nova_Pipe_Nova_construct(plumbercalc_pipes_Nova_Pipe* this, double length, double innerDiameter, double outerDiameter);
void plumbercalc_pipes_Nova_Pipe_Nova_destroy(plumbercalc_pipes_Nova_Pipe** this);
plumbercalc_pipes_Nova_Pipe* plumbercalc_pipes_Nova_Pipe_Nova_this(plumbercalc_pipes_Nova_Pipe* this, double length, double innerDiameter, double outerDiameter);
double plumbercalc_pipes_Nova_Pipe_Accessor_Nova_thickness(plumbercalc_pipes_Nova_Pipe* this);
void plumbercalc_pipes_Nova_Pipe_Nova_super(plumbercalc_pipes_Nova_Pipe* this);

#endif
