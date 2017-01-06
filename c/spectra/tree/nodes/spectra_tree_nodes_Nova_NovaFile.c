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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureContext.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ImportList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_InterfaceDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Package.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_TraitDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
	/* String name */ nova_Nova_String** spectra_tree_nodes_Nova_NovaFile_Nova_name;
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



void spectra_tree_nodes_Nova_NovaFile_Nova_addClass(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* child);
void spectra_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_NovaFile_Nova_lambda49(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context1* context);
char spectra_tree_nodes_Nova_NovaFile_Nova_lambda50(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_lambda51(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_lambda52(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
char spectra_tree_nodes_Nova_NovaFile_Nova_lambda53(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, Context5* context);
nova_datastruct_list_Nova_Array* generated17(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_Nova_NovaFile_Nova_lambda123(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);




nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS;
void spectra_tree_nodes_Nova_NovaFile_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS = generated17(0, exceptionData);
	}
}

spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFile_Nova_construct(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NovaFile, this,);
	this->vtable = &spectra_tree_nodes_NovaFile_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_NovaFile_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NovaFile_Nova_this(this, exceptionData, file, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NovaFile_Nova_destroy(spectra_tree_nodes_Nova_NovaFile** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_name, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_source, exceptionData);
	nova_io_Nova_File_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_file, exceptionData);
	spectra_tree_nodes_Nova_ImportList_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_importList, exceptionData);
	spectra_tree_nodes_Nova_Package_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_closures, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_contexts, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NovaFile_Nova_classes, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NovaFile_Nova_this(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	nova_io_Nova_FileReader* l1_Nova_reader = (nova_io_Nova_FileReader*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_file = file;
	l1_Nova_reader = nova_io_Nova_FileReader_0_Nova_construct(0, exceptionData, file);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_source = nova_io_Nova_FileReader_Nova_readAllContents(l1_Nova_reader, exceptionData);
	nova_io_Nova_FileReader_Nova_close(l1_Nova_reader, exceptionData);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_name = nova_io_Nova_File_Accessorfunc_Nova_rootName(file, exceptionData);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration = spectra_tree_nodes_Nova_Package_static_Nova_generateDefaultPackage(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_importList = spectra_tree_nodes_Nova_ImportList_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), location);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_classes = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	spectra_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(this, exceptionData);
}

void spectra_tree_nodes_Nova_NovaFile_Nova_addChild(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	if (nova_meta_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance)))
	{
		spectra_tree_nodes_Nova_NovaFile_Nova_addClass(this, exceptionData, (spectra_tree_nodes_Nova_ClassDeclaration*)child);
	}
	else if (nova_meta_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_Import_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_Nova_Import*)child));
	}
	else if (nova_meta_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_Package_Extension_VTable_val.classInstance)))
	{
		this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration = (spectra_tree_nodes_Nova_Package*)child;
	}
	else
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Statement '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' used in wrong context")))))), child, (intptr_t)nova_null);
	}
}

void spectra_tree_nodes_Nova_NovaFile_Nova_addClass(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* child)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_Nova_Object*)(child));
	if (spectra_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_isPublic(child, exceptionData) && !nova_Nova_String_Nova_equals(child->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, this->spectra_tree_nodes_Nova_NovaFile_Nova_name))
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Class '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((child->spectra_tree_nodes_Nova_Identifier_Nova_name), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' must have the same name as file '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_NovaFile_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))))))), (spectra_tree_nodes_Nova_Node*)(child), (intptr_t)nova_null);
	}
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFile_Nova_parseStatement(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	nova_Nova_Object* l1_Nova_node = (nova_Nova_Object*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (nova_Nova_Object*)nova_null;
	if (((l1_Nova_node)) == (nova_Nova_Object*)nova_null)
	{
		l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_ClassDeclaration_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
		if (((l1_Nova_node)) == (nova_Nova_Object*)nova_null)
		{
			l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_TraitDeclaration_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
			if (((l1_Nova_node)) == (nova_Nova_Object*)nova_null)
			{
				l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_InterfaceDeclaration_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
				if (((l1_Nova_node)) == (nova_Nova_Object*)nova_null)
				{
					l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Import_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
					if (((l1_Nova_node)) == (nova_Nova_Object*)nova_null)
					{
						l1_Nova_node = (nova_Nova_Object*)(spectra_tree_nodes_Nova_Package_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), location, require));
					}
				}
			}
		}
	}
	return (spectra_tree_nodes_Nova_Node*)l1_Nova_node;
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFile_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Node*)spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int includeSelf)
{
	Context1* contextArg49 = NOVA_MALLOC(sizeof(Context1));
	contextArg49->spectra_tree_nodes_Nova_NovaFile_Nova_name = &name;
	spectra_tree_nodes_Nova_Import* nova_local_0 = (spectra_tree_nodes_Nova_Import*)nova_null;
	
	includeSelf = (int)(includeSelf == (intptr_t)nova_null ? 1 : includeSelf);
	return (spectra_tree_nodes_Nova_ClassDeclaration*)(spectra_tree_nodes_Nova_ClassDeclaration*)(includeSelf && nova_Nova_String_Nova_equals(name, exceptionData, this->spectra_tree_nodes_Nova_NovaFile_Nova_name) ? spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(this, exceptionData) : (spectra_tree_nodes_Nova_ClassDeclaration*)((nova_local_0 = (spectra_tree_nodes_Nova_Import*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_NovaFile_Nova_lambda49, this, contextArg49))) != (spectra_tree_nodes_Nova_Import*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null));
}

