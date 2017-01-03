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
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AbstractAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_AutoPureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_FinalAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_ImmutableAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_ImpureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_NativeAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_OverrideAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PrivateAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PublicAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_PureAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_StaticAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_TargetAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VarAnnotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibleAnnotation.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void spectra_tree_nodes_annotations_Nova_Annotation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_Nova_construct(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_Annotation, this,);
	this->vtable = &spectra_tree_nodes_annotations_Annotation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_Annotation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_Annotation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_Annotation_Nova_destroy(spectra_tree_nodes_annotations_Nova_Annotation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_Annotation_Nova_this(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_parse(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_0_Nova_startsWith(input, exceptionData, '['))
	{
		int l2_Nova_end = 0;
		
		l2_Nova_end = spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, 0, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_end > 1)
		{
			nova_Nova_Object* l3_Nova_node = (nova_Nova_Object*)nova_null;
			nova_Nova_String* l3_Nova_contents = (nova_Nova_String*)nova_null;
			spectra_util_Nova_Bounds* l3_Nova_bounds = (spectra_util_Nova_Bounds*)nova_null;
			nova_Nova_String* l3_Nova_type = (nova_Nova_String*)nova_null;
			nova_Nova_String* l3_Nova_parameters = (nova_Nova_String*)nova_null;
			
			l3_Nova_node = (nova_Nova_Object*)nova_null;
			l3_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, 1, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			l3_Nova_bounds = spectra_util_Nova_CompilerStringFunctions_0_Nova_nextWordBounds(l3_Nova_contents, exceptionData, (intptr_t)nova_null);
			l3_Nova_type = spectra_util_Nova_CompilerStringFunctions_Nova_substring(l3_Nova_contents, exceptionData, l3_Nova_bounds);
			l3_Nova_parameters = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l3_Nova_contents), exceptionData, l3_Nova_bounds->spectra_util_Nova_Bounds_Nova_end, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
			{
				l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_OverrideAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
				if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
				{
					l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_NativeAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
					if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
					{
						l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_AbstractAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
						if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
						{
							l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_FinalAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
							if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
							{
								l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_PublicAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
								if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
								{
									l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_VisibleAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
									if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
									{
										l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_PrivateAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
										if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
										{
											l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_StaticAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
											if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
											{
												l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_ImmutableAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
												if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
												{
													l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_PureAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
													if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
													{
														l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_ImpureAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
														if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
														{
															l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_VarAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
															if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
															{
																l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_TargetAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
																if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
																{
																	l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
																	if (((l3_Nova_node)) == (nova_Nova_Object*)nova_null)
																	{
																		l3_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_annotations_Nova_AutoPureAnnotation_static_Nova_parse(0, exceptionData, l3_Nova_type, l3_Nova_parameters, parent, location, require));
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
			return (spectra_tree_nodes_annotations_Nova_Annotation*)l3_Nova_node;
		}
	}
	return (spectra_tree_nodes_annotations_Nova_Annotation*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_getRemainingStatement(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, 0, '[', ']', (intptr_t)nova_null, (intptr_t)nova_null) + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

char spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* appliedTo, int throwError)
{
	throwError = (int)(throwError == (intptr_t)nova_null ? 1 : throwError);
	return 1;
}

void spectra_tree_nodes_annotations_Nova_Annotation_Nova_super(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

