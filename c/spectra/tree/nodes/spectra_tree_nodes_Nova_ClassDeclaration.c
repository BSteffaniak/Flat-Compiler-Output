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
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_FieldDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_ArrayBracketOverload.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_BodyFunction.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Abstractable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_ClassDeclaration_Nova_name;
	/* Array<Value> argumentTypes = null */ nova_datastruct_list_Nova_Array** spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;
typedef struct
{
} Context5;
typedef struct
{
} Context6;
typedef struct
{
} Context7;
typedef struct
{
} Context8;
typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_ClassDeclaration_Nova_name;
} Context9;
typedef struct
{
} Context10;
typedef struct
{
} Context11;
typedef struct
{
} Context12;


spectra_tree_nodes_ClassDeclaration_Extension_VTable spectra_tree_nodes_ClassDeclaration_Extension_VTable_val =
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
		(char(*)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, char))spectra_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract,
		(char(*)(spectra_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_isAbstract,
		0,
		0,
		(void(*)(spectra_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_annotations_Nova_Annotation*))spectra_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*))spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_genericParameters,
		(nova_datastruct_list_Nova_Array*(*)(spectra_tree_nodes_generics_Nova_GenericCompatible*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Array*))spectra_tree_nodes_Nova_ClassDeclaration_Mutatorfunc_Nova_genericParameters,
		0,
	},
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_addChild,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseStatement,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_generateTemporaryScopeNode,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_cloneTo,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_replace,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders,
	spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_toNova,
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_writeNova,
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
	spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass,
	spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
	spectra_tree_nodes_Nova_ClassDeclaration_static_Nova_parse,
	spectra_tree_nodes_Nova_Value_Nova_parseType,
	spectra_tree_nodes_Nova_Value_Nova_writeType,
	spectra_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	spectra_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier,
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers,
	spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPublic,
	spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPrivate,
};



