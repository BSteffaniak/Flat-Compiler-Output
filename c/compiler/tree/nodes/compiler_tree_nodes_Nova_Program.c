#include <precompiled.h>
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
#include <compiler/compiler_Nova_Compiler.h>
#include <compiler/tree/compiler_tree_Nova_SyntaxTree.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String location */ nova_Nova_String** compiler_tree_nodes_Nova_Program_Nova_location;
} Context1;


compiler_tree_nodes_Program_Extension_VTable compiler_tree_nodes_Program_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	compiler_tree_nodes_Nova_Program_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_Nova_Program_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
};



char compiler_tree_nodes_Nova_Program_Nova_testLambda29(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, Context1* context);



void compiler_tree_nodes_Nova_Program_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_Program* compiler_tree_nodes_Nova_Program_Nova_construct(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_Nova_SyntaxTree* tree)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Program, this,);
	this->vtable = &compiler_tree_nodes_Program_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_NodeList_Nova_super((compiler_tree_nodes_Nova_NodeList*)this, exceptionData);
	compiler_tree_nodes_Nova_Program_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Program_Nova_this(this, exceptionData, tree);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Program_Nova_destroy(compiler_tree_nodes_Nova_Program** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_Nova_SyntaxTree_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Program_Nova_tree, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_Program_Nova_this(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_Nova_SyntaxTree* tree)
{
	tree = (compiler_tree_Nova_SyntaxTree*)(tree == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)tree);
	compiler_tree_nodes_Nova_NodeList_Nova_this((compiler_tree_nodes_Nova_NodeList*)(this), exceptionData, 0, 0);
	this->compiler_tree_nodes_Nova_Program_Nova_tree = tree;
}

void compiler_tree_nodes_Nova_Program_Nova_addChild(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
	if (!nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_NovaFile_Extension_VTable_val.classInstance)))
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid child '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), child, (intptr_t)nova_null);
	}
	else
	{
		compiler_tree_nodes_Nova_NodeList_Nova_addChild((compiler_tree_nodes_Nova_NodeList*)(((compiler_tree_nodes_Nova_NodeList*)this)), exceptionData, child, (intptr_t)nova_null, (intptr_t)nova_null);
	}
}

compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_Program_Nova_getClassDeclaration(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	Context1 contextArg29 = 
	{
		&location,
	};
	
	return compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration((compiler_tree_nodes_Nova_NovaFile*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Program_Accessor_Nova_files(this, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure18_Nova_func)&compiler_tree_nodes_Nova_Program_Nova_testLambda29, this, &contextArg29)), exceptionData);
}

nova_Nova_String* compiler_tree_nodes_Nova_Program_Nova_toString(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Program"));
}

char compiler_tree_nodes_Nova_Program_Nova_testLambda29(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(compiler_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(_1, exceptionData), exceptionData), exceptionData, (*context->compiler_tree_nodes_Nova_Program_Nova_location));
}

compiler_tree_nodes_Nova_Program* compiler_tree_nodes_Nova_Program_Accessor_Nova_program(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_Program_Accessor_Nova_files(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_Nova_NovaFile**)this->compiler_tree_nodes_Nova_NodeList_Nova_children;
}


compiler_Nova_Compiler* compiler_tree_nodes_Nova_Program_Accessor_Nova_compiler(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_Program_Accessor_Nova_compiler((compiler_tree_nodes_Nova_Program*)(this->compiler_tree_nodes_Nova_Program_Nova_tree), exceptionData);
}


void compiler_tree_nodes_Nova_Program_Nova_super(compiler_tree_nodes_Nova_Program* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Program_Nova_tree = (compiler_tree_Nova_SyntaxTree*)nova_null;
}

