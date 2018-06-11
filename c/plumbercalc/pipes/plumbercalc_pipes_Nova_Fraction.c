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
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MinusEqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MinusOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyEqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_NotEqualToOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Fitting.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Pipe.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_TeeFitting.h>
#include <plumbercalc/pipes/plumbercalc_pipes_Nova_Units.h>
#include <nova/NativeObject.h>
#include <nova/nova_Nova_Substring.h>



plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_plusWithCommonDenominator(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other);




plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_plusWithCommonDenominator(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other);



char plumbercalc_pipes_Nova_Fraction_Nova_init_static_inited = 0;
void plumbercalc_pipes_Nova_Fraction_Nova_init_static()
{
	if (!plumbercalc_pipes_Nova_Fraction_Nova_init_static_inited) {
		plumbercalc_pipes_Nova_Fraction_Nova_init_static_inited = 1;
		{
		}
	}
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_construct(plumbercalc_pipes_Nova_Fraction* this, int numerator, int denominator)
{
	CCLASS_NEW(plumbercalc_pipes_Nova_Fraction, this,);
	this->vtable = &plumbercalc_pipes_Nova_Fraction_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	plumbercalc_pipes_Nova_Fraction_Nova_super(this);
	
	return plumbercalc_pipes_Nova_Fraction_Nova_this((plumbercalc_pipes_Nova_Fraction*)(this),
		numerator,
	denominator);
}

void plumbercalc_pipes_Nova_Fraction_Nova_destroy(plumbercalc_pipes_Nova_Fraction** this)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	NOVA_FREE(*this);
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_this(plumbercalc_pipes_Nova_Fraction* this, int numerator, int denominator) {
	denominator = (int)(denominator == (int)(intptr_t)nova_null ? 1 : denominator);
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator = denominator;
	this->plumbercalc_pipes_Nova_Fraction_Nova_numerator = numerator;
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator = denominator;
	return this;
}
void plumbercalc_pipes_Nova_Fraction_Nova_simplify(plumbercalc_pipes_Nova_Fraction* this)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_simplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	l1_Nova_simplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(this));
	this->plumbercalc_pipes_Nova_Fraction_Nova_numerator = l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator;
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator = l1_Nova_simplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator;
}

char plumbercalc_pipes_Nova_Fraction_0_Nova_equals(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_thisSimplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	plumbercalc_pipes_Nova_Fraction* l1_Nova_otherSimplified = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	l1_Nova_thisSimplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(this));
	l1_Nova_otherSimplified = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified((plumbercalc_pipes_Nova_Fraction*)(other));
	return l1_Nova_thisSimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator == l1_Nova_otherSimplified->plumbercalc_pipes_Nova_Fraction_Nova_numerator && l1_Nova_thisSimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator == l1_Nova_otherSimplified->plumbercalc_pipes_Nova_Fraction_Nova_denominator;
}

