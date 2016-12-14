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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_Loop.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ControlStructure.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_EqualsOperator*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	spectra_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_Node_Nova_addChild,
	spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_Nova_Node_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Node_Nova_validateTypes,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_writeNova,
	spectra_tree_nodes_controlstructures_Nova_ControlStructure_Accessorfunc_Nova_scope,
	spectra_tree_nodes_controlstructures_Nova_ControlStructure_Mutatorfunc_Nova_scope,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_index,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_program,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_static_Nova_parse,
};



char spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_parseIterator(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_parseVariable(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
void spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_construct(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop, this,);
	this->vtable = &spectra_tree_nodes_controlstructures_loops_ForEachLoop_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_super((spectra_tree_nodes_controlstructures_Nova_ControlStructure*)this, exceptionData);
	spectra_tree_nodes_controlstructures_loops_Nova_Loop_Nova_super((spectra_tree_nodes_controlstructures_loops_Nova_Loop*)this, exceptionData);
	spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_destroy(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_destroy(&(*this)->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_iterator, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_this(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_this((spectra_tree_nodes_controlstructures_Nova_ControlStructure*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_findVariableDeclaration(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	if (nova_Nova_String_Nova_equals(this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, name))
	{
		return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable;
	}
	return spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_controlstructures_loops_Nova_Loop*)this)), exceptionData, name, searchAncestors);
}

spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_static_Nova_parse(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("for"))))
	{
		spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* l2_Nova_node = (spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop*)nova_null;
		nova_Nova_String* l2_Nova_contents = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("for"))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (nova_Nova_String_Nova_get(l2_Nova_contents, exceptionData, 0) == '(')
		{
			int l3_Nova_end = 0;
			
			l3_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(l2_Nova_contents, exceptionData, 0, '(', ')', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l3_Nova_end > 0)
		{
			int l4_Nova_inIndex = 0;
			
			l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_contents), exceptionData, 1, l3_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			l4_Nova_inIndex = spectra_util_Nova_CompilerStringFunctions_Nova_findWordOnTopLevel(l2_Nova_contents, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("in")), (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
			if (l4_Nova_inIndex > 0)
			{
				nova_Nova_String* l5_Nova_variable = (nova_Nova_String*)nova_null;
				nova_Nova_String* l5_Nova_iterator = (nova_Nova_String*)nova_null;
				
				l5_Nova_variable = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_contents), exceptionData, (intptr_t)nova_null, l4_Nova_inIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
				l5_Nova_iterator = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_contents), exceptionData, l4_Nova_inIndex + nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("in"))->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
				if (!spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_parseIterator(l2_Nova_node, exceptionData, l5_Nova_iterator))
				{
					THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse for each loop iterator '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l5_Nova_iterator), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
				}
				else if (!spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_parseVariable(l2_Nova_node, exceptionData, l5_Nova_variable))
				{
					THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse for each loop variable '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l5_Nova_variable), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
				}
				else
				{
					return l2_Nova_node;
				}
			}
		}
	}
}
return (spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop*)(nova_Nova_Object*)nova_null;}

char spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_parseIterator(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_iterator = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null));
	if ((this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_iterator) == (spectra_tree_nodes_Nova_Value*)nova_null)
	{
		return 0;
	}
	return 1;
}

char spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_parseVariable(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(input, exceptionData))
	{
		this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable = spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0);
		this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable->spectra_tree_nodes_Nova_Identifier_Nova_name = input;
		spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable), exceptionData, spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_iterator), exceptionData));
	}
	else
	{
		return 0;
	}
	return 1;
}

nova_Nova_String* spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_writeNova(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("for (")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable->spectra_tree_nodes_Nova_Identifier_Nova_name), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" in ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_iterator), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(") ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))));
}

void spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_super(spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_variable = (spectra_tree_nodes_variables_Nova_LocalDeclaration*)nova_null;
	this->spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_iterator = (spectra_tree_nodes_Nova_Value*)nova_null;
}

