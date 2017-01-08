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
#include <nova/time/nova_time_Nova_Timer.h>
#include <spectra/util/spectra_util_Nova_FileUtils.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/spectra_tree_Nova_SyntaxTree.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
	/* let
	Program program */ spectra_tree_nodes_Nova_Program** spectra_Nova_Spectra_Nova_program;
} Context4;
typedef struct
{
	/* let
	String separator */ nova_Nova_String** spectra_Nova_Spectra_Nova_separator;
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


CCLASS_PRIVATE
(
	spectra_Nova_Spectra,
	nova_datastruct_list_Nova_Array* spectra_Nova_Spectra_Nova_files;
	
)

void spectra_Nova_Spectra_func_Nova_testClasses(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_Nova_Spectra_Nova_lambda103(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
char spectra_Nova_Spectra_Nova_lambda104(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
spectra_tree_nodes_Nova_NovaFile* spectra_Nova_Spectra_Nova_lambda105(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void spectra_Nova_Spectra_Nova_lambda106(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
nova_Nova_String* spectra_Nova_Spectra_Nova_lambda107(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
void spectra_Nova_Spectra_Nova_lambda108(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
void spectra_Nova_Spectra_Nova_lambda109(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
void spectra_Nova_Spectra_Nova_lambda110(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
char spectra_Nova_Spectra_Nova_DEBUG;
char spectra_Nova_Spectra_Nova_testClasses;
void spectra_Nova_Spectra_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_Nova_Spectra_Nova_DEBUG = 1;
		spectra_Nova_Spectra_Nova_testClasses = 1;
	}
}

spectra_Nova_Spectra* spectra_Nova_Spectra_Nova_construct(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_Spectra, this);
	this->vtable = &spectra_Spectra_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_Nova_Spectra_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_Spectra_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_Spectra_Nova_destroy(spectra_Nova_Spectra** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->spectra_Nova_Spectra_Nova_files, exceptionData);
	NOVA_FREE((*this)->prv);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_Nova_Spectra_Nova_errors, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_Nova_Spectra_Nova_warnings, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_Nova_Spectra_Nova_info, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_Nova_Spectra_static_Nova_main(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	spectra_Nova_Spectra* l1_Nova_c = (spectra_Nova_Spectra*)nova_null;
	
	l1_Nova_c = spectra_Nova_Spectra_Nova_construct(0, exceptionData);
	spectra_Nova_Spectra_Nova_compile(l1_Nova_c, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(args), exceptionData, 1)));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void spectra_Nova_Spectra_Nova_this(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_Spectra_Nova_compile(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_Nova_String* l1_Nova_directory = (nova_Nova_String*)nova_null;
	
	l1_Nova_directory = (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(0, exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))));
	if (spectra_Nova_Spectra_Nova_DEBUG)
	{
		nova_Nova_String* l2_Nova_target = (nova_Nova_String*)nova_null;
		nova_Nova_String* l2_Nova_myString = (nova_Nova_String*)nova_null;
		nova_datastruct_list_Nova_ImmutableArray* l2_Nova_annotationTypes = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
		Context1* contextArg103 = NOVA_MALLOC(sizeof(Context1));
		spectra_tree_nodes_Nova_Program* l2_Nova_program = (spectra_tree_nodes_Nova_Program*)nova_null;
		nova_io_Nova_File* l2_Nova_parentDir = (nova_io_Nova_File*)nova_null;
		nova_time_Nova_Timer* l2_Nova_parseTimer = (nova_time_Nova_Timer*)nova_null;
		nova_time_Nova_Timer* l2_Nova_outputTimer = (nova_time_Nova_Timer*)nova_null;
		nova_time_Nova_Timer* l2_Nova_compileTimer = (nova_time_Nova_Timer*)nova_null;
		nova_time_Nova_Timer* l2_Nova_fileTimer = (nova_time_Nova_Timer*)nova_null;
		Context2* contextArg104 = NOVA_MALLOC(sizeof(Context2));
		Context3* contextArg105 = NOVA_MALLOC(sizeof(Context3));
		Context6* contextArg108 = NOVA_MALLOC(sizeof(Context6));
		Context7* contextArg109 = NOVA_MALLOC(sizeof(Context7));
		Context8* contextArg110 = NOVA_MALLOC(sizeof(Context8));
		
		spectra_Nova_Spectra_func_Nova_testClasses(this, exceptionData);
		l2_Nova_target = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("c"));
		l2_Nova_myString = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey this is my string"));
		l2_Nova_annotationTypes = (nova_datastruct_list_Nova_ImmutableArray*)(nova_datastruct_list_Nova_ImmutableArray_Nova_filter((nova_datastruct_list_Nova_ImmutableArray*)(nova_meta_Nova_Class_Nova_ALL), exceptionData, (nova_datastruct_list_Nova_ImmutableArray_closure12_Nova_filterFunc)&spectra_Nova_Spectra_Nova_lambda103, this, contextArg103));
		l2_Nova_program = spectra_tree_nodes_Nova_Program_Nova_construct(0, exceptionData, 0);
		l2_Nova_parentDir = nova_io_Nova_File_1_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_datastruct_list_Nova_List_Nova_firstOr((nova_datastruct_list_Nova_List*)(args), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../../../tempstd"))), 0, 0, 0)));
		l2_Nova_parseTimer = nova_time_Nova_Timer_Nova_construct(0, exceptionData);
		l2_Nova_outputTimer = nova_time_Nova_Timer_Nova_construct(0, exceptionData);
		l2_Nova_compileTimer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
		l2_Nova_fileTimer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
		this->prv->spectra_Nova_Spectra_Nova_files = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_io_Nova_File_Nova_getChildFiles(l2_Nova_parentDir, exceptionData, 1, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure20_Nova_filterFunc)&spectra_Nova_Spectra_Nova_lambda104, this, contextArg104)), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_Nova_Spectra_Nova_lambda105, this, contextArg105));
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l2_Nova_fileTimer), exceptionData);
		TRY
		{
			novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, spectra_SyntaxErrorException_Extension_VTable_val.classInstance, 0);
			
			{
				Context4* contextArg106 = NOVA_MALLOC(sizeof(Context4));
				contextArg106->spectra_Nova_Spectra_Nova_program = &l2_Nova_program;
				spectra_tree_Nova_SyntaxTree* l3_Nova_tree = (spectra_tree_Nova_SyntaxTree*)nova_null;
				nova_Nova_String* l3_Nova_separator = (nova_Nova_String*)nova_null;
				Context5* contextArg107 = NOVA_MALLOC(sizeof(Context5));
				contextArg107->spectra_Nova_Spectra_Nova_separator = &l3_Nova_separator;
				
				nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->spectra_Nova_Spectra_Nova_files), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)&spectra_Nova_Spectra_Nova_lambda106, this, contextArg106);
				l3_Nova_tree = spectra_tree_Nova_SyntaxTree_Nova_construct(0, exceptionData, this, l2_Nova_program);
				nova_time_Nova_Timer_Nova_start(l2_Nova_parseTimer, exceptionData);
				spectra_tree_Nova_SyntaxTree_Nova_formTree(l3_Nova_tree, exceptionData);
				spectra_tree_Nova_SyntaxTree_Nova_validateTypes(l3_Nova_tree, exceptionData);
				spectra_tree_Nova_SyntaxTree_Nova_parseStatements(l3_Nova_tree, exceptionData);
				nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l2_Nova_parseTimer), exceptionData);
				nova_time_Nova_Timer_Nova_start(l2_Nova_outputTimer, exceptionData);
				l3_Nova_separator = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("============================="));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(l3_Nova_tree->spectra_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure8_Nova_mapFunc)&spectra_Nova_Spectra_Nova_lambda107, this, contextArg107)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
				nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l2_Nova_outputTimer), exceptionData);
			}
		}
		CATCH (spectra_SyntaxErrorException_Extension_VTable_val.classInstance)
		{
			spectra_Nova_SyntaxErrorException* l4_Nova_e = (spectra_Nova_SyntaxErrorException*)nova_null;
			
			l4_Nova_e = (spectra_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		}
		FINALLY
		{
		}
		END_TRY;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l2_Nova_compileTimer), exceptionData);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_Nova_Spectra_Nova_errors), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)&spectra_Nova_Spectra_Nova_lambda108, this, contextArg108);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_Nova_Spectra_Nova_warnings), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)&spectra_Nova_Spectra_Nova_lambda109, this, contextArg109);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_Nova_Spectra_Nova_info), exceptionData, (nova_datastruct_list_Nova_List_closure4_Nova_func)&spectra_Nova_Spectra_Nova_lambda110, this, contextArg110);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova file read time: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l2_Nova_fileTimer), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova parse time: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l2_Nova_parseTimer), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova result output time: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l2_Nova_outputTimer), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova compile time: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(l2_Nova_compileTimer), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms")))))));
		if (nova_Nova_System_Nova_overheadTimer->nova_time_Nova_CumulativeTimer_Nova_iterations > 0)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Nova overhead timer: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_CumulativeTimer_Accessorfunc_Nova_duration(nova_Nova_System_Nova_overheadTimer, exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("ms over ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_Nova_System_Nova_overheadTimer->nova_time_Nova_CumulativeTimer_Nova_iterations)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" iterations")))))))))));
		}
	}
}