char plumbercalc_pipes_Nova_Fraction_0_Nova_notEqualTo(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return !nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(this),
		(nova_Nova_Object*)(other));
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_0_Nova_plus(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	if (this->plumbercalc_pipes_Nova_Fraction_Nova_denominator == other->plumbercalc_pipes_Nova_Fraction_Nova_denominator)
	{
		return plumbercalc_pipes_Nova_Fraction_Nova_plusWithCommonDenominator((plumbercalc_pipes_Nova_Fraction*)(this),
		other);
	}
	else
	{
		int l8_Nova_common = 0;
		
		l8_Nova_common = this->plumbercalc_pipes_Nova_Fraction_Nova_denominator * other->plumbercalc_pipes_Nova_Fraction_Nova_denominator;
		return plumbercalc_pipes_Nova_Fraction_Nova_plusWithCommonDenominator((plumbercalc_pipes_Nova_Fraction*)(plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
					this->plumbercalc_pipes_Nova_Fraction_Nova_numerator * other->plumbercalc_pipes_Nova_Fraction_Nova_denominator,
			l8_Nova_common)),
			plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
				other->plumbercalc_pipes_Nova_Fraction_Nova_numerator * this->plumbercalc_pipes_Nova_Fraction_Nova_denominator,
		l8_Nova_common));
	}
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_plusWithCommonDenominator(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		this->plumbercalc_pipes_Nova_Fraction_Nova_numerator + other->plumbercalc_pipes_Nova_Fraction_Nova_numerator,
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator);
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_0_Nova_minus(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return (plumbercalc_pipes_Nova_Fraction*)nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(this),
		(nova_Nova_Object*)(plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
				-other->plumbercalc_pipes_Nova_Fraction_Nova_numerator,
	other->plumbercalc_pipes_Nova_Fraction_Nova_denominator)));
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_0_Nova_minusEquals(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return (plumbercalc_pipes_Nova_Fraction*)nova_operators_Nova_PlusEqualsOperator_virtual1_Nova_plusEquals((nova_operators_Nova_PlusEqualsOperator*)(this),
		(nova_Nova_Object*)(plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
				-other->plumbercalc_pipes_Nova_Fraction_Nova_numerator,
	other->plumbercalc_pipes_Nova_Fraction_Nova_denominator)));
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_0_Nova_multiply(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		this->plumbercalc_pipes_Nova_Fraction_Nova_numerator * other->plumbercalc_pipes_Nova_Fraction_Nova_numerator,
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator * other->plumbercalc_pipes_Nova_Fraction_Nova_denominator);
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_divide(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		this->plumbercalc_pipes_Nova_Fraction_Nova_numerator * other->plumbercalc_pipes_Nova_Fraction_Nova_denominator,
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator * other->plumbercalc_pipes_Nova_Fraction_Nova_numerator);
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Nova_divideEquals(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	return (plumbercalc_pipes_Nova_Fraction*)nova_operators_Nova_MultiplyEqualsOperator_virtual1_Nova_multiplyEquals((nova_operators_Nova_MultiplyEqualsOperator*)(this),
		(nova_Nova_Object*)(plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
				other->plumbercalc_pipes_Nova_Fraction_Nova_denominator,
	other->plumbercalc_pipes_Nova_Fraction_Nova_numerator)));
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_0_Nova_plusEquals(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	plumbercalc_pipes_Nova_Fraction* l1_Nova_new = (plumbercalc_pipes_Nova_Fraction*)nova_null;
	
	l1_Nova_new = (plumbercalc_pipes_Nova_Fraction*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(this),
			(nova_Nova_Object*)(other)));
	this->plumbercalc_pipes_Nova_Fraction_Nova_numerator = l1_Nova_new->plumbercalc_pipes_Nova_Fraction_Nova_numerator;
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator = l1_Nova_new->plumbercalc_pipes_Nova_Fraction_Nova_denominator;
	return this;
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_0_Nova_multiplyEquals(plumbercalc_pipes_Nova_Fraction* this, plumbercalc_pipes_Nova_Fraction* other)
{
	this->plumbercalc_pipes_Nova_Fraction_Nova_numerator *= other->plumbercalc_pipes_Nova_Fraction_Nova_numerator;
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator *= other->plumbercalc_pipes_Nova_Fraction_Nova_denominator;
	return this;
}

plumbercalc_pipes_Nova_Fraction* plumbercalc_pipes_Nova_Fraction_Accessor_Nova_simplified(plumbercalc_pipes_Nova_Fraction* this)
{
	int l1_Nova_gcd = 0;
	
	l1_Nova_gcd = plumbercalc_pipes_Nova_Fraction_Accessor_Nova_gcd((plumbercalc_pipes_Nova_Fraction*)(this));
	return plumbercalc_pipes_Nova_Fraction_Nova_construct(0,
		this->plumbercalc_pipes_Nova_Fraction_Nova_numerator / l1_Nova_gcd,
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator / l1_Nova_gcd);
}


int plumbercalc_pipes_Nova_Fraction_Accessor_Nova_gcd(plumbercalc_pipes_Nova_Fraction* this)
{
	return nova_math_Nova_Math_static_Nova_gcd((nova_math_Nova_Math*)(0),
		this->plumbercalc_pipes_Nova_Fraction_Nova_numerator,
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator);
}


char plumbercalc_pipes_Nova_Fraction_Accessorfunc_Nova_isSimplified(plumbercalc_pipes_Nova_Fraction* this)
{
	return plumbercalc_pipes_Nova_Fraction_Accessor_Nova_gcd((plumbercalc_pipes_Nova_Fraction*)(this)) == 1;
}


void plumbercalc_pipes_Nova_Fraction_Nova_super(plumbercalc_pipes_Nova_Fraction* this)
{
	this->plumbercalc_pipes_Nova_Fraction_Nova_numerator = 0;
	this->plumbercalc_pipes_Nova_Fraction_Nova_denominator = 0;
	this->plumbercalc_pipes_Nova_Fraction_Nova_isSimplified = 0;
}

