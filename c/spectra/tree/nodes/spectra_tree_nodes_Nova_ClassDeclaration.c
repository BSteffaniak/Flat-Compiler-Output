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
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Abstractable.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Abstractable.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericCompatible.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_ClassDeclaration_Nova_name;
	/* Array<Value> argumentTypes = null */ nova_datastruct_list_Nova_Array** spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes;
} Context33;
typedef struct
{
} Context34;
typedef struct
{
} Context35;
typedef struct
{
} Context36;
typedef struct
{
} Context37;
typedef struct
{
} Context42;
typedef struct
{
} Context43;
typedef struct
{
} Context44;
typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_ClassDeclaration_Nova_name;
} Context119;
typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_ClassDeclaration_Nova_name;
} Context120;
typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_ClassDeclaration_Nova_name;
} Context121;
typedef struct
{
} Context122;
typedef struct
{
} Context123;
typedef struct
{
} Context124;



char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int index, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int nameEndIndex, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* extension, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* implementations, char require);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda34(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* func, int _2, nova_datastruct_list_Nova_Array* _3, Context33* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda35(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context34* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda36(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context35* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda37(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context36* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda38(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context37* context);
nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda43(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context42* context);
nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda44(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context43* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda45(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context44* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda120(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, Context119* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda121(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, Context120* context);
spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda122(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* _1, Context121* context);
spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda123(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context122* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda124(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* i, Context123* context);
char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda125(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* i, int _2, nova_datastruct_list_Nova_Array* _3, Context124* context);






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
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions, exceptionData);
	spectra_tree_nodes_variables_Nova_ArrayBracketOverload_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload, exceptionData);
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ClassDeclaration_Nova_genericParameters, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ClassDeclaration_Nova_this(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
	spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData, nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null));
}

void spectra_tree_nodes_Nova_ClassDeclaration_Nova_addChild(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(child->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_Nova_Object*)(child));
	}
	else if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(child->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_Nova_Object*)(child));
	}
	else if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(child->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_variables_ArrayBracketOverload_Extension_VTable_val.classInstance)))
	{
		if ((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload) == (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)nova_null)
		{
			this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload = (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)(child);
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
	return nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(toReplace->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance)) && (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_variables_Nova_FieldDeclaration*)toReplace), (nova_Nova_Object*)((spectra_tree_nodes_variables_Nova_FieldDeclaration*)replacement))) != (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null || nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(toReplace->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance)) && (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)toReplace), (nova_Nova_Object*)((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)replacement))) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclaration_Nova_findCompatibleFunctions(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, nova_datastruct_list_Nova_Array* argumentTypes)
{
	Context33* contextArg34 = NOVA_MALLOC(sizeof(Context33));
	contextArg34->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name = &name;
	contextArg34->spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes = &argumentTypes;
	
	argumentTypes = (nova_datastruct_list_Nova_Array*)(argumentTypes == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)argumentTypes);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda34, this, contextArg34);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	return spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration(this, exceptionData, name, searchAncestors, 1);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors, int searchExtensions)
{
	spectra_tree_nodes_variables_Nova_FieldDeclaration* l1_Nova_field = (spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null;
	Context119* contextArg120 = NOVA_MALLOC(sizeof(Context119));
	contextArg120->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name = &name;
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	searchExtensions = (int)(searchExtensions == (intptr_t)nova_null ? 1 : searchExtensions);
	l1_Nova_field = (spectra_tree_nodes_variables_Nova_FieldDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure316_Nova_func)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda120, this, contextArg120));
	if ((l1_Nova_field) != (spectra_tree_nodes_variables_Nova_FieldDeclaration*)nova_null)
	{
		return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_field;
	}
	if (searchExtensions)
	{
	}
	return spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData, name, searchAncestors);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_findFunction(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	spectra_tree_nodes_functions_Nova_FunctionDeclaration* l1_Nova_function = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
	Context120* contextArg121 = NOVA_MALLOC(sizeof(Context120));
	contextArg121->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name = &name;
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	if ((l1_Nova_function = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure316_Nova_func)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda121, this, contextArg121))) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
	{
		return l1_Nova_function;
	}
	if (searchAncestors)
	{
		Context121* contextArg122 = NOVA_MALLOC(sizeof(Context121));
		contextArg122->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name = &name;
		spectra_tree_nodes_Nova_Type* nova_local_0 = (spectra_tree_nodes_Nova_Type*)nova_null;
		spectra_tree_nodes_Nova_ClassDeclaration* nova_local_1 = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
		
		if ((l1_Nova_function = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)((nova_local_0 = this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass) != (spectra_tree_nodes_Nova_Type*)nova_null ? (nova_Nova_Object*)((spectra_tree_nodes_functions_Nova_FunctionDeclaration*)((nova_local_1 = spectra_tree_nodes_Nova_Type_Nova_getClass(nova_local_0, exceptionData, spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData))) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_ClassDeclaration_Nova_findFunction(nova_local_1, exceptionData, name, (intptr_t)nova_null)) : (nova_Nova_Object*)nova_null)) : (nova_Nova_Object*)nova_null)) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
		{
			return l1_Nova_function;
		}
		else if ((l1_Nova_function = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_datastruct_list_Nova_List_Nova_firstNonNull((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure320_Nova_func)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda122, this, contextArg122))) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
		{
			return l1_Nova_function;
		}
	}
	return (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_Nova_Object*)nova_null;
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
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_ClassDeclaration_0_static_Nova_parse(0, exceptionData, input, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class")), parent, location, require);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_0_static_Nova_parse(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_Nova_String* identifier, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l2_Nova_index = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if ((l2_Nova_index = spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, identifier, (intptr_t)nova_null, (intptr_t)nova_null)) >= 0)
	{
		spectra_tree_nodes_Nova_ClassDeclaration* l2_Nova_node = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
		int l2_Nova_nameStartIndex = 0;
		int l2_Nova_nameEndIndex = 0;
		
		l2_Nova_node = spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct(0, exceptionData, parent, location);
		if (!spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(l2_Nova_node, exceptionData, input, l2_Nova_index, require))
		{
			return (spectra_tree_nodes_Nova_ClassDeclaration*)(nova_Nova_Object*)nova_null;
		}
		l2_Nova_nameStartIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, l2_Nova_index + identifier->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null, (intptr_t)nova_null);
		l2_Nova_nameEndIndex = spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(input, exceptionData, l2_Nova_nameStartIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_nameStartIndex < l2_Nova_nameEndIndex)
		{
			nova_Nova_String* l4_Nova_name = (nova_Nova_String*)nova_null;
			
			l4_Nova_name = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_nameStartIndex, l2_Nova_nameEndIndex));
			if (!spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(l2_Nova_node), exceptionData, l4_Nova_name, (intptr_t)nova_null))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse generic parameters for ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((identifier), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l4_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else if (!spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(l2_Nova_node, exceptionData, l4_Nova_name, require))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse name for ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((identifier), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else if (!spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(l2_Nova_node, exceptionData, input, l2_Nova_nameEndIndex, require))
			{
				THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse inheritence for ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((identifier), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
			}
			else
			{
				return l2_Nova_node;
			}
		}
	}
	else if (require)
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((identifier), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" declaration '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), parent, (intptr_t)nova_null);
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
		spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid modifier")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l2_Nova_invalid), exceptionData) != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("s")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l2_Nova_invalid), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', '")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
		return 0;
	}
	return 1;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, char require)
{
	if (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData) > 0)
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
		this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = (spectra_tree_nodes_Nova_Type*)(spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, extension, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null));
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
		Context122* contextArg123 = NOVA_MALLOC(sizeof(Context122));
		Context123* contextArg124 = NOVA_MALLOC(sizeof(Context123));
		
		this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(implementations), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, 1, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda123, this, contextArg123));
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure296_Nova_anyFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda124, this, contextArg124))
		{
			nova_datastruct_list_Nova_Array* l3_Nova_invalid = (nova_datastruct_list_Nova_Array*)nova_null;
			Context124* contextArg125 = NOVA_MALLOC(sizeof(Context124));
			
			l3_Nova_invalid = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda125, this, contextArg125));
			spectra_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid interface type")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l3_Nova_invalid), exceptionData) != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("s")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l3_Nova_invalid), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', '")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
			return 0;
		}
		return 1;
	}
	return implementations->nova_Nova_String_Nova_count == 0;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	if (spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifier((spectra_tree_nodes_variables_Nova_VariableDeclaration*)(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData, modifier))
	{
		return 1;
	}
	if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract"))))
	{
		spectra_tree_nodes_Nova_Abstractable_virtual_Mutator_Nova_isAbstract((spectra_tree_nodes_Nova_Abstractable*)(this), exceptionData, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context34* contextArg35 = NOVA_MALLOC(sizeof(Context34));
	Context35* contextArg36 = NOVA_MALLOC(sizeof(Context35));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda35, this, contextArg35, 0) & nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda36, this, contextArg36, 0);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context36* contextArg37 = NOVA_MALLOC(sizeof(Context36));
	Context37* contextArg38 = NOVA_MALLOC(sizeof(Context37));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda37, this, contextArg37, 0) & nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda38, this, contextArg38, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace((nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_virtual_Accessor_Nova_identifier((spectra_tree_nodes_Nova_ClassDeclaration*)(this), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Identifier_Nova_name), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters((spectra_tree_nodes_generics_Nova_GenericCompatible*)(this), exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(this, exceptionData)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))))))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass) != (spectra_tree_nodes_Nova_Type*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData) > 0 ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload) != (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload), exceptionData) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_toNova(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context42* contextArg43 = NOVA_MALLOC(sizeof(Context42));
	Context43* contextArg44 = NOVA_MALLOC(sizeof(Context43));
	
	return nova_Nova_String_Nova_trim((nova_Nova_String*)((nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(this, exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" {\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload(this, exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_Nova_trim((nova_Nova_String*)((nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda43, this, contextArg43)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda44, this, contextArg44)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("}"))))))))))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
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

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda34(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* func, int _2, nova_datastruct_list_Nova_Array* _3, Context33* context)
{
	return nova_Nova_String_Nova_equals(func->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name)) && (((*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes)) == (nova_datastruct_list_Nova_Array*)nova_null || spectra_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments((spectra_tree_nodes_functions_Nova_CallableFunction*)(func), exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes)));
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda35(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context34* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda36(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context35* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda37(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context36* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda38(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context37* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda43(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context42* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda44(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context43* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda45(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context44* context)
{
	return nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(_1->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_functions_Constructor_Extension_VTable_val.classInstance));
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda120(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_FieldDeclaration* _1, Context119* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name));
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda121(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, Context120* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name));
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda122(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* _1, Context121* context)
{
	spectra_tree_nodes_Nova_ClassDeclaration* nova_local_0 = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
	
	return (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)((nova_local_0 = spectra_tree_nodes_Nova_Type_Nova_getClass(_1, exceptionData, spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData))) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_ClassDeclaration_Nova_findFunction(nova_local_0, exceptionData, (*context->spectra_tree_nodes_Nova_ClassDeclaration_Nova_name), (intptr_t)nova_null)) : (nova_Nova_Object*)nova_null);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda123(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context122* context)
{
	return spectra_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, _1, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda124(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* i, Context123* context)
{
	return (i) == (spectra_tree_nodes_Nova_Type*)nova_null || !spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(i->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda125(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Type* i, int _2, nova_datastruct_list_Nova_Array* _3, Context124* context)
{
	return (i) != (spectra_tree_nodes_Nova_Type*)nova_null && !spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(i->spectra_tree_nodes_Nova_Type_Nova_name, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_identifier(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class"));
}


spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->spectra_tree_nodes_Nova_Package_Nova_location) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->spectra_tree_nodes_Nova_Package_Nova_location, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), exceptionData, this->spectra_tree_nodes_Nova_Identifier_Nova_name))) : this->spectra_tree_nodes_Nova_Identifier_Nova_name);
}


nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_constructors(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context44* contextArg45 = NOVA_MALLOC(sizeof(Context44));
	
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_Nova_ClassDeclaration_Nova_lambda45, this, contextArg45)), exceptionData);
}


char spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPrivate(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility->nova_Nova_String_Nova_count > 0 && spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPrivate(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData);
}


char spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPublic(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_visibility->nova_Nova_String_Nova_count == 0 || spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isPublic(((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData);
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

void spectra_tree_nodes_Nova_ClassDeclaration_Nova_super(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = (spectra_tree_nodes_Nova_Type*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload = (spectra_tree_nodes_variables_Nova_ArrayBracketOverload*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract = 0;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_genericParameters = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclaration_virtual_Accessor_Nova_identifier(spectra_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_ClassDeclaration_virtual_Accessor_Nova_identifier((spectra_tree_nodes_Nova_ClassDeclaration*)(this), exceptionData);
}


char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseModifiers(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* input, int index, char require);
char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseName(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* name, char require);
char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseInheritence(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* input, int nameEndIndex, char require);
char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseExtension(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* extension, char require);
char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseImplementations(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* implementations, char require);
void spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_ClassDeclaration_ClassDeclarationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_this(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMapClassDeclarationFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct(0, exceptionData, parent, location);
}

void spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, spectra_tree_nodes_Nova_Node* child)
{
	spectra_tree_nodes_Nova_ClassDeclaration_Nova_addChild(reference, exceptionData, child);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_replace(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_replace(reference, exceptionData, toReplace, replacement);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_findCompatibleFunctions(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* name, nova_datastruct_list_Nova_Array* argumentTypes)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_findCompatibleFunctions(reference, exceptionData, name, argumentTypes);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* name, char searchAncestors)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration(reference, exceptionData, name, searchAncestors);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap0_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* name, char searchAncestors, char searchExtensions)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration(reference, exceptionData, name, searchAncestors, searchExtensions);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_findFunction(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* name, char searchAncestors)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_findFunction(reference, exceptionData, name, searchAncestors);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseStatement(reference, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_generateTemporaryScopeNode(reference, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap0_static_Nova_parse(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_Nova_String* identifier, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_0_static_Nova_parse(0, exceptionData, input, identifier, parent, location, require);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseModifiers(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* input, int index, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(reference, exceptionData, input, index, require);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseName(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* name, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseName(reference, exceptionData, name, require);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseInheritence(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* input, int nameEndIndex, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(reference, exceptionData, input, nameEndIndex, require);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseExtension(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* extension, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(reference, exceptionData, extension, require);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseImplementations(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* implementations, char require)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(reference, exceptionData, implementations, require);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parseModifier(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, nova_Nova_String* modifier)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier(reference, exceptionData, modifier);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_validateTypes(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes(reference, exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_parsePlaceholders(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_writeHeader(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_writeExtension(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_writeImplementedInterfaces(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_writeArrayBracketOverload(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_toNova(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_toNova(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_toString(reference, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference, spectra_tree_nodes_Nova_ClassDeclaration* other)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_super(spectra_tree_nodes_Nova_ClassDeclarationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_construct(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_ClassDeclaration_ClassDeclarationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierPropertyMap_Nova_super((spectra_tree_nodes_Nova_IdentifierPropertyMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclarationPropertyMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclarationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_InstanceDeclarationPropertyMap_Nova_super((spectra_tree_nodes_variables_Nova_InstanceDeclarationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_destroy(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_this(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_identifier(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_identifier(reference, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_parentClass(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_location(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(reference, exceptionData);
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_extendedClass(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return reference->spectra_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_implementedInterfaces(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return reference->spectra_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_fields(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return reference->spectra_tree_nodes_Nova_ClassDeclaration_Nova_fields;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_functions(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return reference->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions;
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_constructors(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_constructors(reference, exceptionData);
}

spectra_tree_nodes_variables_Nova_ArrayBracketOverload* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_arrayBracketOverload(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return reference->spectra_tree_nodes_Nova_ClassDeclaration_Nova_arrayBracketOverload;
}

char spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_isPrivate(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPrivate(reference, exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_isPublic(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPublic(reference, exceptionData);
}

char spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_isAbstract(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_isAbstract(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_functionMap_Nova_genericParameters(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return (nova_datastruct_list_Nova_Array*)spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_genericParameters(reference, exceptionData);
}

void spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_Nova_super(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_virtualfunctionMap_Nova_identifier(spectra_tree_nodes_Nova_ClassDeclarationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_ClassDeclarationPropertyMap_virtualfunctionMap_Nova_identifier(this, exceptionData, reference);
}

