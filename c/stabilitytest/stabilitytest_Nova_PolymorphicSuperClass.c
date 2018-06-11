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
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundlessIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_CastStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClientThread.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FancyOutputStreamTests.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_FirstClassFunctionStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_IntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_LibraryLoadingStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_Node.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_PrimitiveOverloadStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>






char stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static_inited = 0;
void stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static()
{
	if (!stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static_inited) {
		stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static_inited = 1;
		{
		}
	}
}

stabilitytest_Nova_PolymorphicSuperClass* stabilitytest_Nova_PolymorphicSuperClass_Nova_construct(stabilitytest_Nova_PolymorphicSuperClass* this)
{
	CCLASS_NEW(stabilitytest_Nova_PolymorphicSuperClass, this,);
	this->vtable = &stabilitytest_Nova_PolymorphicSuperClass_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_PolymorphicSuperClass_Nova_super(this);
	
	return stabilitytest_Nova_PolymorphicSuperClass_Nova_this((stabilitytest_Nova_PolymorphicSuperClass*)(this));
}

void stabilitytest_Nova_PolymorphicSuperClass_Nova_destroy(stabilitytest_Nova_PolymorphicSuperClass** this)
{
	if (!*this)
	{
		return;
	}
	
	stabilitytest_Nova_PolymorphicSubClass_Nova_destroy(&(*this)->stabilitytest_Nova_PolymorphicSuperClass_Nova_child);
	
	NOVA_FREE(*this);
}

stabilitytest_Nova_PolymorphicSubClass* stabilitytest_Nova_PolymorphicSuperClass_Nova_giveBirth(stabilitytest_Nova_PolymorphicSuperClass* this)
{
	return this->stabilitytest_Nova_PolymorphicSuperClass_Nova_child = stabilitytest_Nova_PolymorphicSubClass_Nova_construct(0);
}

nova_Nova_String* stabilitytest_Nova_PolymorphicSuperClass_Nova_toString(stabilitytest_Nova_PolymorphicSuperClass* this)
{
	return nova_Nova_String_1_Nova_construct(0,
		(char*)("super class"));
}

stabilitytest_Nova_PolymorphicSuperClass* stabilitytest_Nova_PolymorphicSuperClass_Nova_this(stabilitytest_Nova_PolymorphicSuperClass* this) {
	return this;
}
int stabilitytest_Nova_PolymorphicSuperClass_Accessor_Nova_myProperty(stabilitytest_Nova_PolymorphicSuperClass* this)
{
	return (int)1;
}


void stabilitytest_Nova_PolymorphicSuperClass_Nova_super(stabilitytest_Nova_PolymorphicSuperClass* this)
{
	this->stabilitytest_Nova_PolymorphicSuperClass_Nova_child = (stabilitytest_Nova_PolymorphicSubClass*)nova_null;
}

