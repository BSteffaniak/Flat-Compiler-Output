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
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/node/closures/compiler_tree_node_closures_Nova_ClosureContext.h>
#include <compiler/tree/node/closures/compiler_tree_node_closures_Nova_ClosureDeclaration.h>
#include <nova/io/nova_io_Nova_File.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Import.h>
#include <compiler/tree/node/compiler_tree_node_Nova_ImportList.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Node.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Package.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotatable.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotation.h>
#include <compiler/tree/node/exceptionhandling/compiler_tree_node_exceptionhandling_Nova_Try.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_NovaFunction.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaClass.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaFile.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Program.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Scope.h>
#include <compiler/tree/node/compiler_tree_node_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_node_NovaFile_Extension_VTable compiler_tree_node_NovaFile_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		(void(*)(compiler_tree_node_annotation_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_node_annotation_Nova_Annotation*))compiler_tree_node_Nova_Node_Nova_addAnnotation,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_node_Nova_Node_Nova_addAnnotation,
	compiler_tree_node_Nova_Node_Nova_clone,
	compiler_tree_node_Nova_Node_Accessor_Nova_program,
	compiler_tree_node_Nova_NovaFile_Accessor_Nova_parentFile,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentClass,
};



void compiler_tree_node_Nova_NovaFile_Nova_addDefaultImports(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated9(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData);

nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_NovaFile_Nova_DEFAULT_IMPORTS;
void compiler_tree_node_Nova_NovaFile_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_node_Nova_NovaFile_Nova_DEFAULT_IMPORTS = generated9(0, exceptionData);
	}
}

compiler_tree_node_Nova_NovaFile* compiler_tree_node_Nova_NovaFile_Nova_construct(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* compiler_tree_node_Nova_NovaFile_Nova_file, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_NovaFile_Nova_parent, compiler_util_Nova_Location* compiler_tree_node_Nova_NovaFile_Nova_location)
{
	CCLASS_NEW(compiler_tree_node_Nova_NovaFile, this,);
	this->vtable = &compiler_tree_node_NovaFile_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_node_Nova_Node_Nova_super((compiler_tree_node_Nova_Node*)this, exceptionData);
	compiler_tree_node_Nova_NovaFile_Nova_super(this, exceptionData);
	
	{
		compiler_tree_node_Nova_NovaFile_Nova_this(this, exceptionData, compiler_tree_node_Nova_NovaFile_Nova_file, compiler_tree_node_Nova_NovaFile_Nova_parent, compiler_tree_node_Nova_NovaFile_Nova_location);
	}
	
	return this;
}

void compiler_tree_node_Nova_NovaFile_Nova_destroy(compiler_tree_node_Nova_NovaFile** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_node_Nova_NovaFile_Nova_name, exceptionData);
	nova_io_Nova_File_Nova_destroy(&(*this)->compiler_tree_node_Nova_NovaFile_Nova_file, exceptionData);
	compiler_tree_node_Nova_Package_Nova_destroy(&(*this)->compiler_tree_node_Nova_NovaFile_Nova_packageDeclaration, exceptionData);
	compiler_tree_node_Nova_ImportList_Nova_destroy(&(*this)->compiler_tree_node_Nova_NovaFile_Nova_imports, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_node_Nova_NovaFile_Nova_closures, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_node_Nova_NovaFile_Nova_contexts, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_node_Nova_NovaFile_Nova_this(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* compiler_tree_node_Nova_NovaFile_Nova_file, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_NovaFile_Nova_parent, compiler_util_Nova_Location* compiler_tree_node_Nova_NovaFile_Nova_location)
{
	compiler_tree_node_Nova_NovaFile_Nova_parent = (compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_NovaFile_Nova_parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)compiler_tree_node_Nova_NovaFile_Nova_parent);
	compiler_tree_node_Nova_NovaFile_Nova_location = (compiler_util_Nova_Location*)(compiler_tree_node_Nova_NovaFile_Nova_location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)compiler_tree_node_Nova_NovaFile_Nova_location);
	compiler_tree_node_Nova_Node_Nova_this((compiler_tree_node_Nova_Node*)(this), exceptionData, compiler_tree_node_Nova_NovaFile_Nova_parent, compiler_tree_node_Nova_NovaFile_Nova_location);
	this->compiler_tree_node_Nova_NovaFile_Nova_file = compiler_tree_node_Nova_NovaFile_Nova_file;
	this->compiler_tree_node_Nova_NovaFile_Nova_packageDeclaration = compiler_tree_node_Nova_Package_static_Nova_generateDefaultPackage(0, exceptionData, (compiler_tree_node_Nova_Node*)(this), 0);
	this->compiler_tree_node_Nova_NovaFile_Nova_imports = compiler_tree_node_Nova_ImportList_Nova_construct(0, exceptionData, (compiler_tree_node_Nova_Node*)(this), compiler_tree_node_Nova_NovaFile_Nova_location);
	compiler_tree_node_Nova_NovaFile_Nova_addDefaultImports(this, exceptionData);
}

