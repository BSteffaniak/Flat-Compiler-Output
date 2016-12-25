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
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
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

typedef struct
{
} Context1;


spectra_tree_nodes_Value_Extension_VTable spectra_tree_nodes_Value_Extension_VTable_val =
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
	spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_Node_Nova_parseStatement,
	spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_Nova_Value_Nova_cloneTo,
	spectra_tree_nodes_Nova_Node_Nova_replace,
	spectra_tree_nodes_Nova_Value_Nova_validateTypes,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_Node_Nova_toNova,
	spectra_tree_nodes_Nova_Node_Nova_writeNova,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scope,
	spectra_tree_nodes_Nova_Node_Mutator_Nova_scope,
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
	spectra_tree_nodes_Nova_Value_0_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_static_Nova_parseValue(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require);
char spectra_tree_nodes_Nova_Value_Nova_lambda58(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context1* context);




char spectra_tree_nodes_Nova_Value_Nova_VALUE;
char spectra_tree_nodes_Nova_Value_Nova_POINTER;
char spectra_tree_nodes_Nova_Value_Nova_REFERENCE;
char spectra_tree_nodes_Nova_Value_Nova_DOUBLE_POINTER;
void spectra_tree_nodes_Nova_Value_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_Nova_Value_Nova_VALUE = 1;
		spectra_tree_nodes_Nova_Value_Nova_POINTER = 2;
		spectra_tree_nodes_Nova_Value_Nova_REFERENCE = 3;
		spectra_tree_nodes_Nova_Value_Nova_DOUBLE_POINTER = 4;
	}
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_Nova_construct(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_Nova_Type* type)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Value, this,);
	this->vtable = &spectra_tree_nodes_Value_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Value_Nova_this(this, exceptionData, parent, location, type);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Value_Nova_destroy(spectra_tree_nodes_Nova_Value** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Value_Nova_arrayAccess, exceptionData);
	spectra_tree_nodes_Nova_Type_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Value_Nova_type, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Value_Nova_this(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_Nova_Type* type)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	type = (spectra_tree_nodes_Nova_Type*)(type == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)type);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(this, exceptionData, type);
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_0_static_Nova_parse(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_datastruct_Nova_Tuple2* l1_Nova_arrayData = (nova_datastruct_Nova_Tuple2*)nova_null;
	spectra_tree_nodes_Nova_Value* l1_Nova_value = (spectra_tree_nodes_Nova_Value*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_arrayData = spectra_util_Nova_CompilerStringFunctions_Nova_getArrayAccesses(input, exceptionData);
	if ((nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData)) != (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array*)nova_null)
	{
		input = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get((nova_datastruct_list_Nova_IntArray*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item2((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData)), exceptionData, 0))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	l1_Nova_value = spectra_tree_nodes_Nova_Value_static_Nova_parseValue(0, exceptionData, input, parent, location, require);
	if ((l1_Nova_value) != (spectra_tree_nodes_Nova_Value*)nova_null)
	{
		if ((nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData)) != (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array*)nova_null)
		{
			l1_Nova_value->spectra_tree_nodes_Nova_Value_Nova_arrayAccess = spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData)), (spectra_tree_nodes_Nova_Node*)(l1_Nova_value), 0, (intptr_t)nova_null);
		}
		return l1_Nova_value;
	}
	return (spectra_tree_nodes_Nova_Value*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_static_Nova_parseValue(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	nova_Nova_Object* l1_Nova_node = (nova_Nova_Object*)nova_null;
	
	l1_Nova_node = (nova_Nova_Object*)nova_null;
	if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
	{
		l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_variables_Nova_Variable_static_Nova_findVariable(0, exceptionData, input, parent, location));
		if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
		{
			l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Cast_static_Nova_parse(0, exceptionData, input, parent, location, require));
			if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
			{
				l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Priority_static_Nova_parse(0, exceptionData, input, parent, location, require));
				if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
				{
					l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(0, exceptionData, input, parent, require));
					if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
					{
						l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Literal_static_Nova_parse(0, exceptionData, input, parent, location, require));
						if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
						{
							l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_StaticClassReference_static_Nova_parse(0, exceptionData, input, parent, location, require));
							if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
							{
								l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_NumericRange_static_Nova_parse(0, exceptionData, input, parent, location, require));
								if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
								{
									l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_functions_Nova_ArrayInstantiation_static_Nova_parse(0, exceptionData, input, parent, location, require));
									if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
									{
										l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_parse(0, exceptionData, input, parent, location, require));
										if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
										{
											l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse(0, exceptionData, input, parent, location, require));
											if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
											{
												l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_operations_Nova_ElvisOperation_static_Nova_parse(0, exceptionData, input, parent, location, require));
												if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
												{
													l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_operations_Nova_TernaryOperation_static_Nova_parse(0, exceptionData, input, parent, location, require));
													if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
													{
														l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_operations_Nova_UnaryOperation_static_Nova_parse(0, exceptionData, input, parent, location, require));
														if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
														{
															l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_operations_Nova_Operation_static_Nova_parse(0, exceptionData, input, parent, location, require));
															if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
															{
																THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse value '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), 0), 1);
																if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_Value_Extension_VTable_val.classInstance))))
																{
																	return (spectra_tree_nodes_Nova_Value*)(nova_Nova_Object*)nova_null;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (spectra_tree_nodes_Nova_Value*)l1_Nova_node;
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_1_static_Nova_parse(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* placeholder, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, placeholder->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value, placeholder->spectra_tree_nodes_Nova_Node_Nova_parent, placeholder->spectra_tree_nodes_Nova_Node_Nova_location, require);
}

