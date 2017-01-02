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
#include <spectra/spectra_Nova_Spectra.h>
#include <spectra/tree/spectra_tree_Nova_SyntaxTree.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
	/* String location */ nova_Nova_String** spectra_tree_nodes_Nova_Program_Nova_location;
} Context1;



char spectra_tree_nodes_Nova_Program_Nova_lambda54(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* f, Context1* context);



void spectra_tree_nodes_Nova_Program_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_Program_Nova_construct(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* tree)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Program, this,);
	this->vtable = &spectra_tree_nodes_Program_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeList_Nova_super((spectra_tree_nodes_Nova_NodeList*)this, exceptionData);
	spectra_tree_nodes_Nova_Program_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Program_Nova_this(this, exceptionData, tree);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Program_Nova_destroy(spectra_tree_nodes_Nova_Program** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_Nova_SyntaxTree_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Program_Nova_tree, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Program_Nova_this(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* tree)
{
	tree = (spectra_tree_Nova_SyntaxTree*)(tree == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)tree);
	spectra_tree_nodes_Nova_NodeList_Nova_this((spectra_tree_nodes_Nova_NodeList*)(this), exceptionData, 0, 0);
	this->spectra_tree_nodes_Nova_Program_Nova_tree = tree;
}

void spectra_tree_nodes_Nova_Program_Nova_addChild(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	if (!nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_NovaFile_Extension_VTable_val.classInstance)))
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid child '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), child, (intptr_t)nova_null);
	}
	else
	{
		spectra_tree_nodes_Nova_NodeList_Nova_addChild((spectra_tree_nodes_Nova_NodeList*)(((spectra_tree_nodes_Nova_NodeList*)this)), exceptionData, child, (intptr_t)nova_null, (intptr_t)nova_null);
	}
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Program_Nova_getClassDeclaration(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	Context1* contextArg54 = NOVA_MALLOC(sizeof(Context1));
	contextArg54->spectra_tree_nodes_Nova_Program_Nova_location = &location;
	spectra_tree_nodes_Nova_NovaFile* nova_local_0 = (spectra_tree_nodes_Nova_NovaFile*)nova_null;
	
	return (spectra_tree_nodes_Nova_ClassDeclaration*)((nova_local_0 = (spectra_tree_nodes_Nova_NovaFile*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(this, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_Program_Nova_lambda54, this, contextArg54))) != (spectra_tree_nodes_Nova_NovaFile*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* spectra_tree_nodes_Nova_Program_Nova_toString(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Program"));
}

char spectra_tree_nodes_Nova_Program_Nova_lambda54(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* f, Context1* context)
{
	return (spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(f, exceptionData)) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null && nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(f, exceptionData), exceptionData), exceptionData, (*context->spectra_tree_nodes_Nova_Program_Nova_location));
}

spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_Program_Accessor_Nova_program(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Program_Accessor_Nova_files(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_NovaFile**)this->spectra_tree_nodes_Nova_NodeList_Nova_children;
}


spectra_Nova_Spectra* spectra_tree_nodes_Nova_Program_Accessor_Nova_compiler(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_Program_Nova_tree->spectra_tree_Nova_SyntaxTree_Nova_compiler;
}


void spectra_tree_nodes_Nova_Program_Nova_super(spectra_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Program_Nova_tree = (spectra_tree_Nova_SyntaxTree*)nova_null;
}