void spectra_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_String* l2_Nova_import = (nova_Nova_String*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((spectra_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_import = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		spectra_tree_nodes_Nova_NovaFile_Nova_addImport(this, exceptionData, l2_Nova_import, 0)->spectra_tree_nodes_Nova_Import_Nova_used = 1;
	}
}

void spectra_tree_nodes_Nova_NovaFile_Nova_addAutoImports(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context6* contextArg123 = NOVA_MALLOC(sizeof(Context6));
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	spectra_tree_nodes_Nova_NovaFile* l2_Nova_file = (spectra_tree_nodes_Nova_NovaFile*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Package_Accessor_Nova_files(this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_Nova_NovaFile_Nova_lambda123, this, contextArg123))), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_Iterator* nova_local_1 = (nova_datastruct_list_Nova_Iterator*)nova_null;
		spectra_tree_nodes_Nova_ClassDeclaration* l3_Nova_class = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
		
		l2_Nova_file = (spectra_tree_nodes_Nova_NovaFile*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((nova_datastruct_list_Nova_List_Nova_filterNull((nova_datastruct_list_Nova_List*)(l2_Nova_file->spectra_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData))), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_class = (spectra_tree_nodes_Nova_ClassDeclaration*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			spectra_tree_nodes_Nova_NovaFile_Nova_addImport(this, exceptionData, spectra_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(l3_Nova_class, exceptionData), 0);
		}
	}
}

spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_NovaFile_Nova_addImport(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, int userAdded)
{
	spectra_tree_nodes_Nova_Import* l1_Nova_node = (spectra_tree_nodes_Nova_Import*)nova_null;
	
	userAdded = (int)(userAdded == (intptr_t)nova_null ? 1 : userAdded);
	if (spectra_tree_nodes_Nova_NovaFile_Nova_containsImport(this, exceptionData, location, (intptr_t)nova_null, (intptr_t)nova_null))
	{
		return (spectra_tree_nodes_Nova_Import*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_node = spectra_tree_nodes_Nova_Import_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("import \"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((location), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))))), (spectra_tree_nodes_Nova_Node*)(this), this->spectra_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null);
	if ((l1_Nova_node) != (spectra_tree_nodes_Nova_Import*)nova_null)
	{
		l1_Nova_node->spectra_tree_nodes_Nova_Import_Nova_userAdded = userAdded;
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_node));
	}
	else
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid import location '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((location), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this), (intptr_t)nova_null);
	}
	return l1_Nova_node;
}

char spectra_tree_nodes_Nova_NovaFile_Nova_containsImport(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, int absoluteLocation, int aliased)
{
	absoluteLocation = (int)(absoluteLocation == (intptr_t)nova_null ? 1 : absoluteLocation);
	aliased = (int)(aliased == (intptr_t)nova_null ? 0 : aliased);
	return 0;
}

nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_toNova(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2* contextArg50 = NOVA_MALLOC(sizeof(Context2));
	Context3* contextArg51 = NOVA_MALLOC(sizeof(Context3));
	Context4* contextArg52 = NOVA_MALLOC(sizeof(Context4));
	
	return nova_Nova_String_Nova_trim((nova_Nova_String*)((nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_tree_nodes_Nova_NovaFile_Nova_lambda50, this, contextArg50)), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_NovaFile_Nova_lambda51, this, contextArg51)), exceptionData, 0), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_tree_nodes_Nova_NovaFile_Nova_lambda52, this, contextArg52)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")))))))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_toString(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((this->spectra_tree_nodes_Nova_NovaFile_Nova_name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova")));
}

char spectra_tree_nodes_Nova_NovaFile_Nova_lambda49(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(spectra_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, (*context->spectra_tree_nodes_Nova_NovaFile_Nova_name));
}

char spectra_tree_nodes_Nova_NovaFile_Nova_lambda50(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return _1->spectra_tree_nodes_Nova_Import_Nova_userAdded;
}

nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_lambda51(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Nova_lambda52(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	return spectra_tree_nodes_Nova_ClassDeclaration_Nova_toNova(_1, exceptionData);
}

char spectra_tree_nodes_Nova_NovaFile_Nova_lambda53(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, Context5* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, this->spectra_tree_nodes_Nova_NovaFile_Nova_name);
}

