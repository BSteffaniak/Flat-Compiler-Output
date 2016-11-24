#pragma once
#ifndef FILE_compiler_Nova_Compiler_NOVA
#define FILE_compiler_Nova_Compiler_NOVA

typedef struct compiler_Nova_Compiler compiler_Nova_Compiler;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/io/nova_io_Nova_File.h>
#include <compiler/util/compiler_util_Nova_FileUtils.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/compiler_tree_Nova_SyntaxTree.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_Compiler_Extension_VTable compiler_Compiler_Extension_VTable;
struct compiler_Compiler_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern compiler_Compiler_Extension_VTable compiler_Compiler_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_Nova_Compiler, 
	
	compiler_Compiler_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_errors;
	nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_warnings;
	nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_info;
	struct Private* prv;
)
extern char compiler_Nova_Compiler_Nova_DEBUG;
extern char compiler_Nova_Compiler_Nova_testClasses;

void compiler_Nova_Compiler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_Nova_Compiler* compiler_Nova_Compiler_Nova_construct(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_Nova_Compiler_Nova_destroy(compiler_Nova_Compiler** this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_Nova_Compiler_static_Nova_main(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void compiler_Nova_Compiler_Nova_this(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_Nova_Compiler_Nova_compile(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args);
void compiler_Nova_Compiler_Nova_super(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