char spectra_tree_nodes_Nova_Value_Nova_parseType(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return (input) != (nova_Nova_String*)nova_null && ((spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(this, exceptionData, spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null)))) != (spectra_tree_nodes_Nova_Type*)nova_null;
}

char spectra_tree_nodes_Nova_Value_Nova_validateTypes(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if ((spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData)) != (spectra_tree_nodes_Nova_Type*)nova_null && !spectra_tree_nodes_Nova_Type_virtual_Nova_isValid((spectra_tree_nodes_Nova_Type*)(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData)), exceptionData, (spectra_tree_nodes_Nova_Node*)(this)))
	{
		spectra_tree_nodes_Nova_Value_Nova_invalidTypeError(this, exceptionData, 0, 0);
		return 0;
	}
	return 1;
}

void spectra_tree_nodes_Nova_Value_Nova_invalidTypeError(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* type, int throwException)
{
	type = (spectra_tree_nodes_Nova_Type*)(type == 0 ? (nova_Nova_Object*)spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData) : (nova_Nova_Object*)type);
	throwException = (int)(throwException == (intptr_t)nova_null ? 1 : throwException);
	spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid type '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((type)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this), throwException);
}

nova_Nova_String* spectra_tree_nodes_Nova_Value_Nova_writeType(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_Type_Nova_toNova(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_Value_Nova_arrayAccess) != (spectra_tree_nodes_arrays_Nova_ArrayAccess*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_Value_Nova_arrayAccess), exceptionData) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_Nova_cloneTo(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* other)
{
	spectra_tree_nodes_Nova_Node_Nova_cloneTo(((spectra_tree_nodes_Nova_Node*)this), exceptionData, (spectra_tree_nodes_Nova_Node*)(other));
	other->spectra_tree_nodes_Nova_Value_Nova_arrayAccess = this->spectra_tree_nodes_Nova_Value_Nova_arrayAccess;
	spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(other, exceptionData, spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData));
	return other;
}

char spectra_tree_nodes_Nova_Value_Nova_lambda58(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context1* context)
{
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	spectra_tree_nodes_Nova_Type* nova_local_1 = (spectra_tree_nodes_Nova_Type*)nova_null;
	
	return (char)((nova_local_0 = spectra_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData)) != (nova_Nova_String*)nova_null ? (nova_Nova_String_Nova_equals(nova_local_0, exceptionData, (nova_Nova_String*)((nova_local_1 = this->spectra_tree_nodes_Nova_Value_Nova_type) != (spectra_tree_nodes_Nova_Type*)nova_null ? (nova_Nova_Object*)(nova_local_1->spectra_tree_nodes_Nova_Type_Nova_name) : (nova_Nova_Object*)nova_null))) : 0);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_Nova_Value_Accessor_Nova_returnedNode(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Accessible*)this;
}


spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_Value_Nova_type;
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* value)
{
	this->spectra_tree_nodes_Nova_Value_Nova_type = value;
	return value;
}

char spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_Class_Nova_isOfType(this->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance));
}


spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Value_Accessor_Nova_typeClass(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1* contextArg58 = NOVA_MALLOC(sizeof(Context1));
	spectra_tree_nodes_Nova_Import* nova_local_0 = (spectra_tree_nodes_Nova_Import*)nova_null;
	
	return (spectra_tree_nodes_Nova_ClassDeclaration*)((nova_local_0 = (spectra_tree_nodes_Nova_Import*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_Value_Nova_lambda58, this, contextArg58))) != (spectra_tree_nodes_Nova_Import*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_Nova_Value_Accessor_Nova_isPrimitiveType(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Type_virtual_Accessor_Nova_isPrimitiveType((spectra_tree_nodes_Nova_Type*)(spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData)), exceptionData);
}


void spectra_tree_nodes_Nova_Value_Nova_super(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Value_Nova_arrayAccess = (spectra_tree_nodes_arrays_Nova_ArrayAccess*)nova_null;
	this->spectra_tree_nodes_Nova_Value_Nova_type = (spectra_tree_nodes_Nova_Type*)nova_null;
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_Value_virtual0_static_Nova_parse(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	return this->vtable->spectra_tree_nodes_Nova_Value_virtual0_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_Nova_Value_virtual_Nova_parseType(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return this->vtable->spectra_tree_nodes_Nova_Value_virtual_Nova_parseType((spectra_tree_nodes_Nova_Value*)(this), exceptionData, input);
}

nova_Nova_String* spectra_tree_nodes_Nova_Value_virtual_Nova_writeType(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Value_virtual_Nova_writeType((spectra_tree_nodes_Nova_Value*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable(spectra_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable((spectra_tree_nodes_Nova_Value*)(this), exceptionData);
}

