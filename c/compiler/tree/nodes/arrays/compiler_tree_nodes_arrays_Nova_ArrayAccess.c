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
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;


compiler_tree_nodes_arrays_ArrayAccess_Extension_VTable compiler_tree_nodes_arrays_ArrayAccess_Extension_VTable_val =
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
		0,
		0,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
};



char compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimensions(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input);
nova_Nova_String* compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_testLambda26(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Value* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_arrays_Nova_ArrayAccess* compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_arrays_Nova_ArrayAccess, this,);
	this->vtable = &compiler_tree_nodes_arrays_ArrayAccess_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_destroy(compiler_tree_nodes_arrays_Nova_ArrayAccess** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_this(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Node_Nova_this((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
}

compiler_tree_nodes_arrays_Nova_ArrayAccess* compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	compiler_tree_nodes_arrays_Nova_ArrayAccess* l1_Nova_node = (compiler_tree_nodes_arrays_Nova_ArrayAccess*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct(0, exceptionData, parent, location);
	if (compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimensions(l1_Nova_node, exceptionData, input))
	{
		return l1_Nova_node;
	}
	return (compiler_tree_nodes_arrays_Nova_ArrayAccess*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimension)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions), exceptionData, (nova_Nova_Object*)(compiler_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, dimension, (compiler_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null)))), exceptionData) != (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimensions(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(input), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension, this, nova_null, 0);
}

nova_Nova_String* compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_toNova(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg26 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_testLambda26, this, &contextArg26)), exceptionData, 0);
}

nova_Nova_String* compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_testLambda26(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Value* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("["))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]"))));
}

void compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_super(compiler_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

