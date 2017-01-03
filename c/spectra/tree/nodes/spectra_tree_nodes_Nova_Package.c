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
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>




char spectra_tree_nodes_Nova_Package_Nova_validateLocation(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_Package_Nova_validateAlias(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData);

nova_datastruct_Nova_HashMap* spectra_tree_nodes_Nova_Package_Nova_filesMap;
void spectra_tree_nodes_Nova_Package_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_Nova_Package_Nova_filesMap = nova_datastruct_Nova_HashMap_0_Nova_construct(0, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	}
}

spectra_tree_nodes_Nova_Package* spectra_tree_nodes_Nova_Package_Nova_construct(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Package, this,);
	this->vtable = &spectra_tree_nodes_Package_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Package_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Package_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Package_Nova_destroy(spectra_tree_nodes_Nova_Package** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Package_Nova_location, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Package_Nova_this(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_Nova_Package* spectra_tree_nodes_Nova_Package_static_Nova_generateDefaultPackage(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_Nova_Package_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_Nova_Package* spectra_tree_nodes_Nova_Package_static_Nova_parse(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("package")), (intptr_t)nova_null, (intptr_t)nova_null) == 0)
	{
		spectra_tree_nodes_Nova_Package* l2_Nova_node = (spectra_tree_nodes_Nova_Package*)nova_null;
		int l2_Nova_quoteStart = 0;
		int l2_Nova_quoteEnd = 0;
		nova_Nova_String* l2_Nova_packageLocation = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_Nova_Package_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_quoteStart = spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("package"))->nova_Nova_String_Nova_count, (intptr_t)nova_null, (intptr_t)nova_null);
		if (l2_Nova_quoteStart < 0 || nova_Nova_String_Nova_get(input, exceptionData, l2_Nova_quoteStart) != '"')
		{
			return (spectra_tree_nodes_Nova_Package*)(nova_Nova_Object*)nova_null;
		}
		l2_Nova_quoteEnd = spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar(input, exceptionData, '"', l2_Nova_quoteStart, (intptr_t)nova_null, 0, 0, 0, (intptr_t)nova_null);
		if (l2_Nova_quoteEnd < 0)
		{
			spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing ending quotation for Package statement")), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node), (intptr_t)nova_null);
		}
		l2_Nova_packageLocation = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l2_Nova_quoteStart + 1, l2_Nova_quoteEnd));
		l2_Nova_node->spectra_tree_nodes_Nova_Package_Nova_location = l2_Nova_packageLocation;
		if (spectra_tree_nodes_Nova_Package_Nova_validateLocation(l2_Nova_node, exceptionData) && spectra_tree_nodes_Nova_Package_Nova_validateAlias(l2_Nova_node, exceptionData))
		{
			nova_datastruct_list_Nova_Array* nova_local_0 = (nova_datastruct_list_Nova_Array*)nova_null;
			
			nova_datastruct_Nova_HashMap_virtual_Nova_add((nova_datastruct_Nova_HashMap*)(spectra_tree_nodes_Nova_Package_Nova_filesMap), exceptionData, (nova_Nova_Object*)(l2_Nova_node->spectra_tree_nodes_Nova_Package_Nova_location), (nova_Nova_Object*)((nova_datastruct_list_Nova_Array*)((nova_local_0 = (nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)(spectra_tree_nodes_Nova_Package_Nova_filesMap), exceptionData, (nova_Nova_Object*)(l2_Nova_node->spectra_tree_nodes_Nova_Package_Nova_location)))) != (nova_datastruct_list_Nova_Array*)nova_null ? nova_local_0 : nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData))));
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)(spectra_tree_nodes_Nova_Package_Nova_filesMap), exceptionData, (nova_Nova_Object*)(l2_Nova_node->spectra_tree_nodes_Nova_Package_Nova_location))), exceptionData, (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(parent), exceptionData)));
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_Nova_Package*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_Nova_Package_Nova_validateLocation(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char spectra_tree_nodes_Nova_Package_Nova_validateAlias(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

nova_Nova_String* spectra_tree_nodes_Nova_Package_Nova_writeNova(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_Package_Nova_location) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("package \"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_Package_Nova_location), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Package_Accessor_Nova_files(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)(spectra_tree_nodes_Nova_Package_Nova_filesMap), exceptionData, (nova_Nova_Object*)(this->spectra_tree_nodes_Nova_Package_Nova_location));
}


void spectra_tree_nodes_Nova_Package_Nova_super(spectra_tree_nodes_Nova_Package* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Package_Nova_location = (nova_Nova_String*)nova_null;
}

