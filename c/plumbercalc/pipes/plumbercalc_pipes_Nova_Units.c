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
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Pipe.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_TeeFitting.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



char plumbercalc_pipes_Nova_Units_Nova_init_static_inited = 0;
void plumbercalc_pipes_Nova_Units_Nova_init_static()
{
	if (!plumbercalc_pipes_Nova_Units_Nova_init_static_inited) {
		plumbercalc_pipes_Nova_Units_Nova_init_static_inited = 1;
		{
		}
	}
}

plumbercalc_pipes_Nova_Units* plumbercalc_pipes_Nova_Units_Nova_construct(plumbercalc_pipes_Nova_Units* this)
{
	CCLASS_NEW(plumbercalc_pipes_Nova_Units, this,);
	this->vtable = &plumbercalc_pipes_Nova_Units_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	plumbercalc_pipes_Nova_Units_Nova_super(this);
	
	return plumbercalc_pipes_Nova_Units_Nova_this((plumbercalc_pipes_Nova_Units*)(this));
}

void plumbercalc_pipes_Nova_Units_Nova_destroy(plumbercalc_pipes_Nova_Units** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

double plumbercalc_pipes_Nova_Units_static_Nova_toInches(plumbercalc_pipes_Nova_Units* this, double meters)
{
	return meters * 39.3701;
}

double plumbercalc_pipes_Nova_Units_static_Nova_toFeet(plumbercalc_pipes_Nova_Units* this, double meters)
{
	return meters * 3.28084;
}

double plumbercalc_pipes_Nova_Units_static_Nova_remainingInches(plumbercalc_pipes_Nova_Units* this, double meters)
{
	return fmod(plumbercalc_pipes_Nova_Units_static_Nova_toInches(0,
	meters), 12);
}

plumbercalc_pipes_Nova_Units* plumbercalc_pipes_Nova_Units_Nova_this(plumbercalc_pipes_Nova_Units* this) {
	return this;
}
void plumbercalc_pipes_Nova_Units_Nova_super(plumbercalc_pipes_Nova_Units* this)
{
}
