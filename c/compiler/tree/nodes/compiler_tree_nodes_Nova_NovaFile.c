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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureContext.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ImportList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Package.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String name */ nova_Nova_String** compiler_tree_nodes_Nova_NovaFile_Nova_name;
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


compiler_tree_nodes_NovaFile_Extension_VTable compiler_tree_nodes_NovaFile_Extension_VTable_val =
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
	compiler_tree_nodes_Nova_NovaFile_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_NovaFile_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_NovaFile_Nova_parseStatement,
	compiler_tree_nodes_Nova_NovaFile_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Node_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren,
	compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator,
	compiler_tree_nodes_Nova_NovaFile_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Nova_writeNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation,
	compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer,
};



void compiler_tree_nodes_Nova_NovaFile_Nova_addClass(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* child);
void compiler_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated11(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_NovaFile_Nova_lambda32(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context1* context);
char compiler_tree_nodes_Nova_NovaFile_Nova_lambda33(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void compiler_tree_nodes_Nova_NovaFile_Nova_lambda34(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
char compiler_tree_nodes_Nova_NovaFile_Nova_lambda35(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_lambda36(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_lambda37(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
char compiler_tree_nodes_Nova_NovaFile_Nova_lambda38(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, Context7* context);



nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS;
void compiler_tree_nodes_Nova_NovaFile_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS = generated11(0, exceptionData);
	}
}

compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_NovaFile_Nova_construct(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_NovaFile, this,);
	this->vtable = &compiler_tree_nodes_NovaFile_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_NovaFile_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_NovaFile_Nova_this(this, exceptionData, file, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_NovaFile_Nova_destroy(compiler_tree_nodes_Nova_NovaFile** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_name, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_source, exceptionData);
	nova_io_Nova_File_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_file, exceptionData);
	compiler_tree_nodes_Nova_ImportList_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_importList, exceptionData);
	compiler_tree_nodes_Nova_Package_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_closures, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_contexts, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_NovaFile_Nova_classes, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_NovaFile_Nova_this(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	nova_io_Nova_FileReader* l1_Nova_reader = (nova_io_Nova_FileReader*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_Nova_Node_Nova_this((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->compiler_tree_nodes_Nova_NovaFile_Nova_file = file;
	l1_Nova_reader = nova_io_Nova_FileReader_0_Nova_construct(0, exceptionData, file);
	this->compiler_tree_nodes_Nova_NovaFile_Nova_source = nova_io_Nova_FileReader_Nova_readAllContents(l1_Nova_reader, exceptionData);
	nova_io_Nova_FileReader_Nova_close(l1_Nova_reader, exceptionData);
	this->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration = compiler_tree_nodes_Nova_Package_static_Nova_generateDefaultPackage(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), 0);
	this->compiler_tree_nodes_Nova_NovaFile_Nova_importList = compiler_tree_nodes_Nova_ImportList_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), location);
	this->compiler_tree_nodes_Nova_NovaFile_Nova_classes = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	compiler_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(this, exceptionData);
}

void compiler_tree_nodes_Nova_NovaFile_Nova_addChild(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
	if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_ClassDeclaration_Extension_VTable_val.classInstance)))
	{
		compiler_tree_nodes_Nova_NovaFile_Nova_addClass(this, exceptionData, (compiler_tree_nodes_Nova_ClassDeclaration*)child);
	}
	else if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Import_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_Nova_Object*)((compiler_tree_nodes_Nova_Import*)child));
	}
	else if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Package_Extension_VTable_val.classInstance)))
	{
		this->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration = (compiler_tree_nodes_Nova_Package*)child;
	}
	else
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Statement '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' used in wrong context")))), child, (intptr_t)nova_null);
	}
}

void compiler_tree_nodes_Nova_NovaFile_Nova_addClass(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* child)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_Nova_Object*)(child));
	if (this->compiler_tree_nodes_Nova_NovaFile_Nova_name == (nova_Nova_String*)nova_null)
	{
		this->compiler_tree_nodes_Nova_NovaFile_Nova_name = (nova_Nova_String*)((nova_Nova_String*)(((compiler_tree_nodes_Nova_ClassDeclaration*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, 0))->compiler_tree_nodes_Nova_Identifier_Nova_name));
	}
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NovaFile_Nova_parseStatement(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_Nova_Object* l1_Nova_node = (nova_Nova_Object*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (nova_Nova_Object*)nova_null;
	if (!(l1_Nova_node != (nova_Nova_Object*)nova_null))
	{
		l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_ClassDeclaration_static_Nova_parse(0, exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), location, require));
		if (!(l1_Nova_node != (nova_Nova_Object*)nova_null))
		{
			l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_Import_static_Nova_parse(0, exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), location, require));
			if (!(l1_Nova_node != (nova_Nova_Object*)nova_null))
			{
				l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_Package_static_Nova_parse(0, exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), location, require));
			}
		}
	}
	return (compiler_tree_nodes_Nova_Node*)l1_Nova_node;
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_NovaFile_Nova_generateTemporaryScopeNode(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_nodes_Nova_Node*)compiler_tree_nodes_Nova_ClassDeclaration_Nova_construct(0, exceptionData, (compiler_tree_nodes_Nova_Node*)(this), 0);
}

compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_NovaFile_Nova_getImportedClass(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int includeSelf)
{
	Context1 contextArg32 = 
	{
		&name,
	};
	compiler_tree_nodes_Nova_Import* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Import*)nova_null;
	
	includeSelf = (int)(includeSelf == (intptr_t)nova_null ? 1 : includeSelf);
	return (compiler_tree_nodes_Nova_ClassDeclaration*)(compiler_tree_nodes_Nova_ClassDeclaration*)(includeSelf && nova_Nova_String_Nova_equals(name, exceptionData, this->compiler_tree_nodes_Nova_NovaFile_Nova_name) ? compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(this, exceptionData) : (compiler_tree_nodes_Nova_ClassDeclaration*)((l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Import*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure24_Nova_func)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda32, this, &contextArg32))) != (compiler_tree_nodes_Nova_Import*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(l1_Nova_nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null));
}

void compiler_tree_nodes_Nova_NovaFile_Nova_addDefaultImports(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_String* l1_Nova_i = (nova_Nova_String*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((compiler_tree_nodes_Nova_NovaFile_Nova_DEFAULT_IMPORTS)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		l1_Nova_i = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i->nova_Nova_String_Nova_count > 0)
		{
			compiler_tree_nodes_Nova_NovaFile_Nova_addImport(this, exceptionData, l1_Nova_i)->compiler_tree_nodes_Nova_Import_Nova_used = 1;
		}
	}
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Nova_addAutoImports(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg33 = 
	{
	};
	Context3 contextArg34 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Package_Accessor_Nova_files(this->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda33, this, &contextArg33)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda34, this, &contextArg34);
}

compiler_tree_nodes_Nova_Import* compiler_tree_nodes_Nova_NovaFile_Nova_addImport(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	compiler_tree_nodes_Nova_Import* l1_Nova_node = (compiler_tree_nodes_Nova_Import*)nova_null;
	
	if (compiler_tree_nodes_Nova_NovaFile_Nova_containsImport(this, exceptionData, location, (intptr_t)nova_null, (intptr_t)nova_null))
	{
		return (compiler_tree_nodes_Nova_Import*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_node = compiler_tree_nodes_Nova_Import_static_Nova_parse(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("import \""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((location)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))), (compiler_tree_nodes_Nova_Node*)(this), this->compiler_tree_nodes_Nova_Node_Nova_location, (intptr_t)nova_null);
	if (l1_Nova_node != (compiler_tree_nodes_Nova_Import*)nova_null)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_Nova_Object*)(l1_Nova_node));
	}
	else
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid import location '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((location)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(this), (intptr_t)nova_null);
	}
	return l1_Nova_node;
}

char compiler_tree_nodes_Nova_NovaFile_Nova_containsImport(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, int absoluteLocation, int aliased)
{
	absoluteLocation = (int)(absoluteLocation == (intptr_t)nova_null ? 1 : absoluteLocation);
	aliased = (int)(aliased == (intptr_t)nova_null ? 0 : aliased);
	return 0;
}

nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_toNova(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4 contextArg35 = 
	{
	};
	Context5 contextArg36 = 
	{
	};
	Context6 contextArg37 = 
	{
	};
	
	return nova_Nova_String_Nova_trim((nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(this->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(this, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda35, this, &contextArg35)), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda36, this, &contextArg36)), exceptionData, 0)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda37, this, &contextArg37)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
}

nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_toString(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_NovaFile_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova")));
}

nova_datastruct_list_Nova_Array* generated11(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
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
	l1_Nova_temp[25] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Class"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 26);
}

char compiler_tree_nodes_Nova_NovaFile_Nova_lambda32(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(compiler_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, (*context->compiler_tree_nodes_Nova_NovaFile_Nova_name));
}

char compiler_tree_nodes_Nova_NovaFile_Nova_lambda33(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return _1 != this;
}

void compiler_tree_nodes_Nova_NovaFile_Nova_lambda34(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	compiler_tree_nodes_Nova_NovaFile_Nova_addImport(this, exceptionData, compiler_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(_1, exceptionData), exceptionData));
}

char compiler_tree_nodes_Nova_NovaFile_Nova_lambda35(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	return !compiler_tree_nodes_Nova_Import_Accessor_Nova_isDefault(_1, exceptionData);
}

nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_lambda36(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

nova_Nova_String* compiler_tree_nodes_Nova_NovaFile_Nova_lambda37(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_toNova(_1, exceptionData);
}

char compiler_tree_nodes_Nova_NovaFile_Nova_lambda38(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_ClassDeclaration* _1, Context7* context)
{
	return nova_Nova_String_Nova_equals(_1->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData, this->compiler_tree_nodes_Nova_NovaFile_Nova_name);
}

compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_parentFile(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_ImportList_Accessor_Nova_imports(this->compiler_tree_nodes_Nova_NovaFile_Nova_importList, exceptionData);
}


compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_classDeclaration(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context7 contextArg38 = 
	{
	};
	
	return (compiler_tree_nodes_Nova_ClassDeclaration*)nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure24_Nova_func)&compiler_tree_nodes_Nova_NovaFile_Nova_lambda38, this, &contextArg38);
}


void compiler_tree_nodes_Nova_NovaFile_Nova_super(compiler_tree_nodes_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_NovaFile_Nova_name = (nova_Nova_String*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_source = (nova_Nova_String*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_file = (nova_io_Nova_File*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_importList = (compiler_tree_nodes_Nova_ImportList*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration = (compiler_tree_nodes_Nova_Package*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_closures = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_contexts = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_classes = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_NovaFile_Nova_closures = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_tree_nodes_Nova_NovaFile_Nova_contexts = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

