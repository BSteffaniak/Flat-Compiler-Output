#pragma once
#ifndef FILE_compiler_tree_nodes_Nova_NodeList_NOVA
#define FILE_compiler_tree_nodes_Nova_NodeList_NOVA

typedef struct compiler_tree_nodes_Nova_NodeList compiler_tree_nodes_Nova_NodeList;


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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_NovaFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaClass.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_tree_nodes_NodeList_Extension_VTable compiler_tree_nodes_NodeList_Extension_VTable;
struct compiler_tree_nodes_NodeList_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_parseChild)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
	void (*compiler_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_clone)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*, compiler_util_Nova_Location*, int);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*);
	compiler_tree_nodes_Nova_Program* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_NovaFile* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_functions_Nova_NovaFunction* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_exceptionhandling_Nova_Try* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_NovaClass* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
};

extern compiler_tree_nodes_NodeList_Extension_VTable compiler_tree_nodes_NodeList_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_tree_nodes_Nova_NodeList, 
	
	compiler_tree_nodes_NodeList_Extension_VTable* vtable;
	nova_Nova_Class* nova_Nova_Object_Nova_class;
	compiler_util_Nova_Location* compiler_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_Node_Nova_annotations;
	compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_parent;
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NodeList_Nova_children;
)

void compiler_tree_nodes_Nova_NodeList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_NodeList* compiler_tree_nodes_Nova_NodeList_Nova_construct(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location);
void compiler_tree_nodes_Nova_NodeList_Nova_destroy(compiler_tree_nodes_Nova_NodeList** this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_NodeList_Nova_this(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location);
void compiler_tree_nodes_Nova_NodeList_Nova_replace(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* old, compiler_tree_nodes_Nova_Node* replacement, int detach);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NodeList_Nova_addChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node, int index, int detach);
char compiler_tree_nodes_Nova_NodeList_Nova_containsChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child, int recursive);
nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NodeList_Nova_inheritChildren(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NodeList* oldParent, int clone);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NodeList_0_Nova_removeChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* node);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NodeList_1_Nova_removeChild(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NodeList_Nova_slaughterChildren(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_NodeList_Accessor_Nova_isEmpty(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_NodeList_Nova_super(compiler_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