nova_datastruct_list_Nova_Array* generated17(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 26);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/ExceptionData"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Exception"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/DivideByZeroException"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Number"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Byte"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Short"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Int"));
	l1_Nova_temp[7] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Long"));
	l1_Nova_temp[8] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Float"));
	l1_Nova_temp[9] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Double"));
	l1_Nova_temp[10] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Null"));
	l1_Nova_temp[11] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Char"));
	l1_Nova_temp[12] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Bool"));
	l1_Nova_temp[13] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Array"));
	l1_Nova_temp[14] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntArray"));
	l1_Nova_temp[15] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CharArray"));
	l1_Nova_temp[16] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/DoubleArray"));
	l1_Nova_temp[17] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntRange"));
	l1_Nova_temp[18] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/Thread"));
	l1_Nova_temp[19] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/async/Async"));
	l1_Nova_temp[20] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/gc/GC"));
	l1_Nova_temp[21] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Math"));
	l1_Nova_temp[22] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Object"));
	l1_Nova_temp[23] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/String"));
	l1_Nova_temp[24] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/System"));
	l1_Nova_temp[25] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/meta/Class"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 26);
}

char spectra_tree_nodes_Nova_NovaFile_Nova_lambda123(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	return _1 != this;
}

spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_parentFile(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_ImportList_Accessor_Nova_imports(this->spectra_tree_nodes_Nova_NovaFile_Nova_importList, exceptionData);
}


nova_Nova_String* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_fileLocation(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->spectra_tree_nodes_Nova_Package_Nova_location) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus(this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->spectra_tree_nodes_Nova_Package_Nova_location, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(this->spectra_tree_nodes_Nova_NovaFile_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova"))))))) : nova_Nova_String_Nova_plus(this->spectra_tree_nodes_Nova_NovaFile_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova"))));
}


spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context5* contextArg53 = NOVA_MALLOC(sizeof(Context5));
	
	return (spectra_tree_nodes_Nova_ClassDeclaration*)nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure32_Nova_func)&spectra_tree_nodes_Nova_NovaFile_Nova_lambda53, this, contextArg53);
}


void spectra_tree_nodes_Nova_NovaFile_Nova_super(spectra_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_NovaFile_Nova_name = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_source = (nova_Nova_String*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_file = (nova_io_Nova_File*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_importList = (spectra_tree_nodes_Nova_ImportList*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_packageDeclaration = (spectra_tree_nodes_Nova_Package*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_closures = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_contexts = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_classes = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_NovaFile_Nova_closures = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->spectra_tree_nodes_Nova_NovaFile_Nova_contexts = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NovaFileFunctionMap* spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NovaFileFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_NovaFile_NovaFileFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NovaFileFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_this(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMapNovaFileFunctionMap_static_Nova_construct(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	return spectra_tree_nodes_Nova_NovaFile_Nova_construct(0, exceptionData, file, parent, location);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, spectra_tree_nodes_Nova_Node* child)
{
	spectra_tree_nodes_Nova_NovaFile_Nova_addChild(reference, exceptionData, child);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addClass(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, spectra_tree_nodes_Nova_ClassDeclaration* child)
{
	spectra_tree_nodes_Nova_NovaFile_Nova_addClass(reference, exceptionData, child);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return spectra_tree_nodes_Nova_NovaFile_Nova_parseStatement(reference, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference)
{
	return spectra_tree_nodes_Nova_NovaFile_Nova_generateTemporaryScopeNode(reference, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_getImportedClass(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* name, int includeSelf)
{
	includeSelf = (int)(includeSelf == (intptr_t)nova_null ? 1 : includeSelf);
	return (spectra_tree_nodes_Nova_ClassDeclaration*)spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass(reference, exceptionData, name, includeSelf);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addDefaultImports(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference)
{
	spectra_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addAutoImports(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference)
{
	spectra_tree_nodes_Nova_NovaFile_Nova_addAutoImports(reference, exceptionData);
}

spectra_tree_nodes_Nova_Import* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_addImport(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* location, int userAdded)
{
	userAdded = (int)(userAdded == (intptr_t)nova_null ? 1 : userAdded);
	return spectra_tree_nodes_Nova_NovaFile_Nova_addImport(reference, exceptionData, location, userAdded);
}

char spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_containsImport(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference, nova_Nova_String* location, int absoluteLocation, int aliased)
{
	absoluteLocation = (int)(absoluteLocation == (intptr_t)nova_null ? 1 : absoluteLocation);
	aliased = (int)(aliased == (intptr_t)nova_null ? 0 : aliased);
	return spectra_tree_nodes_Nova_NovaFile_Nova_containsImport(reference, exceptionData, location, absoluteLocation, aliased);
}

nova_Nova_String* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_toNova(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference)
{
	return spectra_tree_nodes_Nova_NovaFile_Nova_toNova(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_NovaFileFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* reference)
{
	return nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(reference), exceptionData);
}

void spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_super(spectra_tree_nodes_Nova_NovaFileFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

