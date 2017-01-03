#ifndef FILE_nova_regex_Nova_Regex_NOVA
#define FILE_nova_regex_Nova_Regex_NOVA

typedef struct nova_regex_Nova_Regex nova_regex_Nova_Regex;
typedef struct nova_regex_Nova_nova_regex_RegexFunctionMap nova_regex_Nova_nova_regex_RegexFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Match.h>
#include <pcre/pcre2.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_regex_Nova_Regex, 
	
	nova_regex_Regex_Extension_VTable* vtable;
	nova_meta_Nova_Class* nova_regex_Nova_Regex_Nova_class;
)

void nova_regex_Nova_Regex_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_regex_Nova_Regex* nova_regex_Nova_Regex_Nova_construct(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_Regex_Nova_destroy(nova_regex_Nova_Regex** this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_regex_Nova_Regex_0_static_Nova_containsMatch(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern, nova_Nova_String* search);
char nova_regex_Nova_Regex_1_static_Nova_containsMatch(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* regex, nova_Nova_String* search);
nova_datastruct_list_Nova_Array* nova_regex_Nova_Regex_0_static_Nova_getMatches(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern, nova_Nova_String* search);
nova_datastruct_list_Nova_Array* nova_regex_Nova_Regex_static_Nova_getMatches(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* regex, nova_Nova_String* search);
void nova_regex_Nova_Regex_Nova_this(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_Regex_Nova_super(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_regex_Nova_nova_regex_RegexFunctionMap, 
	
	nova_regex_Regex_nova_regex_RegexFunctionMap_Extension_VTable* vtable;
	nova_meta_Nova_Class* nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_class;
)

void nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_regex_Nova_nova_regex_RegexFunctionMap* nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_construct(nova_regex_Nova_nova_regex_RegexFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_destroy(nova_regex_Nova_nova_regex_RegexFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_this(nova_regex_Nova_nova_regex_RegexFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_nova_regex_RegexFunctionMap_Nova_super(nova_regex_Nova_nova_regex_RegexFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