void spectra_Nova_Spectra_func_Nova_testClasses(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_Nova_Spectra_Nova_lambda103(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_meta_Nova_Class_Nova_isOfType(_1, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_annotations_Annotation_Extension_VTable_val.classInstance));
}

char spectra_Nova_Spectra_Nova_lambda104(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return nova_Nova_String_Nova_equals(nova_Nova_String_Nova_toLowerCase(nova_io_Nova_File_Accessorfunc_Nova_extension(_1, exceptionData), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".nova")));
}

spectra_tree_nodes_Nova_NovaFile* spectra_Nova_Spectra_Nova_lambda105(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return spectra_tree_nodes_Nova_NovaFile_Nova_construct(0, exceptionData, _1, 0, 0);
}

void spectra_Nova_Spectra_Nova_lambda106(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	spectra_tree_nodes_Nova_Program_Nova_addChild((*context->spectra_Nova_Spectra_Nova_program), exceptionData, (spectra_tree_nodes_Nova_Node*)(_1));
}

nova_Nova_String* spectra_Nova_Spectra_Nova_lambda107(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(((*context->spectra_Nova_Spectra_Nova_separator)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((file->spectra_tree_nodes_Nova_NovaFile_Nova_name), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((*context->spectra_Nova_Spectra_Nova_separator)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_util_Nova_CompilerStringFunctions_Nova_formatIndentation(spectra_tree_nodes_Nova_NovaFile_Nova_toNova(file, exceptionData), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))))))));
}

