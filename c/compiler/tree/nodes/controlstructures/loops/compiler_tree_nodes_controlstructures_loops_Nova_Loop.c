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
#include <compiler/tree/nodes/controlstructures/compiler_tree_nodes_controlstructures_Nova_ControlStructure.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/controlstructures/loops/compiler_tree_nodes_controlstructures_loops_Nova_ForEachLoop.h>
#include <compiler/tree/nodes/controlstructures/loops/compiler_tree_nodes_controlstructures_loops_Nova_WhileLoop.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_nodes_controlstructures_loops_Loop_Extension_VTable compiler_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val =
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
		0,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Nova_writeNova,
	compiler_tree_nodes_controlstructures_Nova_ControlStructure_Mutatorfunc_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_controlstructures_Nova_ControlStructure_Accessorfunc_Nova_scope,
	compiler_tree_nodes_controlstructures_loops_Nova_Loop_static_Nova_parse,
};


void compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_controlstructures_loops_Nova_Loop* compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_construct(compiler_tree_nodes_controlstructures_loops_Nova_Loop* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_tree_nodes_controlstructures_loops_Nova_Loop, this,);
	this->vtable = &compiler_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_controlstructures_Nova_ControlStructure_Nova_super((compiler_tree_nodes_controlstructures_Nova_ControlStructure*)this, exceptionData);
	compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_destroy(compiler_tree_nodes_controlstructures_loops_Nova_Loop** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

compiler_tree_nodes_controlstructures_loops_Nova_Loop* compiler_tree_nodes_controlstructures_loops_Nova_Loop_static_Nova_parse(compiler_tree_nodes_controlstructures_loops_Nova_Loop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_Nova_Object* l1_Nova_node = (nova_Nova_Object*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (nova_Nova_Object*)nova_null;
	if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance))))
	{
		l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_controlstructures_loops_Nova_WhileLoop_static_Nova_parse(0, exceptionData, input, parent, location, require));
		if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_controlstructures_loops_Loop_Extension_VTable_val.classInstance))))
		{
			l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_controlstructures_loops_Nova_ForEachLoop_static_Nova_parse(0, exceptionData, input, parent, location, require));
		}
	}
	return (compiler_tree_nodes_controlstructures_loops_Nova_Loop*)l1_Nova_node;
}

void compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_this(compiler_tree_nodes_controlstructures_loops_Nova_Loop* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_tree_nodes_controlstructures_loops_Nova_Loop_Nova_super(compiler_tree_nodes_controlstructures_loops_Nova_Loop* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

compiler_tree_nodes_controlstructures_loops_Nova_Loop* compiler_tree_nodes_controlstructures_loops_Nova_Loop_virtual_static_Nova_parse(compiler_tree_nodes_controlstructures_loops_Nova_Loop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	return this->vtable->compiler_tree_nodes_controlstructures_loops_Nova_Loop_virtual_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