char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int index, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int nameEndIndex, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* extension, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* implementations, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda27(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* func, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda28(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda29(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda30(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context4* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda31(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context5* context);
nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda36(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda37(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda38(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda112(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, Context9* context);
spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda113(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda114(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* _1, Context11* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda115(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context12* context);





void spectra_tree_nodes_Nova_ClassDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ClassDeclaration, this,);
	this->vtable = &spectra_tree_nodes_ClassDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ClassDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ClassDeclaration_Nova_destroy(spectra_tree_nodes_Nova_ClassDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	spectra_tree_nodes_Nova_Type_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_genericParameters, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions, exceptionData);
	spectra_tree_nodes_variables_Nova_ArrayBracketOverload_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ClassDeclaration_Nova_this(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
}

void spectra_tree_nodes_Nova_ClassDeclaration_Nova_addChild(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_variables_Nova_FieldDeclaration*)child));
	}
	else if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)child));
	}
	else if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_variables_ArrayBracketOverload_Extension_VTable_val.classInstance)))
	{
		if ((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload) == (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)nova_null)
		{
			this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload = (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)child;
		}
		else
		{
			spectra_Nova_SyntaxErrorException_1_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Array bracket overload already declared for class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), child, 0);
		}
	}
	else
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Statement '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' used in wrong context")))))), child, (intptr_t)nova_null);
	}
	spectra_tree_nodes_Nova_Node_Nova_addChild((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData, child);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_replace(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement)
{
	return nova_Nova_Class_Nova_isOfType(toReplace->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance)) && (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_variables_Nova_FieldDeclaration*)toReplace), (nova_Nova_Object*)((spectra_tree_nodes_variables_Nova_FieldDeclaration*)replacement))) != (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null || nova_Nova_Class_Nova_isOfType(toReplace->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance)) && (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)toReplace), (nova_Nova_Object*)((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)replacement))) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclaration_Nova_findCompatibleFunctions(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, nova_datastruct_list_Nova_Array* argumentTypes)
{
	Context1* contextArg27 = NOVA_MALLOC(sizeof(Context1));
	contextArg27->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name = &name;
	contextArg27->spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes = &argumentTypes;
	
	argumentTypes = (nova_datastruct_list_Nova_Array*)(argumentTypes == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)argumentTypes);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda27, this, contextArg27);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	return spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration(this, exceptionData, name, searchAncestors, 1);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors, int searchExtensions)
{
	spectra_tree_nodes_variables_Nova_FieldDeclaration* l1_Nova_field = (spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null;
	Context9* contextArg112 = NOVA_MALLOC(sizeof(Context9));
	contextArg112->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name = &name;
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	searchExtensions = (int)(searchExtensions == (intptr_t)nova_null ? 1 : searchExtensions);
	l1_Nova_field = (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda112, this, contextArg112));
	if ((l1_Nova_field) != (spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null)
	{
		return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_field;
	}
	if (searchExtensions)
	{
	}
	return spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData, name, searchAncestors);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseStatement(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_node = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (spectra_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_Constructor_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
		if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
		{
			l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_functions_Nova_BodyFunction_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
			if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
			{
				l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
				if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
				{
					l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_variables_Nova_ArrayBracketOverload_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
				}
			}
		}
	}
	return l1_Nova_node;
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ClassDeclaration_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Node*)spectra_tree_nodes_functions_Nova_BodyFunction_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_static_Nova_parse(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_index = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index >= 0)
	{
		spectra_tree_nodes_Nova_ClassDeclaration* l2_Nova_node = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
		int l2_Nova_nameStartIndex = 0;
		int l2_Nova_nameEndIndex = 0;
		
		l2_Nova_node = spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct(0, exceptionData, parent, location);
		if (!spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(l2_Nova_node, exceptionData, input, l1_Nova_index, require))
		{
			return (spectra_tree_nodes_Nova_ClassDeclaration*)(nova_Nova_Object*)nova_null;
		}
		l2_Nova_nameStartIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, l1_Nova_index + 6, (intptr_t)nova_null, (intptr_t)nova_null);
		l2_Nova_nameEndIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(input, exceptionData, l2_Nova_nameStartIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_nameStartIndex < l2_Nova_nameEndIndex)
		{
			nova_Nova_String* l4_Nova_name = (nova_Nova_String*)nova_null;
			
			l4_Nova_name = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_nameStartIndex, l2_Nova_nameEndIndex));
			if (!spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(l2_Nova_node), exceptionData, l4_Nova_name, (intptr_t)nova_null))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse generic parameters for class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l4_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else if (!spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(l2_Nova_node, exceptionData, l4_Nova_name, require))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse name for class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else if (!spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(l2_Nova_node, exceptionData, input, l2_Nova_nameEndIndex, require))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse inheritence for class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else
			{
				return l2_Nova_node;
			}
		}
	}
	else if (require)
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid class declaration '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), parent, (intptr_t)nova_null);
	}
	return (spectra_tree_nodes_Nova_ClassDeclaration*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int index, char require)
{
	nova_Nova_String* l1_Nova_modifiers = (nova_Nova_String*)nova_null;
	
	l1_Nova_modifiers = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	if (!spectra_tree_nodes_variables_Nova_VariableDeclaration_0_Nova_parseModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, l1_Nova_modifiers))
	{
		nova_datastruct_list_Nova_Array* l2_Nova_invalid = (nova_datastruct_list_Nova_Array*)nova_null;
		
		l2_Nova_invalid = spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, l1_Nova_modifiers);
		spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid modifier")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l2_Nova_invalid), exceptionData) != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("s")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l2_Nova_invalid), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', '")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
		return 0;
	}
	return 1;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, char require)
{
	if (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_genericParameters(this, exceptionData)), exceptionData) > 0)
	{
		name = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(name), exceptionData, (intptr_t)nova_null, nova_Nova_String_1_Nova_indexOf(name, exceptionData, '<', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null)), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(name, exceptionData))
	{
		this->spectra_tree_nodes_Nova_Identifier_Nova_name = name;
		spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData, spectra_tree_nodes_Nova_Type_Nova_construct(0, exceptionData, name));
	}
	else
	{
		spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid class name '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
		return 0;
	}
	return 1;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int nameEndIndex, char require)
{
	nova_Nova_String* l1_Nova_extension = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_implementations = (nova_Nova_String*)nova_null;
	int l1_Nova_implementsIndex = 0;
	
	l1_Nova_extension = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, nameEndIndex + 1, (intptr_t)nova_null, input->nova_Nova_String_Nova_count), (intptr_t)nova_null));
	l1_Nova_implementations = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_implementsIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(l1_Nova_extension, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_implementsIndex >= 0)
	{
		l1_Nova_implementations = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_extension), exceptionData, l1_Nova_implementsIndex, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l1_Nova_extension = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_extension), exceptionData, (intptr_t)nova_null, l1_Nova_implementsIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(this, exceptionData, l1_Nova_extension, require) && spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(this, exceptionData, l1_Nova_implementations, require);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* extension, char require)
{
	if (nova_Nova_String_2_Nova_startsWith(extension, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends\\s+")))))
	{
		extension = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(extension), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, extension, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null);
		if (!spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData))
		{
			spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Extended class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((extension), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' is not a valid type")))))), (spectra_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
			return 0;
		}
		return 1;
	}
	return extension->nova_Nova_String_Nova_count == 0;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* implementations, char require)
{
	if (nova_Nova_String_2_Nova_startsWith(implementations, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements\\s+")))))
	{
		Context10* contextArg113 = NOVA_MALLOC(sizeof(Context10));
		Context11* contextArg114 = NOVA_MALLOC(sizeof(Context11));
		
		this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(implementations), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, 1, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda113, this, contextArg113));
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_anyFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda114, this, contextArg114))
		{
			nova_datastruct_list_Nova_Array* l3_Nova_invalid = (nova_datastruct_list_Nova_Array*)nova_null;
			Context12* contextArg115 = NOVA_MALLOC(sizeof(Context12));
			
			l3_Nova_invalid = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda115, this, contextArg115));
			spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid interface type")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l3_Nova_invalid), exceptionData) != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("s")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l3_Nova_invalid), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', '")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
			return 0;
		}
		return 1;
	}
	return implementations->nova_Nova_String_Nova_count == 0;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	if (spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData, modifier))
	{
		return 1;
	}
	if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract"))))
	{
		spectra_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract(this, exceptionData, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2* contextArg28 = NOVA_MALLOC(sizeof(Context2));
	Context3* contextArg29 = NOVA_MALLOC(sizeof(Context3));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda28, this, contextArg28, 0) & nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda29, this, contextArg29, 0);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4* contextArg30 = NOVA_MALLOC(sizeof(Context4));
	Context5* contextArg31 = NOVA_MALLOC(sizeof(Context5));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda30, this, contextArg30, 0) & nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure16_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda31, this, contextArg31, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace((nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers(this, exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" class ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Identifier_Nova_name), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(this, exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))))))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData), exceptionData, spectra_tree_nodes_Nova_Abstractable_Nova_writeAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass) != (spectra_tree_nodes_Nova_Type*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData) > 0 ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload) != (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload), exceptionData) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_toNova(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context6* contextArg36 = NOVA_MALLOC(sizeof(Context6));
	Context7* contextArg37 = NOVA_MALLOC(sizeof(Context7));
	
	return nova_Nova_String_Nova_trim((nova_Nova_String*)((nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(this, exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" {\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload(this, exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_Nova_trim((nova_Nova_String*)((nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda36, this, contextArg36)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda37, this, contextArg37)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("}"))))))))))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_toString(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(this, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_cloneTo(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* other)
{
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData, (spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(other));
	spectra_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo(((spectra_tree_nodes_generics_Nova_GenericCompatible*)this), exceptionData, (spectra_tree_nodes_generics_Nova_GenericCompatible*)(other));
	spectra_tree_nodes_Nova_Abstractable_0_Nova_cloneTo(((spectra_tree_nodes_Nova_Abstractable*)this), exceptionData, (spectra_tree_nodes_Nova_Abstractable*)(other));
	other->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass;
	other->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces;
	other->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields = this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields;
	other->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions = this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions;
	other->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload = this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload;
	return other;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda27(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* func, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_Nova_String_Nova_equals(func->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name)) && (((*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes)) == (nova_datastruct_list_Nova_Array*)nova_null || spectra_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments((spectra_tree_nodes_functions_Nova_CallableFunction*)(func), exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes)));
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda28(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda29(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda30(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context4* context)
{
	return spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_parsePlaceholders(_1, exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda31(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context5* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda36(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda37(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda38(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
	return nova_Nova_Class_Nova_isOfType(_1->vtable->classInstance, exceptionData, (nova_Nova_Class*)(spectra_tree_nodes_functions_Constructor_Extension_VTable_val.classInstance));
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda112(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, Context9* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name));
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda113(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context)
{
	return spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, _1, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda114(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* _1, Context11* context)
{
	return !spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(_1->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda115(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context12* context)
{
	return !spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(_1->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->spectra_tree_nodes_Nova_Package_Nova_location) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->spectra_tree_nodes_Nova_Package_Nova_location, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), exceptionData, this->spectra_tree_nodes_Nova_Identifier_Nova_name))) : this->spectra_tree_nodes_Nova_Identifier_Nova_name);
}


char spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_isAbstract(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract = value;
	return value;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_genericParameters(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_genericParameters;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclaration_Mutatorfunc_Nova_genericParameters(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_genericParameters = value;
	return value;
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_constructors(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context8* contextArg38 = NOVA_MALLOC(sizeof(Context8));
	
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda38, this, contextArg38)), exceptionData);
}


char spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPrivate(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility->nova_Nova_String_Nova_count > 0 && spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData);
}


char spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPublic(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility->nova_Nova_String_Nova_count == 0 || spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData);
}


void spectra_tree_nodes_Nova_ClassDeclaration_Nova_super(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract = 0;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = (spectra_tree_nodes_Nova_Type*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_genericParameters = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload = (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

