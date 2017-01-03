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
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSuperClass.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>


typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_String nova_Nova_String;

typedef nova_Nova_String* (*stabilitytest_Nova_PolymorphismStability_closure1_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef nova_Nova_String* (*stabilitytest_Nova_PolymorphismStability_closure2_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef nova_Nova_String* (*stabilitytest_Nova_PolymorphismStability_closure3_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef nova_Nova_String* (*stabilitytest_Nova_PolymorphismStability_closure4_Nova_closure)(void*, nova_exception_Nova_ExceptionData*, void*);


void stabilitytest_Nova_PolymorphismStability_Nova_testCalls(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData);
char stabilitytest_Nova_PolymorphismStability_static_Nova_testSubCall(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_PolymorphicSuperClass* obj);
void stabilitytest_Nova_PolymorphismStability_Nova_testClosure(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData);
char stabilitytest_Nova_PolymorphismStability_static_Nova_callPolymorphicClosure(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_PolymorphismStability_closure4_Nova_closure stabilitytest_Nova_PolymorphismStability_Nova_closure, void* stabilitytest_Nova_PolymorphismStability_ref_Nova_closure, void* closure_context);
void stabilitytest_Nova_PolymorphismStability_Nova_testProperty(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_PolymorphismStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_PolymorphismStability* stabilitytest_Nova_PolymorphismStability_Nova_construct(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_PolymorphismStability, this,);
	this->vtable = &stabilitytest_PolymorphismStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_PolymorphismStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_PolymorphismStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_PolymorphismStability_Nova_destroy(stabilitytest_Nova_PolymorphismStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_PolymorphismStability_Nova_this(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_PolymorphismStability_Nova_test(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking Polymorphism stability...")));
	stabilitytest_Nova_PolymorphismStability_Nova_testCalls(this, exceptionData);
	stabilitytest_Nova_PolymorphismStability_Nova_testClosure(this, exceptionData);
	stabilitytest_Nova_PolymorphismStability_Nova_testProperty(this, exceptionData);
}

void stabilitytest_Nova_PolymorphismStability_Nova_testCalls(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_PolymorphicSuperClass* l1_Nova_obj1 = (stabilitytest_Nova_PolymorphicSuperClass*)nova_null;
	stabilitytest_Nova_PolymorphicSubClass* l1_Nova_obj2 = (stabilitytest_Nova_PolymorphicSubClass*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking polymorphic method calls... ")));
	l1_Nova_obj1 = stabilitytest_Nova_PolymorphicSuperClass_Nova_construct(0, exceptionData);
	l1_Nova_obj2 = stabilitytest_Nova_PolymorphicSubClass_Nova_construct(0, exceptionData);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call sub class method")), !stabilitytest_Nova_PolymorphismStability_static_Nova_testSubCall(0, exceptionData, (stabilitytest_Nova_PolymorphicSuperClass*)(l1_Nova_obj2)));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

char stabilitytest_Nova_PolymorphismStability_static_Nova_testSubCall(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_PolymorphicSuperClass* obj)
{
	return nova_Nova_String_Nova_equals(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(obj), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("sub class")));
}

void stabilitytest_Nova_PolymorphismStability_Nova_testClosure(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_PolymorphicSuperClass* l1_Nova_obj = (stabilitytest_Nova_PolymorphicSuperClass*)nova_null;
	nova_Nova_String* l1_Nova_child = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking polymorphic closure method calls... ")));
	l1_Nova_obj = (stabilitytest_Nova_PolymorphicSuperClass*)(stabilitytest_Nova_PolymorphicSubClass_Nova_construct(0, exceptionData));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call sub class method as closure")), !stabilitytest_Nova_PolymorphismStability_static_Nova_callPolymorphicClosure(0, exceptionData, (stabilitytest_Nova_PolymorphismStability_closure4_Nova_closure)l1_Nova_obj->vtable->nova_Nova_Object_virtual_Nova_toString, l1_Nova_obj, nova_null));
	stabilitytest_Nova_PolymorphicSuperClass_Nova_giveBirth(l1_Nova_obj, exceptionData);
	l1_Nova_child = (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l1_Nova_obj), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("!"))));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call sub class method as closure")), !stabilitytest_Nova_PolymorphismStability_static_Nova_callPolymorphicClosure(0, exceptionData, (stabilitytest_Nova_PolymorphismStability_closure4_Nova_closure)l1_Nova_obj->stabilitytest_Nova_PolymorphicSuperClass_Nova_child->vtable->nova_Nova_Object_virtual_Nova_toString, l1_Nova_obj->stabilitytest_Nova_PolymorphicSuperClass_Nova_child, nova_null));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

char stabilitytest_Nova_PolymorphismStability_static_Nova_callPolymorphicClosure(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_PolymorphismStability_closure4_Nova_closure stabilitytest_Nova_PolymorphismStability_Nova_closure, void* stabilitytest_Nova_PolymorphismStability_ref_Nova_closure, void* closure_context)
{
	return nova_Nova_String_Nova_equals(stabilitytest_Nova_PolymorphismStability_Nova_closure(stabilitytest_Nova_PolymorphismStability_ref_Nova_closure, exceptionData, closure_context), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("sub class")));
}

void stabilitytest_Nova_PolymorphismStability_Nova_testProperty(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_PolymorphicSuperClass* l1_Nova_obj1 = (stabilitytest_Nova_PolymorphicSuperClass*)nova_null;
	stabilitytest_Nova_PolymorphicSuperClass* l1_Nova_obj2 = (stabilitytest_Nova_PolymorphicSuperClass*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking polymorphic properties... ")));
	l1_Nova_obj1 = stabilitytest_Nova_PolymorphicSuperClass_Nova_construct(0, exceptionData);
	l1_Nova_obj2 = (stabilitytest_Nova_PolymorphicSuperClass*)(stabilitytest_Nova_PolymorphicSubClass_Nova_construct(0, exceptionData));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call super polymorphic property accessor correctly")), stabilitytest_Nova_PolymorphicSuperClass_virtual_Accessor_Nova_myProperty((stabilitytest_Nova_PolymorphicSuperClass*)(l1_Nova_obj1), exceptionData) != 1);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Did not call sub polymorphic property accessor correctly")), stabilitytest_Nova_PolymorphicSuperClass_virtual_Accessor_Nova_myProperty((stabilitytest_Nova_PolymorphicSuperClass*)(l1_Nova_obj2), exceptionData) != 2);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_PolymorphismStability_Nova_super(stabilitytest_Nova_PolymorphismStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap* stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_construct(stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap, this,);
	this->vtable = &stabilitytest_PolymorphismStability_stabilitytest_PolymorphismStabilityFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_destroy(stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_this(stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap_Nova_super(stabilitytest_Nova_stabilitytest_PolymorphismStabilityFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

