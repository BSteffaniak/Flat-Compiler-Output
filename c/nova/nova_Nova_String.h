#ifndef FILE_nova_Nova_String_NOVA
#define FILE_nova_Nova_String_NOVA

typedef struct nova_Nova_String nova_Nova_String;
typedef struct nova_Nova_StringFunctionMap nova_Nova_StringFunctionMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef char (*nova_Nova_String_closure1_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef char (*nova_Nova_String_closure2_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef char (*nova_Nova_String_closure3_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef char (*nova_Nova_String_closure4_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef char (*nova_Nova_StringFunctionMap_closure5_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);

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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_Nova_String, 
	
	nova_String_Extension_VTable* vtable;
	int nova_Nova_String_Nova_count;
	nova_datastruct_list_Nova_StringCharArray* nova_Nova_String_Nova_chars;
)

void nova_Nova_String_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_String_0_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
nova_Nova_String* nova_Nova_String_1_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars);
nova_Nova_String* nova_Nova_String_2_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars, int count);
nova_Nova_String* nova_Nova_String_3_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars);
void nova_Nova_String_Nova_destroy(nova_Nova_String** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_String_0_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
void nova_Nova_String_1_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars);
void nova_Nova_String_2_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars, int count);
void nova_Nova_String_3_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars);
nova_Nova_String* nova_Nova_String_Nova_concat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str);
nova_Nova_String* nova_Nova_String_Nova_plus(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* another);
nova_Nova_String* nova_Nova_String_Nova_multiply(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int times);
nova_Nova_String* nova_Nova_String_Nova_repeat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int times);
char nova_Nova_String_Nova_equals(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* other);
nova_Nova_String* nova_Nova_String_0_Nova_replace(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern, nova_Nova_String* replace);
nova_Nova_String* nova_Nova_String_1_Nova_replace(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, nova_Nova_String* replace);
char nova_Nova_String_0_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char search);
char nova_Nova_String_1_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search);
char nova_Nova_String_2_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search);
char nova_Nova_String_0_Nova_contains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search);
char nova_Nova_String_1_Nova_contains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search);
char nova_Nova_String_0_Nova_endsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search);
char nova_Nova_String_1_Nova_endsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search);
char nova_Nova_String_Nova_matches(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern);
int nova_Nova_String_0_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search, int start, int direction, int defaultReturnValue);
int nova_Nova_String_1_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char search, int start, int direction, int defaultReturnValue);
int nova_Nova_String_2_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int direction, int defaultReturnValue);
int nova_Nova_String_0_Nova_lastIndexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char search, int start, int defaultReturnValue);
int nova_Nova_String_1_Nova_lastIndexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int defaultReturnValue);
char nova_Nova_String_Nova_validateSubstringBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end, int throwException);
nova_Nova_String* nova_Nova_String_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
nova_Nova_String* nova_Nova_String_Nova_trimStart(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int count);
nova_Nova_String* nova_Nova_String_Nova_trimEnd(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int count);
nova_Nova_String* nova_Nova_String_Nova_trimEnds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int count, int trimWhitespace);
nova_Nova_String* nova_Nova_String_Nova_trim(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end, nova_datastruct_list_Nova_CharArray* charsToTrim);
nova_Nova_String* nova_Nova_String_Nova_toLowerCase(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_String_Nova_toUpperCase(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_String_Nova_capitalize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_String_Nova_transform(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String_closure4_Nova_transform nova_Nova_String_Nova_transform, void* nova_Nova_String_ref_Nova_transform, void* transform_context);
nova_Nova_String* nova_Nova_String_Nova_getStringBetween(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* before, nova_Nova_String* after, int start);
nova_Nova_String* nova_Nova_String_Nova_surroundWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int symmetrical);
int nova_Nova_String_Nova_compareTo(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* other);
nova_datastruct_list_Nova_Array* nova_Nova_String_Nova_split(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* regex);
nova_Nova_String* nova_Nova_String_Nova_getGroupedChars(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars, int start, int end, int opposite);
nova_Nova_String* nova_Nova_String_Nova_toString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_Nova_String_Nova_get(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
char nova_Nova_String_Nova_set(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char value);
char nova_Nova_String_Accessor_Nova_first(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_Nova_String_Accessor_Nova_last(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_Nova_String_Accessor_Nova_hashCodeLong(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_String_Nova_super(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_String_virtual_Nova_concat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str);
nova_Nova_String* nova_Nova_String_virtual_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);

CCLASS_CLASS
(
	nova_Nova_StringFunctionMap, 
	
	nova_String_StringFunctionMap_Extension_VTable* vtable;
)

void nova_Nova_StringFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_StringFunctionMap* nova_Nova_StringFunctionMap_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_StringFunctionMap_Nova_destroy(nova_Nova_StringFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_StringFunctionMap_Nova_this(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap0_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap1_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap2_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars, int count);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap3_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_concat(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* str);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_plus(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* another);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_multiply(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int times);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_repeat(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int times);
char nova_Nova_StringFunctionMap_functionMap_Nova_equals(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* other);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap0_Nova_replace(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* pattern, nova_Nova_String* replace);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap1_Nova_replace(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search, nova_Nova_String* replace);
char nova_Nova_StringFunctionMap_functionMap0_Nova_startsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char search);
char nova_Nova_StringFunctionMap_functionMap1_Nova_startsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search);
char nova_Nova_StringFunctionMap_functionMap2_Nova_startsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search);
char nova_Nova_StringFunctionMap_functionMap0_Nova_contains(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search);
char nova_Nova_StringFunctionMap_functionMap1_Nova_contains(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search);
char nova_Nova_StringFunctionMap_functionMap0_Nova_endsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search);
char nova_Nova_StringFunctionMap_functionMap1_Nova_endsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search);
char nova_Nova_StringFunctionMap_functionMap_Nova_matches(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* pattern);
int nova_Nova_StringFunctionMap_functionMap0_Nova_indexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search, int start, int direction, int defaultReturnValue);
int nova_Nova_StringFunctionMap_functionMap1_Nova_indexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char search, int start, int direction, int defaultReturnValue);
int nova_Nova_StringFunctionMap_functionMap2_Nova_indexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search, int start, int direction, int defaultReturnValue);
int nova_Nova_StringFunctionMap_functionMap0_Nova_lastIndexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char search, int start, int defaultReturnValue);
int nova_Nova_StringFunctionMap_functionMap1_Nova_lastIndexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search, int start, int defaultReturnValue);
char nova_Nova_StringFunctionMap_functionMap_Nova_validateSubstringBounds(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end, int throwException);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_substring(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trimStart(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int count);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trimEnd(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int count);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trimEnds(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int count, int trimWhitespace);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trim(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end, nova_datastruct_list_Nova_CharArray* charsToTrim);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_toLowerCase(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_toUpperCase(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_capitalize(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_transform(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_StringFunctionMap_closure5_Nova_transform nova_Nova_StringFunctionMap_Nova_transform, void* nova_Nova_StringFunctionMap_ref_Nova_transform, void* transform_context);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_getStringBetween(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* before, nova_Nova_String* after, int start);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_surroundWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* str, int symmetrical);
int nova_Nova_StringFunctionMap_functionMap_Nova_compareTo(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* other);
nova_datastruct_list_Nova_Array* nova_Nova_StringFunctionMap_functionMap_Nova_split(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* regex);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_getGroupedChars(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_datastruct_list_Nova_CharArray* chars, int start, int end, int opposite);
nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_toString(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference);
char nova_Nova_StringFunctionMap_functionMap_Nova_get(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int index);
char nova_Nova_StringFunctionMap_functionMap_Nova_set(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int index, char value);
void nova_Nova_StringFunctionMap_Nova_super(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_concat(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* str);
nova_Nova_String* nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_substring(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end);
nova_Nova_String* nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_toString(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference);

#endif