void compiler_tree_node_Nova_NovaFile_Nova_addDefaultImports(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_String* l1_Nova_i = (nova_Nova_String*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((compiler_tree_node_Nova_NovaFile_Nova_DEFAULT_IMPORTS)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		l1_Nova_i = (nova_Nova_String*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i->nova_Nova_String_Nova_count > 0)
		{
			compiler_tree_node_Nova_NovaFile_Nova_addImport(this, exceptionData, l1_Nova_i)->compiler_tree_node_Nova_Import_Nova_used = 1;
		}
	}
}

compiler_tree_node_Nova_Import* compiler_tree_node_Nova_NovaFile_Nova_addImport(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* compiler_tree_node_Nova_NovaFile_Nova_location)
{
	if (compiler_tree_node_Nova_NovaFile_Nova_containsImport(this, exceptionData, compiler_tree_node_Nova_NovaFile_Nova_location, (intptr_t)nova_null, (intptr_t)nova_null))
	{
		return (compiler_tree_node_Nova_Import*)(nova_Nova_Object*)nova_null;
	}
	return (compiler_tree_node_Nova_Import*)compiler_tree_node_Nova_Node_Nova_addChild((compiler_tree_node_Nova_Node*)(this), exceptionData, (compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Import_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("import \""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_util_Nova_Location_Nova_toString((this->compiler_tree_node_Nova_Node_Nova_location), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"")))), (compiler_tree_node_Nova_Node*)(this), this->compiler_tree_node_Nova_Node_Nova_location)), (intptr_t)nova_null, 0, (intptr_t)nova_null);
}

char compiler_tree_node_Nova_NovaFile_Nova_containsImport(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* compiler_tree_node_Nova_NovaFile_Nova_location, int compiler_tree_node_Nova_NovaFile_Nova_absoluteLocation, int compiler_tree_node_Nova_NovaFile_Nova_aliased)
{
	compiler_tree_node_Nova_NovaFile_Nova_absoluteLocation = (int)(compiler_tree_node_Nova_NovaFile_Nova_absoluteLocation == (intptr_t)nova_null ? 1 : compiler_tree_node_Nova_NovaFile_Nova_absoluteLocation);
	compiler_tree_node_Nova_NovaFile_Nova_aliased = (int)(compiler_tree_node_Nova_NovaFile_Nova_aliased == (intptr_t)nova_null ? 0 : compiler_tree_node_Nova_NovaFile_Nova_aliased);
	return 0;
}

nova_datastruct_list_Nova_Array* generated9(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 27);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/ExceptionData"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/Exception"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/exception/DivideByZeroException"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/io/Console"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Number"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Byte"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Short"));
	l1_Nova_temp[7] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Int"));
	l1_Nova_temp[8] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Long"));
	l1_Nova_temp[9] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Float"));
	l1_Nova_temp[10] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Double"));
	l1_Nova_temp[11] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Null"));
	l1_Nova_temp[12] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/number/Char"));
	l1_Nova_temp[13] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/primitive/Bool"));
	l1_Nova_temp[14] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/Array"));
	l1_Nova_temp[15] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntArray"));
	l1_Nova_temp[16] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/CharArray"));
	l1_Nova_temp[17] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/DoubleArray"));
	l1_Nova_temp[18] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/datastruct/list/IntRange"));
	l1_Nova_temp[19] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/Thread"));
	l1_Nova_temp[20] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/thread/async/Async"));
	l1_Nova_temp[21] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/gc/GC"));
	l1_Nova_temp[22] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/math/Math"));
	l1_Nova_temp[23] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Object"));
	l1_Nova_temp[24] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/String"));
	l1_Nova_temp[25] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/System"));
	l1_Nova_temp[26] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova/Class"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 27);
}

compiler_tree_node_Nova_NovaFile* compiler_tree_node_Nova_NovaFile_Accessor_Nova_parentFile(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


void compiler_tree_node_Nova_NovaFile_Nova_super(compiler_tree_node_Nova_NovaFile* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_node_Nova_NovaFile_Nova_name = (nova_Nova_String*)nova_null;
	this->compiler_tree_node_Nova_NovaFile_Nova_file = (nova_io_Nova_File*)nova_null;
	this->compiler_tree_node_Nova_NovaFile_Nova_packageDeclaration = (compiler_tree_node_Nova_Package*)nova_null;
	this->compiler_tree_node_Nova_NovaFile_Nova_imports = (compiler_tree_node_Nova_ImportList*)nova_null;
	this->compiler_tree_node_Nova_NovaFile_Nova_closures = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_node_Nova_NovaFile_Nova_contexts = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_node_Nova_NovaFile_Nova_closures = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_tree_node_Nova_NovaFile_Nova_contexts = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

