#pragma once
#ifndef FILE_compiler_tree_nodes_Nova_NovaFile_NOVA
#define FILE_compiler_tree_nodes_Nova_NovaFile_NOVA

typedef struct compiler_tree_nodes_Nova_NovaFile compiler_tree_nodes_Nova_NovaFile;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/closures/compiler_tree_nodes_closures_Nova_ClosureContext.h>
#include <compiler/tree/nodes/closures/compiler_tree_nodes_closures_Nova_ClosureDeclaration.h>
#include <nova/io/nova_io_Nova_File.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ImportList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaClass.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Package.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_NovaFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_tree_nodes_NovaFile_Extension_VTable compiler_tree_nodes_NovaFile_Extension_VTable;
struct compiler_tree_nodes_NovaFile_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(compiler_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_parseChild)(compiler_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
	void (*compiler_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_clone)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*, compiler_util_Nova_Location*, int);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*);
	compiler_tree_nodes_Nova_Program* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_NovaFile* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile)(compiler_tree_nodes_Nova_NovaFile*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_functions_Nova_NovaFunction* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_exceptionhandling_Nova_Try* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_NovaClass* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
};

extern compiler_tree_nodes_NovaFile_Extension_VTable compiler_tree_nodes_NovaFile_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_tree_nodes_Nova_NovaFile, 
	
	compiler_tree_nodes_NovaFile_Extension_VTable* vtable;
	nova_Nova_Class* nova_Nova_Object_Nova_class;
	compiler_util_Nova_Location* compiler_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_Node_Nova_annotations;
	compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_parent;
	nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_name;
	nova_io_Nova_File* compiler_tree_nodes_Nova_NovaFile_Nova_file;
	compiler_tree_nodes_Nova_ImportList* compiler_tree_nodes_Nova_NovaFile_Nova_importList;
	compiler_tree_nodes_Nova_Package* compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration;
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Nova_closures;
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Nova_contexts;
)
extern nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS;

void compiler_tree_nodes_Nova_NovaFile_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_NovaFile_Nova_construct(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location);
void compiler_tree_nodes_Nova_NovaFile_Nova_destroy(compiler_tree_nodes_Nova_NovaFile** this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_NovaFile_Nova_this(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NovaFile_Nova_parseChild(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement, int require);
compiler_tree_nodes_Nova_Import* compiler_tree_nodes_Nova_NovaFile_Nova_addImport(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
char compiler_tree_nodes_Nova_NovaFile_Nova_containsImport(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, int absoluteLocation, int aliased);
nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_toString(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_parentFile(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_NovaFile_Nova_super(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