void spectra_Nova_Spectra_Nova_lambda108(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void spectra_Nova_Spectra_Nova_lambda109(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Warning: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void spectra_Nova_Spectra_Nova_lambda110(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Info: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void spectra_Nova_Spectra_Nova_super(spectra_Nova_Spectra* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_Nova_Spectra_Nova_errors = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_Nova_Spectra_Nova_warnings = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_Nova_Spectra_Nova_info = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->spectra_Nova_Spectra_Nova_files = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_Nova_Spectra_Nova_errors = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->spectra_Nova_Spectra_Nova_warnings = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->spectra_Nova_Spectra_Nova_info = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}


void spectra_Nova_SpectraFunctionMap_functionMap_Nova_testClasses(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* reference);
void spectra_Nova_SpectraFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_SpectraFunctionMap* spectra_Nova_SpectraFunctionMap_Nova_construct(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_SpectraFunctionMap, this,);
	this->vtable = &spectra_Spectra_SpectraFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_Nova_SpectraFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_SpectraFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_SpectraFunctionMap_Nova_destroy(spectra_Nova_SpectraFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_SpectraFunctionMap_Nova_this(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_Nova_Spectra* spectra_Nova_SpectraFunctionMap_functionMapSpectraFunctionMap_Nova_construct(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_Nova_Spectra_Nova_construct(0, exceptionData);
}

void spectra_Nova_SpectraFunctionMap_functionMap_static_Nova_main(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	spectra_Nova_Spectra_static_Nova_main(0, exceptionData, args);
}

void spectra_Nova_SpectraFunctionMap_functionMap_Nova_compile(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* reference, nova_datastruct_list_Nova_Array* args)
{
	spectra_Nova_Spectra_Nova_compile(reference, exceptionData, args);
}

void spectra_Nova_SpectraFunctionMap_functionMap_Nova_testClasses(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* reference)
{
	spectra_Nova_Spectra_func_Nova_testClasses(reference, exceptionData);
}

void spectra_Nova_SpectraFunctionMap_Nova_super(spectra_Nova_SpectraFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

