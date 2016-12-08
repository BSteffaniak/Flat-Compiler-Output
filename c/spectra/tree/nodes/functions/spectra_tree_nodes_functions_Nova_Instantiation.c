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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotationProperty.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;


spectra_tree_nodes_functions_Instantiation_Extension_VTable spectra_tree_nodes_functions_Instantiation_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
		(void(*)(spectra_tree_nodes_operations_Nova_Assignable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_Value*))spectra_tree_nodes_variables_Nova_Variable_Nova_onAssigned,
	},
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_addChild,
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeNova,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scope,
	spectra_tree_nodes_Nova_Node_Mutator_Nova_scope,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_index,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_program,
	spectra_tree_nodes_functions_Nova_Instantiation_Accessor_Nova_parentInstantiation,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_parentFunctionCall,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_variables_Nova_Variable_Accessorfunc_Nova_type,
	spectra_tree_nodes_functions_Nova_FunctionCall_Accessor_Nova_isAssignable,
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeName,
};



char spectra_tree_nodes_functions_Nova_Instantiation_Nova_lambda54(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* placeholder, int _2, nova_datastruct_list_Nova_List* _3, Context1* context);
char spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_lambda125(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, Context2* context);

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_Instantiation, this,);
	this->vtable = &spectra_tree_nodes_functions_Instantiation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_Variable_Nova_super((spectra_tree_nodes_variables_Nova_Variable*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCall*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_Instantiation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_destroy(spectra_tree_nodes_functions_Nova_Instantiation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_this(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_this((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData, parent, location);
}

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_addChild(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node)
{
	spectra_tree_nodes_functions_Nova_ObjectNotation* nova_local_0 = (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null;
	
	this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation = (spectra_tree_nodes_functions_Nova_ObjectNotation*)((nova_local_0 = this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation) != (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null ? nova_local_0 : spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0));
	spectra_tree_nodes_Nova_NodeList_Nova_addChild((spectra_tree_nodes_Nova_NodeList*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), exceptionData, node, (intptr_t)nova_null, (intptr_t)nova_null);
}

char spectra_tree_nodes_functions_Nova_Instantiation_Nova_parsePlaceholderChildren(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* nodes)
{
	Context1 contextArg54 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nodes->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&spectra_tree_nodes_functions_Nova_Instantiation_Nova_lambda54, this, &contextArg54, 0);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_functions_Nova_Instantiation_Nova_parseStatement(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_functions_Nova_ObjectNotationProperty* l1_Nova_node = (spectra_tree_nodes_functions_Nova_ObjectNotationProperty*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (spectra_tree_nodes_functions_Nova_ObjectNotationProperty*)(spectra_tree_nodes_functions_Nova_ObjectNotationProperty_static_Nova_parse(0, exceptionData, input, parent, location, require));
	return (spectra_tree_nodes_Nova_Node*)l1_Nova_node;
	return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_parse(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new"))))
	{
		spectra_tree_nodes_functions_Nova_Instantiation* l1_Nova_node = (spectra_tree_nodes_functions_Nova_Instantiation*)nova_null;
		nova_Nova_String* l1_Nova_callString = (nova_Nova_String*)nova_null;
		int l1_Nova_parenthesisIndex = 0;
		nova_Nova_String* l1_Nova_className = (nova_Nova_String*)nova_null;
		
		l1_Nova_node = spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct(0, exceptionData, parent, location);
		l1_Nova_callString = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new"))->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l1_Nova_parenthesisIndex = nova_Nova_String_1_Nova_indexOf(l1_Nova_callString, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l1_Nova_className = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_callString), exceptionData, 0, l1_Nova_parenthesisIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l1_Nova_className, exceptionData))
		{
			spectra_tree_nodes_Nova_ClassDeclaration* l2_Nova_clazz = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
			
			l2_Nova_clazz = spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData, l1_Nova_className, (intptr_t)nova_null);
			if (l2_Nova_clazz != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null)
			{
				spectra_tree_nodes_functions_Nova_FunctionDeclaration* l3_Nova_constructor = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
				Context2 contextArg125 = 
				{
				};
				
				l3_Nova_constructor = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(l2_Nova_clazz->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure24_Nova_func)&spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_lambda125, nova_null, &contextArg125));
				if (l3_Nova_constructor != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
				{
					nova_Nova_String* l4_Nova_parameters = (nova_Nova_String*)nova_null;
					spectra_tree_nodes_functions_Nova_FunctionCall* l4_Nova_call = (spectra_tree_nodes_functions_Nova_FunctionCall*)nova_null;
					
					l4_Nova_parameters = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_callString), exceptionData, l1_Nova_parenthesisIndex, (intptr_t)nova_null));
					l4_Nova_call = spectra_tree_nodes_functions_Nova_FunctionCall_0_static_Nova_parse(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_className), exceptionData, l4_Nova_parameters), parent, 0, (intptr_t)nova_null, l3_Nova_constructor);
					if (l4_Nova_call != (spectra_tree_nodes_functions_Nova_FunctionCall*)nova_null)
					{
						return (spectra_tree_nodes_functions_Nova_Instantiation*)spectra_tree_nodes_functions_Nova_FunctionCall_Nova_cloneTo(l4_Nova_call, exceptionData, (spectra_tree_nodes_functions_Nova_FunctionCall*)(l1_Nova_node));
					}
				}
			}
		}
	}
	return (spectra_tree_nodes_functions_Nova_Instantiation*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeName(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration), exceptionData)->spectra_tree_nodes_Nova_Identifier_Nova_name;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation != (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), exceptionData)) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeNova(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((spectra_tree_nodes_functions_Nova_FunctionCall_Nova_writeNova(((spectra_tree_nodes_functions_Nova_FunctionCall*)this), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess((spectra_tree_nodes_Nova_Value*)(this), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation(this, exceptionData)), exceptionData, spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))));
}

char spectra_tree_nodes_functions_Nova_Instantiation_Nova_lambda54(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* placeholder, int _2, nova_datastruct_list_Nova_List* _3, Context1* context)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_property = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_addChild(this, exceptionData, (spectra_tree_nodes_Nova_Node*)(placeholder));
	l1_Nova_property = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_Instantiation_Nova_parseStatement(this, exceptionData, placeholder->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value, (spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), 0, (intptr_t)nova_null));
	if (l1_Nova_property != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		spectra_tree_nodes_Nova_NodeList_Nova_replace((spectra_tree_nodes_Nova_NodeList*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), exceptionData, (spectra_tree_nodes_Nova_Node*)(placeholder), l1_Nova_property, (intptr_t)nova_null);
	}
	return l1_Nova_property != (spectra_tree_nodes_Nova_Node*)nova_null;
}

char spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_lambda125(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("construct")));
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_Instantiation_Accessor_Nova_parentInstantiation(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


void spectra_tree_nodes_functions_Nova_Instantiation_Nova_super(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation = (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null;
}

