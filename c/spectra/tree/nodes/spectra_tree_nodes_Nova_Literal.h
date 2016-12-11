#pragma once
#ifndef FILE_spectra_tree_nodes_Nova_Literal_NOVA
#define FILE_spectra_tree_nodes_Nova_Literal_NOVA

typedef struct spectra_tree_nodes_Nova_Literal spectra_tree_nodes_Nova_Literal;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>


typedef struct spectra_tree_nodes_Literal_Extension_VTable spectra_tree_nodes_Literal_Extension_VTable;
struct spectra_tree_nodes_Literal_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	void (*spectra_tree_nodes_Nova_Node_virtual_Nova_addChild)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*);
	spectra_tree_nodes_variables_Nova_VariableDeclaration* (*spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
	spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
	spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Value* (*spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*);
	char (*spectra_tree_nodes_Nova_Node_virtual_Nova_replace)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Node*, spectra_tree_nodes_Nova_Node*);
	char (*spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
	char (*spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	char (*spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NodeList*);
	nova_Nova_String* (*spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	nova_Nova_String* (*spectra_tree_nodes_Nova_Node_virtual_Nova_toNova)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	nova_Nova_String* (*spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova)(spectra_tree_nodes_Nova_Literal*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Scope* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Scope* (*spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Scope*);
	int (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Program* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_functions_Nova_Instantiation* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_functions_closures_Nova_LambdaExpression* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_NovaFile* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_functions_Nova_FunctionCall* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_functions_Nova_FunctionDeclaration* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_exceptionhandling_Nova_Try* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_ClassDeclaration* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Node* (*spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer)(spectra_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Literal* (*spectra_tree_nodes_Nova_Value_virtual0_static_Nova_parse)(spectra_tree_nodes_Nova_Literal*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, spectra_tree_nodes_Nova_Node*, spectra_util_Nova_Location*, int);
	char (*spectra_tree_nodes_Nova_Value_virtual_Nova_parseType)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
	nova_Nova_String* (*spectra_tree_nodes_Nova_Value_virtual_Nova_writeType)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
	spectra_tree_nodes_Nova_Type* (*spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
	char (*spectra_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable)(spectra_tree_nodes_Nova_Value*, nova_exception_Nova_ExceptionData*);
};

extern spectra_tree_nodes_Literal_Extension_VTable spectra_tree_nodes_Literal_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_nodes_Nova_Literal, 
	
	spectra_tree_nodes_Literal_Extension_VTable* vtable;
	spectra_util_Nova_Location* spectra_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Node_Nova_annotations;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parent;
	spectra_tree_nodes_arrays_Nova_ArrayAccess* spectra_tree_nodes_Nova_Value_Nova_arrayAccess;
	spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Value_Nova_type;
	nova_Nova_String* spectra_tree_nodes_Nova_Literal_Nova_value;
	char spectra_tree_nodes_Nova_Literal_Nova_safeNavigation;
)

void spectra_tree_nodes_Nova_Literal_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Literal* spectra_tree_nodes_Nova_Literal_Nova_construct(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_Literal_Nova_destroy(spectra_tree_nodes_Nova_Literal** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_Literal_Nova_this(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
spectra_tree_nodes_Nova_Literal* spectra_tree_nodes_Nova_Literal_static_Nova_parse(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
nova_Nova_String* spectra_tree_nodes_Nova_Literal_Nova_writeNova(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Literal_Accessorfunc_Nova_safeNavigation(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Literal_Mutatorfunc_Nova_safeNavigation(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData, char value);
void spectra_tree_nodes_Nova_Literal_Nova_super(spectra_tree_nodes_Nova_Literal* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
