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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
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
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
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
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* var
	String type */ nova_Nova_String** spectra_tree_nodes_annotations_Nova_Annotation_Nova_type;
	/* var
	String parameters */ nova_Nova_String** spectra_tree_nodes_annotations_Nova_Annotation_Nova_parameters;
	/* Node parent = null */ spectra_tree_nodes_Nova_Node** spectra_tree_nodes_annotations_Nova_Annotation_Nova_parent;
	/* Location location = Location.INVALID */ spectra_util_Nova_Location** spectra_tree_nodes_annotations_Nova_Annotation_Nova_location;
	/* Bool require = true */ int* spectra_tree_nodes_annotations_Nova_Annotation_Nova_require;
} Context132;
typedef struct
{
} Context133;
typedef struct
{
	/* let
	Array<Class<Annotation>, Class<Annotation>, Class<Annotation>> array */ nova_datastruct_list_Nova_Array** spectra_tree_nodes_annotations_Nova_Annotation_Nova_array;
} Context134;



spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda133(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, Context132* context);
char spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda134(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context133* context);
void spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda135(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context134* context);


nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_Annotation_Nova_ANNOTATIONS;
void spectra_tree_nodes_annotations_Nova_Annotation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
		nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
		Context133* contextArg134 = NOVA_MALLOC(sizeof(Context133));
		Context134* contextArg135 = NOVA_MALLOC(sizeof(Context134));
		contextArg135->spectra_tree_nodes_annotations_Nova_Annotation_Nova_array = &l1_Nova_array;
		
		l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_meta_Nova_Class_Nova_ALL), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda134, nova_null, contextArg134)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda135, nova_null, contextArg135);
		spectra_tree_nodes_annotations_Nova_Annotation_Nova_ANNOTATIONS = nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData);
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

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_0_static_Nova_parse(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
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
			nova_Nova_String* l3_Nova_contents = (nova_Nova_String*)nova_null;
			spectra_util_Nova_Bounds* l3_Nova_bounds = (spectra_util_Nova_Bounds*)nova_null;
			nova_Nova_String* l3_Nova_type = (nova_Nova_String*)nova_null;
			nova_Nova_String* l3_Nova_parameters = (nova_Nova_String*)nova_null;
			Context132* contextArg133 = NOVA_MALLOC(sizeof(Context132));
			contextArg133->spectra_tree_nodes_annotations_Nova_Annotation_Nova_type = &l3_Nova_type;
			contextArg133->spectra_tree_nodes_annotations_Nova_Annotation_Nova_parameters = &l3_Nova_parameters;
			contextArg133->spectra_tree_nodes_annotations_Nova_Annotation_Nova_parent = &parent;
			contextArg133->spectra_tree_nodes_annotations_Nova_Annotation_Nova_location = &location;
			contextArg133->spectra_tree_nodes_annotations_Nova_Annotation_Nova_require = &require;
			
			l3_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, 1, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			l3_Nova_bounds = spectra_util_Nova_CompilerStringFunctions_0_Nova_nextWordBounds(l3_Nova_contents, exceptionData, (intptr_t)nova_null);
			l3_Nova_type = spectra_util_Nova_CompilerStringFunctions_Nova_substring(l3_Nova_contents, exceptionData, l3_Nova_bounds);
			l3_Nova_parameters = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l3_Nova_contents), exceptionData, l3_Nova_bounds->spectra_util_Nova_Bounds_Nova_end, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
			return (spectra_tree_nodes_annotations_Nova_Annotation*)nova_datastruct_list_Nova_List_Nova_firstNonNull((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_annotations_Nova_Annotation_Nova_ANNOTATIONS), exceptionData, (nova_datastruct_list_Nova_List_closure320_Nova_func)&spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda133, nova_null, contextArg133);
		}
	}
	return (spectra_tree_nodes_annotations_Nova_Annotation*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_1_static_Nova_parse(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
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

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Annotation_Nova_writeNova(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_label(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))));
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda133(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, Context132* context)
{
	return spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_virtualfunctionMap1_static_Nova_parse((spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap*)(((spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap*)_1->nova_meta_Nova_Class_Nova_functionMap)), exceptionData, (*context->spectra_tree_nodes_annotations_Nova_Annotation_Nova_type), (*context->spectra_tree_nodes_annotations_Nova_Annotation_Nova_parameters), (*context->spectra_tree_nodes_annotations_Nova_Annotation_Nova_parent), (*context->spectra_tree_nodes_annotations_Nova_Annotation_Nova_location), (*context->spectra_tree_nodes_annotations_Nova_Annotation_Nova_require));
}

char spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda134(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context133* context)
{
	return nova_meta_Nova_Class_Nova_isOfType(_1, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance));
}

void spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_lambda135(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context134* context)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->spectra_tree_nodes_annotations_Nova_Annotation_Nova_array)), exceptionData, (nova_Nova_Object*)(_1));
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_label(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_Nova_String_0_Nova_endsWith(nova_meta_Nova_Class_Accessor_Nova_name((nova_meta_Nova_Class*)(this->vtable->classInstance), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Annotation"))) ? (nova_Nova_Object*)nova_Nova_String_Nova_trimEnd(nova_meta_Nova_Class_Accessor_Nova_name((nova_meta_Nova_Class*)(this->vtable->classInstance), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Annotation"))->nova_Nova_String_Nova_count) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_isModifier(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(this->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance)) && (spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_Nova_alias((spectra_tree_nodes_annotations_Nova_Modifier*)(((spectra_tree_nodes_annotations_Nova_Modifier*)this)), exceptionData)) != (nova_Nova_String*)nova_null;
}


void spectra_tree_nodes_annotations_Nova_Annotation_Nova_super(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_Annotation_virtual1_static_Nova_parse(spectra_tree_nodes_annotations_Nova_Annotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	return this->vtable->spectra_tree_nodes_annotations_Nova_Annotation_virtual1_static_Nova_parse(0, exceptionData, type, parameters, parent, location, require);
}

void spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Annotation_AnnotationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_this(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_functionMapAnnotationFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_functionMap0_static_Nova_parse(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_0_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_functionMap1_static_Nova_parse(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_1_static_Nova_parse(0, exceptionData, type, parameters, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_functionMap_static_Nova_getRemainingStatement(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_getRemainingStatement(0, exceptionData, input);
}

char spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_functionMap_Nova_onApplied(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* reference, spectra_tree_nodes_Nova_Node* appliedTo, char throwError)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied(reference, exceptionData, appliedTo, throwError);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* reference)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_super(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_annotations_Nova_Annotation* spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_virtualfunctionMap1_static_Nova_parse(spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return this->vtable->spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_virtualfunctionMap1_static_Nova_parse(0, exceptionData, type, parameters, parent, location, require);
}

void spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap* spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Annotation_AnnotationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_this(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_functionMap_Nova_label(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* reference)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_label(reference, exceptionData);
}

char spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_functionMap_Nova_isModifier(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* reference)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_isModifier(reference, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_super(spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

